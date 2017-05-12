/*
 * (C) Copyright 2012 Xilinx
 * (C) Copyright 2014 Digilent Inc.
 *
 * Configuration for Zynq Development Board - ZYBO
 * See zynq-common.h for Zynq common configs
 *
 * SPDX-License-Identifier:	GPL-2.0+
 */

#ifndef __CONFIG_ZYNQ_ZYBO_H
#define __CONFIG_ZYNQ_ZYBO_H

#define CONFIG_SYS_SDRAM_SIZE		(512 * 1024 * 1024)
#define CONFIG_SYS_SDRAM_BASE		0x00000000
#define CONFIG_SPL_LOAD_FIT_ADDRESS  0x40000
//#define DEBUG

#include <zynq-common.h>

#endif /* __CONFIG_ZYNQ_ZYBO_H */
