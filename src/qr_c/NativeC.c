#include <jni.h>
#include <stdio.h>
#include "../../include/qrNativeC_NativeClassC.h"

/*
 * Class:     qrNativeC_NativeClassC
 * Method:    printdata
 * Signature: (II)V
 */
JNIEXPORT void JNICALL Java_qrNativeC_NativeClassC_printdata
  (JNIEnv *env, jobject obj, jint x, jint y){
	printf("you are call me in c\n");
	printf("x=%d y=%d\n",x,y);
	printf("x+y=%d\n",x+y);
	return;
}
