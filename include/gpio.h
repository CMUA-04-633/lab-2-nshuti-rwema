#ifndef _GPIO_H_
#define _GPIO_H_
#include <stdint.h>

/** @brief AFIO Registers */
struct afio_reg_map {
  volatile uint32_t evcr;           /**< 0 - Event control register */
  volatile uint32_t mapr;           /**< 4 - Remap register  */
  volatile uint32_t exticr1;        /**< 8 */
  volatile uint32_t exticr2;        /**< C */
  volatile uint32_t exticr3;        /**< 10 */
  volatile uint32_t exticr4;        /**< 14 */
  volatile uint32_t mapr2;          /**< 18 */
};

typedef enum {GPIO_A = 0, GPIO_B = 1, GPIO_C = 2} gpio_port;

/* GPIO Port Mode */
#define MODE_INPUT              0x00
#define MODE_GP_OUTPUT          0x01
#define MODE_ALT                0x02
#define MODE_ANALOG_INPUT       0x03

/* GPIO Output Types */
#define OUTPUT_PUSH_PULL        0x00
#define OUTPUT_OPEN_DRAIN       0x01

/* GPIO Output Speed */
#define OUTPUT_SPEED_LOW              0x00
#define OUTPUT_SPEED_MEDIUM           0x01
#define OUTPUT_SPEED_HIGH             0x02
#define OUTPUT_SPEED_VERY_HIGH        0x03

/* GPIO Pull-Up or Pull-Down */
#define PUPD_NONE               0x00
#define PUPD_PULL_UP            0x01
#define PUPD_PULL_DOWN          0x02

/* Alternate Function Maps */
#define ALT0 0x00
#define ALT1 0x01
#define ALT2 0x02
#define ALT3 0x03
#define ALT4 0x04
#define ALT5 0x05
#define ALT6 0x06
#define ALT7 0x07
#define ALT8 0x08
#define ALT9 0x09
#define ALT10 0x0A
#define ALT11 0x0B
#define ALT12 0x0C
#define ALT13 0x0D
#define ALT14 0x0E
#define ALT15 0x0F



/*
 * GPIO initialization function
 *
 * @param port   - GPIO_A, GPIO_B, or GPIO_C
 * @param num    - 0 to 15
 * @param mode   - GPIO Port Mode
 * @param otype  - GPIO Output Types
 * @param speed  - GPIO Output Speed
 * @param pupd   - GPIO Pull-Up or Pull-Down
 * @param alt    - GPIO Alternate Function
 */
 void gpio_init(gpio_port port, unsigned int num, unsigned int mode, unsigned int otype, unsigned int speed, unsigned int pupd, unsigned int alt);


/*
 * gpio_set: Set specified GPIO pin to high.
 */
void gpio_set(gpio_port port, unsigned int num);

/*
 * gpio_set: Clear specified GPIO pin to low.
 */
void gpio_clr(gpio_port port, unsigned int num);

/*
 * gpio_read: Read from selected GPIO pin.
 */
int gpio_read(gpio_port port, unsigned int num);

#endif /* _GPIO_H_ */
