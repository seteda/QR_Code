//#include <jni.h>
#include "../include/jni.h"
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
#ifdef TEST_DEBUG
	qr_data_t data_print;
#endif TEST_DEBUG

#ifdef TEST_DEBUG
	printf("you are call me in c\n");
	printf("x=%d y=%d\n",x,y);
	printf("x+y=%d\n",x+y);
	printf("START QR CODE JNI HERE\n");
#endif TEST_DEBUG
	qr_v = version_qr(x,y);
#ifdef TEST_DEBUG
	data_print.type = CHARACTER_CAPACITIES;
	data_print.qr_data.character_cap = (character_capacities_t*) malloc(sizeof(character_capacities_t));
	memset(data_print.qr_data.character_cap,0,sizeof(character_capacities_t));
	data_print.qr_data.character_cap->numeric_mode = qr_v.numeric_mode;
	data_print.qr_data.character_cap->alphanumeric_mode = qr_v.alphanumeric_mode;
	data_print.qr_data.character_cap->byte_mode = qr_v.byte_mode;
	data_print.qr_data.character_cap->kanji_mode = qr_v.kanji_mode;
	print(data_print);
	printf("\nEND QR CODE JNI HERE\n");
#endif TEST_DEBUG
	return;
}

/*
 * Class:     qrNativeC_NativeClassC
 * Method:    getVerQr
 * Signature: (II)Ldb/Character_capacities;
 */
JNIEXPORT jobject JNICALL Java_qrNativeC_NativeClassC_getVerQr
  (JNIEnv *env, jobject obj, jint version, jint level){
	/*
	 * Define variable
	 */
	character_capacities_t qr_v;
#ifdef TEST_DEBUG
	qr_data_t data_print;
#endif
	jint numeric_mode,alphanumeric_mode,byte_mode,kanji_mode;
	// Get a class reference for db.Character_capacities
	jclass cls = (*env)->FindClass(env,"db/Character_capacities");

	qr_v = version_qr(version,level);
#ifdef TEST_DEBUG
	printf("START QR CODE JNI HERE\n");
	data_print.type = CHARACTER_CAPACITIES;
	data_print.qr_data.character_cap = (character_capacities_t*) malloc(sizeof(character_capacities_t));
	memset(data_print.qr_data.character_cap,0,sizeof(character_capacities_t));
	data_print.qr_data.character_cap->numeric_mode = qr_v.numeric_mode;
	data_print.qr_data.character_cap->alphanumeric_mode = qr_v.alphanumeric_mode;
	data_print.qr_data.character_cap->byte_mode = qr_v.byte_mode;
	data_print.qr_data.character_cap->kanji_mode = qr_v.kanji_mode;
	print(data_print);
	printf("START RETURN CLASS FROM C TO JAVA\n");
#endif
	/*
	 * calculate values
	 */
	numeric_mode = qr_v.numeric_mode;
	alphanumeric_mode = qr_v.alphanumeric_mode;
	byte_mode = qr_v.byte_mode;
	kanji_mode = qr_v.kanji_mode;
//	/*
//	 * Get FieldID of fields
//	 */
//	numeric_mode_ID = (*env)->GetFieldID(env,cls,"numeric_mode","I"); /* value of field is integer */
//	alphanumeric_mode_ID = (*env)->GetFieldID(env,cls,"alphanumeric_mode","I"); /* value of field is integer */
//	byte_mode_ID = (*env)->GetFieldID(env,cls,"byte_mode","I"); /* value of field is integer */
//	kanji_mode_ID = (*env)->GetFieldID(env,cls,"kanji_mode","I"); /* value of field is integer */
//	/*
//	 * Set fields value
//	 */
//	(*env)->SetIntField(env, obj, numeric_mode_ID, 1);
//	(*env)->SetIntField(env, obj, alphanumeric_mode_ID, 1);
//	(*env)->SetIntField(env, obj, byte_mode_ID, 1);
//	(*env)->SetIntField(env, obj, kanji_mode_ID, 1);

	/*
	 * Create methods to call from JNI to class
	 */
//	jmethodID methodIdInit = (*env)->GetMethodID(env, cls, "<init>", "()V"); /* void  */
//	if (NULL == methodIdInit)
//		return NULL;
//	jmethodID methodPrintDb = (*env)->GetMethodID(env, cls, "printDb", "()V"); /* void printDb() */
//	if (NULL == methodPrintDb)
//		return NULL;
//	jmethodID methodGetName = (*env)->GetMethodID(env, cls, "getName", "()Ljava/lang/String;"); /* String getName() */
//	if (NULL == methodGetName)
//		return NULL;
	jmethodID methodInit =  (*env)->GetMethodID(env, cls, "init", "(IIII)V");
	if (NULL == methodInit)
			return NULL;
	/*
	 * Create new object and add method that will be call from JNI
	 */
	jobject newObj;
	newObj = (*env)->NewObject(env, cls, methodInit,numeric_mode,alphanumeric_mode,byte_mode,kanji_mode);
//	newObj = (*env)->NewObject(env, cls, methodIdInit);
//	newObj = (*env)->NewObject(env, cls, methodGetName);
//	newObj = (*env)->NewObject(env, cls, methodPrintDb);
	(*env)->DeleteLocalRef(env,cls);
	return newObj;
}

