#include <jni.h>       // JNI header provided by JDK
#include <iostream>    // C++ standard IO header
#include "TestJNIPrimitive.h"  // Generated
using namespace std;

JNIEXPORT jdouble JNICALL Java_TestJNIPrimitive_average
  (JNIEnv *env, jobject thisObj, jint n1, jint n2) {
  	jdouble result;
	cout<<"In Cpp, the numbers are "<< n1 << "and "<< n2 <<endl;
	result = ((jdouble) n1 + n2) / 2.0;
	return result; 

  }


