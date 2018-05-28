/*
 * (C) Copyright 2018 FIREFLY
 *
 * SPDX-License-Identifier:     GPL-2.0+
 */

#include <common.h>
#include <dwc3-uboot.h>
#include <power/regulator.h>
#include <usb.h>

DECLARE_GLOBAL_DATA_PTR;

int rk_board_late_init(void)
{
	printf("roc-rk3328-cc late init ...\n");

   	if (!env_get("fdtfile"))
   		env_set("fdtfile", "rk3328-roc-cc.dtb");
}

