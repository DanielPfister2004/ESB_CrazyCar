#include "hal_general.h"
#include "hal_pmm.h"
#include "hal_wdt.h"
#include "hal_gpio.h"
/*
 * hal_general.c
 *
 *  Created on: 30.09.2025
 *      Author: danie
 */

void hal_init()
{
    HAL_PMM_Init();
    hal_GpioInit();
}




