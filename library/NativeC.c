#include <jni.h>
#include <stdio.h>
#include "NativeC.h"
/*
 * Class:     NativeC
 * Method:    printdata
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_NativeC_printdata
(JNIEnv *env, jobject obj, jint x, jint y){
	printf("you are call me in c\n");
	printf("x=%d y=%d\n",x,y);
	printf("x+y=%d\n",x+y);
	return;
}
