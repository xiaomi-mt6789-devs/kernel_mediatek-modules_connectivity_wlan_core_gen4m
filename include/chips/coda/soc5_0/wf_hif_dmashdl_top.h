/* SPDX-License-Identifier: GPL-2.0 */
/*
 * Copyright (c) 2020 MediaTek Inc.
 */

/*
 *[File]            : wf_hif_dmashdl_top.h
 *[Revision time]   : Mon May  6 15:32:36 2019
 *[Description]     : This file is auto generated by CODA
 *[Copyright]       : Copyright (C) 2019 Mediatek Incorportion.
 *                    All rights reserved.
*/

#ifndef __WF_HIF_DMASHDL_TOP_REGS_H__
#define __WF_HIF_DMASHDL_TOP_REGS_H__

#ifdef __cplusplus
extern "C" {
#endif


/****************************************************************************
 *
 *                     WF_HIF_DMASHDL_TOP CR Definitions
 *
 ****************************************************************************
 */

#define WF_HIF_DMASHDL_TOP_BASE                                0x7C026000

#define WF_HIF_DMASHDL_TOP_OPTIONAL_CONTROL_ADDR \
	(WF_HIF_DMASHDL_TOP_BASE + 0x08)
#define WF_HIF_DMASHDL_TOP_PAGE_SETTING_ADDR \
	(WF_HIF_DMASHDL_TOP_BASE + 0x0C)
#define WF_HIF_DMASHDL_TOP_REFILL_CONTROL_ADDR \
	(WF_HIF_DMASHDL_TOP_BASE + 0x10)
#define WF_HIF_DMASHDL_TOP_PACKET_MAX_SIZE_ADDR \
	(WF_HIF_DMASHDL_TOP_BASE + 0x1c)
#define WF_HIF_DMASHDL_TOP_GROUP0_CONTROL_ADDR \
	(WF_HIF_DMASHDL_TOP_BASE + 0x20)
#define WF_HIF_DMASHDL_TOP_QUEUE_MAPPING0_ADDR \
	(WF_HIF_DMASHDL_TOP_BASE + 0x60)
#define WF_HIF_DMASHDL_TOP_HIF_SCHEDULER_SETTING0_ADDR \
	(WF_HIF_DMASHDL_TOP_BASE + 0x70)
#define WF_HIF_DMASHDL_TOP_ERROR_FLAG_CTRL_ADDR                                \
	(WF_HIF_DMASHDL_TOP_BASE + 0xDC) /* 60DC */
#define WF_HIF_DMASHDL_TOP_STATUS_RD_ADDR                                      \
	(WF_HIF_DMASHDL_TOP_BASE + 0x100) /* 6100 */
#define WF_HIF_DMASHDL_TOP_STATUS_RD_GP0_ADDR                                  \
	(WF_HIF_DMASHDL_TOP_BASE + 0x140) /* 6140 */
#define WF_HIF_DMASHDL_TOP_RD_GROUP_PKT_CNT0_ADDR                              \
	(WF_HIF_DMASHDL_TOP_BASE + 0x180) /* 6180 */

#define WF_HIF_DMASHDL_TOP_PAGE_SETTING_GROUP_SEQUENCE_ORDER_TYPE_ADDR \
	WF_HIF_DMASHDL_TOP_PAGE_SETTING_ADDR
#define WF_HIF_DMASHDL_TOP_PAGE_SETTING_GROUP_SEQUENCE_ORDER_TYPE_MASK \
	0x00010000

#define WF_HIF_DMASHDL_TOP_OPTIONAL_CONTROL_CR_HIF_ACK_CNT_TH_ADDR \
	WF_HIF_DMASHDL_TOP_OPTIONAL_CONTROL_ADDR
#define WF_HIF_DMASHDL_TOP_OPTIONAL_CONTROL_CR_HIF_ACK_CNT_TH_MASK 0x00FF0000
#define WF_HIF_DMASHDL_TOP_OPTIONAL_CONTROL_CR_HIF_ACK_CNT_TH_SHFT 16
#define WF_HIF_DMASHDL_TOP_OPTIONAL_CONTROL_CR_HIF_GUP_ACT_MAP_ADDR \
	WF_HIF_DMASHDL_TOP_OPTIONAL_CONTROL_ADDR
#define WF_HIF_DMASHDL_TOP_OPTIONAL_CONTROL_CR_HIF_GUP_ACT_MAP_MASK 0x0000FFFF
#define WF_HIF_DMASHDL_TOP_OPTIONAL_CONTROL_CR_HIF_GUP_ACT_MAP_SHFT 0
#define WF_HIF_DMASHDL_TOP_PAGE_SETTING_GROUP_SEQUENCE_ORDER_TYPE_SHFT 16

#define WF_HIF_DMASHDL_TOP_REFILL_CONTROL_GROUP0_REFILL_DISABLE_ADDR \
	WF_HIF_DMASHDL_TOP_REFILL_CONTROL_ADDR
#define WF_HIF_DMASHDL_TOP_REFILL_CONTROL_GROUP0_REFILL_DISABLE_MASK 0x00010000
#define WF_HIF_DMASHDL_TOP_REFILL_CONTROL_GROUP0_REFILL_DISABLE_SHFT 16

#define WF_HIF_DMASHDL_TOP_PACKET_MAX_SIZE_PSE_PACKET_MAX_SIZE_ADDR \
	WF_HIF_DMASHDL_TOP_PACKET_MAX_SIZE_ADDR
#define WF_HIF_DMASHDL_TOP_PACKET_MAX_SIZE_PSE_PACKET_MAX_SIZE_MASK 0x0FFF0000
#define WF_HIF_DMASHDL_TOP_PACKET_MAX_SIZE_PSE_PACKET_MAX_SIZE_SHFT 16
#define WF_HIF_DMASHDL_TOP_PACKET_MAX_SIZE_PLE_PACKET_MAX_SIZE_ADDR \
	WF_HIF_DMASHDL_TOP_PACKET_MAX_SIZE_ADDR
#define WF_HIF_DMASHDL_TOP_PACKET_MAX_SIZE_PLE_PACKET_MAX_SIZE_MASK 0x00000FFF
#define WF_HIF_DMASHDL_TOP_PACKET_MAX_SIZE_PLE_PACKET_MAX_SIZE_SHFT 0

#define WF_HIF_DMASHDL_TOP_GROUP0_CONTROL_GROUP0_MAX_QUOTA_ADDR \
	WF_HIF_DMASHDL_TOP_GROUP0_CONTROL_ADDR
#define WF_HIF_DMASHDL_TOP_GROUP0_CONTROL_GROUP0_MAX_QUOTA_MASK 0x0FFF0000
#define WF_HIF_DMASHDL_TOP_GROUP0_CONTROL_GROUP0_MAX_QUOTA_SHFT 16
#define WF_HIF_DMASHDL_TOP_GROUP0_CONTROL_GROUP0_MIN_QUOTA_ADDR \
	WF_HIF_DMASHDL_TOP_GROUP0_CONTROL_ADDR
#define WF_HIF_DMASHDL_TOP_GROUP0_CONTROL_GROUP0_MIN_QUOTA_MASK 0x00000FFF
#define WF_HIF_DMASHDL_TOP_GROUP0_CONTROL_GROUP0_MIN_QUOTA_SHFT 0

#define WF_HIF_DMASHDL_TOP_QUEUE_MAPPING0_QUEUE0_MAPPING_ADDR  \
	WF_HIF_DMASHDL_TOP_QUEUE_MAPPING0_ADDR
#define WF_HIF_DMASHDL_TOP_QUEUE_MAPPING0_QUEUE0_MAPPING_MASK  0x0000000F
#define WF_HIF_DMASHDL_TOP_QUEUE_MAPPING0_QUEUE0_MAPPING_SHFT  0

#define WF_HIF_DMASHDL_TOP_HIF_SCHEDULER_SETTING0_PRIORITY0_GROUP_ADDR \
	WF_HIF_DMASHDL_TOP_HIF_SCHEDULER_SETTING0_ADDR
#define WF_HIF_DMASHDL_TOP_HIF_SCHEDULER_SETTING0_PRIORITY0_GROUP_MASK \
	0x0000000F
#define WF_HIF_DMASHDL_TOP_HIF_SCHEDULER_SETTING0_PRIORITY0_GROUP_SHFT 0

#define WF_HIF_DMASHDL_TOP_STATUS_RD_GP0_G0_RSV_CNT_ADDR                       \
	WF_HIF_DMASHDL_TOP_STATUS_RD_GP0_ADDR
#define WF_HIF_DMASHDL_TOP_STATUS_RD_GP0_G0_RSV_CNT_MASK                       \
	0x0FFF0000 /* G0_RSV_CNT[27..16] */
#define WF_HIF_DMASHDL_TOP_STATUS_RD_GP0_G0_RSV_CNT_SHFT 16
#define WF_HIF_DMASHDL_TOP_STATUS_RD_GP0_G0_SRC_CNT_ADDR                       \
	WF_HIF_DMASHDL_TOP_STATUS_RD_GP0_ADDR
#define WF_HIF_DMASHDL_TOP_STATUS_RD_GP0_G0_SRC_CNT_MASK                       \
	0x00000FFF /* G0_SRC_CNT[11..0] */
#define WF_HIF_DMASHDL_TOP_STATUS_RD_GP0_G0_SRC_CNT_SHFT 0

#define WF_HIF_DMASHDL_TOP_STATUS_RD_FREE_PAGE_CNT_ADDR                        \
	WF_HIF_DMASHDL_TOP_STATUS_RD_ADDR
#define WF_HIF_DMASHDL_TOP_STATUS_RD_FREE_PAGE_CNT_MASK                        \
	0x0FFF0000 /* FREE_PAGE_CNT[27..16] */
#define WF_HIF_DMASHDL_TOP_STATUS_RD_FREE_PAGE_CNT_SHFT 16
#define WF_HIF_DMASHDL_TOP_STATUS_RD_FFA_CNT_ADDR                              \
	WF_HIF_DMASHDL_TOP_STATUS_RD_ADDR
#define WF_HIF_DMASHDL_TOP_STATUS_RD_FFA_CNT_MASK \
	0x00000FFF /* FFA_CNT[11..0] */
#define WF_HIF_DMASHDL_TOP_STATUS_RD_FFA_CNT_SHFT 0


/* PLE */
#define WF_PLE_TOP_BASE 0x820C0000

#define WF_PLE_TOP_HIF_PG_INFO_ADDR		\
	(WF_PLE_TOP_BASE + 0x114) /* 0114 */

#define WF_PLE_TOP_HIF_PG_INFO_HIF_SRC_CNT_ADDR \
	WF_PLE_TOP_HIF_PG_INFO_ADDR
#define WF_PLE_TOP_HIF_PG_INFO_HIF_SRC_CNT_MASK \
	0x0FFF0000 /* HIF_SRC_CNT[27..16] */
#define WF_PLE_TOP_HIF_PG_INFO_HIF_SRC_CNT_SHFT 16
#define WF_PLE_TOP_HIF_PG_INFO_HIF_RSV_CNT_ADDR \
	WF_PLE_TOP_HIF_PG_INFO_ADDR
#define WF_PLE_TOP_HIF_PG_INFO_HIF_RSV_CNT_MASK \
	0x00000FFF /* HIF_RSV_CNT[11..0] */
#define WF_PLE_TOP_HIF_PG_INFO_HIF_RSV_CNT_SHFT 0

#ifdef __cplusplus
}
#endif

#endif /* __WF_HIF_DMASHDL_TOP_REGS_H__ */