/*
 * Class:     qrNativeC_NativeClassC
 * Method:    getLine
 * Signature: (Ljava/lang/String;)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_qrNativeC_NativeClassC_getLine
  (JNIEnv *env, jobject obj, jstring S){
	jstring text;
	return text;
}

/*
 * Class:     qrNativeC_NativeClassC
 * Method:    returnInt
 * Signature: (I)I
 */
JNIEXPORT jint JNICALL Java_qrNativeC_NativeClassC_returnInt
  (JNIEnv *env, jobject obj, jint x){
	jint i;
	return i;
}

/*
 * Class:     qrNativeC_NativeClassC
 * Method:    returnByte
 * Signature: (I)B
 */
JNIEXPORT jbyte JNICALL Java_qrNativeC_NativeClassC_returnByte
  (JNIEnv *env, jobject obj, jint x){
	jbyte b;
	return b;
}

/*
 * Class:     qrNativeC_NativeClassC
 * Method:    returnShort
 * Signature: (I)S
 */
JNIEXPORT jshort JNICALL Java_qrNativeC_NativeClassC_returnShort
  (JNIEnv *env, jobject obj, jint x){
	jshort i;
	return i;
}

/*
 * Class:     qrNativeC_NativeClassC
 * Method:    returnLong
 * Signature: (I)J
 */
JNIEXPORT jlong JNICALL Java_qrNativeC_NativeClassC_returnLong
  (JNIEnv *env, jobject obj, jint x){
	jlong i;
	return i;
}

/*
 * Class:     qrNativeC_NativeClassC
 * Method:    returnDouble
 * Signature: (I)D
 */
JNIEXPORT jdouble JNICALL Java_qrNativeC_NativeClassC_returnDouble
  (JNIEnv *env, jobject obj, jint x){
	jdouble i;
	return i;
}

/*
 * Class:     qrNativeC_NativeClassC
 * Method:    returnChar
 * Signature: (I)C
 */
JNIEXPORT jchar JNICALL Java_qrNativeC_NativeClassC_returnChar
  (JNIEnv *env, jobject obj, jint x){
	jchar i;
	return i;
}

/*
 * Class:     qrNativeC_NativeClassC
 * Method:    returnBoolean
 * Signature: (I)Z
 */
JNIEXPORT jboolean JNICALL Java_qrNativeC_NativeClassC_returnBoolean
  (JNIEnv *env, jobject obj, jint x){
	jboolean i;
	return i;
}

/*
 * Class:     qrNativeC_NativeClassC
 * Method:    returnString
 * Signature: (Ljava/lang/String;)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_qrNativeC_NativeClassC_returnString
  (JNIEnv *env, jobject obj, jstring inJNIStr){
	/*
	 * To get a C-string (char*) from JNI string (jstring), invoke method:
	 * const char* GetStringUTFChars(JNIEnv*, jstring, jboolean*).
	 *
	 * To get a JNI string (jstring) from a C-string (char*), invoke method:
	 * jstring NewStringUTF(JNIEnv*, char*).
	 */
	/*
	 * Convert the JNI String (jstring) into C-String (char*)
	 */
	const char *inCStr = (*env)->GetStringUTFChars(env,inJNIStr,NULL);
	if (inCStr == NULL) return NULL;
	/*
	 * processing
	 */
	printf("In C, the received string is:%s\n",inCStr);
	(*env)->ReleaseStringUTFChars(env,inJNIStr,inCStr); /* release resource */
	/*
	 * Create data for return
	 */
	char outStr[128];
	printf("Enter a string: ");
	scanf("%s",outStr); /* Max 127 character */
	/*
	 * Convert C-string (char*) into JNI-String (jstring) and return
	 */
	return (*env)->NewStringUTF(env,outStr);
}

/*
 * Class:     qrNativeC_NativeClassC
 * Method:    returnArray
 * Signature: ([I)[D
 */
JNIEXPORT jdoubleArray JNICALL Java_qrNativeC_NativeClassC_returnArrayDouble___3I(
		JNIEnv *env, jobject obj, jintArray inJNIArray) {
	/*
	 * Step 1: Convert incoming JNI jintArray to C array jint[]
	 */
	jint *inCArray = (*env)->GetIntArrayElements(env, inJNIArray, NULL);
	if (inCArray == NULL)
		return NULL;
	jsize length = (*env)->GetArrayLength(env, inJNIArray);

	// Step 2: Perform its intended operations
	jint sum = 0;
	int i;
	for (i = 0; i < length; i++) {
		sum += inCArray[i];
	}
	jdouble average = (jdouble) sum / length;
	(*env)->ReleaseIntArrayElements(env, inJNIArray, inCArray, 0); // release resources

	jdouble outCArray[] = { sum, average };

	// Step 3: Convert the C's Native jdouble[] to JNI jdoublearray, and return
	jdoubleArray outJNIArray = (*env)->NewDoubleArray(env, 2);  // allocate
	if (NULL == outJNIArray)
		return NULL;
	(*env)->SetDoubleArrayRegion(env, outJNIArray, 0, 2, outCArray);  // copy
	return outJNIArray;

}

