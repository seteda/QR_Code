/*
 * db_main.c
 *
 *  Created on: Nov 30, 2015
 *      Author: tungnt
 */
#include "../include/db_main.h"


/* =======================================================================
 * EXTERNAL API
 * ======================================================================*/

/* return character_capacities_t structure */
character_capacities_t version_qr(VERSION_QR version,ERROR_CORRECT_LEVEL level){
	character_capacities_t version_info;
	int version_level=0;
	version_level = version | level;
	switch (version_level) {
		case 0x0101: /* LEVEL_L, VERSION_1 */
			version_info.numeric_mode = 41;
			version_info.alphanumeric_mode = 25;
			version_info.byte_mode = 17;
			version_info.kanji_mode = 10;
			break;
		case 0x0201: /* LEVEL_M, VERSION_1*/
			version_info.numeric_mode = 34;
			version_info.alphanumeric_mode = 20;
			version_info.byte_mode = 14;
			version_info.kanji_mode = 8;
			break;
		case 0x0301: /* LEVEL_Q, VERSION_1*/
			version_info.numeric_mode = 27;
			version_info.alphanumeric_mode = 16;
			version_info.byte_mode = 11;
			version_info.kanji_mode = 7;
			break;
		case 0x0401: /* LEVEL_H, VERSION_1*/
			version_info.numeric_mode = 17;
			version_info.alphanumeric_mode = 10;
			version_info.byte_mode = 7;
			version_info.kanji_mode = 4;
			break;
		case 0x0102: /* LEVEL_L, VERSION_2*/
			version_info.numeric_mode = 77;
			version_info.alphanumeric_mode = 47;
			version_info.byte_mode = 32;
			version_info.kanji_mode = 20;
			break;
		case 0x0202: /* LEVEL_M, VERSION_2*/
			version_info.numeric_mode = 63;
			version_info.alphanumeric_mode = 38;
			version_info.byte_mode = 26;
			version_info.kanji_mode = 16;
			break;
		case 0x0302: /* LEVEL_Q, VERSION_2*/
			version_info.numeric_mode = 48;
			version_info.alphanumeric_mode = 29;
			version_info.byte_mode = 20;
			version_info.kanji_mode = 12;
			break;
		case 0x0402: /* LEVEL_H, VERSION_2*/
			version_info.numeric_mode = 34;
			version_info.alphanumeric_mode = 20;
			version_info.byte_mode = 14;
			version_info.kanji_mode = 8;
			break;
		case 0x0103: /* LEVEL_L, VERSION_3*/
			version_info.numeric_mode = 127;
			version_info.alphanumeric_mode = 77;
			version_info.byte_mode = 53;
			version_info.kanji_mode = 32;
			break;
		case 0x0203: /* LEVEL_M, VERSION_3*/
			version_info.numeric_mode = 101;
			version_info.alphanumeric_mode = 61;
			version_info.byte_mode = 42;
			version_info.kanji_mode = 26;
			break;
		case 0x0303: /* LEVEL_Q, VERSION_3*/
			version_info.numeric_mode = 77;
			version_info.alphanumeric_mode = 47;
			version_info.byte_mode = 32;
			version_info.kanji_mode = 20;
			break;
		case 0x0403: /* LEVEL_H, VERSION_3*/
			version_info.numeric_mode = 58;
			version_info.alphanumeric_mode = 35;
			version_info.byte_mode = 24;
			version_info.kanji_mode = 15;
			break;
		case 0x0104: /* LEVEL_L, VERSION_4*/
			version_info.numeric_mode = 187;
			version_info.alphanumeric_mode = 114;
			version_info.byte_mode = 78;
			version_info.kanji_mode = 48;
			break;
		case 0x0204: /* LEVEL_M, VERSION_4*/
			version_info.numeric_mode = 149;
			version_info.alphanumeric_mode = 90;
			version_info.byte_mode = 62;
			version_info.kanji_mode = 38;
			break;
		case 0x0304: /* LEVEL_Q, VERSION_4*/
			version_info.numeric_mode = 111;
			version_info.alphanumeric_mode = 67;
			version_info.byte_mode = 46;
			version_info.kanji_mode = 28;
			break;
		case 0x0404: /* LEVEL_H, VERSION_4*/
			version_info.numeric_mode = 82;
			version_info.alphanumeric_mode = 50;
			version_info.byte_mode = 34;
			version_info.kanji_mode = 21;
			break;
		case 0x0105: /* LEVEL_L, VERSION_5*/
			version_info.numeric_mode = 255;
			version_info.alphanumeric_mode = 154;
			version_info.byte_mode = 106;
			version_info.kanji_mode = 65;
			break;
		case 0x0205: /* LEVEL_M, VERSION_5*/
			version_info.numeric_mode = 202;
			version_info.alphanumeric_mode = 122;
			version_info.byte_mode = 84;
			version_info.kanji_mode = 52;
			break;
		case 0x0305: /* LEVEL_Q, VERSION_5*/
			version_info.numeric_mode = 144;
			version_info.alphanumeric_mode = 87;
			version_info.byte_mode = 60;
			version_info.kanji_mode = 37;
			break;
		case 0x0405: /* LEVEL_H, VERSION_5*/
			version_info.numeric_mode = 106;
			version_info.alphanumeric_mode = 64;
			version_info.byte_mode = 44;
			version_info.kanji_mode = 27;
			break;
		case 0x0106: /* LEVEL_L, VERSION_6*/
			version_info.numeric_mode = 322;
			version_info.alphanumeric_mode = 195;
			version_info.byte_mode = 134;
			version_info.kanji_mode = 82;
			break;
		case 0x0206: /* LEVEL_M, VERSION_6*/
			version_info.numeric_mode = 255;
			version_info.alphanumeric_mode = 154;
			version_info.byte_mode = 106;
			version_info.kanji_mode = 65;
			break;
		case 0x0306: /* LEVEL_Q, VERSION_6*/
			version_info.numeric_mode = 178;
			version_info.alphanumeric_mode = 108;
			version_info.byte_mode = 74;
			version_info.kanji_mode = 45;
			break;
		case 0x0406: /* LEVEL_H, VERSION_6*/
			version_info.numeric_mode = 139;
			version_info.alphanumeric_mode = 84;
			version_info.byte_mode = 58;
			version_info.kanji_mode = 36;
			break;
		case 0x0107: /* LEVEL_L, VERSION_7*/
			version_info.numeric_mode = 370;
			version_info.alphanumeric_mode = 224;
			version_info.byte_mode = 154;
			version_info.kanji_mode = 95;
			break;
		case 0x0207: /* LEVEL_M, VERSION_7*/
			version_info.numeric_mode = 293;
			version_info.alphanumeric_mode = 178;
			version_info.byte_mode = 122;
			version_info.kanji_mode = 75;
			break;
		case 0x0307: /* LEVEL_Q, VERSION_7*/
			version_info.numeric_mode = 207;
			version_info.alphanumeric_mode = 125;
			version_info.byte_mode = 86;
			version_info.kanji_mode = 53;
			break;
		case 0x0407: /* LEVEL_H, VERSION_7*/
			version_info.numeric_mode = 154;
			version_info.alphanumeric_mode = 93;
			version_info.byte_mode = 64;
			version_info.kanji_mode = 39;
			break;
		case 0x0108: /* LEVEL_L, VERSION_8*/
			version_info.numeric_mode = 461;
			version_info.alphanumeric_mode = 279;
			version_info.byte_mode = 192;
			version_info.kanji_mode = 118;
			break;
		case 0x0208: /* LEVEL_M, VERSION_8*/
			version_info.numeric_mode = 365;
			version_info.alphanumeric_mode = 221;
			version_info.byte_mode = 152;
			version_info.kanji_mode = 93;
			break;
		case 0x0308: /* LEVEL_Q, VERSION_8*/
			version_info.numeric_mode = 259;
			version_info.alphanumeric_mode = 157;
			version_info.byte_mode = 108;
			version_info.kanji_mode = 66;
			break;
		case 0x0408: /* LEVEL_H, VERSION_8*/
			version_info.numeric_mode = 202;
			version_info.alphanumeric_mode = 122;
			version_info.byte_mode = 84;
			version_info.kanji_mode = 52;
			break;
		case 0x0109: /* LEVEL_L, VERSION_9*/
			version_info.numeric_mode = 552;
			version_info.alphanumeric_mode = 335;
			version_info.byte_mode = 230;
			version_info.kanji_mode = 141;
			break;
		case 0x0209: /* LEVEL_M, VERSION_9*/
			version_info.numeric_mode = 432;
			version_info.alphanumeric_mode = 262;
			version_info.byte_mode = 180;
			version_info.kanji_mode = 111;
			break;
		case 0x0309: /* LEVEL_Q, VERSION_9*/
			version_info.numeric_mode = 312;
			version_info.alphanumeric_mode = 189;
			version_info.byte_mode = 130;
			version_info.kanji_mode = 80;
			break;
		case 0x0409: /* LEVEL_H, VERSION_9*/
			version_info.numeric_mode = 235;
			version_info.alphanumeric_mode = 143;
			version_info.byte_mode = 98;
			version_info.kanji_mode = 60;
			break;
		case 0x010A: /* LEVEL_L, VERSION_10*/
			version_info.numeric_mode = 652;
			version_info.alphanumeric_mode = 395;
			version_info.byte_mode = 271;
			version_info.kanji_mode = 167;
			break;
		case 0x020A: /* LEVEL_M, VERSION_10*/
			version_info.numeric_mode = 513;
			version_info.alphanumeric_mode = 311;
			version_info.byte_mode = 213;
			version_info.kanji_mode = 131;
			break;
		case 0x030A: /* LEVEL_Q, VERSION_10*/
			version_info.numeric_mode = 364;
			version_info.alphanumeric_mode = 221;
			version_info.byte_mode = 151;
			version_info.kanji_mode = 93;
			break;
		case 0x040A: /* LEVEL_H, VERSION_10*/
			version_info.numeric_mode = 288;
			version_info.alphanumeric_mode = 174;
			version_info.byte_mode = 119;
			version_info.kanji_mode = 74;
			break;
		case 0x010B: /* LEVEL_L, VERSION_11*/
			version_info.numeric_mode = 772;
			version_info.alphanumeric_mode = 468;
			version_info.byte_mode = 321;
			version_info.kanji_mode = 198;
			break;
		case 0x020B: /* LEVEL_M, VERSION_11*/
			version_info.numeric_mode = 604;
			version_info.alphanumeric_mode = 366;
			version_info.byte_mode = 251;
			version_info.kanji_mode = 155;
			break;
		case 0x030B: /* LEVEL_Q, VERSION_11*/
			version_info.numeric_mode = 427;
			version_info.alphanumeric_mode = 259;
			version_info.byte_mode = 177;
			version_info.kanji_mode = 109;
			break;
		case 0x040B: /* LEVEL_H, VERSION_11*/
			version_info.numeric_mode = 331;
			version_info.alphanumeric_mode = 200;
			version_info.byte_mode = 137;
			version_info.kanji_mode = 85;
			break;
		case 0x010C: /* LEVEL_L, VERSION_12*/
			version_info.numeric_mode = 883;
			version_info.alphanumeric_mode = 535;
			version_info.byte_mode = 367;
			version_info.kanji_mode = 226;
			break;
		case 0x020C: /* LEVEL_M, VERSION_12*/
			version_info.numeric_mode = 691;
			version_info.alphanumeric_mode = 419;
			version_info.byte_mode = 287;
			version_info.kanji_mode = 177;
			break;
		case 0x030C: /* LEVEL_Q, VERSION_12*/
			version_info.numeric_mode = 489;
			version_info.alphanumeric_mode = 296;
			version_info.byte_mode = 203;
			version_info.kanji_mode = 125;
			break;
		case 0x040C: /* LEVEL_H, VERSION_12*/
			version_info.numeric_mode = 374;
			version_info.alphanumeric_mode = 227;
			version_info.byte_mode = 155;
			version_info.kanji_mode = 96;
			break;
		case 0x010D: /* LEVEL_L, VERSION_13*/
			version_info.numeric_mode = 1022;
			version_info.alphanumeric_mode = 619;
			version_info.byte_mode = 425;
			version_info.kanji_mode = 262;
			break;
		case 0x020D: /* LEVEL_M, VERSION_13*/
			version_info.numeric_mode = 796;
			version_info.alphanumeric_mode = 483;
			version_info.byte_mode = 331;
			version_info.kanji_mode = 204;
			break;
		case 0x030D: /* LEVEL_Q, VERSION_13*/
			version_info.numeric_mode = 580;
			version_info.alphanumeric_mode = 352;
			version_info.byte_mode = 241;
			version_info.kanji_mode = 149;
			break;
		case 0x040D: /* LEVEL_H, VERSION_13*/
			version_info.numeric_mode = 427;
			version_info.alphanumeric_mode = 259;
			version_info.byte_mode = 177;
			version_info.kanji_mode = 109;
			break;
		case 0x010E: /* LEVEL_L, VERSION_14*/
			version_info.numeric_mode = 1101;
			version_info.alphanumeric_mode = 667;
			version_info.byte_mode = 458;
			version_info.kanji_mode = 282;
			break;
		case 0x020E: /* LEVEL_M, VERSION_14*/
			version_info.numeric_mode = 871;
			version_info.alphanumeric_mode = 528;
			version_info.byte_mode = 362;
			version_info.kanji_mode = 223;
			break;
		case 0x030E: /* LEVEL_Q, VERSION_14*/
			version_info.numeric_mode = 621;
			version_info.alphanumeric_mode = 376;
			version_info.byte_mode = 258;
			version_info.kanji_mode = 159;
			break;
		case 0x040E: /* LEVEL_H, VERSION_14*/
			version_info.numeric_mode = 468;
			version_info.alphanumeric_mode = 283;
			version_info.byte_mode = 194;
			version_info.kanji_mode = 120;
			break;
		case 0x010F: /* LEVEL_L, VERSION_15*/
			version_info.numeric_mode = 1250;
			version_info.alphanumeric_mode = 758;
			version_info.byte_mode = 520;
			version_info.kanji_mode = 320;
			break;
		case 0x020F: /* LEVEL_M, VERSION_15*/
			version_info.numeric_mode = 991;
			version_info.alphanumeric_mode = 600;
			version_info.byte_mode = 412;
			version_info.kanji_mode = 254;
			break;
		case 0x030F: /* LEVEL_Q, VERSION_15*/
			version_info.numeric_mode = 703;
			version_info.alphanumeric_mode = 426;
			version_info.byte_mode = 292;
			version_info.kanji_mode = 180;
			break;
		case 0x040F: /* LEVEL_H, VERSION_15*/
			version_info.numeric_mode = 530;
			version_info.alphanumeric_mode = 321;
			version_info.byte_mode = 220;
			version_info.kanji_mode = 136;
			break;
		case 0x0110: /* LEVEL_L, VERSION_16*/
			version_info.numeric_mode = 1408;
			version_info.alphanumeric_mode = 854;
			version_info.byte_mode = 586;
			version_info.kanji_mode = 361;
			break;
		case 0x0210: /* LEVEL_M, VERSION_16*/
			version_info.numeric_mode = 1082;
			version_info.alphanumeric_mode = 656;
			version_info.byte_mode = 450;
			version_info.kanji_mode = 277;
			break;
		case 0x0310: /* LEVEL_Q, VERSION_16*/
			version_info.numeric_mode = 775;
			version_info.alphanumeric_mode = 470;
			version_info.byte_mode = 322;
			version_info.kanji_mode = 198;
			break;
		case 0x0410: /* LEVEL_H, VERSION_16*/
			version_info.numeric_mode = 602;
			version_info.alphanumeric_mode = 365;
			version_info.byte_mode = 250;
			version_info.kanji_mode = 154;
			break;
		case 0x0111: /* LEVEL_L, VERSION_17*/
			version_info.numeric_mode = 1548;
			version_info.alphanumeric_mode = 938;
			version_info.byte_mode = 644;
			version_info.kanji_mode = 397;
			break;
		case 0x0211: /* LEVEL_M, VERSION_17*/
			version_info.numeric_mode = 1212;
			version_info.alphanumeric_mode = 734;
			version_info.byte_mode = 504;
			version_info.kanji_mode = 310;
			break;
		case 0x0311: /* LEVEL_Q, VERSION_17*/
			version_info.numeric_mode = 876;
			version_info.alphanumeric_mode = 531;
			version_info.byte_mode = 364;
			version_info.kanji_mode = 224;
			break;
		case 0x0411: /* LEVEL_H, VERSION_17*/
			version_info.numeric_mode = 674;
			version_info.alphanumeric_mode = 408;
			version_info.byte_mode = 280;
			version_info.kanji_mode = 173;
			break;
		case 0x0112: /* LEVEL_L, VERSION_18*/
			version_info.numeric_mode = 1725;
			version_info.alphanumeric_mode = 1046;
			version_info.byte_mode = 718;
			version_info.kanji_mode = 442;
			break;
		case 0x0212: /* LEVEL_M, VERSION_18*/
			version_info.numeric_mode = 1346;
			version_info.alphanumeric_mode = 816;
			version_info.byte_mode = 560;
			version_info.kanji_mode = 345;
			break;
		case 0x0312: /* LEVEL_Q, VERSION_18*/
			version_info.numeric_mode = 948;
			version_info.alphanumeric_mode = 574;
			version_info.byte_mode = 394;
			version_info.kanji_mode = 243;
			break;
		case 0x0412: /* LEVEL_H, VERSION_18*/
			version_info.numeric_mode = 746;
			version_info.alphanumeric_mode = 452;
			version_info.byte_mode = 310;
			version_info.kanji_mode = 191;
			break;
		case 0x0113: /* LEVEL_L, VERSION_19*/
			version_info.numeric_mode = 1903;
			version_info.alphanumeric_mode = 1153;
			version_info.byte_mode = 792;
			version_info.kanji_mode = 488;
			break;
		case 0x0213: /* LEVEL_M, VERSION_19*/
			version_info.numeric_mode = 1500;
			version_info.alphanumeric_mode = 909;
			version_info.byte_mode = 624;
			version_info.kanji_mode = 384;
			break;
		case 0x0313: /* LEVEL_Q, VERSION_19*/
			version_info.numeric_mode = 1063;
			version_info.alphanumeric_mode = 644;
			version_info.byte_mode = 442;
			version_info.kanji_mode = 272;
			break;
		case 0x0413: /* LEVEL_H, VERSION_19*/
			version_info.numeric_mode = 813;
			version_info.alphanumeric_mode = 493;
			version_info.byte_mode = 338;
			version_info.kanji_mode = 208;
			break;
		case 0x0114: /* LEVEL_L, VERSION_20*/
			version_info.numeric_mode = 2061;
			version_info.alphanumeric_mode = 1249;
			version_info.byte_mode = 858;
			version_info.kanji_mode = 528;
			break;
		case 0x0214: /* LEVEL_M, VERSION_20*/
			version_info.numeric_mode = 1600;
			version_info.alphanumeric_mode = 970;
			version_info.byte_mode = 666;
			version_info.kanji_mode = 410;
			break;
		case 0x0314: /* LEVEL_Q, VERSION_20*/
			version_info.numeric_mode = 1159;
			version_info.alphanumeric_mode = 702;
			version_info.byte_mode = 482;
			version_info.kanji_mode = 297;
			break;
		case 0x0414: /* LEVEL_H, VERSION_20*/
			version_info.numeric_mode = 919;
			version_info.alphanumeric_mode = 557;
			version_info.byte_mode = 382;
			version_info.kanji_mode = 235;
			break;
		case 0x0115: /* LEVEL_L, VERSION_21*/
			version_info.numeric_mode = 2232;
			version_info.alphanumeric_mode = 1352;
			version_info.byte_mode = 929;
			version_info.kanji_mode = 572;
			break;
		case 0x0215: /* LEVEL_M, VERSION_21*/
			version_info.numeric_mode = 1708;
			version_info.alphanumeric_mode = 1035;
			version_info.byte_mode = 711;
			version_info.kanji_mode = 438;
			break;
		case 0x0315: /* LEVEL_Q, VERSION_21*/
			version_info.numeric_mode = 1224;
			version_info.alphanumeric_mode = 742;
			version_info.byte_mode = 509;
			version_info.kanji_mode = 314;
			break;
		case 0x0415: /* LEVEL_H, VERSION_21*/
			version_info.numeric_mode = 969;
			version_info.alphanumeric_mode = 587;
			version_info.byte_mode = 403;
			version_info.kanji_mode = 248;
			break;
		case 0x0116: /* LEVEL_L, VERSION_22*/
			version_info.numeric_mode = 2409;
			version_info.alphanumeric_mode = 1460;
			version_info.byte_mode = 1003;
			version_info.kanji_mode = 618;
			break;
		case 0x0216: /* LEVEL_M, VERSION_22*/
			version_info.numeric_mode = 1872;
			version_info.alphanumeric_mode = 1134;
			version_info.byte_mode = 779;
			version_info.kanji_mode = 480;
			break;
		case 0x0316: /* LEVEL_Q, VERSION_22*/
			version_info.numeric_mode = 1358;
			version_info.alphanumeric_mode = 823;
			version_info.byte_mode = 565;
			version_info.kanji_mode = 348;
			break;
		case 0x0416: /* LEVEL_H, VERSION_22*/
			version_info.numeric_mode = 1056;
			version_info.alphanumeric_mode = 640;
			version_info.byte_mode = 439;
			version_info.kanji_mode = 270;
			break;
		case 0x0117: /* LEVEL_L, VERSION_23*/
			version_info.numeric_mode = 2620;
			version_info.alphanumeric_mode = 1588;
			version_info.byte_mode = 1091;
			version_info.kanji_mode = 672;
			break;
		case 0x0217: /* LEVEL_M, VERSION_23*/
			version_info.numeric_mode = 2059;
			version_info.alphanumeric_mode = 1248;
			version_info.byte_mode = 857;
			version_info.kanji_mode = 528;
			break;
		case 0x0317: /* LEVEL_Q, VERSION_23*/
			version_info.numeric_mode = 1468;
			version_info.alphanumeric_mode = 890;
			version_info.byte_mode = 611;
			version_info.kanji_mode = 376;
			break;
		case 0x0417: /* LEVEL_H, VERSION_23*/
			version_info.numeric_mode = 1108;
			version_info.alphanumeric_mode = 672;
			version_info.byte_mode = 461;
			version_info.kanji_mode = 284;
			break;
		case 0x0118: /* LEVEL_L, VERSION_24*/
			version_info.numeric_mode = 2812;
			version_info.alphanumeric_mode = 1704;
			version_info.byte_mode = 1171;
			version_info.kanji_mode = 721;
			break;
		case 0x0218: /* LEVEL_M, VERSION_24*/
			version_info.numeric_mode = 2188;
			version_info.alphanumeric_mode = 1326;
			version_info.byte_mode = 911;
			version_info.kanji_mode = 561;
			break;
		case 0x0318: /* LEVEL_Q, VERSION_24*/
			version_info.numeric_mode = 1588;
			version_info.alphanumeric_mode = 963;
			version_info.byte_mode = 661;
			version_info.kanji_mode = 407;
			break;
		case 0x0418: /* LEVEL_H, VERSION_24*/
			version_info.numeric_mode = 1228;
			version_info.alphanumeric_mode = 744;
			version_info.byte_mode = 511;
			version_info.kanji_mode = 315;
			break;
		case 0x0119: /* LEVEL_L, VERSION_25*/
			version_info.numeric_mode = 3057;
			version_info.alphanumeric_mode = 1853;
			version_info.byte_mode = 1273;
			version_info.kanji_mode = 784;
			break;
		case 0x0219: /* LEVEL_M, VERSION_25*/
			version_info.numeric_mode = 2395;
			version_info.alphanumeric_mode = 1451;
			version_info.byte_mode = 997;
			version_info.kanji_mode = 614;
			break;
		case 0x0319: /* LEVEL_Q, VERSION_25*/
			version_info.numeric_mode = 1718;
			version_info.alphanumeric_mode = 1041;
			version_info.byte_mode = 715;
			version_info.kanji_mode = 440;
			break;
		case 0x0419: /* LEVEL_H, VERSION_25*/
			version_info.numeric_mode = 1286;
			version_info.alphanumeric_mode = 779;
			version_info.byte_mode = 535;
			version_info.kanji_mode = 330;
			break;
		case 0x011A: /* LEVEL_L, VERSION_26*/
			version_info.numeric_mode = 3283;
			version_info.alphanumeric_mode = 1990;
			version_info.byte_mode = 1367;
			version_info.kanji_mode = 842;
			break;
		case 0x021A: /* LEVEL_M, VERSION_26*/
			version_info.numeric_mode = 2544;
			version_info.alphanumeric_mode = 1542;
			version_info.byte_mode = 1059;
			version_info.kanji_mode = 652;
			break;
		case 0x031A: /* LEVEL_Q, VERSION_26*/
			version_info.numeric_mode = 1804;
			version_info.alphanumeric_mode = 1094;
			version_info.byte_mode = 751;
			version_info.kanji_mode = 462;
			break;
		case 0x041A: /* LEVEL_H, VERSION_26*/
			version_info.numeric_mode = 1425;
			version_info.alphanumeric_mode = 864;
			version_info.byte_mode = 593;
			version_info.kanji_mode = 365;
			break;
		case 0x011B: /* LEVEL_L, VERSION_27*/
			version_info.numeric_mode = 3517;
			version_info.alphanumeric_mode = 2132;
			version_info.byte_mode = 1465;
			version_info.kanji_mode = 902;
			break;
		case 0x021B: /* LEVEL_M, VERSION_27*/
			version_info.numeric_mode = 2701;
			version_info.alphanumeric_mode = 1637;
			version_info.byte_mode = 1125;
			version_info.kanji_mode = 692;
			break;
		case 0x031B: /* LEVEL_Q, VERSION_27*/
			version_info.numeric_mode = 1933;
			version_info.alphanumeric_mode = 1172;
			version_info.byte_mode = 805;
			version_info.kanji_mode = 496;
			break;
		case 0x041B: /* LEVEL_H, VERSION_27*/
			version_info.numeric_mode = 1501;
			version_info.alphanumeric_mode = 910;
			version_info.byte_mode = 625;
			version_info.kanji_mode = 385;
			break;
		case 0x011C: /* LEVEL_L, VERSION_28*/
			version_info.numeric_mode = 3669;
			version_info.alphanumeric_mode = 2223;
			version_info.byte_mode = 1528;
			version_info.kanji_mode = 940;
			break;
		case 0x021C: /* LEVEL_M, VERSION_28*/
			version_info.numeric_mode = 2857;
			version_info.alphanumeric_mode = 1732;
			version_info.byte_mode = 1190;
			version_info.kanji_mode = 732;
			break;
		case 0x031C: /* LEVEL_Q, VERSION_28*/
			version_info.numeric_mode = 2085;
			version_info.alphanumeric_mode = 1263;
			version_info.byte_mode = 868;
			version_info.kanji_mode = 534;
			break;
		case 0x041C: /* LEVEL_H, VERSION_28*/
			version_info.numeric_mode = 1581;
			version_info.alphanumeric_mode = 958;
			version_info.byte_mode = 658;
			version_info.kanji_mode = 405;
			break;
		case 0x011D: /* LEVEL_L, VERSION_29*/
			version_info.numeric_mode = 3909;
			version_info.alphanumeric_mode = 2369;
			version_info.byte_mode = 1628;
			version_info.kanji_mode = 1002;
			break;
		case 0x021D: /* LEVEL_M, VERSION_29*/
			version_info.numeric_mode = 3035;
			version_info.alphanumeric_mode = 1839;
			version_info.byte_mode = 1264;
			version_info.kanji_mode = 778;
			break;
		case 0x031D: /* LEVEL_Q, VERSION_29*/
			version_info.numeric_mode = 2181;
			version_info.alphanumeric_mode = 1322;
			version_info.byte_mode = 908;
			version_info.kanji_mode = 559;
			break;
		case 0x041D: /* LEVEL_H, VERSION_29*/
			version_info.numeric_mode = 1677;
			version_info.alphanumeric_mode = 1016;
			version_info.byte_mode = 698;
			version_info.kanji_mode = 430;
			break;
		case 0x011E: /* LEVEL_L, VERSION_30*/
			version_info.numeric_mode = 4158;
			version_info.alphanumeric_mode = 2520;
			version_info.byte_mode = 1732;
			version_info.kanji_mode = 1066;
			break;
		case 0x021E: /* LEVEL_M, VERSION_30*/
			version_info.numeric_mode = 3289;
			version_info.alphanumeric_mode = 1994;
			version_info.byte_mode = 1370;
			version_info.kanji_mode = 843;
			break;
		case 0x031E: /* LEVEL_Q, VERSION_30*/
			version_info.numeric_mode = 2358;
			version_info.alphanumeric_mode = 1429;
			version_info.byte_mode = 982;
			version_info.kanji_mode = 604;
			break;
		case 0x041E: /* LEVEL_H, VERSION_30*/
			version_info.numeric_mode = 1782;
			version_info.alphanumeric_mode = 1080;
			version_info.byte_mode = 742;
			version_info.kanji_mode = 457;
			break;
		case 0x011F: /* LEVEL_L, VERSION_31*/
			version_info.numeric_mode = 4417;
			version_info.alphanumeric_mode = 2677;
			version_info.byte_mode = 1840;
			version_info.kanji_mode = 1132;
			break;
		case 0x021F: /* LEVEL_M, VERSION_31*/
			version_info.numeric_mode = 3486;
			version_info.alphanumeric_mode = 2113;
			version_info.byte_mode = 1452;
			version_info.kanji_mode = 894;
			break;
		case 0x031F: /* LEVEL_Q, VERSION_31*/
			version_info.numeric_mode = 2473;
			version_info.alphanumeric_mode = 1499;
			version_info.byte_mode = 1030;
			version_info.kanji_mode = 634;
			break;
		case 0x041F: /* LEVEL_H, VERSION_31*/
			version_info.numeric_mode = 1897;
			version_info.alphanumeric_mode = 1150;
			version_info.byte_mode = 790;
			version_info.kanji_mode = 486;
			break;
		case 0x0120: /* LEVEL_L, VERSION_32*/
			version_info.numeric_mode = 4686;
			version_info.alphanumeric_mode = 2840;
			version_info.byte_mode = 1952;
			version_info.kanji_mode = 1201;
			break;
		case 0x0220: /* LEVEL_M, VERSION_32*/
			version_info.numeric_mode = 3693;
			version_info.alphanumeric_mode = 2238;
			version_info.byte_mode = 1538;
			version_info.kanji_mode = 947;
			break;
		case 0x0320: /* LEVEL_Q, VERSION_32*/
			version_info.numeric_mode = 2670;
			version_info.alphanumeric_mode = 1618;
			version_info.byte_mode = 1112;
			version_info.kanji_mode = 684;
			break;
		case 0x0420: /* LEVEL_H, VERSION_32*/
			version_info.numeric_mode = 2022;
			version_info.alphanumeric_mode = 1226;
			version_info.byte_mode = 842;
			version_info.kanji_mode = 518;
			break;
		case 0x0121: /* LEVEL_L, VERSION_33*/
			version_info.numeric_mode = 4965;
			version_info.alphanumeric_mode = 3009;
			version_info.byte_mode = 2068;
			version_info.kanji_mode = 1273;
			break;
		case 0x0221: /* LEVEL_M, VERSION_33*/
			version_info.numeric_mode = 3909;
			version_info.alphanumeric_mode = 2369;
			version_info.byte_mode = 1628;
			version_info.kanji_mode = 1002;
			break;
		case 0x0321: /* LEVEL_Q, VERSION_33*/
			version_info.numeric_mode = 2805;
			version_info.alphanumeric_mode = 1700;
			version_info.byte_mode = 1168;
			version_info.kanji_mode = 719;
			break;
		case 0x0421: /* LEVEL_H, VERSION_33*/
			version_info.numeric_mode = 2157;
			version_info.alphanumeric_mode = 1307;
			version_info.byte_mode = 898;
			version_info.kanji_mode = 553;
			break;
		case 0x0122: /* LEVEL_L, VERSION_34*/
			version_info.numeric_mode = 5253;
			version_info.alphanumeric_mode = 3183;
			version_info.byte_mode = 2188;
			version_info.kanji_mode = 1347;
			break;
		case 0x0222: /* LEVEL_M, VERSION_34*/
			version_info.numeric_mode = 4134;
			version_info.alphanumeric_mode = 2506;
			version_info.byte_mode = 1722;
			version_info.kanji_mode = 1060;
			break;
		case 0x0322: /* LEVEL_Q, VERSION_34*/
			version_info.numeric_mode = 2949;
			version_info.alphanumeric_mode = 1787;
			version_info.byte_mode = 1228;
			version_info.kanji_mode = 756;
			break;
		case 0x0422: /* LEVEL_H, VERSION_34*/
			version_info.numeric_mode = 2301;
			version_info.alphanumeric_mode = 1394;
			version_info.byte_mode = 958;
			version_info.kanji_mode = 590;
			break;
		case 0x0123: /* LEVEL_L, VERSION_35*/
			version_info.numeric_mode = 5529;
			version_info.alphanumeric_mode = 3351;
			version_info.byte_mode = 2303;
			version_info.kanji_mode = 1417;
			break;
		case 0x0223: /* LEVEL_M, VERSION_35*/
			version_info.numeric_mode = 4343;
			version_info.alphanumeric_mode = 2632;
			version_info.byte_mode = 1809;
			version_info.kanji_mode = 1113;
			break;
		case 0x0323: /* LEVEL_Q, VERSION_35*/
			version_info.numeric_mode = 3081;
			version_info.alphanumeric_mode = 1867;
			version_info.byte_mode = 1283;
			version_info.kanji_mode = 790;
			break;
		case 0x0423: /* LEVEL_H, VERSION_35*/
			version_info.numeric_mode = 2361;
			version_info.alphanumeric_mode = 1431;
			version_info.byte_mode = 983;
			version_info.kanji_mode = 605;
			break;
		case 0x0124: /* LEVEL_L, VERSION_36*/
			version_info.numeric_mode = 5836;
			version_info.alphanumeric_mode = 3537;
			version_info.byte_mode = 2431;
			version_info.kanji_mode = 1496;
			break;
		case 0x0224: /* LEVEL_M, VERSION_36*/
			version_info.numeric_mode = 4588;
			version_info.alphanumeric_mode = 2780;
			version_info.byte_mode = 1911;
			version_info.kanji_mode = 1176;
			break;
		case 0x0324: /* LEVEL_Q, VERSION_36*/
			version_info.numeric_mode = 3244;
			version_info.alphanumeric_mode = 1966;
			version_info.byte_mode = 1351;
			version_info.kanji_mode = 832;
			break;
		case 0x0424: /* LEVEL_H, VERSION_36*/
			version_info.numeric_mode = 2524;
			version_info.alphanumeric_mode = 1530;
			version_info.byte_mode = 1051;
			version_info.kanji_mode = 647;
			break;
		case 0x0125: /* LEVEL_L, VERSION_37*/
			version_info.numeric_mode = 6153;
			version_info.alphanumeric_mode = 3729;
			version_info.byte_mode = 2563;
			version_info.kanji_mode = 1577;
			break;
		case 0x0225: /* LEVEL_M, VERSION_37*/
			version_info.numeric_mode = 4775;
			version_info.alphanumeric_mode = 2894;
			version_info.byte_mode = 1989;
			version_info.kanji_mode = 1224;
			break;
		case 0x0325: /* LEVEL_Q, VERSION_37*/
			version_info.numeric_mode = 3417;
			version_info.alphanumeric_mode = 2071;
			version_info.byte_mode = 1423;
			version_info.kanji_mode = 876;
			break;
		case 0x0425: /* LEVEL_H, VERSION_37*/
			version_info.numeric_mode = 2625;
			version_info.alphanumeric_mode = 1591;
			version_info.byte_mode = 1093;
			version_info.kanji_mode = 673;
			break;
		case 0x0126: /* LEVEL_L, VERSION_38*/
			version_info.numeric_mode = 6479;
			version_info.alphanumeric_mode = 3927;
			version_info.byte_mode = 2699;
			version_info.kanji_mode = 1661;
			break;
		case 0x0226: /* LEVEL_M, VERSION_38*/
			version_info.numeric_mode = 5039;
			version_info.alphanumeric_mode = 3054;
			version_info.byte_mode = 2099;
			version_info.kanji_mode = 1292;
			break;
		case 0x0326: /* LEVEL_Q, VERSION_38*/
			version_info.numeric_mode = 3599;
			version_info.alphanumeric_mode = 2181;
			version_info.byte_mode = 1499;
			version_info.kanji_mode = 923;
			break;
		case 0x0426: /* LEVEL_H, VERSION_38*/
			version_info.numeric_mode = 2735;
			version_info.alphanumeric_mode = 1658;
			version_info.byte_mode = 1139;
			version_info.kanji_mode = 701;
			break;
		case 0x0127: /* LEVEL_L, VERSION_39*/
			version_info.numeric_mode = 6743;
			version_info.alphanumeric_mode = 4087;
			version_info.byte_mode = 2809;
			version_info.kanji_mode = 1729;
			break;
		case 0x0227: /* LEVEL_M, VERSION_39*/
			version_info.numeric_mode = 5313;
			version_info.alphanumeric_mode = 3220;
			version_info.byte_mode = 2213;
			version_info.kanji_mode = 1362;
			break;
		case 0x0327: /* LEVEL_Q, VERSION_39*/
			version_info.numeric_mode = 3791;
			version_info.alphanumeric_mode = 2298;
			version_info.byte_mode = 1579;
			version_info.kanji_mode = 972;
			break;
		case 0x0427: /* LEVEL_H, VERSION_39*/
			version_info.numeric_mode = 2927;
			version_info.alphanumeric_mode = 1774;
			version_info.byte_mode = 1219;
			version_info.kanji_mode = 750;
			break;
		case 0x0128: /* LEVEL_L, VERSION_40*/
			version_info.numeric_mode = 7089;
			version_info.alphanumeric_mode = 4296;
			version_info.byte_mode = 2953;
			version_info.kanji_mode = 1817;
			break;
		case 0x0228: /* LEVEL_M, VERSION_40*/
			version_info.numeric_mode = 5596;
			version_info.alphanumeric_mode = 3391;
			version_info.byte_mode = 2331;
			version_info.kanji_mode = 1435;
			break;
		case 0x0328: /* LEVEL_Q, VERSION_40*/
			version_info.numeric_mode = 3993;
			version_info.alphanumeric_mode = 2420;
			version_info.byte_mode = 1663;
			version_info.kanji_mode = 1024;
			break;
		case 0x0428: /* LEVEL_H, VERSION_40*/
			version_info.numeric_mode = 3057;
			version_info.alphanumeric_mode = 1852;
			version_info.byte_mode = 1273;
			version_info.kanji_mode = 784;
			break;
		default:
			version_info.numeric_mode = 0;
			version_info.alphanumeric_mode = 0;
			version_info.byte_mode = 0;
			version_info.kanji_mode = 0;
			break;
	}
	return version_info;
}

