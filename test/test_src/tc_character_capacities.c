/*
 * tc_character_capacities.c
 *
 *  Created on: Nov 30, 2015
 *      Author: tungnt
 */
#include "../test_include/test_case.h"

START_TEST(tc_character_capacities_tc1){
	int check = FALSE;
	character_capacities_t data_test,data_true;
	data_true.numeric_mode = 41;
	data_true.alphanumeric_mode = 25;
	data_true.byte_mode = 17;
	data_true.kanji_mode = 10;
	data_test = version_qr(VERSION_1, LEVEL_L);
	check = check_data_character(data_test,data_true);
	ck_assert_int_eq(check,TRUE);
}END_TEST
START_TEST(tc_character_capacities_tc2){int check = FALSE;character_capacities_t data_test,data_true;data_true.numeric_mode = 34;data_true.alphanumeric_mode = 20;data_true.byte_mode = 14;data_true.kanji_mode = 8;data_test = version_qr(VERSION_1, LEVEL_M);check = check_data_character(data_test,data_true);ck_assert_int_eq(check,TRUE);}END_TEST
START_TEST(tc_character_capacities_tc3){int check = FALSE;character_capacities_t data_test,data_true;data_true.numeric_mode = 27;data_true.alphanumeric_mode = 16;data_true.byte_mode = 11;data_true.kanji_mode = 7;data_test = version_qr(VERSION_1, LEVEL_Q);check = check_data_character(data_test,data_true);ck_assert_int_eq(check,TRUE);}END_TEST
START_TEST(tc_character_capacities_tc4){int check = FALSE;character_capacities_t data_test,data_true;data_true.numeric_mode = 17;data_true.alphanumeric_mode = 10;data_true.byte_mode = 7;data_true.kanji_mode = 4;data_test = version_qr(VERSION_1, LEVEL_H);check = check_data_character(data_test,data_true);ck_assert_int_eq(check,TRUE);}END_TEST
START_TEST(tc_character_capacities_tc5){int check = FALSE;character_capacities_t data_test,data_true;data_true.numeric_mode = 77;data_true.alphanumeric_mode = 47;data_true.byte_mode = 32;data_true.kanji_mode = 20;data_test = version_qr(VERSION_2, LEVEL_L);check = check_data_character(data_test,data_true);ck_assert_int_eq(check,TRUE);}END_TEST
START_TEST(tc_character_capacities_tc6){int check = FALSE;character_capacities_t data_test,data_true;data_true.numeric_mode = 63;data_true.alphanumeric_mode = 38;data_true.byte_mode = 26;data_true.kanji_mode = 16;data_test = version_qr(VERSION_2, LEVEL_M);check = check_data_character(data_test,data_true);ck_assert_int_eq(check,TRUE);}END_TEST
START_TEST(tc_character_capacities_tc7){int check = FALSE;character_capacities_t data_test,data_true;data_true.numeric_mode = 48;data_true.alphanumeric_mode = 29;data_true.byte_mode = 20;data_true.kanji_mode = 12;data_test = version_qr(VERSION_2, LEVEL_Q);check = check_data_character(data_test,data_true);ck_assert_int_eq(check,TRUE);}END_TEST
START_TEST(tc_character_capacities_tc8){int check = FALSE;character_capacities_t data_test,data_true;data_true.numeric_mode = 34;data_true.alphanumeric_mode = 20;data_true.byte_mode = 14;data_true.kanji_mode = 8;data_test = version_qr(VERSION_2, LEVEL_H);check = check_data_character(data_test,data_true);ck_assert_int_eq(check,TRUE);}END_TEST
START_TEST(tc_character_capacities_tc9){int check = FALSE;character_capacities_t data_test,data_true;data_true.numeric_mode = 127;data_true.alphanumeric_mode = 77;data_true.byte_mode = 53;data_true.kanji_mode = 32;data_test = version_qr(VERSION_3, LEVEL_L);check = check_data_character(data_test,data_true);ck_assert_int_eq(check,TRUE);}END_TEST
START_TEST(tc_character_capacities_tc10){int check = FALSE;character_capacities_t data_test,data_true;data_true.numeric_mode = 101;data_true.alphanumeric_mode = 61;data_true.byte_mode = 42;data_true.kanji_mode = 26;data_test = version_qr(VERSION_3, LEVEL_M);check = check_data_character(data_test,data_true);ck_assert_int_eq(check,TRUE);}END_TEST
START_TEST(tc_character_capacities_tc11){int check = FALSE;character_capacities_t data_test,data_true;data_true.numeric_mode = 77;data_true.alphanumeric_mode = 47;data_true.byte_mode = 32;data_true.kanji_mode = 20;data_test = version_qr(VERSION_3, LEVEL_Q);check = check_data_character(data_test,data_true);ck_assert_int_eq(check,TRUE);}END_TEST
START_TEST(tc_character_capacities_tc12){int check = FALSE;character_capacities_t data_test,data_true;data_true.numeric_mode = 58;data_true.alphanumeric_mode = 35;data_true.byte_mode = 24;data_true.kanji_mode = 15;data_test = version_qr(VERSION_3, LEVEL_H);check = check_data_character(data_test,data_true);ck_assert_int_eq(check,TRUE);}END_TEST
START_TEST(tc_character_capacities_tc13){int check = FALSE;character_capacities_t data_test,data_true;data_true.numeric_mode = 187;data_true.alphanumeric_mode = 114;data_true.byte_mode = 78;data_true.kanji_mode = 48;data_test = version_qr(VERSION_4, LEVEL_L);check = check_data_character(data_test,data_true);ck_assert_int_eq(check,TRUE);}END_TEST
START_TEST(tc_character_capacities_tc14){int check = FALSE;character_capacities_t data_test,data_true;data_true.numeric_mode = 149;data_true.alphanumeric_mode = 90;data_true.byte_mode = 62;data_true.kanji_mode = 38;data_test = version_qr(VERSION_4, LEVEL_M);check = check_data_character(data_test,data_true);ck_assert_int_eq(check,TRUE);}END_TEST
START_TEST(tc_character_capacities_tc15){int check = FALSE;character_capacities_t data_test,data_true;data_true.numeric_mode = 111;data_true.alphanumeric_mode = 67;data_true.byte_mode = 46;data_true.kanji_mode = 28;data_test = version_qr(VERSION_4, LEVEL_Q);check = check_data_character(data_test,data_true);ck_assert_int_eq(check,TRUE);}END_TEST
START_TEST(tc_character_capacities_tc16){int check = FALSE;character_capacities_t data_test,data_true;data_true.numeric_mode = 82;data_true.alphanumeric_mode = 50;data_true.byte_mode = 34;data_true.kanji_mode = 21;data_test = version_qr(VERSION_4, LEVEL_H);check = check_data_character(data_test,data_true);ck_assert_int_eq(check,TRUE);}END_TEST
START_TEST(tc_character_capacities_tc17){int check = FALSE;character_capacities_t data_test,data_true;data_true.numeric_mode = 255;data_true.alphanumeric_mode = 154;data_true.byte_mode = 106;data_true.kanji_mode = 65;data_test = version_qr(VERSION_5, LEVEL_L);check = check_data_character(data_test,data_true);ck_assert_int_eq(check,TRUE);}END_TEST
START_TEST(tc_character_capacities_tc18){int check = FALSE;character_capacities_t data_test,data_true;data_true.numeric_mode = 202;data_true.alphanumeric_mode = 122;data_true.byte_mode = 84;data_true.kanji_mode = 52;data_test = version_qr(VERSION_5, LEVEL_M);check = check_data_character(data_test,data_true);ck_assert_int_eq(check,TRUE);}END_TEST
START_TEST(tc_character_capacities_tc19){int check = FALSE;character_capacities_t data_test,data_true;data_true.numeric_mode = 144;data_true.alphanumeric_mode = 87;data_true.byte_mode = 60;data_true.kanji_mode = 37;data_test = version_qr(VERSION_5, LEVEL_Q);check = check_data_character(data_test,data_true);ck_assert_int_eq(check,TRUE);}END_TEST
START_TEST(tc_character_capacities_tc20){int check = FALSE;character_capacities_t data_test,data_true;data_true.numeric_mode = 106;data_true.alphanumeric_mode = 64;data_true.byte_mode = 44;data_true.kanji_mode = 27;data_test = version_qr(VERSION_5, LEVEL_H);check = check_data_character(data_test,data_true);ck_assert_int_eq(check,TRUE);}END_TEST
START_TEST(tc_character_capacities_tc21){int check = FALSE;character_capacities_t data_test,data_true;data_true.numeric_mode = 322;data_true.alphanumeric_mode = 195;data_true.byte_mode = 134;data_true.kanji_mode = 82;data_test = version_qr(VERSION_6, LEVEL_L);check = check_data_character(data_test,data_true);ck_assert_int_eq(check,TRUE);}END_TEST
START_TEST(tc_character_capacities_tc22){int check = FALSE;character_capacities_t data_test,data_true;data_true.numeric_mode = 255;data_true.alphanumeric_mode = 154;data_true.byte_mode = 106;data_true.kanji_mode = 65;data_test = version_qr(VERSION_6, LEVEL_M);check = check_data_character(data_test,data_true);ck_assert_int_eq(check,TRUE);}END_TEST
START_TEST(tc_character_capacities_tc23){int check = FALSE;character_capacities_t data_test,data_true;data_true.numeric_mode = 178;data_true.alphanumeric_mode = 108;data_true.byte_mode = 74;data_true.kanji_mode = 45;data_test = version_qr(VERSION_6, LEVEL_Q);check = check_data_character(data_test,data_true);ck_assert_int_eq(check,TRUE);}END_TEST
START_TEST(tc_character_capacities_tc24){int check = FALSE;character_capacities_t data_test,data_true;data_true.numeric_mode = 139;data_true.alphanumeric_mode = 84;data_true.byte_mode = 58;data_true.kanji_mode = 36;data_test = version_qr(VERSION_6, LEVEL_H);check = check_data_character(data_test,data_true);ck_assert_int_eq(check,TRUE);}END_TEST
START_TEST(tc_character_capacities_tc25){int check = FALSE;character_capacities_t data_test,data_true;data_true.numeric_mode = 370;data_true.alphanumeric_mode = 224;data_true.byte_mode = 154;data_true.kanji_mode = 95;data_test = version_qr(VERSION_7, LEVEL_L);check = check_data_character(data_test,data_true);ck_assert_int_eq(check,TRUE);}END_TEST
START_TEST(tc_character_capacities_tc26){int check = FALSE;character_capacities_t data_test,data_true;data_true.numeric_mode = 293;data_true.alphanumeric_mode = 178;data_true.byte_mode = 122;data_true.kanji_mode = 75;data_test = version_qr(VERSION_7, LEVEL_M);check = check_data_character(data_test,data_true);ck_assert_int_eq(check,TRUE);}END_TEST
START_TEST(tc_character_capacities_tc27){int check = FALSE;character_capacities_t data_test,data_true;data_true.numeric_mode = 207;data_true.alphanumeric_mode = 125;data_true.byte_mode = 86;data_true.kanji_mode = 53;data_test = version_qr(VERSION_7, LEVEL_Q);check = check_data_character(data_test,data_true);ck_assert_int_eq(check,TRUE);}END_TEST
START_TEST(tc_character_capacities_tc28){int check = FALSE;character_capacities_t data_test,data_true;data_true.numeric_mode = 154;data_true.alphanumeric_mode = 93;data_true.byte_mode = 64;data_true.kanji_mode = 39;data_test = version_qr(VERSION_7, LEVEL_H);check = check_data_character(data_test,data_true);ck_assert_int_eq(check,TRUE);}END_TEST
START_TEST(tc_character_capacities_tc29){int check = FALSE;character_capacities_t data_test,data_true;data_true.numeric_mode = 461;data_true.alphanumeric_mode = 279;data_true.byte_mode = 192;data_true.kanji_mode = 118;data_test = version_qr(VERSION_8, LEVEL_L);check = check_data_character(data_test,data_true);ck_assert_int_eq(check,TRUE);}END_TEST
START_TEST(tc_character_capacities_tc30){int check = FALSE;character_capacities_t data_test,data_true;data_true.numeric_mode = 365;data_true.alphanumeric_mode = 221;data_true.byte_mode = 152;data_true.kanji_mode = 93;data_test = version_qr(VERSION_8, LEVEL_M);check = check_data_character(data_test,data_true);ck_assert_int_eq(check,TRUE);}END_TEST
START_TEST(tc_character_capacities_tc31){int check = FALSE;character_capacities_t data_test,data_true;data_true.numeric_mode = 259;data_true.alphanumeric_mode = 157;data_true.byte_mode = 108;data_true.kanji_mode = 66;data_test = version_qr(VERSION_8, LEVEL_Q);check = check_data_character(data_test,data_true);ck_assert_int_eq(check,TRUE);}END_TEST
START_TEST(tc_character_capacities_tc32){int check = FALSE;character_capacities_t data_test,data_true;data_true.numeric_mode = 202;data_true.alphanumeric_mode = 122;data_true.byte_mode = 84;data_true.kanji_mode = 52;data_test = version_qr(VERSION_8, LEVEL_H);check = check_data_character(data_test,data_true);ck_assert_int_eq(check,TRUE);}END_TEST
START_TEST(tc_character_capacities_tc33){int check = FALSE;character_capacities_t data_test,data_true;data_true.numeric_mode = 552;data_true.alphanumeric_mode = 335;data_true.byte_mode = 230;data_true.kanji_mode = 141;data_test = version_qr(VERSION_9, LEVEL_L);check = check_data_character(data_test,data_true);ck_assert_int_eq(check,TRUE);}END_TEST
START_TEST(tc_character_capacities_tc34){int check = FALSE;character_capacities_t data_test,data_true;data_true.numeric_mode = 432;data_true.alphanumeric_mode = 262;data_true.byte_mode = 180;data_true.kanji_mode = 111;data_test = version_qr(VERSION_9, LEVEL_M);check = check_data_character(data_test,data_true);ck_assert_int_eq(check,TRUE);}END_TEST
START_TEST(tc_character_capacities_tc35){int check = FALSE;character_capacities_t data_test,data_true;data_true.numeric_mode = 312;data_true.alphanumeric_mode = 189;data_true.byte_mode = 130;data_true.kanji_mode = 80;data_test = version_qr(VERSION_9, LEVEL_Q);check = check_data_character(data_test,data_true);ck_assert_int_eq(check,TRUE);}END_TEST
START_TEST(tc_character_capacities_tc36){int check = FALSE;character_capacities_t data_test,data_true;data_true.numeric_mode = 235;data_true.alphanumeric_mode = 143;data_true.byte_mode = 98;data_true.kanji_mode = 60;data_test = version_qr(VERSION_9, LEVEL_H);check = check_data_character(data_test,data_true);ck_assert_int_eq(check,TRUE);}END_TEST
START_TEST(tc_character_capacities_tc37){int check = FALSE;character_capacities_t data_test,data_true;data_true.numeric_mode = 652;data_true.alphanumeric_mode = 395;data_true.byte_mode = 271;data_true.kanji_mode = 167;data_test = version_qr(VERSION_10, LEVEL_L);check = check_data_character(data_test,data_true);ck_assert_int_eq(check,TRUE);}END_TEST
START_TEST(tc_character_capacities_tc38){int check = FALSE;character_capacities_t data_test,data_true;data_true.numeric_mode = 513;data_true.alphanumeric_mode = 311;data_true.byte_mode = 213;data_true.kanji_mode = 131;data_test = version_qr(VERSION_10, LEVEL_M);check = check_data_character(data_test,data_true);ck_assert_int_eq(check,TRUE);}END_TEST
START_TEST(tc_character_capacities_tc39){int check = FALSE;character_capacities_t data_test,data_true;data_true.numeric_mode = 364;data_true.alphanumeric_mode = 221;data_true.byte_mode = 151;data_true.kanji_mode = 93;data_test = version_qr(VERSION_10, LEVEL_Q);check = check_data_character(data_test,data_true);ck_assert_int_eq(check,TRUE);}END_TEST
START_TEST(tc_character_capacities_tc40){int check = FALSE;character_capacities_t data_test,data_true;data_true.numeric_mode = 288;data_true.alphanumeric_mode = 174;data_true.byte_mode = 119;data_true.kanji_mode = 74;data_test = version_qr(VERSION_10, LEVEL_H);check = check_data_character(data_test,data_true);ck_assert_int_eq(check,TRUE);}END_TEST
START_TEST(tc_character_capacities_tc41){int check = FALSE;character_capacities_t data_test,data_true;data_true.numeric_mode = 772;data_true.alphanumeric_mode = 468;data_true.byte_mode = 321;data_true.kanji_mode = 198;data_test = version_qr(VERSION_11, LEVEL_L);check = check_data_character(data_test,data_true);ck_assert_int_eq(check,TRUE);}END_TEST
START_TEST(tc_character_capacities_tc42){int check = FALSE;character_capacities_t data_test,data_true;data_true.numeric_mode = 604;data_true.alphanumeric_mode = 366;data_true.byte_mode = 251;data_true.kanji_mode = 155;data_test = version_qr(VERSION_11, LEVEL_M);check = check_data_character(data_test,data_true);ck_assert_int_eq(check,TRUE);}END_TEST
START_TEST(tc_character_capacities_tc43){int check = FALSE;character_capacities_t data_test,data_true;data_true.numeric_mode = 427;data_true.alphanumeric_mode = 259;data_true.byte_mode = 177;data_true.kanji_mode = 109;data_test = version_qr(VERSION_11, LEVEL_Q);check = check_data_character(data_test,data_true);ck_assert_int_eq(check,TRUE);}END_TEST
START_TEST(tc_character_capacities_tc44){int check = FALSE;character_capacities_t data_test,data_true;data_true.numeric_mode = 331;data_true.alphanumeric_mode = 200;data_true.byte_mode = 137;data_true.kanji_mode = 85;data_test = version_qr(VERSION_11, LEVEL_H);check = check_data_character(data_test,data_true);ck_assert_int_eq(check,TRUE);}END_TEST
START_TEST(tc_character_capacities_tc45){int check = FALSE;character_capacities_t data_test,data_true;data_true.numeric_mode = 883;data_true.alphanumeric_mode = 535;data_true.byte_mode = 367;data_true.kanji_mode = 226;data_test = version_qr(VERSION_12, LEVEL_L);check = check_data_character(data_test,data_true);ck_assert_int_eq(check,TRUE);}END_TEST
START_TEST(tc_character_capacities_tc46){int check = FALSE;character_capacities_t data_test,data_true;data_true.numeric_mode = 691;data_true.alphanumeric_mode = 419;data_true.byte_mode = 287;data_true.kanji_mode = 177;data_test = version_qr(VERSION_12, LEVEL_M);check = check_data_character(data_test,data_true);ck_assert_int_eq(check,TRUE);}END_TEST
START_TEST(tc_character_capacities_tc47){int check = FALSE;character_capacities_t data_test,data_true;data_true.numeric_mode = 489;data_true.alphanumeric_mode = 296;data_true.byte_mode = 203;data_true.kanji_mode = 125;data_test = version_qr(VERSION_12, LEVEL_Q);check = check_data_character(data_test,data_true);ck_assert_int_eq(check,TRUE);}END_TEST
START_TEST(tc_character_capacities_tc48){int check = FALSE;character_capacities_t data_test,data_true;data_true.numeric_mode = 374;data_true.alphanumeric_mode = 227;data_true.byte_mode = 155;data_true.kanji_mode = 96;data_test = version_qr(VERSION_12, LEVEL_H);check = check_data_character(data_test,data_true);ck_assert_int_eq(check,TRUE);}END_TEST
START_TEST(tc_character_capacities_tc49){int check = FALSE;character_capacities_t data_test,data_true;data_true.numeric_mode = 1022;data_true.alphanumeric_mode = 619;data_true.byte_mode = 425;data_true.kanji_mode = 262;data_test = version_qr(VERSION_13, LEVEL_L);check = check_data_character(data_test,data_true);ck_assert_int_eq(check,TRUE);}END_TEST
START_TEST(tc_character_capacities_tc50){int check = FALSE;character_capacities_t data_test,data_true;data_true.numeric_mode = 796;data_true.alphanumeric_mode = 483;data_true.byte_mode = 331;data_true.kanji_mode = 204;data_test = version_qr(VERSION_13, LEVEL_M);check = check_data_character(data_test,data_true);ck_assert_int_eq(check,TRUE);}END_TEST
START_TEST(tc_character_capacities_tc51){int check = FALSE;character_capacities_t data_test,data_true;data_true.numeric_mode = 580;data_true.alphanumeric_mode = 352;data_true.byte_mode = 241;data_true.kanji_mode = 149;data_test = version_qr(VERSION_13, LEVEL_Q);check = check_data_character(data_test,data_true);ck_assert_int_eq(check,TRUE);}END_TEST
START_TEST(tc_character_capacities_tc52){int check = FALSE;character_capacities_t data_test,data_true;data_true.numeric_mode = 427;data_true.alphanumeric_mode = 259;data_true.byte_mode = 177;data_true.kanji_mode = 109;data_test = version_qr(VERSION_13, LEVEL_H);check = check_data_character(data_test,data_true);ck_assert_int_eq(check,TRUE);}END_TEST
START_TEST(tc_character_capacities_tc53){int check = FALSE;character_capacities_t data_test,data_true;data_true.numeric_mode = 1101;data_true.alphanumeric_mode = 667;data_true.byte_mode = 458;data_true.kanji_mode = 282;data_test = version_qr(VERSION_14, LEVEL_L);check = check_data_character(data_test,data_true);ck_assert_int_eq(check,TRUE);}END_TEST
START_TEST(tc_character_capacities_tc54){int check = FALSE;character_capacities_t data_test,data_true;data_true.numeric_mode = 871;data_true.alphanumeric_mode = 528;data_true.byte_mode = 362;data_true.kanji_mode = 223;data_test = version_qr(VERSION_14, LEVEL_M);check = check_data_character(data_test,data_true);ck_assert_int_eq(check,TRUE);}END_TEST
START_TEST(tc_character_capacities_tc55){int check = FALSE;character_capacities_t data_test,data_true;data_true.numeric_mode = 621;data_true.alphanumeric_mode = 376;data_true.byte_mode = 258;data_true.kanji_mode = 159;data_test = version_qr(VERSION_14, LEVEL_Q);check = check_data_character(data_test,data_true);ck_assert_int_eq(check,TRUE);}END_TEST
START_TEST(tc_character_capacities_tc56){int check = FALSE;character_capacities_t data_test,data_true;data_true.numeric_mode = 468;data_true.alphanumeric_mode = 283;data_true.byte_mode = 194;data_true.kanji_mode = 120;data_test = version_qr(VERSION_14, LEVEL_H);check = check_data_character(data_test,data_true);ck_assert_int_eq(check,TRUE);}END_TEST
START_TEST(tc_character_capacities_tc57){int check = FALSE;character_capacities_t data_test,data_true;data_true.numeric_mode = 1250;data_true.alphanumeric_mode = 758;data_true.byte_mode = 520;data_true.kanji_mode = 320;data_test = version_qr(VERSION_15, LEVEL_L);check = check_data_character(data_test,data_true);ck_assert_int_eq(check,TRUE);}END_TEST
START_TEST(tc_character_capacities_tc58){int check = FALSE;character_capacities_t data_test,data_true;data_true.numeric_mode = 991;data_true.alphanumeric_mode = 600;data_true.byte_mode = 412;data_true.kanji_mode = 254;data_test = version_qr(VERSION_15, LEVEL_M);check = check_data_character(data_test,data_true);ck_assert_int_eq(check,TRUE);}END_TEST
START_TEST(tc_character_capacities_tc59){int check = FALSE;character_capacities_t data_test,data_true;data_true.numeric_mode = 703;data_true.alphanumeric_mode = 426;data_true.byte_mode = 292;data_true.kanji_mode = 180;data_test = version_qr(VERSION_15, LEVEL_Q);check = check_data_character(data_test,data_true);ck_assert_int_eq(check,TRUE);}END_TEST
START_TEST(tc_character_capacities_tc60){int check = FALSE;character_capacities_t data_test,data_true;data_true.numeric_mode = 530;data_true.alphanumeric_mode = 321;data_true.byte_mode = 220;data_true.kanji_mode = 136;data_test = version_qr(VERSION_15, LEVEL_H);check = check_data_character(data_test,data_true);ck_assert_int_eq(check,TRUE);}END_TEST
START_TEST(tc_character_capacities_tc61){int check = FALSE;character_capacities_t data_test,data_true;data_true.numeric_mode = 1408;data_true.alphanumeric_mode = 854;data_true.byte_mode = 586;data_true.kanji_mode = 361;data_test = version_qr(VERSION_16, LEVEL_L);check = check_data_character(data_test,data_true);ck_assert_int_eq(check,TRUE);}END_TEST
START_TEST(tc_character_capacities_tc62){int check = FALSE;character_capacities_t data_test,data_true;data_true.numeric_mode = 1082;data_true.alphanumeric_mode = 656;data_true.byte_mode = 450;data_true.kanji_mode = 277;data_test = version_qr(VERSION_16, LEVEL_M);check = check_data_character(data_test,data_true);ck_assert_int_eq(check,TRUE);}END_TEST
START_TEST(tc_character_capacities_tc63){int check = FALSE;character_capacities_t data_test,data_true;data_true.numeric_mode = 775;data_true.alphanumeric_mode = 470;data_true.byte_mode = 322;data_true.kanji_mode = 198;data_test = version_qr(VERSION_16, LEVEL_Q);check = check_data_character(data_test,data_true);ck_assert_int_eq(check,TRUE);}END_TEST
START_TEST(tc_character_capacities_tc64){int check = FALSE;character_capacities_t data_test,data_true;data_true.numeric_mode = 602;data_true.alphanumeric_mode = 365;data_true.byte_mode = 250;data_true.kanji_mode = 154;data_test = version_qr(VERSION_16, LEVEL_H);check = check_data_character(data_test,data_true);ck_assert_int_eq(check,TRUE);}END_TEST
START_TEST(tc_character_capacities_tc65){int check = FALSE;character_capacities_t data_test,data_true;data_true.numeric_mode = 1548;data_true.alphanumeric_mode = 938;data_true.byte_mode = 644;data_true.kanji_mode = 397;data_test = version_qr(VERSION_17, LEVEL_L);check = check_data_character(data_test,data_true);ck_assert_int_eq(check,TRUE);}END_TEST
START_TEST(tc_character_capacities_tc66){int check = FALSE;character_capacities_t data_test,data_true;data_true.numeric_mode = 1212;data_true.alphanumeric_mode = 734;data_true.byte_mode = 504;data_true.kanji_mode = 310;data_test = version_qr(VERSION_17, LEVEL_M);check = check_data_character(data_test,data_true);ck_assert_int_eq(check,TRUE);}END_TEST
START_TEST(tc_character_capacities_tc67){int check = FALSE;character_capacities_t data_test,data_true;data_true.numeric_mode = 876;data_true.alphanumeric_mode = 531;data_true.byte_mode = 364;data_true.kanji_mode = 224;data_test = version_qr(VERSION_17, LEVEL_Q);check = check_data_character(data_test,data_true);ck_assert_int_eq(check,TRUE);}END_TEST
START_TEST(tc_character_capacities_tc68){int check = FALSE;character_capacities_t data_test,data_true;data_true.numeric_mode = 674;data_true.alphanumeric_mode = 408;data_true.byte_mode = 280;data_true.kanji_mode = 173;data_test = version_qr(VERSION_17, LEVEL_H);check = check_data_character(data_test,data_true);ck_assert_int_eq(check,TRUE);}END_TEST
START_TEST(tc_character_capacities_tc69){int check = FALSE;character_capacities_t data_test,data_true;data_true.numeric_mode = 1725;data_true.alphanumeric_mode = 1046;data_true.byte_mode = 718;data_true.kanji_mode = 442;data_test = version_qr(VERSION_18, LEVEL_L);check = check_data_character(data_test,data_true);ck_assert_int_eq(check,TRUE);}END_TEST
START_TEST(tc_character_capacities_tc70){int check = FALSE;character_capacities_t data_test,data_true;data_true.numeric_mode = 1346;data_true.alphanumeric_mode = 816;data_true.byte_mode = 560;data_true.kanji_mode = 345;data_test = version_qr(VERSION_18, LEVEL_M);check = check_data_character(data_test,data_true);ck_assert_int_eq(check,TRUE);}END_TEST
START_TEST(tc_character_capacities_tc71){int check = FALSE;character_capacities_t data_test,data_true;data_true.numeric_mode = 948;data_true.alphanumeric_mode = 574;data_true.byte_mode = 394;data_true.kanji_mode = 243;data_test = version_qr(VERSION_18, LEVEL_Q);check = check_data_character(data_test,data_true);ck_assert_int_eq(check,TRUE);}END_TEST
START_TEST(tc_character_capacities_tc72){int check = FALSE;character_capacities_t data_test,data_true;data_true.numeric_mode = 746;data_true.alphanumeric_mode = 452;data_true.byte_mode = 310;data_true.kanji_mode = 191;data_test = version_qr(VERSION_18, LEVEL_H);check = check_data_character(data_test,data_true);ck_assert_int_eq(check,TRUE);}END_TEST
START_TEST(tc_character_capacities_tc73){int check = FALSE;character_capacities_t data_test,data_true;data_true.numeric_mode = 1903;data_true.alphanumeric_mode = 1153;data_true.byte_mode = 792;data_true.kanji_mode = 488;data_test = version_qr(VERSION_19, LEVEL_L);check = check_data_character(data_test,data_true);ck_assert_int_eq(check,TRUE);}END_TEST
START_TEST(tc_character_capacities_tc74){int check = FALSE;character_capacities_t data_test,data_true;data_true.numeric_mode = 1500;data_true.alphanumeric_mode = 909;data_true.byte_mode = 624;data_true.kanji_mode = 384;data_test = version_qr(VERSION_19, LEVEL_M);check = check_data_character(data_test,data_true);ck_assert_int_eq(check,TRUE);}END_TEST
START_TEST(tc_character_capacities_tc75){int check = FALSE;character_capacities_t data_test,data_true;data_true.numeric_mode = 1063;data_true.alphanumeric_mode = 644;data_true.byte_mode = 442;data_true.kanji_mode = 272;data_test = version_qr(VERSION_19, LEVEL_Q);check = check_data_character(data_test,data_true);ck_assert_int_eq(check,TRUE);}END_TEST
START_TEST(tc_character_capacities_tc76){int check = FALSE;character_capacities_t data_test,data_true;data_true.numeric_mode = 813;data_true.alphanumeric_mode = 493;data_true.byte_mode = 338;data_true.kanji_mode = 208;data_test = version_qr(VERSION_19, LEVEL_H);check = check_data_character(data_test,data_true);ck_assert_int_eq(check,TRUE);}END_TEST
START_TEST(tc_character_capacities_tc77){int check = FALSE;character_capacities_t data_test,data_true;data_true.numeric_mode = 2061;data_true.alphanumeric_mode = 1249;data_true.byte_mode = 858;data_true.kanji_mode = 528;data_test = version_qr(VERSION_20, LEVEL_L);check = check_data_character(data_test,data_true);ck_assert_int_eq(check,TRUE);}END_TEST
START_TEST(tc_character_capacities_tc78){int check = FALSE;character_capacities_t data_test,data_true;data_true.numeric_mode = 1600;data_true.alphanumeric_mode = 970;data_true.byte_mode = 666;data_true.kanji_mode = 410;data_test = version_qr(VERSION_20, LEVEL_M);check = check_data_character(data_test,data_true);ck_assert_int_eq(check,TRUE);}END_TEST
START_TEST(tc_character_capacities_tc79){int check = FALSE;character_capacities_t data_test,data_true;data_true.numeric_mode = 1159;data_true.alphanumeric_mode = 702;data_true.byte_mode = 482;data_true.kanji_mode = 297;data_test = version_qr(VERSION_20, LEVEL_Q);check = check_data_character(data_test,data_true);ck_assert_int_eq(check,TRUE);}END_TEST
START_TEST(tc_character_capacities_tc80){int check = FALSE;character_capacities_t data_test,data_true;data_true.numeric_mode = 919;data_true.alphanumeric_mode = 557;data_true.byte_mode = 382;data_true.kanji_mode = 235;data_test = version_qr(VERSION_20, LEVEL_H);check = check_data_character(data_test,data_true);ck_assert_int_eq(check,TRUE);}END_TEST
START_TEST(tc_character_capacities_tc81){int check = FALSE;character_capacities_t data_test,data_true;data_true.numeric_mode = 2232;data_true.alphanumeric_mode = 1352;data_true.byte_mode = 929;data_true.kanji_mode = 572;data_test = version_qr(VERSION_21, LEVEL_L);check = check_data_character(data_test,data_true);ck_assert_int_eq(check,TRUE);}END_TEST
START_TEST(tc_character_capacities_tc82){int check = FALSE;character_capacities_t data_test,data_true;data_true.numeric_mode = 1708;data_true.alphanumeric_mode = 1035;data_true.byte_mode = 711;data_true.kanji_mode = 438;data_test = version_qr(VERSION_21, LEVEL_M);check = check_data_character(data_test,data_true);ck_assert_int_eq(check,TRUE);}END_TEST
START_TEST(tc_character_capacities_tc83){int check = FALSE;character_capacities_t data_test,data_true;data_true.numeric_mode = 1224;data_true.alphanumeric_mode = 742;data_true.byte_mode = 509;data_true.kanji_mode = 314;data_test = version_qr(VERSION_21, LEVEL_Q);check = check_data_character(data_test,data_true);ck_assert_int_eq(check,TRUE);}END_TEST
START_TEST(tc_character_capacities_tc84){int check = FALSE;character_capacities_t data_test,data_true;data_true.numeric_mode = 969;data_true.alphanumeric_mode = 587;data_true.byte_mode = 403;data_true.kanji_mode = 248;data_test = version_qr(VERSION_21, LEVEL_H);check = check_data_character(data_test,data_true);ck_assert_int_eq(check,TRUE);}END_TEST
START_TEST(tc_character_capacities_tc85){int check = FALSE;character_capacities_t data_test,data_true;data_true.numeric_mode = 2409;data_true.alphanumeric_mode = 1460;data_true.byte_mode = 1003;data_true.kanji_mode = 618;data_test = version_qr(VERSION_22, LEVEL_L);check = check_data_character(data_test,data_true);ck_assert_int_eq(check,TRUE);}END_TEST
START_TEST(tc_character_capacities_tc86){int check = FALSE;character_capacities_t data_test,data_true;data_true.numeric_mode = 1872;data_true.alphanumeric_mode = 1134;data_true.byte_mode = 779;data_true.kanji_mode = 480;data_test = version_qr(VERSION_22, LEVEL_M);check = check_data_character(data_test,data_true);ck_assert_int_eq(check,TRUE);}END_TEST
START_TEST(tc_character_capacities_tc87){int check = FALSE;character_capacities_t data_test,data_true;data_true.numeric_mode = 1358;data_true.alphanumeric_mode = 823;data_true.byte_mode = 565;data_true.kanji_mode = 348;data_test = version_qr(VERSION_22, LEVEL_Q);check = check_data_character(data_test,data_true);ck_assert_int_eq(check,TRUE);}END_TEST
START_TEST(tc_character_capacities_tc88){int check = FALSE;character_capacities_t data_test,data_true;data_true.numeric_mode = 1056;data_true.alphanumeric_mode = 640;data_true.byte_mode = 439;data_true.kanji_mode = 270;data_test = version_qr(VERSION_22, LEVEL_H);check = check_data_character(data_test,data_true);ck_assert_int_eq(check,TRUE);}END_TEST
START_TEST(tc_character_capacities_tc89){int check = FALSE;character_capacities_t data_test,data_true;data_true.numeric_mode = 2620;data_true.alphanumeric_mode = 1588;data_true.byte_mode = 1091;data_true.kanji_mode = 672;data_test = version_qr(VERSION_23, LEVEL_L);check = check_data_character(data_test,data_true);ck_assert_int_eq(check,TRUE);}END_TEST
START_TEST(tc_character_capacities_tc90){int check = FALSE;character_capacities_t data_test,data_true;data_true.numeric_mode = 2059;data_true.alphanumeric_mode = 1248;data_true.byte_mode = 857;data_true.kanji_mode = 528;data_test = version_qr(VERSION_23, LEVEL_M);check = check_data_character(data_test,data_true);ck_assert_int_eq(check,TRUE);}END_TEST
START_TEST(tc_character_capacities_tc91){int check = FALSE;character_capacities_t data_test,data_true;data_true.numeric_mode = 1468;data_true.alphanumeric_mode = 890;data_true.byte_mode = 611;data_true.kanji_mode = 376;data_test = version_qr(VERSION_23, LEVEL_Q);check = check_data_character(data_test,data_true);ck_assert_int_eq(check,TRUE);}END_TEST
START_TEST(tc_character_capacities_tc92){int check = FALSE;character_capacities_t data_test,data_true;data_true.numeric_mode = 1108;data_true.alphanumeric_mode = 672;data_true.byte_mode = 461;data_true.kanji_mode = 284;data_test = version_qr(VERSION_23, LEVEL_H);check = check_data_character(data_test,data_true);ck_assert_int_eq(check,TRUE);}END_TEST
START_TEST(tc_character_capacities_tc93){int check = FALSE;character_capacities_t data_test,data_true;data_true.numeric_mode = 2812;data_true.alphanumeric_mode = 1704;data_true.byte_mode = 1171;data_true.kanji_mode = 721;data_test = version_qr(VERSION_24, LEVEL_L);check = check_data_character(data_test,data_true);ck_assert_int_eq(check,TRUE);}END_TEST
START_TEST(tc_character_capacities_tc94){int check = FALSE;character_capacities_t data_test,data_true;data_true.numeric_mode = 2188;data_true.alphanumeric_mode = 1326;data_true.byte_mode = 911;data_true.kanji_mode = 561;data_test = version_qr(VERSION_24, LEVEL_M);check = check_data_character(data_test,data_true);ck_assert_int_eq(check,TRUE);}END_TEST
START_TEST(tc_character_capacities_tc95){int check = FALSE;character_capacities_t data_test,data_true;data_true.numeric_mode = 1588;data_true.alphanumeric_mode = 963;data_true.byte_mode = 661;data_true.kanji_mode = 407;data_test = version_qr(VERSION_24, LEVEL_Q);check = check_data_character(data_test,data_true);ck_assert_int_eq(check,TRUE);}END_TEST
START_TEST(tc_character_capacities_tc96){int check = FALSE;character_capacities_t data_test,data_true;data_true.numeric_mode = 1228;data_true.alphanumeric_mode = 744;data_true.byte_mode = 511;data_true.kanji_mode = 315;data_test = version_qr(VERSION_24, LEVEL_H);check = check_data_character(data_test,data_true);ck_assert_int_eq(check,TRUE);}END_TEST
START_TEST(tc_character_capacities_tc97){int check = FALSE;character_capacities_t data_test,data_true;data_true.numeric_mode = 3057;data_true.alphanumeric_mode = 1853;data_true.byte_mode = 1273;data_true.kanji_mode = 784;data_test = version_qr(VERSION_25, LEVEL_L);check = check_data_character(data_test,data_true);ck_assert_int_eq(check,TRUE);}END_TEST
START_TEST(tc_character_capacities_tc98){int check = FALSE;character_capacities_t data_test,data_true;data_true.numeric_mode = 2395;data_true.alphanumeric_mode = 1451;data_true.byte_mode = 997;data_true.kanji_mode = 614;data_test = version_qr(VERSION_25, LEVEL_M);check = check_data_character(data_test,data_true);ck_assert_int_eq(check,TRUE);}END_TEST
START_TEST(tc_character_capacities_tc99){int check = FALSE;character_capacities_t data_test,data_true;data_true.numeric_mode = 1718;data_true.alphanumeric_mode = 1041;data_true.byte_mode = 715;data_true.kanji_mode = 440;data_test = version_qr(VERSION_25, LEVEL_Q);check = check_data_character(data_test,data_true);ck_assert_int_eq(check,TRUE);}END_TEST
START_TEST(tc_character_capacities_tc100){int check = FALSE;character_capacities_t data_test,data_true;data_true.numeric_mode = 1286;data_true.alphanumeric_mode = 779;data_true.byte_mode = 535;data_true.kanji_mode = 330;data_test = version_qr(VERSION_25, LEVEL_H);check = check_data_character(data_test,data_true);ck_assert_int_eq(check,TRUE);}END_TEST
START_TEST(tc_character_capacities_tc101){int check = FALSE;character_capacities_t data_test,data_true;data_true.numeric_mode = 3283;data_true.alphanumeric_mode = 1990;data_true.byte_mode = 1367;data_true.kanji_mode = 842;data_test = version_qr(VERSION_26, LEVEL_L);check = check_data_character(data_test,data_true);ck_assert_int_eq(check,TRUE);}END_TEST
START_TEST(tc_character_capacities_tc102){int check = FALSE;character_capacities_t data_test,data_true;data_true.numeric_mode = 2544;data_true.alphanumeric_mode = 1542;data_true.byte_mode = 1059;data_true.kanji_mode = 652;data_test = version_qr(VERSION_26, LEVEL_M);check = check_data_character(data_test,data_true);ck_assert_int_eq(check,TRUE);}END_TEST
START_TEST(tc_character_capacities_tc103){int check = FALSE;character_capacities_t data_test,data_true;data_true.numeric_mode = 1804;data_true.alphanumeric_mode = 1094;data_true.byte_mode = 751;data_true.kanji_mode = 462;data_test = version_qr(VERSION_26, LEVEL_Q);check = check_data_character(data_test,data_true);ck_assert_int_eq(check,TRUE);}END_TEST
START_TEST(tc_character_capacities_tc104){int check = FALSE;character_capacities_t data_test,data_true;data_true.numeric_mode = 1425;data_true.alphanumeric_mode = 864;data_true.byte_mode = 593;data_true.kanji_mode = 365;data_test = version_qr(VERSION_26, LEVEL_H);check = check_data_character(data_test,data_true);ck_assert_int_eq(check,TRUE);}END_TEST
START_TEST(tc_character_capacities_tc105){int check = FALSE;character_capacities_t data_test,data_true;data_true.numeric_mode = 3517;data_true.alphanumeric_mode = 2132;data_true.byte_mode = 1465;data_true.kanji_mode = 902;data_test = version_qr(VERSION_27, LEVEL_L);check = check_data_character(data_test,data_true);ck_assert_int_eq(check,TRUE);}END_TEST
START_TEST(tc_character_capacities_tc106){int check = FALSE;character_capacities_t data_test,data_true;data_true.numeric_mode = 2701;data_true.alphanumeric_mode = 1637;data_true.byte_mode = 1125;data_true.kanji_mode = 692;data_test = version_qr(VERSION_27, LEVEL_M);check = check_data_character(data_test,data_true);ck_assert_int_eq(check,TRUE);}END_TEST
START_TEST(tc_character_capacities_tc107){int check = FALSE;character_capacities_t data_test,data_true;data_true.numeric_mode = 1933;data_true.alphanumeric_mode = 1172;data_true.byte_mode = 805;data_true.kanji_mode = 496;data_test = version_qr(VERSION_27, LEVEL_Q);check = check_data_character(data_test,data_true);ck_assert_int_eq(check,TRUE);}END_TEST
START_TEST(tc_character_capacities_tc108){int check = FALSE;character_capacities_t data_test,data_true;data_true.numeric_mode = 1501;data_true.alphanumeric_mode = 910;data_true.byte_mode = 625;data_true.kanji_mode = 385;data_test = version_qr(VERSION_27, LEVEL_H);check = check_data_character(data_test,data_true);ck_assert_int_eq(check,TRUE);}END_TEST
START_TEST(tc_character_capacities_tc109){int check = FALSE;character_capacities_t data_test,data_true;data_true.numeric_mode = 3669;data_true.alphanumeric_mode = 2223;data_true.byte_mode = 1528;data_true.kanji_mode = 940;data_test = version_qr(VERSION_28, LEVEL_L);check = check_data_character(data_test,data_true);ck_assert_int_eq(check,TRUE);}END_TEST
START_TEST(tc_character_capacities_tc110){int check = FALSE;character_capacities_t data_test,data_true;data_true.numeric_mode = 2857;data_true.alphanumeric_mode = 1732;data_true.byte_mode = 1190;data_true.kanji_mode = 732;data_test = version_qr(VERSION_28, LEVEL_M);check = check_data_character(data_test,data_true);ck_assert_int_eq(check,TRUE);}END_TEST
START_TEST(tc_character_capacities_tc111){int check = FALSE;character_capacities_t data_test,data_true;data_true.numeric_mode = 2085;data_true.alphanumeric_mode = 1263;data_true.byte_mode = 868;data_true.kanji_mode = 534;data_test = version_qr(VERSION_28, LEVEL_Q);check = check_data_character(data_test,data_true);ck_assert_int_eq(check,TRUE);}END_TEST
START_TEST(tc_character_capacities_tc112){int check = FALSE;character_capacities_t data_test,data_true;data_true.numeric_mode = 1581;data_true.alphanumeric_mode = 958;data_true.byte_mode = 658;data_true.kanji_mode = 405;data_test = version_qr(VERSION_28, LEVEL_H);check = check_data_character(data_test,data_true);ck_assert_int_eq(check,TRUE);}END_TEST
START_TEST(tc_character_capacities_tc113){int check = FALSE;character_capacities_t data_test,data_true;data_true.numeric_mode = 3909;data_true.alphanumeric_mode = 2369;data_true.byte_mode = 1628;data_true.kanji_mode = 1002;data_test = version_qr(VERSION_29, LEVEL_L);check = check_data_character(data_test,data_true);ck_assert_int_eq(check,TRUE);}END_TEST
START_TEST(tc_character_capacities_tc114){int check = FALSE;character_capacities_t data_test,data_true;data_true.numeric_mode = 3035;data_true.alphanumeric_mode = 1839;data_true.byte_mode = 1264;data_true.kanji_mode = 778;data_test = version_qr(VERSION_29, LEVEL_M);check = check_data_character(data_test,data_true);ck_assert_int_eq(check,TRUE);}END_TEST
START_TEST(tc_character_capacities_tc115){int check = FALSE;character_capacities_t data_test,data_true;data_true.numeric_mode = 2181;data_true.alphanumeric_mode = 1322;data_true.byte_mode = 908;data_true.kanji_mode = 559;data_test = version_qr(VERSION_29, LEVEL_Q);check = check_data_character(data_test,data_true);ck_assert_int_eq(check,TRUE);}END_TEST
START_TEST(tc_character_capacities_tc116){int check = FALSE;character_capacities_t data_test,data_true;data_true.numeric_mode = 1677;data_true.alphanumeric_mode = 1016;data_true.byte_mode = 698;data_true.kanji_mode = 430;data_test = version_qr(VERSION_29, LEVEL_H);check = check_data_character(data_test,data_true);ck_assert_int_eq(check,TRUE);}END_TEST
START_TEST(tc_character_capacities_tc117){int check = FALSE;character_capacities_t data_test,data_true;data_true.numeric_mode = 4158;data_true.alphanumeric_mode = 2520;data_true.byte_mode = 1732;data_true.kanji_mode = 1066;data_test = version_qr(VERSION_30, LEVEL_L);check = check_data_character(data_test,data_true);ck_assert_int_eq(check,TRUE);}END_TEST
START_TEST(tc_character_capacities_tc118){int check = FALSE;character_capacities_t data_test,data_true;data_true.numeric_mode = 3289;data_true.alphanumeric_mode = 1994;data_true.byte_mode = 1370;data_true.kanji_mode = 843;data_test = version_qr(VERSION_30, LEVEL_M);check = check_data_character(data_test,data_true);ck_assert_int_eq(check,TRUE);}END_TEST
START_TEST(tc_character_capacities_tc119){int check = FALSE;character_capacities_t data_test,data_true;data_true.numeric_mode = 2358;data_true.alphanumeric_mode = 1429;data_true.byte_mode = 982;data_true.kanji_mode = 604;data_test = version_qr(VERSION_30, LEVEL_Q);check = check_data_character(data_test,data_true);ck_assert_int_eq(check,TRUE);}END_TEST
START_TEST(tc_character_capacities_tc120){int check = FALSE;character_capacities_t data_test,data_true;data_true.numeric_mode = 1782;data_true.alphanumeric_mode = 1080;data_true.byte_mode = 742;data_true.kanji_mode = 457;data_test = version_qr(VERSION_30, LEVEL_H);check = check_data_character(data_test,data_true);ck_assert_int_eq(check,TRUE);}END_TEST
START_TEST(tc_character_capacities_tc121){int check = FALSE;character_capacities_t data_test,data_true;data_true.numeric_mode = 4417;data_true.alphanumeric_mode = 2677;data_true.byte_mode = 1840;data_true.kanji_mode = 1132;data_test = version_qr(VERSION_31, LEVEL_L);check = check_data_character(data_test,data_true);ck_assert_int_eq(check,TRUE);}END_TEST
START_TEST(tc_character_capacities_tc122){int check = FALSE;character_capacities_t data_test,data_true;data_true.numeric_mode = 3486;data_true.alphanumeric_mode = 2113;data_true.byte_mode = 1452;data_true.kanji_mode = 894;data_test = version_qr(VERSION_31, LEVEL_M);check = check_data_character(data_test,data_true);ck_assert_int_eq(check,TRUE);}END_TEST
START_TEST(tc_character_capacities_tc123){int check = FALSE;character_capacities_t data_test,data_true;data_true.numeric_mode = 2473;data_true.alphanumeric_mode = 1499;data_true.byte_mode = 1030;data_true.kanji_mode = 634;data_test = version_qr(VERSION_31, LEVEL_Q);check = check_data_character(data_test,data_true);ck_assert_int_eq(check,TRUE);}END_TEST
START_TEST(tc_character_capacities_tc124){int check = FALSE;character_capacities_t data_test,data_true;data_true.numeric_mode = 1897;data_true.alphanumeric_mode = 1150;data_true.byte_mode = 790;data_true.kanji_mode = 486;data_test = version_qr(VERSION_31, LEVEL_H);check = check_data_character(data_test,data_true);ck_assert_int_eq(check,TRUE);}END_TEST
START_TEST(tc_character_capacities_tc125){int check = FALSE;character_capacities_t data_test,data_true;data_true.numeric_mode = 4686;data_true.alphanumeric_mode = 2840;data_true.byte_mode = 1952;data_true.kanji_mode = 1201;data_test = version_qr(VERSION_32, LEVEL_L);check = check_data_character(data_test,data_true);ck_assert_int_eq(check,TRUE);}END_TEST
START_TEST(tc_character_capacities_tc126){int check = FALSE;character_capacities_t data_test,data_true;data_true.numeric_mode = 3693;data_true.alphanumeric_mode = 2238;data_true.byte_mode = 1538;data_true.kanji_mode = 947;data_test = version_qr(VERSION_32, LEVEL_M);check = check_data_character(data_test,data_true);ck_assert_int_eq(check,TRUE);}END_TEST
START_TEST(tc_character_capacities_tc127){int check = FALSE;character_capacities_t data_test,data_true;data_true.numeric_mode = 2670;data_true.alphanumeric_mode = 1618;data_true.byte_mode = 1112;data_true.kanji_mode = 684;data_test = version_qr(VERSION_32, LEVEL_Q);check = check_data_character(data_test,data_true);ck_assert_int_eq(check,TRUE);}END_TEST
START_TEST(tc_character_capacities_tc128){int check = FALSE;character_capacities_t data_test,data_true;data_true.numeric_mode = 2022;data_true.alphanumeric_mode = 1226;data_true.byte_mode = 842;data_true.kanji_mode = 518;data_test = version_qr(VERSION_32, LEVEL_H);check = check_data_character(data_test,data_true);ck_assert_int_eq(check,TRUE);}END_TEST
START_TEST(tc_character_capacities_tc129){int check = FALSE;character_capacities_t data_test,data_true;data_true.numeric_mode = 4965;data_true.alphanumeric_mode = 3009;data_true.byte_mode = 2068;data_true.kanji_mode = 1273;data_test = version_qr(VERSION_33, LEVEL_L);check = check_data_character(data_test,data_true);ck_assert_int_eq(check,TRUE);}END_TEST
START_TEST(tc_character_capacities_tc130){int check = FALSE;character_capacities_t data_test,data_true;data_true.numeric_mode = 3909;data_true.alphanumeric_mode = 2369;data_true.byte_mode = 1628;data_true.kanji_mode = 1002;data_test = version_qr(VERSION_33, LEVEL_M);check = check_data_character(data_test,data_true);ck_assert_int_eq(check,TRUE);}END_TEST
START_TEST(tc_character_capacities_tc131){int check = FALSE;character_capacities_t data_test,data_true;data_true.numeric_mode = 2805;data_true.alphanumeric_mode = 1700;data_true.byte_mode = 1168;data_true.kanji_mode = 719;data_test = version_qr(VERSION_33, LEVEL_Q);check = check_data_character(data_test,data_true);ck_assert_int_eq(check,TRUE);}END_TEST
START_TEST(tc_character_capacities_tc132){int check = FALSE;character_capacities_t data_test,data_true;data_true.numeric_mode = 2157;data_true.alphanumeric_mode = 1307;data_true.byte_mode = 898;data_true.kanji_mode = 553;data_test = version_qr(VERSION_33, LEVEL_H);check = check_data_character(data_test,data_true);ck_assert_int_eq(check,TRUE);}END_TEST
START_TEST(tc_character_capacities_tc133){int check = FALSE;character_capacities_t data_test,data_true;data_true.numeric_mode = 5253;data_true.alphanumeric_mode = 3183;data_true.byte_mode = 2188;data_true.kanji_mode = 1347;data_test = version_qr(VERSION_34, LEVEL_L);check = check_data_character(data_test,data_true);ck_assert_int_eq(check,TRUE);}END_TEST
START_TEST(tc_character_capacities_tc134){int check = FALSE;character_capacities_t data_test,data_true;data_true.numeric_mode = 4134;data_true.alphanumeric_mode = 2506;data_true.byte_mode = 1722;data_true.kanji_mode = 1060;data_test = version_qr(VERSION_34, LEVEL_M);check = check_data_character(data_test,data_true);ck_assert_int_eq(check,TRUE);}END_TEST
START_TEST(tc_character_capacities_tc135){int check = FALSE;character_capacities_t data_test,data_true;data_true.numeric_mode = 2949;data_true.alphanumeric_mode = 1787;data_true.byte_mode = 1228;data_true.kanji_mode = 756;data_test = version_qr(VERSION_34, LEVEL_Q);check = check_data_character(data_test,data_true);ck_assert_int_eq(check,TRUE);}END_TEST
START_TEST(tc_character_capacities_tc136){int check = FALSE;character_capacities_t data_test,data_true;data_true.numeric_mode = 2301;data_true.alphanumeric_mode = 1394;data_true.byte_mode = 958;data_true.kanji_mode = 590;data_test = version_qr(VERSION_34, LEVEL_H);check = check_data_character(data_test,data_true);ck_assert_int_eq(check,TRUE);}END_TEST
START_TEST(tc_character_capacities_tc137){int check = FALSE;character_capacities_t data_test,data_true;data_true.numeric_mode = 5529;data_true.alphanumeric_mode = 3351;data_true.byte_mode = 2303;data_true.kanji_mode = 1417;data_test = version_qr(VERSION_35, LEVEL_L);check = check_data_character(data_test,data_true);ck_assert_int_eq(check,TRUE);}END_TEST
START_TEST(tc_character_capacities_tc138){int check = FALSE;character_capacities_t data_test,data_true;data_true.numeric_mode = 4343;data_true.alphanumeric_mode = 2632;data_true.byte_mode = 1809;data_true.kanji_mode = 1113;data_test = version_qr(VERSION_35, LEVEL_M);check = check_data_character(data_test,data_true);ck_assert_int_eq(check,TRUE);}END_TEST
START_TEST(tc_character_capacities_tc139){int check = FALSE;character_capacities_t data_test,data_true;data_true.numeric_mode = 3081;data_true.alphanumeric_mode = 1867;data_true.byte_mode = 1283;data_true.kanji_mode = 790;data_test = version_qr(VERSION_35, LEVEL_Q);check = check_data_character(data_test,data_true);ck_assert_int_eq(check,TRUE);}END_TEST
START_TEST(tc_character_capacities_tc140){int check = FALSE;character_capacities_t data_test,data_true;data_true.numeric_mode = 2361;data_true.alphanumeric_mode = 1431;data_true.byte_mode = 983;data_true.kanji_mode = 605;data_test = version_qr(VERSION_35, LEVEL_H);check = check_data_character(data_test,data_true);ck_assert_int_eq(check,TRUE);}END_TEST
START_TEST(tc_character_capacities_tc141){int check = FALSE;character_capacities_t data_test,data_true;data_true.numeric_mode = 5836;data_true.alphanumeric_mode = 3537;data_true.byte_mode = 2431;data_true.kanji_mode = 1496;data_test = version_qr(VERSION_36, LEVEL_L);check = check_data_character(data_test,data_true);ck_assert_int_eq(check,TRUE);}END_TEST
START_TEST(tc_character_capacities_tc142){int check = FALSE;character_capacities_t data_test,data_true;data_true.numeric_mode = 4588;data_true.alphanumeric_mode = 2780;data_true.byte_mode = 1911;data_true.kanji_mode = 1176;data_test = version_qr(VERSION_36, LEVEL_M);check = check_data_character(data_test,data_true);ck_assert_int_eq(check,TRUE);}END_TEST
START_TEST(tc_character_capacities_tc143){int check = FALSE;character_capacities_t data_test,data_true;data_true.numeric_mode = 3244;data_true.alphanumeric_mode = 1966;data_true.byte_mode = 1351;data_true.kanji_mode = 832;data_test = version_qr(VERSION_36, LEVEL_Q);check = check_data_character(data_test,data_true);ck_assert_int_eq(check,TRUE);}END_TEST
START_TEST(tc_character_capacities_tc144){int check = FALSE;character_capacities_t data_test,data_true;data_true.numeric_mode = 2524;data_true.alphanumeric_mode = 1530;data_true.byte_mode = 1051;data_true.kanji_mode = 647;data_test = version_qr(VERSION_36, LEVEL_H);check = check_data_character(data_test,data_true);ck_assert_int_eq(check,TRUE);}END_TEST
START_TEST(tc_character_capacities_tc145){int check = FALSE;character_capacities_t data_test,data_true;data_true.numeric_mode = 6153;data_true.alphanumeric_mode = 3729;data_true.byte_mode = 2563;data_true.kanji_mode = 1577;data_test = version_qr(VERSION_37, LEVEL_L);check = check_data_character(data_test,data_true);ck_assert_int_eq(check,TRUE);}END_TEST
START_TEST(tc_character_capacities_tc146){int check = FALSE;character_capacities_t data_test,data_true;data_true.numeric_mode = 4775;data_true.alphanumeric_mode = 2894;data_true.byte_mode = 1989;data_true.kanji_mode = 1224;data_test = version_qr(VERSION_37, LEVEL_M);check = check_data_character(data_test,data_true);ck_assert_int_eq(check,TRUE);}END_TEST
START_TEST(tc_character_capacities_tc147){int check = FALSE;character_capacities_t data_test,data_true;data_true.numeric_mode = 3417;data_true.alphanumeric_mode = 2071;data_true.byte_mode = 1423;data_true.kanji_mode = 876;data_test = version_qr(VERSION_37, LEVEL_Q);check = check_data_character(data_test,data_true);ck_assert_int_eq(check,TRUE);}END_TEST
START_TEST(tc_character_capacities_tc148){int check = FALSE;character_capacities_t data_test,data_true;data_true.numeric_mode = 2625;data_true.alphanumeric_mode = 1591;data_true.byte_mode = 1093;data_true.kanji_mode = 673;data_test = version_qr(VERSION_37, LEVEL_H);check = check_data_character(data_test,data_true);ck_assert_int_eq(check,TRUE);}END_TEST
START_TEST(tc_character_capacities_tc149){int check = FALSE;character_capacities_t data_test,data_true;data_true.numeric_mode = 6479;data_true.alphanumeric_mode = 3927;data_true.byte_mode = 2699;data_true.kanji_mode = 1661;data_test = version_qr(VERSION_38, LEVEL_L);check = check_data_character(data_test,data_true);ck_assert_int_eq(check,TRUE);}END_TEST
START_TEST(tc_character_capacities_tc150){int check = FALSE;character_capacities_t data_test,data_true;data_true.numeric_mode = 5039;data_true.alphanumeric_mode = 3054;data_true.byte_mode = 2099;data_true.kanji_mode = 1292;data_test = version_qr(VERSION_38, LEVEL_M);check = check_data_character(data_test,data_true);ck_assert_int_eq(check,TRUE);}END_TEST
START_TEST(tc_character_capacities_tc151){int check = FALSE;character_capacities_t data_test,data_true;data_true.numeric_mode = 3599;data_true.alphanumeric_mode = 2181;data_true.byte_mode = 1499;data_true.kanji_mode = 923;data_test = version_qr(VERSION_38, LEVEL_Q);check = check_data_character(data_test,data_true);ck_assert_int_eq(check,TRUE);}END_TEST
START_TEST(tc_character_capacities_tc152){int check = FALSE;character_capacities_t data_test,data_true;data_true.numeric_mode = 2735;data_true.alphanumeric_mode = 1658;data_true.byte_mode = 1139;data_true.kanji_mode = 701;data_test = version_qr(VERSION_38, LEVEL_H);check = check_data_character(data_test,data_true);ck_assert_int_eq(check,TRUE);}END_TEST
START_TEST(tc_character_capacities_tc153){int check = FALSE;character_capacities_t data_test,data_true;data_true.numeric_mode = 6743;data_true.alphanumeric_mode = 4087;data_true.byte_mode = 2809;data_true.kanji_mode = 1729;data_test = version_qr(VERSION_39, LEVEL_L);check = check_data_character(data_test,data_true);ck_assert_int_eq(check,TRUE);}END_TEST
START_TEST(tc_character_capacities_tc154){int check = FALSE;character_capacities_t data_test,data_true;data_true.numeric_mode = 5313;data_true.alphanumeric_mode = 3220;data_true.byte_mode = 2213;data_true.kanji_mode = 1362;data_test = version_qr(VERSION_39, LEVEL_M);check = check_data_character(data_test,data_true);ck_assert_int_eq(check,TRUE);}END_TEST
START_TEST(tc_character_capacities_tc155){int check = FALSE;character_capacities_t data_test,data_true;data_true.numeric_mode = 3791;data_true.alphanumeric_mode = 2298;data_true.byte_mode = 1579;data_true.kanji_mode = 972;data_test = version_qr(VERSION_39, LEVEL_Q);check = check_data_character(data_test,data_true);ck_assert_int_eq(check,TRUE);}END_TEST
START_TEST(tc_character_capacities_tc156){int check = FALSE;character_capacities_t data_test,data_true;data_true.numeric_mode = 2927;data_true.alphanumeric_mode = 1774;data_true.byte_mode = 1219;data_true.kanji_mode = 750;data_test = version_qr(VERSION_39, LEVEL_H);check = check_data_character(data_test,data_true);ck_assert_int_eq(check,TRUE);}END_TEST
START_TEST(tc_character_capacities_tc157){int check = FALSE;character_capacities_t data_test,data_true;data_true.numeric_mode = 7089;data_true.alphanumeric_mode = 4296;data_true.byte_mode = 2953;data_true.kanji_mode = 1817;data_test = version_qr(VERSION_40, LEVEL_L);check = check_data_character(data_test,data_true);ck_assert_int_eq(check,TRUE);}END_TEST
START_TEST(tc_character_capacities_tc158){int check = FALSE;character_capacities_t data_test,data_true;data_true.numeric_mode = 5596;data_true.alphanumeric_mode = 3391;data_true.byte_mode = 2331;data_true.kanji_mode = 1435;data_test = version_qr(VERSION_40, LEVEL_M);check = check_data_character(data_test,data_true);ck_assert_int_eq(check,TRUE);}END_TEST
START_TEST(tc_character_capacities_tc159){int check = FALSE;character_capacities_t data_test,data_true;data_true.numeric_mode = 3993;data_true.alphanumeric_mode = 2420;data_true.byte_mode = 1663;data_true.kanji_mode = 1024;data_test = version_qr(VERSION_40, LEVEL_Q);check = check_data_character(data_test,data_true);ck_assert_int_eq(check,TRUE);}END_TEST
START_TEST(tc_character_capacities_tc160){int check = FALSE;character_capacities_t data_test,data_true;data_true.numeric_mode = 3057;data_true.alphanumeric_mode = 1852;data_true.byte_mode = 1273;data_true.kanji_mode = 784;data_test = version_qr(VERSION_40, LEVEL_H);check = check_data_character(data_test,data_true);ck_assert_int_eq(check,TRUE);}END_TEST


