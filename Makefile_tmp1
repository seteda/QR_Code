# author Tungntk54@edabk.org
USER_NAME = thanhtung
PROJECT_NAME = /workspace/QR_Code
REPOSITORY_NAME = /home/$(USER_NAME)/$(PROJECT_NAME)
SHELL := /bin/bash
SUB_DIRS = library
CLASS_DIR = bin
GCC = gcc
GPP = g++
LIB_C = "library/libNativeC.so"
CLASS_JNI = "NativeC"

javah -jni -classpath $(REPOSITORY_NAME)/$(CLASS_DIR)/$(CLASS_JNI) NativeC

gcc -fPIC -shared -I/opt/tools/java-jdk/jdk1.8.0_65/include/ NativeC.c -o libnativeC.so

# run java with C: -Djava.library.path=. follow program find library in current folder
java -Djava.library.path=. NativeC
# FLAGS += -Wall -g -O3 $(ERLANG_CFLAGS) $(ARICENT_CFLAGS) -fPIC -shared 