/* return error_correction_cw_t structure */
error_correction_cw_t error_correction_cw(VERSION_QR version,ERROR_CORRECT_LEVEL level){
	error_correction_cw_t error_correction;
	int version_level=0;
	version_level = version | level;
	switch (version_level) {
			case 0x0101: /* LEVEL_L, VERSION_1 */
				error_correction.total_data_cw = 19;
				error_correction.ec_cw_per_block = 7;
				error_correction.num_block_group1 = 1;
				error_correction.num_cw_block_group1 = 19;
				error_correction.num_block_group2 = 0;
				error_correction.num_cw_block_group2 = 0;
				break;
			case 0x0201: /* LEVEL_M, VERSION_1*/
				error_correction.total_data_cw = 16;
				error_correction.ec_cw_per_block = 10;
				error_correction.num_block_group1 = 1;
				error_correction.num_cw_block_group1 = 16;
				error_correction.num_block_group2 = 0;
				error_correction.num_cw_block_group2 = 0;
				break;
			case 0x0301: /* LEVEL_Q, VERSION_1*/
				error_correction.total_data_cw = 13;
				error_correction.ec_cw_per_block = 13;
				error_correction.num_block_group1 = 1;
				error_correction.num_cw_block_group1 = 13;
				error_correction.num_block_group2 = 0;
				error_correction.num_cw_block_group2 = 0;
				break;
			case 0x0401: /* LEVEL_H, VERSION_1*/
				error_correction.total_data_cw = 9;
				error_correction.ec_cw_per_block = 17;
				error_correction.num_block_group1 = 1;
				error_correction.num_cw_block_group1 = 9;
				error_correction.num_block_group2 = 0;
				error_correction.num_cw_block_group2 = 0;
				break;
			case 0x0102: /* LEVEL_L, VERSION_2*/
				error_correction.total_data_cw = 34;
				error_correction.ec_cw_per_block = 10;
				error_correction.num_block_group1 = 1;
				error_correction.num_cw_block_group1 = 34;
				error_correction.num_block_group2 = 0;
				error_correction.num_cw_block_group2 = 0;
				break;
			case 0x0202: /* LEVEL_M, VERSION_2*/
				error_correction.total_data_cw = 28;
				error_correction.ec_cw_per_block = 16;
				error_correction.num_block_group1 = 1;
				error_correction.num_cw_block_group1 = 28;
				error_correction.num_block_group2 = 0;
				error_correction.num_cw_block_group2 = 0;
				break;
			case 0x0302: /* LEVEL_Q, VERSION_2*/
				error_correction.total_data_cw = 22;
				error_correction.ec_cw_per_block = 22;
				error_correction.num_block_group1 = 1;
				error_correction.num_cw_block_group1 = 22;
				error_correction.num_block_group2 = 0;
				error_correction.num_cw_block_group2 = 0;
				break;
			case 0x0402: /* LEVEL_H, VERSION_2*/
				error_correction.total_data_cw = 16;
				error_correction.ec_cw_per_block = 28;
				error_correction.num_block_group1 = 1;
				error_correction.num_cw_block_group1 = 16;
				error_correction.num_block_group2 = 0;
				error_correction.num_cw_block_group2 = 0;
				break;
			case 0x0103: /* LEVEL_L, VERSION_3*/
				error_correction.total_data_cw = 55;
				error_correction.ec_cw_per_block = 15;
				error_correction.num_block_group1 = 1;
				error_correction.num_cw_block_group1 = 55;
				error_correction.num_block_group2 = 0;
				error_correction.num_cw_block_group2 = 0;
				break;
			case 0x0203: /* LEVEL_M, VERSION_3*/
				error_correction.total_data_cw = 44;
				error_correction.ec_cw_per_block = 26;
				error_correction.num_block_group1 = 1;
				error_correction.num_cw_block_group1 = 44;
				error_correction.num_block_group2 = 0;
				error_correction.num_cw_block_group2 = 0;
				break;
			case 0x0303: /* LEVEL_Q, VERSION_3*/
				error_correction.total_data_cw = 34;
				error_correction.ec_cw_per_block = 18;
				error_correction.num_block_group1 = 2;
				error_correction.num_cw_block_group1 = 17;
				error_correction.num_block_group2 = 0;
				error_correction.num_cw_block_group2 = 0;
				break;
			case 0x0403: /* LEVEL_H, VERSION_3*/
				error_correction.total_data_cw = 26;
				error_correction.ec_cw_per_block = 22;
				error_correction.num_block_group1 = 2;
				error_correction.num_cw_block_group1 = 13;
				error_correction.num_block_group2 = 0;
				error_correction.num_cw_block_group2 = 0;
				break;
			case 0x0104: /* LEVEL_L, VERSION_4*/
				error_correction.total_data_cw = 80;
				error_correction.ec_cw_per_block = 20;
				error_correction.num_block_group1 = 1;
				error_correction.num_cw_block_group1 = 80;
				error_correction.num_block_group2 = 0;
				error_correction.num_cw_block_group2 = 0;
				break;
			case 0x0204: /* LEVEL_M, VERSION_4*/
				error_correction.total_data_cw = 64;
				error_correction.ec_cw_per_block = 18;
				error_correction.num_block_group1 = 2;
				error_correction.num_cw_block_group1 = 32;
				error_correction.num_block_group2 = 0;
				error_correction.num_cw_block_group2 = 0;
				break;
			case 0x0304: /* LEVEL_Q, VERSION_4*/
				error_correction.total_data_cw = 48;
				error_correction.ec_cw_per_block = 26;
				error_correction.num_block_group1 = 2;
				error_correction.num_cw_block_group1 = 24;
				error_correction.num_block_group2 = 0;
				error_correction.num_cw_block_group2 = 0;
				break;
			case 0x0404: /* LEVEL_H, VERSION_4*/
				error_correction.total_data_cw = 36;
				error_correction.ec_cw_per_block = 16;
				error_correction.num_block_group1 = 4;
				error_correction.num_cw_block_group1 = 9;
				error_correction.num_block_group2 = 0;
				error_correction.num_cw_block_group2 = 0;
				break;
			case 0x0105: /* LEVEL_L, VERSION_5*/
				error_correction.total_data_cw = 108;
				error_correction.ec_cw_per_block = 26;
				error_correction.num_block_group1 = 1;
				error_correction.num_cw_block_group1 = 108;
				error_correction.num_block_group2 = 0;
				error_correction.num_cw_block_group2 = 0;
				break;
			case 0x0205: /* LEVEL_M, VERSION_5*/
				error_correction.total_data_cw = 86;
				error_correction.ec_cw_per_block = 24;
				error_correction.num_block_group1 = 2;
				error_correction.num_cw_block_group1 = 43;
				error_correction.num_block_group2 = 0;
				error_correction.num_cw_block_group2 = 0;
				break;
			case 0x0305: /* LEVEL_Q, VERSION_5*/
				error_correction.total_data_cw = 62;
				error_correction.ec_cw_per_block = 18;
				error_correction.num_block_group1 = 2;
				error_correction.num_cw_block_group1 = 15;
				error_correction.num_block_group2 = 2;
				error_correction.num_cw_block_group2 = 16;
				break;
			case 0x0405: /* LEVEL_H, VERSION_5*/
				error_correction.total_data_cw = 46;
				error_correction.ec_cw_per_block = 22;
				error_correction.num_block_group1 = 2;
				error_correction.num_cw_block_group1 = 11;
				error_correction.num_block_group2 = 2;
				error_correction.num_cw_block_group2 = 12;
				break;
			case 0x0106: /* LEVEL_L, VERSION_6*/
				error_correction.total_data_cw = 136;
				error_correction.ec_cw_per_block = 18;
				error_correction.num_block_group1 = 2;
				error_correction.num_cw_block_group1 = 68;
				error_correction.num_block_group2 = 0;
				error_correction.num_cw_block_group2 = 0;
				break;
			case 0x0206: /* LEVEL_M, VERSION_6*/
				error_correction.total_data_cw = 108;
				error_correction.ec_cw_per_block = 16;
				error_correction.num_block_group1 = 4;
				error_correction.num_cw_block_group1 = 27;
				error_correction.num_block_group2 = 0;
				error_correction.num_cw_block_group2 = 0;
				break;
			case 0x0306: /* LEVEL_Q, VERSION_6*/
				error_correction.total_data_cw = 76;
				error_correction.ec_cw_per_block = 24;
				error_correction.num_block_group1 = 4;
				error_correction.num_cw_block_group1 = 19;
				error_correction.num_block_group2 = 0;
				error_correction.num_cw_block_group2 = 0;
				break;
			case 0x0406: /* LEVEL_H, VERSION_6*/
				error_correction.total_data_cw = 60;
				error_correction.ec_cw_per_block = 28;
				error_correction.num_block_group1 = 4;
				error_correction.num_cw_block_group1 = 15;
				error_correction.num_block_group2 = 0;
				error_correction.num_cw_block_group2 = 0;
				break;
			case 0x0107: /* LEVEL_L, VERSION_7*/
				error_correction.total_data_cw = 156;
				error_correction.ec_cw_per_block = 20;
				error_correction.num_block_group1 = 2;
				error_correction.num_cw_block_group1 = 78;
				error_correction.num_block_group2 = 0;
				error_correction.num_cw_block_group2 = 0;
				break;
			case 0x0207: /* LEVEL_M, VERSION_7*/
				error_correction.total_data_cw = 124;
				error_correction.ec_cw_per_block = 18;
				error_correction.num_block_group1 = 4;
				error_correction.num_cw_block_group1 = 31;
				error_correction.num_block_group2 = 0;
				error_correction.num_cw_block_group2 = 0;
				break;
			case 0x0307: /* LEVEL_Q, VERSION_7*/
				error_correction.total_data_cw = 88;
				error_correction.ec_cw_per_block = 18;
				error_correction.num_block_group1 = 2;
				error_correction.num_cw_block_group1 = 14;
				error_correction.num_block_group2 = 4;
				error_correction.num_cw_block_group2 = 15;
				break;
			case 0x0407: /* LEVEL_H, VERSION_7*/
				error_correction.total_data_cw = 66;
				error_correction.ec_cw_per_block = 26;
				error_correction.num_block_group1 = 4;
				error_correction.num_cw_block_group1 = 13;
				error_correction.num_block_group2 = 1;
				error_correction.num_cw_block_group2 = 14;
				break;
			case 0x0108: /* LEVEL_L, VERSION_8*/
				error_correction.total_data_cw = 194;
				error_correction.ec_cw_per_block = 24;
				error_correction.num_block_group1 = 2;
				error_correction.num_cw_block_group1 = 97;
				error_correction.num_block_group2 = 0;
				error_correction.num_cw_block_group2 = 0;
				break;
			case 0x0208: /* LEVEL_M, VERSION_8*/
				error_correction.total_data_cw = 154;
				error_correction.ec_cw_per_block = 22;
				error_correction.num_block_group1 = 2;
				error_correction.num_cw_block_group1 = 38;
				error_correction.num_block_group2 = 2;
				error_correction.num_cw_block_group2 = 39;
				break;
			case 0x0308: /* LEVEL_Q, VERSION_8*/
				error_correction.total_data_cw = 110;
				error_correction.ec_cw_per_block = 22;
				error_correction.num_block_group1 = 4;
				error_correction.num_cw_block_group1 = 18;
				error_correction.num_block_group2 = 2;
				error_correction.num_cw_block_group2 = 19;
				break;
			case 0x0408: /* LEVEL_H, VERSION_8*/
				error_correction.total_data_cw = 86;
				error_correction.ec_cw_per_block = 26;
				error_correction.num_block_group1 = 4;
				error_correction.num_cw_block_group1 = 14;
				error_correction.num_block_group2 = 2;
				error_correction.num_cw_block_group2 = 15;
				break;
			case 0x0109: /* LEVEL_L, VERSION_9*/
				error_correction.total_data_cw = 232;
				error_correction.ec_cw_per_block = 30;
				error_correction.num_block_group1 = 2;
				error_correction.num_cw_block_group1 = 116;
				error_correction.num_block_group2 = 0;
				error_correction.num_cw_block_group2 = 0;
				break;
			case 0x0209: /* LEVEL_M, VERSION_9*/
				error_correction.total_data_cw = 182;
				error_correction.ec_cw_per_block = 22;
				error_correction.num_block_group1 = 3;
				error_correction.num_cw_block_group1 = 36;
				error_correction.num_block_group2 = 2;
				error_correction.num_cw_block_group2 = 37;
				break;
			case 0x0309: /* LEVEL_Q, VERSION_9*/
				error_correction.total_data_cw = 132;
				error_correction.ec_cw_per_block = 20;
				error_correction.num_block_group1 = 4;
				error_correction.num_cw_block_group1 = 16;
				error_correction.num_block_group2 = 4;
				error_correction.num_cw_block_group2 = 17;
				break;
			case 0x0409: /* LEVEL_H, VERSION_9*/
				error_correction.total_data_cw = 100;
				error_correction.ec_cw_per_block = 24;
				error_correction.num_block_group1 = 4;
				error_correction.num_cw_block_group1 = 12;
				error_correction.num_block_group2 = 4;
				error_correction.num_cw_block_group2 = 13;
				break;
			case 0x010A: /* LEVEL_L, VERSION_10*/
				error_correction.total_data_cw = 274;
				error_correction.ec_cw_per_block = 18;
				error_correction.num_block_group1 = 2;
				error_correction.num_cw_block_group1 = 68;
				error_correction.num_block_group2 = 2;
				error_correction.num_cw_block_group2 = 69;
				break;
			case 0x020A: /* LEVEL_M, VERSION_10*/
				error_correction.total_data_cw = 216;
				error_correction.ec_cw_per_block = 26;
				error_correction.num_block_group1 = 4;
				error_correction.num_cw_block_group1 = 43;
				error_correction.num_block_group2 = 1;
				error_correction.num_cw_block_group2 = 44;
				break;
			case 0x030A: /* LEVEL_Q, VERSION_10*/
				error_correction.total_data_cw = 154;
				error_correction.ec_cw_per_block = 24;
				error_correction.num_block_group1 = 6;
				error_correction.num_cw_block_group1 = 19;
				error_correction.num_block_group2 = 2;
				error_correction.num_cw_block_group2 = 20;
				break;
			case 0x040A: /* LEVEL_H, VERSION_10*/
				error_correction.total_data_cw = 122;
				error_correction.ec_cw_per_block = 28;
				error_correction.num_block_group1 = 6;
				error_correction.num_cw_block_group1 = 15;
				error_correction.num_block_group2 = 2;
				error_correction.num_cw_block_group2 = 16;
				break;
			case 0x010B: /* LEVEL_L, VERSION_11*/
				error_correction.total_data_cw = 324;
				error_correction.ec_cw_per_block = 20;
				error_correction.num_block_group1 = 4;
				error_correction.num_cw_block_group1 = 81;
				error_correction.num_block_group2 = 0;
				error_correction.num_cw_block_group2 = 0;
				break;
			case 0x020B: /* LEVEL_M, VERSION_11*/
				error_correction.total_data_cw = 254;
				error_correction.ec_cw_per_block = 30;
				error_correction.num_block_group1 = 1;
				error_correction.num_cw_block_group1 = 50;
				error_correction.num_block_group2 = 4;
				error_correction.num_cw_block_group2 = 51;
				break;
			case 0x030B: /* LEVEL_Q, VERSION_11*/
				error_correction.total_data_cw = 180;
				error_correction.ec_cw_per_block = 28;
				error_correction.num_block_group1 = 4;
				error_correction.num_cw_block_group1 = 22;
				error_correction.num_block_group2 = 4;
				error_correction.num_cw_block_group2 = 23;
				break;
			case 0x040B: /* LEVEL_H, VERSION_11*/
				error_correction.total_data_cw = 140;
				error_correction.ec_cw_per_block = 24;
				error_correction.num_block_group1 = 3;
				error_correction.num_cw_block_group1 = 12;
				error_correction.num_block_group2 = 8;
				error_correction.num_cw_block_group2 = 13;
				break;
			case 0x010C: /* LEVEL_L, VERSION_12*/
				error_correction.total_data_cw = 370;
				error_correction.ec_cw_per_block = 24;
				error_correction.num_block_group1 = 2;
				error_correction.num_cw_block_group1 = 92;
				error_correction.num_block_group2 = 2;
				error_correction.num_cw_block_group2 = 93;
				break;
			case 0x020C: /* LEVEL_M, VERSION_12*/
				error_correction.total_data_cw = 290;
				error_correction.ec_cw_per_block = 22;
				error_correction.num_block_group1 = 6;
				error_correction.num_cw_block_group1 = 36;
				error_correction.num_block_group2 = 2;
				error_correction.num_cw_block_group2 = 37;
				break;
			case 0x030C: /* LEVEL_Q, VERSION_12*/
				error_correction.total_data_cw = 206;
				error_correction.ec_cw_per_block = 26;
				error_correction.num_block_group1 = 4;
				error_correction.num_cw_block_group1 = 20;
				error_correction.num_block_group2 = 6;
				error_correction.num_cw_block_group2 = 21;
				break;
			case 0x040C: /* LEVEL_H, VERSION_12*/
				error_correction.total_data_cw = 158;
				error_correction.ec_cw_per_block = 28;
				error_correction.num_block_group1 = 7;
				error_correction.num_cw_block_group1 = 14;
				error_correction.num_block_group2 = 4;
				error_correction.num_cw_block_group2 = 15;
				break;
			case 0x010D: /* LEVEL_L, VERSION_13*/
				error_correction.total_data_cw = 428;
				error_correction.ec_cw_per_block = 26;
				error_correction.num_block_group1 = 4;
				error_correction.num_cw_block_group1 = 107;
				error_correction.num_block_group2 = 0;
				error_correction.num_cw_block_group2 = 0;
				break;
			case 0x020D: /* LEVEL_M, VERSION_13*/
				error_correction.total_data_cw = 334;
				error_correction.ec_cw_per_block = 22;
				error_correction.num_block_group1 = 8;
				error_correction.num_cw_block_group1 = 37;
				error_correction.num_block_group2 = 1;
				error_correction.num_cw_block_group2 = 38;
				break;
			case 0x030D: /* LEVEL_Q, VERSION_13*/
				error_correction.total_data_cw = 244;
				error_correction.ec_cw_per_block = 24;
				error_correction.num_block_group1 = 8;
				error_correction.num_cw_block_group1 = 20;
				error_correction.num_block_group2 = 4;
				error_correction.num_cw_block_group2 = 21;
				break;
			case 0x040D: /* LEVEL_H, VERSION_13*/
				error_correction.total_data_cw = 180;
				error_correction.ec_cw_per_block = 22;
				error_correction.num_block_group1 = 12;
				error_correction.num_cw_block_group1 = 11;
				error_correction.num_block_group2 = 4;
				error_correction.num_cw_block_group2 = 12;
				break;
			case 0x010E: /* LEVEL_L, VERSION_14*/
				error_correction.total_data_cw = 461;
				error_correction.ec_cw_per_block = 30;
				error_correction.num_block_group1 = 3;
				error_correction.num_cw_block_group1 = 115;
				error_correction.num_block_group2 = 1;
				error_correction.num_cw_block_group2 = 116;
				break;
			case 0x020E: /* LEVEL_M, VERSION_14*/
				error_correction.total_data_cw = 365;
				error_correction.ec_cw_per_block = 24;
				error_correction.num_block_group1 = 4;
				error_correction.num_cw_block_group1 = 40;
				error_correction.num_block_group2 = 5;
				error_correction.num_cw_block_group2 = 41;
				break;
			case 0x030E: /* LEVEL_Q, VERSION_14*/
				error_correction.total_data_cw = 261;
				error_correction.ec_cw_per_block = 20;
				error_correction.num_block_group1 = 11;
				error_correction.num_cw_block_group1 = 16;
				error_correction.num_block_group2 = 5;
				error_correction.num_cw_block_group2 = 17;
				break;
			case 0x040E: /* LEVEL_H, VERSION_14*/
				error_correction.total_data_cw = 197;
				error_correction.ec_cw_per_block = 24;
				error_correction.num_block_group1 = 11;
				error_correction.num_cw_block_group1 = 12;
				error_correction.num_block_group2 = 5;
				error_correction.num_cw_block_group2 = 13;
				break;
			case 0x010F: /* LEVEL_L, VERSION_15*/
				error_correction.total_data_cw = 523;
				error_correction.ec_cw_per_block = 22;
				error_correction.num_block_group1 = 5;
				error_correction.num_cw_block_group1 = 87;
				error_correction.num_block_group2 = 1;
				error_correction.num_cw_block_group2 = 88;
				break;
			case 0x020F: /* LEVEL_M, VERSION_15*/
				error_correction.total_data_cw = 415;
				error_correction.ec_cw_per_block = 24;
				error_correction.num_block_group1 = 5;
				error_correction.num_cw_block_group1 = 41;
				error_correction.num_block_group2 = 5;
				error_correction.num_cw_block_group2 = 42;
				break;
			case 0x030F: /* LEVEL_Q, VERSION_15*/
				error_correction.total_data_cw = 295;
				error_correction.ec_cw_per_block = 30;
				error_correction.num_block_group1 = 5;
				error_correction.num_cw_block_group1 = 24;
				error_correction.num_block_group2 = 7;
				error_correction.num_cw_block_group2 = 25;
				break;
			case 0x040F: /* LEVEL_H, VERSION_15*/
				error_correction.total_data_cw = 223;
				error_correction.ec_cw_per_block = 24;
				error_correction.num_block_group1 = 11;
				error_correction.num_cw_block_group1 = 12;
				error_correction.num_block_group2 = 7;
				error_correction.num_cw_block_group2 = 13;
				break;
			case 0x0110: /* LEVEL_L, VERSION_16*/
				error_correction.total_data_cw = 589;
				error_correction.ec_cw_per_block = 24;
				error_correction.num_block_group1 = 5;
				error_correction.num_cw_block_group1 = 98;
				error_correction.num_block_group2 = 1;
				error_correction.num_cw_block_group2 = 99;
				break;
			case 0x0210: /* LEVEL_M, VERSION_16*/
				error_correction.total_data_cw = 453;
				error_correction.ec_cw_per_block = 28;
				error_correction.num_block_group1 = 7;
				error_correction.num_cw_block_group1 = 45;
				error_correction.num_block_group2 = 3;
				error_correction.num_cw_block_group2 = 46;
				break;
			case 0x0310: /* LEVEL_Q, VERSION_16*/
				error_correction.total_data_cw = 325;
				error_correction.ec_cw_per_block = 24;
				error_correction.num_block_group1 = 15;
				error_correction.num_cw_block_group1 = 19;
				error_correction.num_block_group2 = 2;
				error_correction.num_cw_block_group2 = 20;
				break;
			case 0x0410: /* LEVEL_H, VERSION_16*/
				error_correction.total_data_cw = 253;
				error_correction.ec_cw_per_block = 30;
				error_correction.num_block_group1 = 3;
				error_correction.num_cw_block_group1 = 15;
				error_correction.num_block_group2 = 13;
				error_correction.num_cw_block_group2 = 16;
				break;
			case 0x0111: /* LEVEL_L, VERSION_17*/
				error_correction.total_data_cw = 647;
				error_correction.ec_cw_per_block = 28;
				error_correction.num_block_group1 = 1;
				error_correction.num_cw_block_group1 = 107;
				error_correction.num_block_group2 = 5;
				error_correction.num_cw_block_group2 = 108;
				break;
			case 0x0211: /* LEVEL_M, VERSION_17*/
				error_correction.total_data_cw = 507;
				error_correction.ec_cw_per_block = 28;
				error_correction.num_block_group1 = 10;
				error_correction.num_cw_block_group1 = 46;
				error_correction.num_block_group2 = 1;
				error_correction.num_cw_block_group2 = 47;
				break;
			case 0x0311: /* LEVEL_Q, VERSION_17*/
				error_correction.total_data_cw = 367;
				error_correction.ec_cw_per_block = 28;
				error_correction.num_block_group1 = 1;
				error_correction.num_cw_block_group1 = 22;
				error_correction.num_block_group2 = 15;
				error_correction.num_cw_block_group2 = 23;
				break;
			case 0x0411: /* LEVEL_H, VERSION_17*/
				error_correction.total_data_cw = 283;
				error_correction.ec_cw_per_block = 28;
				error_correction.num_block_group1 = 2;
				error_correction.num_cw_block_group1 = 14;
				error_correction.num_block_group2 = 17;
				error_correction.num_cw_block_group2 = 15;
				break;
			case 0x0112: /* LEVEL_L, VERSION_18*/
				error_correction.total_data_cw = 721;
				error_correction.ec_cw_per_block = 30;
				error_correction.num_block_group1 = 5;
				error_correction.num_cw_block_group1 = 120;
				error_correction.num_block_group2 = 1;
				error_correction.num_cw_block_group2 = 121;
				break;
			case 0x0212: /* LEVEL_M, VERSION_18*/
				error_correction.total_data_cw = 563;
				error_correction.ec_cw_per_block = 26;
				error_correction.num_block_group1 = 9;
				error_correction.num_cw_block_group1 = 43;
				error_correction.num_block_group2 = 4;
				error_correction.num_cw_block_group2 = 44;
				break;
			case 0x0312: /* LEVEL_Q, VERSION_18*/
				error_correction.total_data_cw = 397;
				error_correction.ec_cw_per_block = 28;
				error_correction.num_block_group1 = 17;
				error_correction.num_cw_block_group1 = 22;
				error_correction.num_block_group2 = 1;
				error_correction.num_cw_block_group2 = 23;
				break;
			case 0x0412: /* LEVEL_H, VERSION_18*/
				error_correction.total_data_cw = 313;
				error_correction.ec_cw_per_block = 28;
				error_correction.num_block_group1 = 2;
				error_correction.num_cw_block_group1 = 14;
				error_correction.num_block_group2 = 19;
				error_correction.num_cw_block_group2 = 15;
				break;
			case 0x0113: /* LEVEL_L, VERSION_19*/
				error_correction.total_data_cw = 795;
				error_correction.ec_cw_per_block = 28;
				error_correction.num_block_group1 = 3;
				error_correction.num_cw_block_group1 = 113;
				error_correction.num_block_group2 = 4;
				error_correction.num_cw_block_group2 = 114;
				break;
			case 0x0213: /* LEVEL_M, VERSION_19*/
				error_correction.total_data_cw = 627;
				error_correction.ec_cw_per_block = 26;
				error_correction.num_block_group1 = 3;
				error_correction.num_cw_block_group1 = 44;
				error_correction.num_block_group2 = 11;
				error_correction.num_cw_block_group2 = 45;
				break;
			case 0x0313: /* LEVEL_Q, VERSION_19*/
				error_correction.total_data_cw = 445;
				error_correction.ec_cw_per_block = 26;
				error_correction.num_block_group1 = 17;
				error_correction.num_cw_block_group1 = 21;
				error_correction.num_block_group2 = 4;
				error_correction.num_cw_block_group2 = 22;
				break;
			case 0x0413: /* LEVEL_H, VERSION_19*/
				error_correction.total_data_cw = 341;
				error_correction.ec_cw_per_block = 26;
				error_correction.num_block_group1 = 9;
				error_correction.num_cw_block_group1 = 13;
				error_correction.num_block_group2 = 16;
				error_correction.num_cw_block_group2 = 14;
				break;
			case 0x0114: /* LEVEL_L, VERSION_20*/
				error_correction.total_data_cw = 861;
				error_correction.ec_cw_per_block = 28;
				error_correction.num_block_group1 = 3;
				error_correction.num_cw_block_group1 = 107;
				error_correction.num_block_group2 = 5;
				error_correction.num_cw_block_group2 = 108;
				break;
			case 0x0214: /* LEVEL_M, VERSION_20*/
				error_correction.total_data_cw = 669;
				error_correction.ec_cw_per_block = 26;
				error_correction.num_block_group1 = 3;
				error_correction.num_cw_block_group1 = 41;
				error_correction.num_block_group2 = 13;
				error_correction.num_cw_block_group2 = 42;
				break;
			case 0x0314: /* LEVEL_Q, VERSION_20*/
				error_correction.total_data_cw = 485;
				error_correction.ec_cw_per_block = 30;
				error_correction.num_block_group1 = 15;
				error_correction.num_cw_block_group1 = 24;
				error_correction.num_block_group2 = 5;
				error_correction.num_cw_block_group2 = 25;
				break;
			case 0x0414: /* LEVEL_H, VERSION_20*/
				error_correction.total_data_cw = 385;
				error_correction.ec_cw_per_block = 28;
				error_correction.num_block_group1 = 15;
				error_correction.num_cw_block_group1 = 15;
				error_correction.num_block_group2 = 10;
				error_correction.num_cw_block_group2 = 16;
				break;
			case 0x0115: /* LEVEL_L, VERSION_21*/
				error_correction.total_data_cw = 932;
				error_correction.ec_cw_per_block = 28;
				error_correction.num_block_group1 = 4;
				error_correction.num_cw_block_group1 = 116;
				error_correction.num_block_group2 = 4;
				error_correction.num_cw_block_group2 = 117;
				break;
			case 0x0215: /* LEVEL_M, VERSION_21*/
				error_correction.total_data_cw = 714;
				error_correction.ec_cw_per_block = 26;
				error_correction.num_block_group1 = 17;
				error_correction.num_cw_block_group1 = 42;
				error_correction.num_block_group2 = 0;
				error_correction.num_cw_block_group2 = 0;
				break;
			case 0x0315: /* LEVEL_Q, VERSION_21*/
				error_correction.total_data_cw = 512;
				error_correction.ec_cw_per_block = 28;
				error_correction.num_block_group1 = 17;
				error_correction.num_cw_block_group1 = 22;
				error_correction.num_block_group2 = 6;
				error_correction.num_cw_block_group2 = 23;
				break;
			case 0x0415: /* LEVEL_H, VERSION_21*/
				error_correction.total_data_cw = 406;
				error_correction.ec_cw_per_block = 30;
				error_correction.num_block_group1 = 19;
				error_correction.num_cw_block_group1 = 16;
				error_correction.num_block_group2 = 6;
				error_correction.num_cw_block_group2 = 17;
				break;
			case 0x0116: /* LEVEL_L, VERSION_22*/
				error_correction.total_data_cw = 1006;
				error_correction.ec_cw_per_block = 28;
				error_correction.num_block_group1 = 2;
				error_correction.num_cw_block_group1 = 111;
				error_correction.num_block_group2 = 7;
				error_correction.num_cw_block_group2 = 112;
				break;
			case 0x0216: /* LEVEL_M, VERSION_22*/
				error_correction.total_data_cw = 782;
				error_correction.ec_cw_per_block = 28;
				error_correction.num_block_group1 = 17;
				error_correction.num_cw_block_group1 = 46;
				error_correction.num_block_group2 = 0;
				error_correction.num_cw_block_group2 = 0;
				break;
			case 0x0316: /* LEVEL_Q, VERSION_22*/
				error_correction.total_data_cw = 568;
				error_correction.ec_cw_per_block = 30;
				error_correction.num_block_group1 = 7;
				error_correction.num_cw_block_group1 = 24;
				error_correction.num_block_group2 = 16;
				error_correction.num_cw_block_group2 = 25;
				break;
			case 0x0416: /* LEVEL_H, VERSION_22*/
				error_correction.total_data_cw = 442;
				error_correction.ec_cw_per_block = 24;
				error_correction.num_block_group1 = 34;
				error_correction.num_cw_block_group1 = 13;
				error_correction.num_block_group2 = 0;
				error_correction.num_cw_block_group2 = 0;
				break;
			case 0x0117: /* LEVEL_L, VERSION_23*/
				error_correction.total_data_cw = 1094;
				error_correction.ec_cw_per_block = 30;
				error_correction.num_block_group1 = 4;
				error_correction.num_cw_block_group1 = 121;
				error_correction.num_block_group2 = 5;
				error_correction.num_cw_block_group2 = 122;
				break;
			case 0x0217: /* LEVEL_M, VERSION_23*/
				error_correction.total_data_cw = 860;
				error_correction.ec_cw_per_block = 28;
				error_correction.num_block_group1 = 4;
				error_correction.num_cw_block_group1 = 47;
				error_correction.num_block_group2 = 14;
				error_correction.num_cw_block_group2 = 48;
				break;
			case 0x0317: /* LEVEL_Q, VERSION_23*/
				error_correction.total_data_cw = 614;
				error_correction.ec_cw_per_block = 30;
				error_correction.num_block_group1 = 11;
				error_correction.num_cw_block_group1 = 24;
				error_correction.num_block_group2 = 14;
				error_correction.num_cw_block_group2 = 25;
				break;
			case 0x0417: /* LEVEL_H, VERSION_23*/
				error_correction.total_data_cw = 464;
				error_correction.ec_cw_per_block = 30;
				error_correction.num_block_group1 = 16;
				error_correction.num_cw_block_group1 = 15;
				error_correction.num_block_group2 = 14;
				error_correction.num_cw_block_group2 = 16;
				break;
			case 0x0118: /* LEVEL_L, VERSION_24*/
				error_correction.total_data_cw = 1174;
				error_correction.ec_cw_per_block = 30;
				error_correction.num_block_group1 = 6;
				error_correction.num_cw_block_group1 = 117;
				error_correction.num_block_group2 = 4;
				error_correction.num_cw_block_group2 = 118;
				break;
			case 0x0218: /* LEVEL_M, VERSION_24*/
				error_correction.total_data_cw = 914;
				error_correction.ec_cw_per_block = 28;
				error_correction.num_block_group1 = 6;
				error_correction.num_cw_block_group1 = 45;
				error_correction.num_block_group2 = 14;
				error_correction.num_cw_block_group2 = 46;
				break;
			case 0x0318: /* LEVEL_Q, VERSION_24*/
				error_correction.total_data_cw = 664;
				error_correction.ec_cw_per_block = 30;
				error_correction.num_block_group1 = 11;
				error_correction.num_cw_block_group1 = 24;
				error_correction.num_block_group2 = 16;
				error_correction.num_cw_block_group2 = 25;
				break;
			case 0x0418: /* LEVEL_H, VERSION_24*/
				error_correction.total_data_cw = 514;
				error_correction.ec_cw_per_block = 30;
				error_correction.num_block_group1 = 30;
				error_correction.num_cw_block_group1 = 16;
				error_correction.num_block_group2 = 2;
				error_correction.num_cw_block_group2 = 17;
				break;
			case 0x0119: /* LEVEL_L, VERSION_25*/
				error_correction.total_data_cw = 1276;
				error_correction.ec_cw_per_block = 26;
				error_correction.num_block_group1 = 8;
				error_correction.num_cw_block_group1 = 106;
				error_correction.num_block_group2 = 4;
				error_correction.num_cw_block_group2 = 107;
				break;
			case 0x0219: /* LEVEL_M, VERSION_25*/
				error_correction.total_data_cw = 1000;
				error_correction.ec_cw_per_block = 28;
				error_correction.num_block_group1 = 8;
				error_correction.num_cw_block_group1 = 47;
				error_correction.num_block_group2 = 13;
				error_correction.num_cw_block_group2 = 48;
				break;
			case 0x0319: /* LEVEL_Q, VERSION_25*/
				error_correction.total_data_cw = 718;
				error_correction.ec_cw_per_block = 30;
				error_correction.num_block_group1 = 7;
				error_correction.num_cw_block_group1 = 24;
				error_correction.num_block_group2 = 22;
				error_correction.num_cw_block_group2 = 25;
				break;
			case 0x0419: /* LEVEL_H, VERSION_25*/
				error_correction.total_data_cw = 538;
				error_correction.ec_cw_per_block = 30;
				error_correction.num_block_group1 = 22;
				error_correction.num_cw_block_group1 = 15;
				error_correction.num_block_group2 = 13;
				error_correction.num_cw_block_group2 = 16;
				break;
			case 0x011A: /* LEVEL_L, VERSION_26*/
				error_correction.total_data_cw = 1370;
				error_correction.ec_cw_per_block = 28;
				error_correction.num_block_group1 = 10;
				error_correction.num_cw_block_group1 = 114;
				error_correction.num_block_group2 = 2;
				error_correction.num_cw_block_group2 = 115;
				break;
			case 0x021A: /* LEVEL_M, VERSION_26*/
				error_correction.total_data_cw = 1062;
				error_correction.ec_cw_per_block = 28;
				error_correction.num_block_group1 = 19;
				error_correction.num_cw_block_group1 = 46;
				error_correction.num_block_group2 = 4;
				error_correction.num_cw_block_group2 = 47;
				break;
			case 0x031A: /* LEVEL_Q, VERSION_26*/
				error_correction.total_data_cw = 754;
				error_correction.ec_cw_per_block = 28;
				error_correction.num_block_group1 = 28;
				error_correction.num_cw_block_group1 = 22;
				error_correction.num_block_group2 = 6;
				error_correction.num_cw_block_group2 = 23;
				break;
			case 0x041A: /* LEVEL_H, VERSION_26*/
				error_correction.total_data_cw = 596;
				error_correction.ec_cw_per_block = 30;
				error_correction.num_block_group1 = 33;
				error_correction.num_cw_block_group1 = 16;
				error_correction.num_block_group2 = 4;
				error_correction.num_cw_block_group2 = 17;
				break;
			case 0x011B: /* LEVEL_L, VERSION_27*/
				error_correction.total_data_cw = 1468;
				error_correction.ec_cw_per_block = 30;
				error_correction.num_block_group1 = 8;
				error_correction.num_cw_block_group1 = 122;
				error_correction.num_block_group2 = 4;
				error_correction.num_cw_block_group2 = 123;
				break;
			case 0x021B: /* LEVEL_M, VERSION_27*/
				error_correction.total_data_cw = 1128;
				error_correction.ec_cw_per_block = 28;
				error_correction.num_block_group1 = 22;
				error_correction.num_cw_block_group1 = 45;
				error_correction.num_block_group2 = 3;
				error_correction.num_cw_block_group2 = 46;
				break;
			case 0x031B: /* LEVEL_Q, VERSION_27*/
				error_correction.total_data_cw = 808;
				error_correction.ec_cw_per_block = 30;
				error_correction.num_block_group1 = 8;
				error_correction.num_cw_block_group1 = 23;
				error_correction.num_block_group2 = 26;
				error_correction.num_cw_block_group2 = 24;
				break;
			case 0x041B: /* LEVEL_H, VERSION_27*/
				error_correction.total_data_cw = 628;
				error_correction.ec_cw_per_block = 30;
				error_correction.num_block_group1 = 12;
				error_correction.num_cw_block_group1 = 15;
				error_correction.num_block_group2 = 28;
				error_correction.num_cw_block_group2 = 16;
				break;
			case 0x011C: /* LEVEL_L, VERSION_28*/
				error_correction.total_data_cw = 1531;
				error_correction.ec_cw_per_block = 30;
				error_correction.num_block_group1 = 3;
				error_correction.num_cw_block_group1 = 117;
				error_correction.num_block_group2 = 10;
				error_correction.num_cw_block_group2 = 118;
				break;
			case 0x021C: /* LEVEL_M, VERSION_28*/
				error_correction.total_data_cw = 1193;
				error_correction.ec_cw_per_block = 28;
				error_correction.num_block_group1 = 3;
				error_correction.num_cw_block_group1 = 45;
				error_correction.num_block_group2 = 23;
				error_correction.num_cw_block_group2 = 46;
				break;
			case 0x031C: /* LEVEL_Q, VERSION_28*/
				error_correction.total_data_cw = 871;
				error_correction.ec_cw_per_block = 30;
				error_correction.num_block_group1 = 4;
				error_correction.num_cw_block_group1 = 24;
				error_correction.num_block_group2 = 31;
				error_correction.num_cw_block_group2 = 25;
				break;
			case 0x041C: /* LEVEL_H, VERSION_28*/
				error_correction.total_data_cw = 661;
				error_correction.ec_cw_per_block = 30;
				error_correction.num_block_group1 = 11;
				error_correction.num_cw_block_group1 = 15;
				error_correction.num_block_group2 = 31;
				error_correction.num_cw_block_group2 = 16;
				break;
			case 0x011D: /* LEVEL_L, VERSION_29*/
				error_correction.total_data_cw = 1631;
				error_correction.ec_cw_per_block = 30;
				error_correction.num_block_group1 = 7;
				error_correction.num_cw_block_group1 = 116;
				error_correction.num_block_group2 = 7;
				error_correction.num_cw_block_group2 = 117;
				break;
			case 0x021D: /* LEVEL_M, VERSION_29*/
				error_correction.total_data_cw = 1267;
				error_correction.ec_cw_per_block = 28;
				error_correction.num_block_group1 = 21;
				error_correction.num_cw_block_group1 = 45;
				error_correction.num_block_group2 = 7;
				error_correction.num_cw_block_group2 = 46;
				break;
			case 0x031D: /* LEVEL_Q, VERSION_29*/
				error_correction.total_data_cw = 911;
				error_correction.ec_cw_per_block = 30;
				error_correction.num_block_group1 = 1;
				error_correction.num_cw_block_group1 = 23;
				error_correction.num_block_group2 = 37;
				error_correction.num_cw_block_group2 = 24;
				break;
			case 0x041D: /* LEVEL_H, VERSION_29*/
				error_correction.total_data_cw = 701;
				error_correction.ec_cw_per_block = 30;
				error_correction.num_block_group1 = 19;
				error_correction.num_cw_block_group1 = 15;
				error_correction.num_block_group2 = 26;
				error_correction.num_cw_block_group2 = 16;
				break;
			case 0x011E: /* LEVEL_L, VERSION_30*/
				error_correction.total_data_cw = 1735;
				error_correction.ec_cw_per_block = 30;
				error_correction.num_block_group1 = 5;
				error_correction.num_cw_block_group1 = 115;
				error_correction.num_block_group2 = 10;
				error_correction.num_cw_block_group2 = 116;
				break;
			case 0x021E: /* LEVEL_M, VERSION_30*/
				error_correction.total_data_cw = 1373;
				error_correction.ec_cw_per_block = 28;
				error_correction.num_block_group1 = 19;
				error_correction.num_cw_block_group1 = 47;
				error_correction.num_block_group2 = 10;
				error_correction.num_cw_block_group2 = 48;
				break;
			case 0x031E: /* LEVEL_Q, VERSION_30*/
				error_correction.total_data_cw = 985;
				error_correction.ec_cw_per_block = 30;
				error_correction.num_block_group1 = 15;
				error_correction.num_cw_block_group1 = 24;
				error_correction.num_block_group2 = 25;
				error_correction.num_cw_block_group2 = 25;
				break;
			case 0x041E: /* LEVEL_H, VERSION_30*/
				error_correction.total_data_cw = 745;
				error_correction.ec_cw_per_block = 30;
				error_correction.num_block_group1 = 23;
				error_correction.num_cw_block_group1 = 15;
				error_correction.num_block_group2 = 25;
				error_correction.num_cw_block_group2 = 16;
				break;
			case 0x011F: /* LEVEL_L, VERSION_31*/
				error_correction.total_data_cw = 1843;
				error_correction.ec_cw_per_block = 30;
				error_correction.num_block_group1 = 13;
				error_correction.num_cw_block_group1 = 115;
				error_correction.num_block_group2 = 3;
				error_correction.num_cw_block_group2 = 116;
				break;
			case 0x021F: /* LEVEL_M, VERSION_31*/
				error_correction.total_data_cw = 1455;
				error_correction.ec_cw_per_block = 28;
				error_correction.num_block_group1 = 2;
				error_correction.num_cw_block_group1 = 46;
				error_correction.num_block_group2 = 29;
				error_correction.num_cw_block_group2 = 47;
				break;
			case 0x031F: /* LEVEL_Q, VERSION_31*/
				error_correction.total_data_cw = 1033;
				error_correction.ec_cw_per_block = 30;
				error_correction.num_block_group1 = 42;
				error_correction.num_cw_block_group1 = 24;
				error_correction.num_block_group2 = 1;
				error_correction.num_cw_block_group2 = 25;
				break;
			case 0x041F: /* LEVEL_H, VERSION_31*/
				error_correction.total_data_cw = 793;
				error_correction.ec_cw_per_block = 30;
				error_correction.num_block_group1 = 23;
				error_correction.num_cw_block_group1 = 15;
				error_correction.num_block_group2 = 28;
				error_correction.num_cw_block_group2 = 16;
				break;
			case 0x0120: /* LEVEL_L, VERSION_32*/
				error_correction.total_data_cw = 1955;
				error_correction.ec_cw_per_block = 30;
				error_correction.num_block_group1 = 17;
				error_correction.num_cw_block_group1 = 115;
				error_correction.num_block_group2 = 0;
				error_correction.num_cw_block_group2 = 0;
				break;
			case 0x0220: /* LEVEL_M, VERSION_32*/
				error_correction.total_data_cw = 1541;
				error_correction.ec_cw_per_block = 28;
				error_correction.num_block_group1 = 10;
				error_correction.num_cw_block_group1 = 46;
				error_correction.num_block_group2 = 23;
				error_correction.num_cw_block_group2 = 47;
				break;
			case 0x0320: /* LEVEL_Q, VERSION_32*/
				error_correction.total_data_cw = 1115;
				error_correction.ec_cw_per_block = 30;
				error_correction.num_block_group1 = 10;
				error_correction.num_cw_block_group1 = 24;
				error_correction.num_block_group2 = 35;
				error_correction.num_cw_block_group2 = 25;
				break;
			case 0x0420: /* LEVEL_H, VERSION_32*/
				error_correction.total_data_cw = 845;
				error_correction.ec_cw_per_block = 30;
				error_correction.num_block_group1 = 19;
				error_correction.num_cw_block_group1 = 15;
				error_correction.num_block_group2 = 35;
				error_correction.num_cw_block_group2 = 16;
				break;
			case 0x0121: /* LEVEL_L, VERSION_33*/
				error_correction.total_data_cw = 2071;
				error_correction.ec_cw_per_block = 30;
				error_correction.num_block_group1 = 17;
				error_correction.num_cw_block_group1 = 115;
				error_correction.num_block_group2 = 1;
				error_correction.num_cw_block_group2 = 116;
				break;
			case 0x0221: /* LEVEL_M, VERSION_33*/
				error_correction.total_data_cw = 1631;
				error_correction.ec_cw_per_block = 28;
				error_correction.num_block_group1 = 14;
				error_correction.num_cw_block_group1 = 46;
				error_correction.num_block_group2 = 21;
				error_correction.num_cw_block_group2 = 47;
				break;
			case 0x0321: /* LEVEL_Q, VERSION_33*/
				error_correction.total_data_cw = 1171;
				error_correction.ec_cw_per_block = 30;
				error_correction.num_block_group1 = 29;
				error_correction.num_cw_block_group1 = 24;
				error_correction.num_block_group2 = 19;
				error_correction.num_cw_block_group2 = 25;
				break;
			case 0x0421: /* LEVEL_H, VERSION_33*/
				error_correction.total_data_cw = 901;
				error_correction.ec_cw_per_block = 30;
				error_correction.num_block_group1 = 11;
				error_correction.num_cw_block_group1 = 15;
				error_correction.num_block_group2 = 46;
				error_correction.num_cw_block_group2 = 16;
				break;
			case 0x0122: /* LEVEL_L, VERSION_34*/
				error_correction.total_data_cw = 2191;
				error_correction.ec_cw_per_block = 30;
				error_correction.num_block_group1 = 13;
				error_correction.num_cw_block_group1 = 115;
				error_correction.num_block_group2 = 6;
				error_correction.num_cw_block_group2 = 116;
				break;
			case 0x0222: /* LEVEL_M, VERSION_34*/
				error_correction.total_data_cw = 1725;
				error_correction.ec_cw_per_block = 28;
				error_correction.num_block_group1 = 14;
				error_correction.num_cw_block_group1 = 46;
				error_correction.num_block_group2 = 23;
				error_correction.num_cw_block_group2 = 47;
				break;
			case 0x0322: /* LEVEL_Q, VERSION_34*/
				error_correction.total_data_cw = 1231;
				error_correction.ec_cw_per_block = 30;
				error_correction.num_block_group1 = 44;
				error_correction.num_cw_block_group1 = 24;
				error_correction.num_block_group2 = 7;
				error_correction.num_cw_block_group2 = 25;
				break;
			case 0x0422: /* LEVEL_H, VERSION_34*/
				error_correction.total_data_cw = 961;
				error_correction.ec_cw_per_block = 30;
				error_correction.num_block_group1 = 59;
				error_correction.num_cw_block_group1 = 16;
				error_correction.num_block_group2 = 1;
				error_correction.num_cw_block_group2 = 17;
				break;
			case 0x0123: /* LEVEL_L, VERSION_35*/
				error_correction.total_data_cw = 2306;
				error_correction.ec_cw_per_block = 30;
				error_correction.num_block_group1 = 12;
				error_correction.num_cw_block_group1 = 121;
				error_correction.num_block_group2 = 7;
				error_correction.num_cw_block_group2 = 122;
				break;
			case 0x0223: /* LEVEL_M, VERSION_35*/
				error_correction.total_data_cw = 1812;
				error_correction.ec_cw_per_block = 28;
				error_correction.num_block_group1 = 12;
				error_correction.num_cw_block_group1 = 47;
				error_correction.num_block_group2 = 26;
				error_correction.num_cw_block_group2 = 48;
				break;
			case 0x0323: /* LEVEL_Q, VERSION_35*/
				error_correction.total_data_cw = 1286;
				error_correction.ec_cw_per_block = 30;
				error_correction.num_block_group1 = 39;
				error_correction.num_cw_block_group1 = 24;
				error_correction.num_block_group2 = 14;
				error_correction.num_cw_block_group2 = 25;
				break;
			case 0x0423: /* LEVEL_H, VERSION_35*/
				error_correction.total_data_cw = 986;
				error_correction.ec_cw_per_block = 30;
				error_correction.num_block_group1 = 22;
				error_correction.num_cw_block_group1 = 15;
				error_correction.num_block_group2 = 41;
				error_correction.num_cw_block_group2 = 16;
				break;
			case 0x0124: /* LEVEL_L, VERSION_36*/
				error_correction.total_data_cw = 2434;
				error_correction.ec_cw_per_block = 30;
				error_correction.num_block_group1 = 6;
				error_correction.num_cw_block_group1 = 121;
				error_correction.num_block_group2 = 14;
				error_correction.num_cw_block_group2 = 122;
				break;
			case 0x0224: /* LEVEL_M, VERSION_36*/
				error_correction.total_data_cw = 1914;
				error_correction.ec_cw_per_block = 28;
				error_correction.num_block_group1 = 6;
				error_correction.num_cw_block_group1 = 47;
				error_correction.num_block_group2 = 34;
				error_correction.num_cw_block_group2 = 48;
				break;
			case 0x0324: /* LEVEL_Q, VERSION_36*/
				error_correction.total_data_cw = 1354;
				error_correction.ec_cw_per_block = 30;
				error_correction.num_block_group1 = 46;
				error_correction.num_cw_block_group1 = 24;
				error_correction.num_block_group2 = 10;
				error_correction.num_cw_block_group2 = 25;
				break;
			case 0x0424: /* LEVEL_H, VERSION_36*/
				error_correction.total_data_cw = 1054;
				error_correction.ec_cw_per_block = 30;
				error_correction.num_block_group1 = 2;
				error_correction.num_cw_block_group1 = 15;
				error_correction.num_block_group2 = 64;
				error_correction.num_cw_block_group2 = 16;
				break;
			case 0x0125: /* LEVEL_L, VERSION_37*/
				error_correction.total_data_cw = 2566;
				error_correction.ec_cw_per_block = 30;
				error_correction.num_block_group1 = 17;
				error_correction.num_cw_block_group1 = 122;
				error_correction.num_block_group2 = 4;
				error_correction.num_cw_block_group2 = 123;
				break;
			case 0x0225: /* LEVEL_M, VERSION_37*/
				error_correction.total_data_cw = 1992;
				error_correction.ec_cw_per_block = 28;
				error_correction.num_block_group1 = 29;
				error_correction.num_cw_block_group1 = 46;
				error_correction.num_block_group2 = 14;
				error_correction.num_cw_block_group2 = 47;
				break;
			case 0x0325: /* LEVEL_Q, VERSION_37*/
				error_correction.total_data_cw = 1426;
				error_correction.ec_cw_per_block = 30;
				error_correction.num_block_group1 = 49;
				error_correction.num_cw_block_group1 = 24;
				error_correction.num_block_group2 = 10;
				error_correction.num_cw_block_group2 = 25;
				break;
			case 0x0425: /* LEVEL_H, VERSION_37*/
				error_correction.total_data_cw = 1096;
				error_correction.ec_cw_per_block = 30;
				error_correction.num_block_group1 = 24;
				error_correction.num_cw_block_group1 = 15;
				error_correction.num_block_group2 = 46;
				error_correction.num_cw_block_group2 = 16;
				break;
			case 0x0126: /* LEVEL_L, VERSION_38*/
				error_correction.total_data_cw = 2702;
				error_correction.ec_cw_per_block = 30;
				error_correction.num_block_group1 = 4;
				error_correction.num_cw_block_group1 = 122;
				error_correction.num_block_group2 = 18;
				error_correction.num_cw_block_group2 = 123;
				break;
			case 0x0226: /* LEVEL_M, VERSION_38*/
				error_correction.total_data_cw = 2102;
				error_correction.ec_cw_per_block = 28;
				error_correction.num_block_group1 = 13;
				error_correction.num_cw_block_group1 = 46;
				error_correction.num_block_group2 = 32;
				error_correction.num_cw_block_group2 = 47;
				break;
			case 0x0326: /* LEVEL_Q, VERSION_38*/
				error_correction.total_data_cw = 1502;
				error_correction.ec_cw_per_block = 30;
				error_correction.num_block_group1 = 48;
				error_correction.num_cw_block_group1 = 24;
				error_correction.num_block_group2 = 14;
				error_correction.num_cw_block_group2 = 25;
				break;
			case 0x0426: /* LEVEL_H, VERSION_38*/
				error_correction.total_data_cw = 1142;
				error_correction.ec_cw_per_block = 30;
				error_correction.num_block_group1 = 42;
				error_correction.num_cw_block_group1 = 15;
				error_correction.num_block_group2 = 32;
				error_correction.num_cw_block_group2 = 16;
				break;
			case 0x0127: /* LEVEL_L, VERSION_39*/
				error_correction.total_data_cw = 2812;
				error_correction.ec_cw_per_block = 30;
				error_correction.num_block_group1 = 20;
				error_correction.num_cw_block_group1 = 117;
				error_correction.num_block_group2 = 4;
				error_correction.num_cw_block_group2 = 118;
				break;
			case 0x0227: /* LEVEL_M, VERSION_39*/
				error_correction.total_data_cw = 2216;
				error_correction.ec_cw_per_block = 28;
				error_correction.num_block_group1 = 40;
				error_correction.num_cw_block_group1 = 47;
				error_correction.num_block_group2 = 7;
				error_correction.num_cw_block_group2 = 48;
				break;
			case 0x0327: /* LEVEL_Q, VERSION_39*/
				error_correction.total_data_cw = 1582;
				error_correction.ec_cw_per_block = 30;
				error_correction.num_block_group1 = 43;
				error_correction.num_cw_block_group1 = 24;
				error_correction.num_block_group2 = 22;
				error_correction.num_cw_block_group2 = 25;
				break;
			case 0x0427: /* LEVEL_H, VERSION_39*/
				error_correction.total_data_cw = 1222;
				error_correction.ec_cw_per_block = 30;
				error_correction.num_block_group1 = 10;
				error_correction.num_cw_block_group1 = 15;
				error_correction.num_block_group2 = 67;
				error_correction.num_cw_block_group2 = 16;
				break;
			case 0x0128: /* LEVEL_L, VERSION_40*/
				error_correction.total_data_cw = 2956;
				error_correction.ec_cw_per_block = 30;
				error_correction.num_block_group1 = 19;
				error_correction.num_cw_block_group1 = 118;
				error_correction.num_block_group2 = 6;
				error_correction.num_cw_block_group2 = 119;
				break;
			case 0x0228: /* LEVEL_M, VERSION_40*/
				error_correction.total_data_cw = 2334;
				error_correction.ec_cw_per_block = 28;
				error_correction.num_block_group1 = 18;
				error_correction.num_cw_block_group1 = 47;
				error_correction.num_block_group2 = 31;
				error_correction.num_cw_block_group2 = 48;
				break;
			case 0x0328: /* LEVEL_Q, VERSION_40*/
				error_correction.total_data_cw = 1666;
				error_correction.ec_cw_per_block = 30;
				error_correction.num_block_group1 = 34;
				error_correction.num_cw_block_group1 = 24;
				error_correction.num_block_group2 = 34;
				error_correction.num_cw_block_group2 = 25;
				break;
			case 0x0428: /* LEVEL_H, VERSION_40*/
				error_correction.total_data_cw = 1276;
				error_correction.ec_cw_per_block = 30;
				error_correction.num_block_group1 = 20;
				error_correction.num_cw_block_group1 = 15;
				error_correction.num_block_group2 = 61;
				error_correction.num_cw_block_group2 = 16;
				break;
			default:
				error_correction.total_data_cw = 0;
				error_correction.ec_cw_per_block = 0;
				error_correction.num_block_group1 = 0;
				error_correction.num_cw_block_group1 = 0;
				error_correction.num_block_group2 = 0;
				error_correction.num_cw_block_group2 = 0;
				break;
		}
	return error_correction;
}
/*
 * Don't malloc qr_data.pointer before call me!
 */
