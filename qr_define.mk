################################################################################
# Define MAIN DIR HERE
################################################################################
# project work dir
QR_TOP = ~/workspace/QR_CODE
JDK_LIB = /opt/tools/java-jdk/jdk1.8.0_65/include/

################################################################################
# Define source code HERE
################################################################################
# for source code
OBJ_SRCS :=
ASM_SRCS :=
C_SRCS :=
O_SRCS :=
JAVA_SRCS :=
S_UPPER_SRCS :=
EXECUTABLES :=
OBJS :=
C_DEPS :=

# Every subdirectory with source files must be described here
SUBDIRS := \
bin/qr_c \
jni/src/qr_c \
test/test_src \

################################################################################
# Define for JNI HERE
################################################################################
# for java
SRC = $(QR_TOP)/src
CLASSPATH = $(QR_TOP)/src
CLASS_DIR = $(QR_TOP)/src/qrNativeC
BIN = $(QR_TOP)/bin
# for jni
LIB_H = $(QR_TOP)/jni/include
QR_SRC = $(QR_TOP)/jni/src
# for build
LIBJNI = $(QR_TOP)/build/jni/lib
BUILD_OBJ = $(QR_TOP)/build/jni/obj
################################################################################
# Define for manage file and folder HERE
################################################################################
# for remove file
RM := rm -rf

################################################################################
# Define compile tools HERE
################################################################################
CC = gcc
CXX = g++
JCC = javac
JH = javah
# compile with debugging information for java
JFLAGS = -g
# compile with debugging information for gcc
CFLAGS = -fPIC -g -Wall
LDFLAGS = -shared