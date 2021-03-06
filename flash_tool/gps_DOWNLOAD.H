/*******************************************************************************
*  Copyright Statement:
*  --------------------
*  This software is protected by Copyright and the information contained
*  herein is confidential. The software may not be copied and the information
*  contained herein may not be used or disclosed except with the written
*  permission of MediaTek Inc. (C) 2001
*
*******************************************************************************/

/*******************************************************************************
 * Filename:
 * ---------
 *	   download.h
 *
 * Project:
 * --------
 *   MTK3301 DOWNLOAD AGENT
 *
 * Description:
 * ------------
 *   This file is intends for download agent specific definition
 *
 * Author:
 * -------
 *	Jensen Hu
 *
 *******************************************************************************/
#ifndef _GPS_DOWNLOAD_H_
#define _GPS_DOWNLOAD_H_

#include "Download.h"

/* RETURN VALUE */
#define HW_ERROR				0x1c
#define HW_RAM_OK				0xE0
#define HW_RAM_FLOARTING		0xE1
#define HW_RAM_UNACCESSABLE		0xE2
#define HW_RAM_ERROR			0xE3
//#define SOC_FAIL				0x0c
#define SYNC_CHAR				0xC0
#define CONT_CHAR				0x69
#define STOP_CHAR				0x96
#define ACK						0x5A
#define NACK					0xA5
#define UNKNOWN_CMD				0xBB

/* COMMANDS */
#define DA_EXT_CLOCK_CMD		0xD0
#define DA_BBCHIP_TYPE_CMD		0xD1
#define DA_SPEED_CMD			0xD2
#define DA_MEM_CMD				0xD3
#define DA_FORMAT_CMD			0xD4
#define DA_WRITE_CMD			0xD5
#define DA_READ_CMD				0xD6
#define DA_WRITE_REG16_CMD		0xD7
#define DA_READ_REG16_CMD		0xD8
#define DA_FINISH_CMD			0xD9
#define DA_GET_DSP_VER_CMD		0xDA
#define DA_ENABLE_WATCHDOG_CMD	0xDB

typedef enum
{
	TIMEOUT_DATA = 0,
	CKSUM_ERROR,
	RX_BUFFER_FULL,
	TIMEOUT_CKSUM_LSB,
	TIMEOUT_CKSUM_MSB,
	ERASE_TIMEOUT,
	PROGRAM_TIMEOUT,
	RECOVERY_BUFFER_FULL,
	UNKNOWN_ERROR
} eRX_error;

/* DEVICE_INFO */
typedef enum
{
	DEVICE_AM29DL323D = 0,
	DEVICE_AM29DL640D,
	DEVICE_ST_M29DW640D,
	DEVICE_AM29DL322GT,
	DEVICE_MB84VD23280FA,
	DEVICE_AM29PDL128G,
	DEVICE_MB84VD22280FE,
	DEVICE_MB84VP24491HK,
	DEVICE_AM50DL128CG,
	DEVICE_AM49DL3208GB,
	DEVICE_ST_M74DW66500B,
	DEVICE_INTEL_28F128L30_B,
	DEVICE_K5A3280YT,
	DEVICE_TH50VPF6782AASB,
	DEVICE_TH50VPF6783AASB,
	DEVICE_TV00578002AABD,
	DEVICE_TV00578003AABD,
	DEVICE_MB84VP24581HK,
	DEVICE_INTEL_28F640W30_B,
	DEVICE_AM49PDL127BH,
	DEVICE_AM49PDL129BH,
	DEVICE_M6MGD13BW66CDG,
	DEVICE_W19B322TM,
	DEVICE_W19B323TM,
	DEVICE_KAD060300B,
	DEVICE_K5J6316CTM,
	DEVICE_TH50VPF5682CDSB,
	DEVICE_TH50VPF5683CDSB,
	DEVICE_IS75V16F128GS32,
	DEVICE_M6MGT64BM34CDG,
	DEVICE_ST_M30L0T7000T0,
	DEVICE_ST_M30L0T7000B0,
	DEVICE_SHARP_LRS1862,
	DEVICE_SHARP_LRS1806A,
	DEVICE_AM49DL3208GT,
	DEVICE_S29PL032J,
	DEVICE_SHARP_LRS1828C,
	DEVICE_M6MGB64BM34CDG,
	DEVICE_SHARP_LRS18B0,
	DEVICE_SHARP_LRS1863,
	DEVICE_S71AL016D_T,
	DEVICE_S71AL016D_B,
	DEVICE_SHARP_LRS18C8A,
	DEVICE_INTEL_28F640L18_T,
	DEVICE_INTEL_28F128L18_T,
	DEVICE_INTEL_28F256L18_T,
	DEVICE_INTEL_28F640L18_B,
	DEVICE_INTEL_28F128L18_B,
	DEVICE_INTEL_28F256L18_B,
	DEVICE_INTEL_28F640L30_T,
	DEVICE_INTEL_28F128L30_T,
	DEVICE_INTEL_28F256L30_T,
	DEVICE_INTEL_28F640L30_B,
	DEVICE_INTEL_28F256L30_B,
	DEVICE_INTEL_28F320W30_T,
	DEVICE_INTEL_28F320W30_B,
	DEVICE_INTEL_28F640W30_T,
	DEVICE_INTEL_28F128W30_T,
	DEVICE_INTEL_28F128W30_B,
	DEVICE_INTEL_28F320W18_T,
	DEVICE_INTEL_28F320W18_B,
	DEVICE_INTEL_28F640W18_T,
	DEVICE_INTEL_28F640W18_B,
	DEVICE_INTEL_28F128W18_T,
	DEVICE_INTEL_28F128W18_B,
	DEVICE_M6MGD15BM34CDG,
	DEVICE_S71PL254J,
	DEVICE_TV0057A002AABD,
	DEVICE_TV0057A003AABD,
	DEVICE_LAST = DEVICE_TV0057A003AABD,
	DEVICE_UNKNOWN = 0xFF		// Unknown Device 

} DEVICE_INFO;

#endif
