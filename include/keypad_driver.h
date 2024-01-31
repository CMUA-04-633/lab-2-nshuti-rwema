#ifndef _KEYPAD_DRIVER_H_
#define _KEYPAD_DRIVER_H_

#include <unistd.h>

/*
 * keypad_init: Initialize the keypad.
 */
void keypad_init();

/*
 * keypad_read: Return the current character that is being pressed. If
 * no character is pressed, return '\0'
 *
 * For example, if you press 1 and call this function, it should return '1'!
 * Don't worry about handing two or more buttons pressed at once.
 */
char keypad_read();

#endif /* _KEYPAD_DRIVER_H_ */
