/*---------------------------------------------------------------------------------------------------------------------------------------------------
 * mcurses-config.c - mcurses lib
 *
 * Copyright (c) 2011-2015 Frank Meyer - frank(at)fli4l.de
 *
 * Revision History:
 * V1.2 2022 04 09 Tiago Lobao, avr specific, some improvements of cfg
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *---------------------------------------------------------------------------------------------------------------------------------------------------
 */

#include "mcurses-config.h"

// using atmega328p driver
struct serialDriver uart_drv = {
    uart_init,       /* serialInit */
    uart_read,       /* getchar */
    uart_send_byte,  /* putchar */
    uart_read_count, /* getbuffSize */
    uart_flush,      /* flush */
    uart_deinit      /* serialDeinit */
};