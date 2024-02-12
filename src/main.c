#include <gpio.h>
#include <i2c.h>
#include <printk.h>
#include <uart_polling.h>
#include <unistd.h>
#include <lcd_driver.h>
#include <keypad_driver.h>


int main() {

    // Initialize GPIO pins for LEDs
    gpio_init(GPIO_A, 5, MODE_GP_OUTPUT, OUTPUT_PUSH_PULL, OUTPUT_SPEED_LOW, PUPD_NONE, ALT0);
    int i = 0;
    
   
    while(1) {
       // Toggle the state of GPIO pins to blink LEDs

        gpio_set(GPIO_A, 5);
        for (i = 0; i <= 50000; i++) {
            // Delay to hold the LED state
        }

        gpio_clr(GPIO_A, 5);
        for (i = 0; i <= 50000; i++) {
            // Delay to hold the LED state
        }
    }

    return 0;
}

