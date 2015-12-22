/*
 * test_main_tc.c
 *
 *  Created on: Nov 30, 2015
 *      Author: tungnt
 */
#include "../test_include/test_main_tc.h"

extern TCase *tc_character_capacities();
extern TCase *tc_error_correction_cw();

Suite *qr_test(void){
	Suite *qr_suite=NULL;
	TCase *character_capacities_testcase = tc_character_capacities();
	TCase *tc_error_correction_cw_testcase = tc_error_correction_cw();
	qr_suite = suite_create("qr_suite");
	suite_add_tcase(qr_suite,character_capacities_testcase);
	suite_add_tcase(qr_suite,tc_error_correction_cw_testcase);
	return qr_suite;
}

void print_utf8(char data[]){
	int length = strlen(data);
	int i=0;
	printf("length: %d\n",length);
	while(i<length){
		printf("Character: %c have UTF8-hexa is: 0x%x \n",data[i],data[i]);
		i++;
	}
}

//int main(void) {
//	Suite *s;
//	SRunner *sr;
//	int number_failed;
//	s = qr_test();
//	sr = srunner_create(s);
//	srunner_run_all(sr, CK_NORMAL);
//	number_failed = srunner_ntests_failed(sr);
//	srunner_free(sr);
//	print_utf8("ễ");
//	return (number_failed == 0) ? EXIT_SUCCESS : EXIT_FAILURE;
//}
