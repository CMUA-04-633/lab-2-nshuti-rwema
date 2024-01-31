// Kevin DeVincentis

#ifndef _RCC_H_
#define _RCC_H_

/** @brief The Reset and Clock Control (RCC) register map. */
struct rcc_reg_map {
    volatile unsigned long cr;           /**< 0  - Clock control */
    volatile unsigned long pll_cfgr;     /**< 4  - PLL Config    */
    volatile unsigned long cfgr;         /**< 8  - Clock config */
    volatile unsigned long cir;          /**< C  - Clock interrupt */
    volatile unsigned long ahb1_rstr;    /**< 10 - AHB1 Peripheral Reset */
    volatile unsigned long ahb2_rstr;    /**< 14 - AHB2 Peripheral Reset */
    volatile unsigned long reserved_1;   /**< 18 */
    volatile unsigned long reserved_2;   /**< 1C */
    volatile unsigned long apb1_rstr;    /**< 20 - APB1 peripheral reset */
    volatile unsigned long apb2_rstr;    /**< 24 - APB2 peripheral reset */
    volatile unsigned long reserved_3;   /**< 28 */
    volatile unsigned long reserved_4;   /**< 2C */
    volatile unsigned long ahb1_enr;     /**< 30 - AHB1 Peripheral Clock Enable */
    volatile unsigned long ahb2_enr;     /**< 34 - AHB2 Peripheral Clock Enable */
    volatile unsigned long reserved_5;   /**< 38 */
    volatile unsigned long reserved_6;   /**< 3C */
    volatile unsigned long apb1_enr;     /**< 40 - APB1 peripheral clock enable */
    volatile unsigned long apb2_enr;     /**< 44 - APB2 peripheral clock enable */
    volatile unsigned long reserved_7;   /**< 48 */
    volatile unsigned long reserved_8;   /**< 4C */
    volatile unsigned long ahb1_lpenr;   /**< 50 - AHB1 Peripheral Clock Low Power Enable */
    volatile unsigned long ahb2_lpenr;   /**< 54 - AHB2 Peripheral Clock Low Power Enable */
    volatile unsigned long reserved_9;   /**< 58 */
    volatile unsigned long reserved_10;  /**< 5C */
    volatile unsigned long apb1_lpenr;   /**< 60 - APB1 peripheral clock low power enable */
    volatile unsigned long apb2_lpenr;   /**< 64 - APB2 peripheral clock low power enable */
    volatile unsigned long reserved_11;  /**< 68 */
    volatile unsigned long reserved_12;  /**< 6C */
    volatile unsigned long bdcr;         /**< 70 - Backup domain control register */
    volatile unsigned long csr;          /**< 74 - Control/status register */
    volatile unsigned long reserved_13;  /**< 78 */
    volatile unsigned long reserved_14;  /**< 7C */
    volatile unsigned long sscgr;        /**< 80 - spread spectrum clock generation */
    volatile unsigned long pll_I2Scfgr;  /**< 84 - PLLI2S configuration */
    volatile unsigned long reserved_15;  /**< 88 */
    volatile unsigned long dckcfgr;      /**< 8C - Dedicated Clocks Configuration*/
};

/** @brief Base address of the RCC */
#define RCC_BASE    (struct rcc_reg_map *) 0x40023800

#endif /* _RCC_H_ */
