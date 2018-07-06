/* DO NOT EDIT THIS FILE - it is machine generated */
#include "javavm/export/jni.h"
/* Header for class java/io/FileInputStream */

#ifndef _CVM_JNI_java_io_FileInputStream
#define _CVM_JNI_java_io_FileInputStream
#ifdef __cplusplus
extern "C"{
#endif
/*
 * Class:	java/io/FileInputStream
 * Method:	open
 * Signature:	(Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_java_io_FileInputStream_open
  (JNIEnv *, jobject, jstring);

/*
 * Class:	java/io/FileInputStream
 * Method:	read
 * Signature:	()I
 */
JNIEXPORT jint JNICALL Java_java_io_FileInputStream_read
  (JNIEnv *, jobject);

/*
 * Class:	java/io/FileInputStream
 * Method:	readBytes
 * Signature:	([BII)I
 */
JNIEXPORT jint JNICALL Java_java_io_FileInputStream_readBytes
  (JNIEnv *, jobject, jbyteArray, jint, jint);

/*
 * Class:	java/io/FileInputStream
 * Method:	skip
 * Signature:	(J)J
 */
JNIEXPORT jlong JNICALL Java_java_io_FileInputStream_skip
  (JNIEnv *, jobject, jlong);

/*
 * Class:	java/io/FileInputStream
 * Method:	available
 * Signature:	()I
 */
JNIEXPORT jint JNICALL Java_java_io_FileInputStream_available
  (JNIEnv *, jobject);

/*
 * Class:	java/io/FileInputStream
 * Method:	initIDs
 * Signature:	()V
 */
JNIEXPORT void JNICALL Java_java_io_FileInputStream_initIDs
  (JNIEnv *, jclass);

/*
 * Class:	java/io/FileInputStream
 * Method:	close0
 * Signature:	()V
 */
JNIEXPORT void JNICALL Java_java_io_FileInputStream_close0
  (JNIEnv *, jobject);

#ifdef __cplusplus
}
#endif
#endif