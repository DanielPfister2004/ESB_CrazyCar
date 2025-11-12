#include <hal_gpio.h>
#include <hal_general.h>
#include <dl_General.h>

#include <stdint.h>  // for uint32_t or other variables

void main(void)
{
    hal_init();
    dl_Init();

    while(1)
    {
//        dl_SetSteering(100);
//        __delay_cycles(10000);
//        dl_SetSteering(0);
//        __delay_cycles(10000);
//        dl_SetSteering(-100);
//        __delay_cycles(10000);
        dl_SetThrottle(100);
    }
}



