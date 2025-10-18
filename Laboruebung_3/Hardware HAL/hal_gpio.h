/*
 * hal_gpio.h
 *
 *  Created on: 02.10.2025
 *      Author: danie
 */

#ifndef HARDWARE_HAL_HAL_GPIO_H_
#define HARDWARE_HAL_HAL_GPIO_H_

#include <msp430.h>

// ##### Port 1 #####
#define RPM_SENSOR       BIT3   // IN
#define RPM_SENSOR_DIR   BIT4   // IN
#define I2C_INT_MOTION   BIT5   // OUT
#define START_BUTTON     BIT6   // EN
#define STOP_BUTTON      BIT7   // EN


//  #### PORT 8 #####
#define LCD_BL  BIT0

//  #### PORT 7 #####
#define XT2IN  BIT2
#define XT2OUT BIT3

// PORT 3
#define SMCLK BIT4


void hal_GpioInit();

#endif /* HARDWARE_HAL_HAL_GPIO_H_ */
