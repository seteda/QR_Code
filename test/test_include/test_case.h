/*
 * test.h
 *
 *  Created on: Nov 30, 2015
 *      Author: tungnt
 */

#ifndef INCLUDE_TEST_CASE_H_
#define INCLUDE_TEST_CASE_H_

#include "../../jni/include/main_define.h"
#include "../../jni/include/db_main.h"
#include <check.h>

#define TRUE  1
#define FALSE 0

/* for test unit */
extern int check_data_character(character_capacities_t in1, character_capacities_t in2);
extern int check_data_error_correction_cw(error_correction_cw_t in1, error_correction_cw_t in2);

/* function QR */
extern character_capacities_t version_qr(VERSION_QR version,ERROR_CORRECT_LEVEL level);
extern error_correction_cw_t error_correction_cw(VERSION_QR version,ERROR_CORRECT_LEVEL level);

#endif /* INCLUDE_TEST_CASE_H_ */
