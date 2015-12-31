/*
 * db_main.h
 *
 *  Created on: Nov 30, 2015
 *      Author: tungnt
 */

#ifndef INCLUDE_DB_MAIN_H_
#define INCLUDE_DB_MAIN_H_

#include <stdlib.h>
#include <stdint.h>
#include <string.h>
#include <time.h>
#include <stdio.h> /* for I/O file - test */
#include <pthread.h>
#include <stdbool.h>
#include "main_define.h"

typedef enum{
	LEVEL_L = 0x0100,
	LEVEL_M = 0x0200,
	LEVEL_Q = 0x0300,
	LEVEL_H = 0x0400
}ERROR_CORRECT_LEVEL;

typedef enum{
	VERSION_1 = 0x0001,
	VERSION_2 = 0x0002,
	VERSION_3 = 0x0003,
	VERSION_4 = 0x0004,
	VERSION_5 = 0x0005,
	VERSION_6 = 0x0006,
	VERSION_7 = 0x0007,
	VERSION_8 = 0x0008,
	VERSION_9 = 0x0009,
	VERSION_10 = 0x000A,
	VERSION_11 = 0x000B,
	VERSION_12 = 0x000C,
	VERSION_13 = 0x000D,
	VERSION_14 = 0x000E,
	VERSION_15 = 0x000F,
	VERSION_16 = 0x0010,
	VERSION_17 = 0x0011,
	VERSION_18 = 0x0012,
	VERSION_19 = 0x0013,
	VERSION_20 = 0x0014,
	VERSION_21 = 0x0015,
	VERSION_22 = 0x0016,
	VERSION_23 = 0x0017,
	VERSION_24 = 0x0018,
	VERSION_25 = 0x0019,
	VERSION_26 = 0x001A,
	VERSION_27 = 0x001B,
	VERSION_28 = 0x001C,
	VERSION_29 = 0x001D,
	VERSION_30 = 0x001E,
	VERSION_31 = 0x001F,
	VERSION_32 = 0x0020,
	VERSION_33 = 0x0021,
	VERSION_34 = 0x0022,
	VERSION_35 = 0x0023,
	VERSION_36 = 0x0024,
	VERSION_37 = 0x0025,
	VERSION_38 = 0x0026,
	VERSION_39 = 0x0027,
	VERSION_40 = 0x0028
}VERSION_QR;

typedef enum{
	NUMERIC_MODE = 0b0001,
	ALPHANUMERIC_MODE = 0b0010,
	BYTE_MODE = 0b0100,
	KANJI_MOE = 0b1000
}ENCODE_MODE;

typedef enum{
	UTF8 = 0b0001,			/* each UTF8 character can have 1-4 byte */
	ISO_8859_1 = 0b0010,	/* each ISO_8859_1 character have 8 bit, is external of ASCII(7 bit) */
	SHIFT_JIS = 0b0100
}CHARACTER_TYPE;

typedef enum{
	CHARACTER_CAPACITIES = 1,
	ERROR_CORRECTION_CW,
}QR_DATA_TYPE;

typedef struct __character_capacities {
	int numeric_mode;
	int alphanumeric_mode;
	int byte_mode;
	int kanji_mode;
} character_capacities_t;

typedef struct __error_correction_cw {
	int total_data_cw; 		/* Total Number of Data Codewords for this Version and EC Level */
	int ec_cw_per_block;	/* EC Codewords Per Block */
	int num_block_group1;	/* Number of Blocks in Group 1 */
	int num_cw_block_group1;/* Number of Data Codewords in Each of Group 1's Blocks */
	int num_block_group2;	/* Number of Blocks in Group 2 */
	int num_cw_block_group2;/* Number of Data Codewords in Each of Group 2's Blocks */
} error_correction_cw_t;

typedef struct __qr_data_t{
	QR_DATA_TYPE type;
	union{
		character_capacities_t* character_cap;
		error_correction_cw_t* error_cor_cw;
	}qr_data;
}qr_data_t;

/* external from db_main */
extern character_capacities_t version_qr(VERSION_QR version,ERROR_CORRECT_LEVEL level);
extern error_correction_cw_t error_correction_cw(VERSION_QR version,ERROR_CORRECT_LEVEL level);
extern bool get_data(qr_data_t* out, qr_data_t* in);

/* external from data_mask */

/* external from encode_data */

/* external from error_correction */

/* external from matrix */

/* external from structure_final_msg */

#ifdef TEST_DEBUG
extern void print(qr_data_t data);
#endif

#endif /* INCLUDE_DB_MAIN_H_ */
