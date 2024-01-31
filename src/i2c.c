#include <gpio.h>
#include <i2c.h>
#include <unistd.h>
#include <rcc.h>

void i2c_master_init(uint16_t clk){
    (void) clk; /* This line is simply here to suppress the Unused Variable Error. */
                /* You should remove this line in your final implementation */

    return;
}

void i2c_master_start(){
    return;
}

void i2c_master_stop(){
    return;
}

int i2c_master_write(uint8_t *buf, uint16_t len, uint8_t slave_addr){
    (void) buf;
    (void) len;
    (void) slave_addr;

    return 0;
}

int i2c_master_read(uint8_t *buf, uint16_t len, uint8_t slave_addr){
    (void) buf;
    (void) len;
    (void) slave_addr;

    return 0;
}
