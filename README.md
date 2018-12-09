# JNI_with_c_and_cpp

Java Native Interface or JNI allows native codes to be call in Java.
This demo project is to showcase how to call "Hello World from C" and "Hello World from Cpp" in Java.

## JNI with C

1. Create HelloJNI.java
2. Compile HelloJNI.java using command "javac -h . HelloJNI.java" and check output HelloJNI.h
3. Create HelloJNI.c
4. [Mac OS X 10.14.1- 64bit JDK] Set environment variable JAVA_HOME using command "export JAVA_HOME=/Library/Java/JavaVirtualMachines/jdk-11.0.1.jdk/Contents/Home"
5. Check path again using "echo $JAVA_HOME"
6. Compile the HelloJNI.c into dynamic share module libhello.dylib using gcc with command "gcc -I"$JAVA_HOME/include" -I"$JAVA_HOME/include/darwin" -dynamiclib -o libhello.dylib HelloJNI.c"
7. Run project "java HelloJNI" 

## JNI with Cpp
1. Repeat step 1 to 2 in "JNI with C"p
2. Create HelloJNI.cpp
3. Compile the HelloJNI.cpp with command "gcc -I"$JAVA_HOME/include" -I"$JAVA_HOME/include/darwin" -lstdc++ -dynamiclib -o libhello.dylib HelloJNI.cpp"
4. Run project "java HelloJNI"

## References
https://www3.ntu.edu.sg/home/ehchua/programming/java/JavaNativeInterface.html