TCase* tc_character_capacities() {
	TCase* tc_character_capacities = tcase_create("tc_character_capacities_test");
	tcase_add_test(tc_character_capacities, tc_character_capacities_tc1);
	tcase_add_test(tc_character_capacities, tc_character_capacities_tc2);
	tcase_add_test(tc_character_capacities, tc_character_capacities_tc3);
	tcase_add_test(tc_character_capacities, tc_character_capacities_tc4);
	tcase_add_test(tc_character_capacities, tc_character_capacities_tc5);
	tcase_add_test(tc_character_capacities, tc_character_capacities_tc6);
	tcase_add_test(tc_character_capacities, tc_character_capacities_tc7);
	tcase_add_test(tc_character_capacities, tc_character_capacities_tc8);
	tcase_add_test(tc_character_capacities, tc_character_capacities_tc9);
	tcase_add_test(tc_character_capacities, tc_character_capacities_tc10);
	tcase_add_test(tc_character_capacities, tc_character_capacities_tc11);
	tcase_add_test(tc_character_capacities, tc_character_capacities_tc12);
	tcase_add_test(tc_character_capacities, tc_character_capacities_tc13);
	tcase_add_test(tc_character_capacities, tc_character_capacities_tc14);
	tcase_add_test(tc_character_capacities, tc_character_capacities_tc15);
	tcase_add_test(tc_character_capacities, tc_character_capacities_tc16);
	tcase_add_test(tc_character_capacities, tc_character_capacities_tc17);
	tcase_add_test(tc_character_capacities, tc_character_capacities_tc18);
	tcase_add_test(tc_character_capacities, tc_character_capacities_tc19);
	tcase_add_test(tc_character_capacities, tc_character_capacities_tc20);
	tcase_add_test(tc_character_capacities, tc_character_capacities_tc21);
	tcase_add_test(tc_character_capacities, tc_character_capacities_tc22);
	tcase_add_test(tc_character_capacities, tc_character_capacities_tc23);
	tcase_add_test(tc_character_capacities, tc_character_capacities_tc24);
	tcase_add_test(tc_character_capacities, tc_character_capacities_tc25);
	tcase_add_test(tc_character_capacities, tc_character_capacities_tc26);
	tcase_add_test(tc_character_capacities, tc_character_capacities_tc27);
	tcase_add_test(tc_character_capacities, tc_character_capacities_tc28);
	tcase_add_test(tc_character_capacities, tc_character_capacities_tc29);
	tcase_add_test(tc_character_capacities, tc_character_capacities_tc30);
	tcase_add_test(tc_character_capacities, tc_character_capacities_tc31);
	tcase_add_test(tc_character_capacities, tc_character_capacities_tc32);
	tcase_add_test(tc_character_capacities, tc_character_capacities_tc33);
	tcase_add_test(tc_character_capacities, tc_character_capacities_tc34);
	tcase_add_test(tc_character_capacities, tc_character_capacities_tc35);
	tcase_add_test(tc_character_capacities, tc_character_capacities_tc36);
	tcase_add_test(tc_character_capacities, tc_character_capacities_tc37);
	tcase_add_test(tc_character_capacities, tc_character_capacities_tc38);
	tcase_add_test(tc_character_capacities, tc_character_capacities_tc39);
	tcase_add_test(tc_character_capacities, tc_character_capacities_tc40);
	tcase_add_test(tc_character_capacities, tc_character_capacities_tc41);
	tcase_add_test(tc_character_capacities, tc_character_capacities_tc42);
	tcase_add_test(tc_character_capacities, tc_character_capacities_tc43);
	tcase_add_test(tc_character_capacities, tc_character_capacities_tc44);
	tcase_add_test(tc_character_capacities, tc_character_capacities_tc45);
	tcase_add_test(tc_character_capacities, tc_character_capacities_tc46);
	tcase_add_test(tc_character_capacities, tc_character_capacities_tc47);
	tcase_add_test(tc_character_capacities, tc_character_capacities_tc48);
	tcase_add_test(tc_character_capacities, tc_character_capacities_tc49);
	tcase_add_test(tc_character_capacities, tc_character_capacities_tc50);
	tcase_add_test(tc_character_capacities, tc_character_capacities_tc51);
	tcase_add_test(tc_character_capacities, tc_character_capacities_tc52);
	tcase_add_test(tc_character_capacities, tc_character_capacities_tc53);
	tcase_add_test(tc_character_capacities, tc_character_capacities_tc54);
	tcase_add_test(tc_character_capacities, tc_character_capacities_tc55);
	tcase_add_test(tc_character_capacities, tc_character_capacities_tc56);
	tcase_add_test(tc_character_capacities, tc_character_capacities_tc57);
	tcase_add_test(tc_character_capacities, tc_character_capacities_tc58);
	tcase_add_test(tc_character_capacities, tc_character_capacities_tc59);
	tcase_add_test(tc_character_capacities, tc_character_capacities_tc60);
	tcase_add_test(tc_character_capacities, tc_character_capacities_tc61);
	tcase_add_test(tc_character_capacities, tc_character_capacities_tc62);
	tcase_add_test(tc_character_capacities, tc_character_capacities_tc63);
	tcase_add_test(tc_character_capacities, tc_character_capacities_tc64);
	tcase_add_test(tc_character_capacities, tc_character_capacities_tc65);
	tcase_add_test(tc_character_capacities, tc_character_capacities_tc66);
	tcase_add_test(tc_character_capacities, tc_character_capacities_tc67);
	tcase_add_test(tc_character_capacities, tc_character_capacities_tc68);
	tcase_add_test(tc_character_capacities, tc_character_capacities_tc69);
	tcase_add_test(tc_character_capacities, tc_character_capacities_tc70);
	tcase_add_test(tc_character_capacities, tc_character_capacities_tc71);
	tcase_add_test(tc_character_capacities, tc_character_capacities_tc72);
	tcase_add_test(tc_character_capacities, tc_character_capacities_tc73);
	tcase_add_test(tc_character_capacities, tc_character_capacities_tc74);
	tcase_add_test(tc_character_capacities, tc_character_capacities_tc75);
	tcase_add_test(tc_character_capacities, tc_character_capacities_tc76);
	tcase_add_test(tc_character_capacities, tc_character_capacities_tc77);
	tcase_add_test(tc_character_capacities, tc_character_capacities_tc78);
	tcase_add_test(tc_character_capacities, tc_character_capacities_tc79);
	tcase_add_test(tc_character_capacities, tc_character_capacities_tc80);
	tcase_add_test(tc_character_capacities, tc_character_capacities_tc81);
	tcase_add_test(tc_character_capacities, tc_character_capacities_tc82);
	tcase_add_test(tc_character_capacities, tc_character_capacities_tc83);
	tcase_add_test(tc_character_capacities, tc_character_capacities_tc84);
	tcase_add_test(tc_character_capacities, tc_character_capacities_tc85);
	tcase_add_test(tc_character_capacities, tc_character_capacities_tc86);
	tcase_add_test(tc_character_capacities, tc_character_capacities_tc87);
	tcase_add_test(tc_character_capacities, tc_character_capacities_tc88);
	tcase_add_test(tc_character_capacities, tc_character_capacities_tc89);
	tcase_add_test(tc_character_capacities, tc_character_capacities_tc90);
	tcase_add_test(tc_character_capacities, tc_character_capacities_tc91);
	tcase_add_test(tc_character_capacities, tc_character_capacities_tc92);
	tcase_add_test(tc_character_capacities, tc_character_capacities_tc93);
	tcase_add_test(tc_character_capacities, tc_character_capacities_tc94);
	tcase_add_test(tc_character_capacities, tc_character_capacities_tc95);
	tcase_add_test(tc_character_capacities, tc_character_capacities_tc96);
	tcase_add_test(tc_character_capacities, tc_character_capacities_tc97);
	tcase_add_test(tc_character_capacities, tc_character_capacities_tc98);
	tcase_add_test(tc_character_capacities, tc_character_capacities_tc99);
	tcase_add_test(tc_character_capacities, tc_character_capacities_tc100);
	tcase_add_test(tc_character_capacities, tc_character_capacities_tc101);
	tcase_add_test(tc_character_capacities, tc_character_capacities_tc102);
	tcase_add_test(tc_character_capacities, tc_character_capacities_tc103);
	tcase_add_test(tc_character_capacities, tc_character_capacities_tc104);
	tcase_add_test(tc_character_capacities, tc_character_capacities_tc105);
	tcase_add_test(tc_character_capacities, tc_character_capacities_tc106);
	tcase_add_test(tc_character_capacities, tc_character_capacities_tc107);
	tcase_add_test(tc_character_capacities, tc_character_capacities_tc108);
	tcase_add_test(tc_character_capacities, tc_character_capacities_tc109);
	tcase_add_test(tc_character_capacities, tc_character_capacities_tc110);
	tcase_add_test(tc_character_capacities, tc_character_capacities_tc111);
	tcase_add_test(tc_character_capacities, tc_character_capacities_tc112);
	tcase_add_test(tc_character_capacities, tc_character_capacities_tc113);
	tcase_add_test(tc_character_capacities, tc_character_capacities_tc114);
	tcase_add_test(tc_character_capacities, tc_character_capacities_tc115);
	tcase_add_test(tc_character_capacities, tc_character_capacities_tc116);
	tcase_add_test(tc_character_capacities, tc_character_capacities_tc117);
	tcase_add_test(tc_character_capacities, tc_character_capacities_tc118);
	tcase_add_test(tc_character_capacities, tc_character_capacities_tc119);
	tcase_add_test(tc_character_capacities, tc_character_capacities_tc120);
	tcase_add_test(tc_character_capacities, tc_character_capacities_tc121);
	tcase_add_test(tc_character_capacities, tc_character_capacities_tc122);
	tcase_add_test(tc_character_capacities, tc_character_capacities_tc123);
	tcase_add_test(tc_character_capacities, tc_character_capacities_tc124);
	tcase_add_test(tc_character_capacities, tc_character_capacities_tc125);
	tcase_add_test(tc_character_capacities, tc_character_capacities_tc126);
	tcase_add_test(tc_character_capacities, tc_character_capacities_tc127);
	tcase_add_test(tc_character_capacities, tc_character_capacities_tc128);
	tcase_add_test(tc_character_capacities, tc_character_capacities_tc129);
	tcase_add_test(tc_character_capacities, tc_character_capacities_tc130);
	tcase_add_test(tc_character_capacities, tc_character_capacities_tc131);
	tcase_add_test(tc_character_capacities, tc_character_capacities_tc132);
	tcase_add_test(tc_character_capacities, tc_character_capacities_tc133);
	tcase_add_test(tc_character_capacities, tc_character_capacities_tc134);
	tcase_add_test(tc_character_capacities, tc_character_capacities_tc135);
	tcase_add_test(tc_character_capacities, tc_character_capacities_tc136);
	tcase_add_test(tc_character_capacities, tc_character_capacities_tc137);
	tcase_add_test(tc_character_capacities, tc_character_capacities_tc138);
	tcase_add_test(tc_character_capacities, tc_character_capacities_tc139);
	tcase_add_test(tc_character_capacities, tc_character_capacities_tc140);
	tcase_add_test(tc_character_capacities, tc_character_capacities_tc141);
	tcase_add_test(tc_character_capacities, tc_character_capacities_tc142);
	tcase_add_test(tc_character_capacities, tc_character_capacities_tc143);
	tcase_add_test(tc_character_capacities, tc_character_capacities_tc144);
	tcase_add_test(tc_character_capacities, tc_character_capacities_tc145);
	tcase_add_test(tc_character_capacities, tc_character_capacities_tc146);
	tcase_add_test(tc_character_capacities, tc_character_capacities_tc147);
	tcase_add_test(tc_character_capacities, tc_character_capacities_tc148);
	tcase_add_test(tc_character_capacities, tc_character_capacities_tc149);
	tcase_add_test(tc_character_capacities, tc_character_capacities_tc150);
	tcase_add_test(tc_character_capacities, tc_character_capacities_tc151);
	tcase_add_test(tc_character_capacities, tc_character_capacities_tc152);
	tcase_add_test(tc_character_capacities, tc_character_capacities_tc153);
	tcase_add_test(tc_character_capacities, tc_character_capacities_tc154);
	tcase_add_test(tc_character_capacities, tc_character_capacities_tc155);
	tcase_add_test(tc_character_capacities, tc_character_capacities_tc156);
	tcase_add_test(tc_character_capacities, tc_character_capacities_tc157);
	tcase_add_test(tc_character_capacities, tc_character_capacities_tc158);
	tcase_add_test(tc_character_capacities, tc_character_capacities_tc159);
	tcase_add_test(tc_character_capacities, tc_character_capacities_tc160);
	return tc_character_capacities;
}
