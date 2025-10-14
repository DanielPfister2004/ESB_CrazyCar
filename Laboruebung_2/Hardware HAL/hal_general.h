/*
 * hal_general.h
 *
 *  Created on: 30.09.2025
 *      Author: danie
 */

#ifndef HARDWARE_HAL_HAL_GENERAL_H_
#define HARDWARE_HAL_HAL_GENERAL_H_


void hal_init();
void HAL_PMM_Init();

void LCD_BL_ON();
void LCD_BL_OFF();

void wait_in_us(int time_in_us);

void calc_int(float a, float b);

#endif /* HARDWARE_HAL_HAL_GENERAL_H_ */


