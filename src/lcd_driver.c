#include <i2c.h>
#include <lcd_driver.h>
#include <unistd.h>

void lcd_driver_init(){
	return;
}

void lcd_print(char *input){
    (void) input;
    return;
}

void lcd_set_cursor(uint8_t row, uint8_t col){
    (void) row;
    (void) col;
}

void lcd_clear(){
    return;
}