/*******************************************************************************************
 * FOR USING JNI FUNCTION TO CONVERT DATA BETWEEN C-JAVA
 *******************************************************************************************/
/*
 * JNI supports conversion for Unicode (16-bit characters)
 * and UTF-8 (encoded in 1-3 bytes) strings.
 * UTF-8 strings act like null-terminated C-strings (char array),
 * which should be used in C/C++ programs.
 */
/*****************
 * UTF-8 String (encoded to 1-3 byte, backward compatible with 7-bit ASCII)
 * Can be mapped to null-terminated char-array C-string
 * **************/
/*
 * const char * GetStringUTFChars(JNIEnv *env, jstring string, jboolean *isCopy);
 * Returns a pointer to an array of bytes representing the string in modified UTF-8 encoding.
 *
 * void ReleaseStringUTFChars(JNIEnv *env, jstring string, const char *utf);
 * Informs the VM that the native code no longer needs access to utf.
 *
 *jstring NewStringUTF(JNIEnv *env, const char *bytes);
 *Constructs a new java.lang.String object from an array of characters in modified UTF-8 encoding.
 *
 *jstring jsize GetStringUTFLength(JNIEnv *env, jstring string);
 *Returns the length in bytes of the modified UTF-8 representation of a string.
 *
 *void GetStringUTFRegion(JNIEnv *env, jstring str, jsize start, jsize length, char *buf);
 *Translates len number of Unicode characters beginning at offset start into modified UTF-8 encoding
 *and place the result in the given buffer buf.
 *
 */
/*****************
 *Unicode Strings (16-bit character)
 *****************/
/*
 * const jchar * GetStringChars(JNIEnv *env, jstring string, jboolean *isCopy);
 * Returns a pointer to the array of Unicode characters
 *
 *void ReleaseStringChars(JNIEnv *env, jstring string, const jchar *chars);
 *Informs the VM that the native code no longer needs access to chars.
 *
 *jstring NewString(JNIEnv *env, const jchar *unicodeChars, jsize length);
 *Constructs a new java.lang.String object from an array of Unicode characters.
 *
 *jsize GetStringLength(JNIEnv *env, jstring string);
 *Returns the length (the count of Unicode characters) of a Java string.
 *
 *void GetStringRegion(JNIEnv *env, jstring str, jsize start, jsize length, jchar *buf);
 *Copies len number of Unicode characters beginning at offset start to the given buffer buf
 *
 */
/*****************
 * for ARRAY
 *****************/
/*
 * ArrayType: 	jintArray, jbyteArray, jshortArray, jlongArray, jfloatArray, jdoubleArray, jcharArray, jbooleanArray
 * PrimitiveType: int, byte, short, long, float, double, char, boolean
 * NativeType: jint, jbyte, jshort, jlong, jfloat, jdouble, jchar, jboolean
 * NativeType * Get<PrimitiveType>ArrayElements(JNIEnv *env, ArrayType array, jboolean *isCopy);
 * void Release<PrimitiveType>ArrayElements(JNIEnv *env, ArrayType array, NativeType *elems, jint mode);
 * void Get<PrimitiveType>ArrayRegion(JNIEnv *env, ArrayType array, jsize start, jsize length, NativeType *buffer);
 * void Set<PrimitiveType>ArrayRegion(JNIEnv *env, ArrayType array, jsize start, jsize length, const NativeType *buffer);
 * ArrayType New<PrimitiveType>Array(JNIEnv *env, jsize length);
 * void * GetPrimitiveArrayCritical(JNIEnv *env, jarray array, jboolean *isCopy);
 * void ReleasePrimitiveArrayCritical(JNIEnv *env, jarray array, void *carray, jint mode);
 */
/*****************
 * for CLASS
 *****************/
/*
 * jclass GetObjectClass(JNIEnv *env, jobject obj);
 * Returns the class of an object.
 *
 *jfieldID GetFieldID(JNIEnv *env, jclass cls, const char *name, const char *sig);
 *Returns the field ID for an instance variable of a class.
 *
 *NativeType Get<type>Field(JNIEnv *env, jobject obj, jfieldID fieldID);
 *void Set<type>Field(JNIEnv *env, jobject obj, jfieldID fieldID, NativeType value);
 *
 *Get/Set the value of an instance variable of an object
 *<type> includes each of the eight primitive types plus Object.
 *
 */

