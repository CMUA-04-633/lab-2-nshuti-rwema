#ifndef _LCD_DRIVER_H_
#define _LCD_DRIVER_H_

#include <unistd.h>

void lcd_driver_init();
void lcd_print(char *input);
void lcd_set_cursor(uint8_t row, uint8_t col);
void lcd_clear();

#endif /* _LCD_DRIVER_H_ */