bool get_data(qr_data_t* out, qr_data_t* in){
	bool ret = FALSE;
	if (in->type == out->type){
		switch (out->type) {
			case CHARACTER_CAPACITIES:
				out->qr_data.character_cap = (character_capacities_t*) malloc(sizeof(character_capacities_t));
				if (out->qr_data.character_cap == NULL){
					return FALSE;
				}else{
					out->qr_data.character_cap->alphanumeric_mode =
							in->qr_data.character_cap->alphanumeric_mode;
					out->qr_data.character_cap->byte_mode =
							in->qr_data.character_cap->byte_mode;
					out->qr_data.character_cap->kanji_mode =
							in->qr_data.character_cap->kanji_mode;
					out->qr_data.character_cap->numeric_mode =
							in->qr_data.character_cap->numeric_mode;
				}
				ret = TRUE;
				break;
			case ERROR_CORRECTION_CW:
				out->qr_data.error_cor_cw = (error_correction_cw_t*) malloc(sizeof(error_correction_cw_t));
				if (out->qr_data.error_cor_cw == NULL){
					return FALSE;
				}else{
					out->qr_data.error_cor_cw->ec_cw_per_block =
							in->qr_data.error_cor_cw->ec_cw_per_block;
					out->qr_data.error_cor_cw->num_block_group1 =
							in->qr_data.error_cor_cw->num_block_group1;
					out->qr_data.error_cor_cw->num_block_group2 =
							in->qr_data.error_cor_cw->num_block_group2;
					out->qr_data.error_cor_cw->num_cw_block_group1 =
							in->qr_data.error_cor_cw->num_cw_block_group1;
					out->qr_data.error_cor_cw->num_cw_block_group2 =
							in->qr_data.error_cor_cw->num_cw_block_group2;
					out->qr_data.error_cor_cw->total_data_cw =
							in->qr_data.error_cor_cw->total_data_cw;
				}
				ret = TRUE;
				break;
			default:
				break;
		}
	}
	return ret;
}

