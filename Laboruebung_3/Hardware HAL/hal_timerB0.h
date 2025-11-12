/*
 * timerB0.h
 *
 *  Created on: 12.11.2025
 *      Author: danie
 */

#ifndef HARDWARE_HAL_HAL_TIMERB0_H_
#define HARDWARE_HAL_HAL_TIMERB0_H_

#define XTAL_FREQU   20000000
#define MCLK_FREQU   20000000
#define SMCLK_FREQU   2500000

#include <msp430.h>

void timerB0_init();
extern void TimerB0_ISR(void);


#endif /* HARDWARE_HAL_HAL_TIMERB0_H_ */
