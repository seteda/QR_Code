/*
 * main.c
 *
 *  Created on: Dec 1, 2015
 *      Author: tungnt
 */
#include "../include/main.h"

/* =======================================================================
 * EXTERNAL API
 * ======================================================================*/
void data_analysis(VERSION_QR version, ERROR_CORRECT_LEVEL level, ENCODE_MODE mode_encode){
	character_capacities_t ver_qr;
	ver_qr = version_qr(version,level);
	switch (mode_encode) {
		case NUMERIC_MODE:
			break;
		case ALPHANUMERIC_MODE:
			break;
		case BYTE_MODE:
			break;
		case KANJI_MOE:
			break;
		default:
			break;
	}
}
void data_encode(){}
void error_correction_code(){}
void structure_final_msg(){}
void module_place_matrix(){}
void data_masking(){}
void format_version_info(){}
/* =======================================================================
 * INTERNAL API
 * ======================================================================*/