#ifdef TEST_DEBUG
void print(qr_data_t data){
	switch (data.type) {
		case CHARACTER_CAPACITIES:
			printf("\nPRINT CHARACTER_CAPACITIES DATA\n");
			printf("numeric_mode: %d\n",data.qr_data.character_cap->numeric_mode);
			printf("alphanumeric_mode: %d\n",data.qr_data.character_cap->alphanumeric_mode);
			printf("byte_mode:%d\n",data.qr_data.character_cap->byte_mode);
			printf("kanji_mode:%d\n",data.qr_data.character_cap->kanji_mode);
			break;
		case ERROR_CORRECTION_CW:
			printf("\nPRINT ERROR_CORRECTION_CW DATA\n");
			printf("total_data_cw: %d\n",data.qr_data.error_cor_cw->total_data_cw);
			printf("ec_cw_per_block:%d\n",data.qr_data.error_cor_cw->ec_cw_per_block);
			printf("num_block_group1:%d\n",data.qr_data.error_cor_cw->num_block_group1);
			printf("num_cw_block_group1:%d\n",data.qr_data.error_cor_cw->num_cw_block_group1);
			printf("num_block_group2:%d\n",data.qr_data.error_cor_cw->num_block_group2);
			printf("num_cw_block_group2:%d\n",data.qr_data.error_cor_cw->num_cw_block_group2);
			break;
		default:
			printf("\nFALSE DATA FOR PRINT\n");
			break;
	}

}
#endif
/* =======================================================================
 * INTERNAL API
 * ======================================================================*/
