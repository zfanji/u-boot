/*
 * (C) Copyright 2016 Rockchip Electronics Co., Ltd
 *
 * SPDX-License-Identifier:     GPL-2.0+
 */

#ifndef __EVB_RK3328_H
#define __EVB_RK3328_H

#include <configs/rk3328_common.h>

#define CONFIG_SYS_MMC_ENV_DEV 1

#define SDRAM_BANK_SIZE			(2UL << 30)

#define CONFIG_CONSOLE_SCROLL_LINES		10

#ifndef CONFIG_SPL_BUILD
#undef CONFIG_BOOTCOMMAND
#define CONFIG_BOOTCOMMAND RKIMG_BOOTCOMMAND
#endif

#endif
