/*
 * hal_usciB1.c
 *
 *  Created on: 03.11.2025
 *      Author: danie
 */
#include <msp430.h>
#include "hal_gpio.h"
#include "hal_usciB1.h"



USCIB1_SPICom LCD;

void init_GPIO()
{
    P8SEL |= (LCD_MISO | LCD_MOSI | LCD_CLK);
    P8DIR |= (LCD_MOSI | LCD_CLK);
    P8DIR &= ~LCD_MISO;
    //P8DIR |= LCD_CS;     // Richtung: Ausgang
    P8OUT |= BIT1;     // Initialzustand: HIGH (CS deaktiviert)
}

void hal_USCIB1Init()
{   // register B is for LCD
    UCB1CTL1 |= UCSWRST;    // activating wurstbit

    UCB1CTL0 &= ~UCCKPH;    // phase
    UCB1CTL0 |= UCCKPL;     // polarity
    UCB1CTL0 |= UCMSB;      // MSB first
    UCB1CTL0 &= ~UC7BIT;    // 8bit length
    UCB1CTL0 |= UCMST;      // master mode
    UCB1CTL0 |= UCMODE0;    // 3pin mode
    UCB1CTL0 |= UCSYNC;     // sync
    UCB1CTL1 |= UCSSEL__SMCLK;     // master clock

    UCB1BR0 = FREQ / 2500000;
    UCB1BR1 = 0;

    UCB1CTL1 &= ~UCSWRST;   // deactivating wurstbit

    UCB1IE |= UCTXIE;        // receive interrupt
}

void hal_USCIB1Transmit()
{
    LCD.Status.TxSuc = 0;
    LCD.TxData.cnt = 0;
    while(UCB1STAT & UCBUSY);   // waits till receive or transmit is finished
    CS_LOW;

    if(LCD.TxData.cnt < LCD.TxData.len)
    {
        UCB1TXBUF = LCD.TxData.Data[LCD.TxData.cnt];
        LCD.TxData.cnt++;
    }

}


