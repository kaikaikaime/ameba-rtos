/*
 *  Routines to access hardware
 *
 *  Copyright (c) 2014 Realtek Semiconductor Corp.
 *
 *  This module is a confidential and proprietary property of RealTek and
 *  possession or use of this module requires written permission of RealTek.
 */
#ifndef I2C_EXT_H
#define I2C_EXT_H
#include "platform_autoconf.h"
#if defined (CONFIG_AMEBASMART)

#define I2C_SLV_SDA    _PA_9
#define I2C_SLV_SCL    _PA_10

#elif defined (CONFIG_AMEBALITE)

#define I2C_SLV_SDA    _PA_29
#define I2C_SLV_SCL    _PA_30


#elif defined (CONFIG_AMEBADPLUS)

#define I2C_SLV_SDA    _PB_15
#define I2C_SLV_SCL    _PB_16

#elif defined (CONFIG_AMEBAGREEN2)

#define I2C_SLV_SDA    _PB_1
#define I2C_SLV_SCL    _PB_3

#endif

#endif
