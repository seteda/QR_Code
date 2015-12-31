#include <jni.h>
#include <stdio.h>
#include "../include/db_main.h"
#include "../include/qrNativeC_NativeClassC.h"

/*
 * Class:     qrNativeC_NativeClassC
 * Method:    printdata
 * Signature: (II)V
 */
JNIEXPORT void JNICALL Java_qrNativeC_NativeClassC_printdata
(JNIEnv *env, jobject obj, jint x, jint y) {
	character_capacities_t qr_v;
	qr_data_t data_print;
	printf("you are call me in c\n");
	printf("x=%d y=%d\n",x,y);
	printf("x+y=%d\n",x+y);
	printf("START QR CODE JNI HERE\n");
	qr_v = version_qr(x,y);
	data_print.type = CHARACTER_CAPACITIES;
	data_print.qr_data.character_cap = (character_capacities_t*) malloc(sizeof(character_capacities_t));
	memset(data_print.qr_data.character_cap,0,sizeof(character_capacities_t));
	data_print.qr_data.character_cap->numeric_mode = qr_v.numeric_mode;
	data_print.qr_data.character_cap->alphanumeric_mode = qr_v.alphanumeric_mode;
	data_print.qr_data.character_cap->byte_mode = qr_v.byte_mode;
	data_print.qr_data.character_cap->kanji_mode = qr_v.kanji_mode;
	print(data_print);
	printf("\nEND QR CODE JNI HERE\n");
	return;
}

/*
 * Class:     qrNativeC_NativeClassC
 * Method:    getVerQr
 * Signature: (II)V
 */
JNIEXPORT jobject JNICALL Java_qrNativeC_NativeClassC_getVerQr
  (JNIEnv *env, jobject obj, jint version, jint level){
	/*
	 * Define variable
	 */
	character_capacities_t qr_v;
	qr_data_t data_print;
	jobject object;
	/*
	 * main
	 */
	printf("START QR CODE JNI HERE\n");
	qr_v = version_qr(version,level);
	data_print.type = CHARACTER_CAPACITIES;
	data_print.qr_data.character_cap = (character_capacities_t*) malloc(sizeof(character_capacities_t));
	memset(data_print.qr_data.character_cap,0,sizeof(character_capacities_t));
	data_print.qr_data.character_cap->numeric_mode = qr_v.numeric_mode;
	data_print.qr_data.character_cap->alphanumeric_mode = qr_v.alphanumeric_mode;
	data_print.qr_data.character_cap->byte_mode = qr_v.byte_mode;
	data_print.qr_data.character_cap->kanji_mode = qr_v.kanji_mode;
	print(data_print);
	printf("START RETURN CLASS FROM C TO JAVA\n");
	/*
	 * code mapping C-Java here
	 */

	printf("\nEND QR CODE JNI HERE\n");
	return object;
}

///* main function */
//int main(void) {
//	return 1;
//}
