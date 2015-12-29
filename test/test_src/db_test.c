/*
 * db_test.c
 *
 *  Created on: Nov 30, 2015
 *      Author: tungnt
 */

#include "../test_include/test_case.h"

int check_data_character(character_capacities_t in1, character_capacities_t in2){
	if ((in1.alphanumeric_mode == in2.alphanumeric_mode)
			&& (in1.byte_mode == in2.byte_mode)
			&& (in1.kanji_mode == in2.kanji_mode)
			&& (in1.numeric_mode == in2.numeric_mode)){
		return 1;
	}else
		return 0;
}

int check_data_error_correction_cw(error_correction_cw_t in1, error_correction_cw_t in2){
	if ((in1.ec_cw_per_block == in2.ec_cw_per_block)
			&& (in1.num_block_group1 == in2.num_block_group1)
			&& (in1.num_block_group2 == in2.num_block_group2)
			&& (in1.num_cw_block_group1 == in2.num_cw_block_group1)
			&& (in1.num_cw_block_group2 == in2.num_cw_block_group2)
			&& (in1.total_data_cw == in2.total_data_cw)){
		return 1;
	}else
		return 0;
}
