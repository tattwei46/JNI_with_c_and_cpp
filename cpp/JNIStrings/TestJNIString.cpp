#include <jni.h>       // JNI header provided by JDK
#include <iostream>  // C++ standard IO header
#include "TestJNIString.h"  // Generated
using namespace std;

JNIEXPORT jstring JNICALL Java_TestJNIString_sayHello(JNIEnv *env, jobject thisObj, jstring inJNIStr) {
	const char *inCStr = env->GetStringUTFChars(inJNIStr, JNI_FALSE);
	if (NULL == inCStr) return NULL;
	cout << "In Cpp, the received string is: " << inCStr << endl;
	env->ReleaseStringUTFChars(inJNIStr, inCStr); 

	char outCStr[128];
	cout << "Enter a String: ";
	cin >> outCStr;

	// Step 3: Convert the C-string (char*) into JNI String (jstring) and return
	return env->NewStringUTF(outCStr);
}