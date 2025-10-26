#include <hal_gpio.h>
#include <hal_general.h>
#include <dl_General.h>

#include <stdint.h>  // for uint32_t or other variables


void main(void)
{
    WDTCTL = WDTPW | WDTHOLD;	// stop watchdog timer
    hal_init();
    dl_Init();

    while (1)
    {
        dl_SetSteering(0);
    }
}



//#pragma vector=TIMER1_A1_VECTOR
//__interrupt void TimerA1_ISR(void)
//{
//    TA1CCTL2 &= ~CCIFG;
//}


