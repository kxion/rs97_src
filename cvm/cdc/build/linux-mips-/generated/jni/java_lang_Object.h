/* DO NOT EDIT THIS FILE - it is machine generated */
#include "javavm/export/jni.h"
/* Header for class java/lang/Object */

#ifndef _CVM_JNI_java_lang_Object
#define _CVM_JNI_java_lang_Object
#ifdef __cplusplus
extern "C"{
#endif
/*
 * Class:	java/lang/Object
 * Method:	getClass
 * Signature:	()Ljava/lang/Class;
 */
JNIEXPORT jclass JNICALL Java_java_lang_Object_getClass
  (JNIEnv *, jobject);

/*
 * Class:	java/lang/Object
 * Method:	hashCode
 * Signature:	()I
 */
JNIEXPORT jint JNICALL Java_java_lang_Object_hashCode
  (JNIEnv *, jobject);

/*
 * Class:	java/lang/Object
 * Method:	clone
 * Signature:	()Ljava/lang/Object;
 */
JNIEXPORT jobject JNICALL Java_java_lang_Object_clone
  (JNIEnv *, jobject);

/*
 * Class:	java/lang/Object
 * Method:	notify
 * Signature:	()V
 */
JNIEXPORT void JNICALL Java_java_lang_Object_notify
  (JNIEnv *, jobject);

/*
 * Class:	java/lang/Object
 * Method:	notifyAll
 * Signature:	()V
 */
JNIEXPORT void JNICALL Java_java_lang_Object_notifyAll
  (JNIEnv *, jobject);

/*
 * Class:	java/lang/Object
 * Method:	wait
 * Signature:	(J)V
 */
JNIEXPORT void JNICALL Java_java_lang_Object_wait
  (JNIEnv *, jobject, jlong);

#ifdef __cplusplus
}
#endif
#endif