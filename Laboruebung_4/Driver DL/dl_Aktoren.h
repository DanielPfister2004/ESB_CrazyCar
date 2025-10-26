/*
 * dl_Aktoren.h
 *
 *  Created on: 21.10.2025
 *      Author: danie
 */

#ifndef DRIVER_DL_DL_AKTOREN_H_
#define DRIVER_DL_DL_AKTOREN_H_

#include "dl_Aktoren.h"
#include <stdint.h>  // for uint32_t or other variables

#define MAX_RIGHT   2750
#define MAX_LEFT    4750
#define MIDDLE      3750

void dl_SetSteering(int8_t iValue);

#endif /* DRIVER_DL_DL_AKTOREN_H_ */
