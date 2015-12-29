/*
 * encode_data.c
 *
 *  Created on: Dec 1, 2015
 *      Author: tungnt
 */
#include "../include/encode_data.h"

/* =======================================================================
 * INTERNAL API
 * ======================================================================*/
/* check to ensure that character of data input is encoded right */
int check_input_uft8(char* data){
	return 0;
}
/* check to ensure that character of data input is encoded right */
int check_input_iso8859_1(char* data){
	return 0;
}
/* check to ensure that character of data input is encoded right */
int check_input_shift_jis(char* data){
	return 0;
}

/* check to ensure that data input is supported */
int check_data_numeric_mode(char* data, int length){
	int i=0;
	int check_flag = TRUE;
	unsigned char element = 0;
	if (i<length){
		element = data[i];
		if ((element < '0') || (element > '9')){
			check_flag = FALSE;
		}
		i++;
	}
	return check_flag;
}
/* check to ensure that data input is supported */
int check_data_alphanumeric_mode(char* data, int length){
	int i=0;
	int check_flag = TRUE;
	unsigned char element = 0;
	if (i<length){
		element = data[i];
		if ((element >= '0') && (element <= '9')
				&& (element >= 'A') && (element <= 'Z')
				&& (element == '$') && (element == '%') && (element == '*')
				&& (element == '+') && (element == '-') && (element == '/')
				&& (element == ':') && (element == '.') && (element == ' ')
				)
		{
			check_flag = FALSE;
		}
		i++;
	}
	return check_flag;
}
/* check to ensure that data input is supported */
int check_data_byte_mode(char* data){
	/* default character from the ISO-8859-1 */
	/* UTF-8 also is supported */
	/* http://unicode-table.com/en/1EC5/ */
	return 0;
}
/* check to ensure that data input is supported */
int check_data_kanji_mode(char* data){
	return 0;
}


/* encode data into special character */
int encode_character(CHARACTER_TYPE type, char* data){
	unsigned char encode_flag = FALSE;
	switch (type) {
		case UTF8:
			check_input_uft8(data);
			encode_flag = TRUE;
			break;
		case ISO_8859_1:
			check_input_iso8859_1(data);
			encode_flag = TRUE;
			break;
		case SHIFT_JIS:
			check_input_shift_jis(data);
			encode_flag = TRUE;
			break;
		default:
			encode_flag = FALSE;
			break;
	}
	return encode_flag;
}

/* =======================================================================
 * EXTERNAL API
 * ======================================================================*/

/* encode data in numeric mode */
void encode_numeric_mode(char *data){
	int length=0;
	length = strlen(data);
	check_data_numeric_mode(data,length);
}
void encode_alphanumeric_mode(char *data){

}
void encode_byte_mode(char *data){

}
void encode_kanji_mode(char *data){

}
