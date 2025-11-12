/*
 * hal_usciB1.h
 *
 *  Created on: 03.11.2025
 *      Author: danie
 */

#ifndef HARDWARE_HAL_HAL_USCIB1_H_
#define HARDWARE_HAL_HAL_USCIB1_H_

#include "hal_gpio.h"
#define FREQ 100000

#define CS_LOW  P8OUT &= ~LCD_CS        // set when you want to talk
#define CS_HIGH P8OUT |= LCD_CS         // set when it should be quiet

void init_GPIO();
void hal_USCIB1Init();
void hal_USCIB1Transmit();

typedef struct {
  struct {
    unsigned char TxSuc;   // 1 = Übertragung abgeschlossen
  } Status;

  struct {
    unsigned char len;     // Anzahl zu übertragender Bytes
    unsigned char cnt;     // Aktueller Index
    unsigned char Data[256]; // Tx-Array
  } TxData;

  struct {
    unsigned char len;     // Anzahl empfangener Bytes
    unsigned char Data[256]; // Rx-Array
  } RxData;
} USCIB1_SPICom;

#endif /* HARDWARE_HAL_HAL_USCIB1_H_ */
