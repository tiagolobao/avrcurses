/*---------------------------------------------------------------------------------------------------------------------------------------------------
 * mcurses-config.h - configuration file for mcurses lib
 *
 * Copyright (c) 2011-2015 Frank Meyer - frank(at)fli4l.de
 *
 *
 * Revision History:
 * V1.0 2015 xx xx Frank Meyer, original version
 * V1.1 2017 01 13 ChrisMicro , serial interface specific functions removed
 * V1.2 2022 04 09 Tiago Lobao, avr specific, some improvements of cfg
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *---------------------------------------------------------------------------------------------------------------------------------------------------
 */

#define MCURSES_LINES               24              // 24 lines
#define MCURSES_COLS                80              // 80 columns
#define USE_AVR_PRGMSPACE           1               // ON

#include "drivers/atmega328p/uart.h"

// Driver structure
struct serialDriver{
    void (*serialInit)(void);
    uint8_t (*fgetc)(void);
    uint8_t (*fputc)(uint8_t ch);
    uint16_t (*getbuffSize)(void);
    uint16_t (*getTxbuffFreeSize)(void);
    void (*flush)(void);
    void (*serialDeinit)(void);
};

extern struct serialDriver uart_drv;