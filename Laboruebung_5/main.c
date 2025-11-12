#include <hal_gpio.h>
#include <hal_general.h>
#include <dl_General.h>
#include "hal_usciB1.h"

#include <stdint.h>  // for uint32_t or other variables

#define BYTE1 'AA'
#define BYTE2 'CC'

USCIB1_SPICom LCD;

void main(void)
{
    WDTCTL = WDTPW | WDTHOLD;
    hal_USCIB1Init();

    CS_HIGH;
    LCD.Status.TxSuc = 1;

    while (1)
    {
        if (LCD.Status.TxSuc)
        {
            // LCD.Status.TxSuc = 0;

            LCD.TxData.len = 4;
            LCD.TxData.Data[0] = 0xAA;
            LCD.TxData.Data[1] = 0xCC;

            hal_USCIB1Transmit();
        }
    }
}

#pragma vector=USCI_B1_VECTOR
__interrupt void USCI_B1_ISR(void)
{
    if (UCB1IFG & UCTXIFG)
    {
        LCD.RxData.Data[LCD.TxData.cnt++] = UCB1RXBUF;     // clears interrupt bit
#if 0
        LCD.RxData.len++;
        LCD.RxData.cnt++;

        if (LCD.TxData.cnt < LCD.TxData.len)
        {
            UCB1TXBUF = LCD.TxData.Data[LCD.TxData.cnt];
        }
        else
        {
            LCD.Status.TxSuc = 1;

            // Chip Select deaktivieren (HIGH)
            CS_HIGH;
        }
#endif
        if(LCD.TxData.cnt == LCD.TxData.len)
            LCD.Status.TxSuc = 1;
    }
}

