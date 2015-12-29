########################################################################################
# include mother makefile (for top define macro)
include qr_define.mk
include subdir.mk
########################################################################################
# DEFINE MACRO
TARGET = $(CLASS_DIR)/NativeClassC.class
SOURCE_JNI = $(CLASS_DIR)/NativeClassC.java
########################################################################################
# step : compile
# step : link
########################################################################################
# DEFINE MACRO FOR MAKE FILE
########################################################################################
# first target will be run when make call!
# default this create makefile for java program
.PHONY: run, clean, all
all: $(TARGET)
	@echo 'Building target: $@'
	@echo 'Finished building target: $@'
	@echo ' '

# qrNativeC.NativeClassC.class dependent on qrNativeC.NativeClassC.java
$(TARGET): $(OBJS)
	@echo 'Building target: $@'
	@echo 'Creating qrNativeC.NativeClassC.class from qrNativeC.NativeClassC.java'
	$(JCC) $(JFLAGS) -d $(SRC) $(SOURCE_JNI)
	@echo 'Generate header file for JNI'
	javah -d $(LIB_H)/ -classpath $(CLASSPATH)/ qrNativeC.NativeClassC
	#@echo 'Create nativeC.o file'
	#$(CC) -I$(JDK_LIB) $(QR_SRC)/nativeC.c -o $(BUILD_OBJ)/nativeC.o
	#@echo 'Creating libNativeInC.so for JNI'
	#$(CC) -fPIC -shared $(BUILD_OBJ)/nativeC.o -o $(LIBJNI)/libNativeInC.so
	@echo 'Creating libNativeInC.so for JNI'
	$(CC) $(CFLAGS) -I$(JDK_LIB) $(QR_SRC)/*.c -o $(LIBJNI)/libNativeInC.so $(LDFLAGS)
	@echo 'Finished building target: $@'
	@echo ' '

run:
	@export LD_LIBRARY_PATH+=$(LIBJNI)
	#java -Djava.library.path=$(CLASSPATH) qrNativeC.NativeClassC
	java -classpath $(CLASSPATH) qrNativeC.NativeClassC
# clean for rebuild next make
clean:
	@echo 'remove output file'
	$(RM) $(CLASS_DIR)/*.class
	$(RM) $(BUILD_OBJ)/*.o
	$(RM) $(QR_SRC)/*.o
	$(RM) $(LIBJNI)/*.so
	$(RM) $(LIB_H)/qrNativeC_NativeClassC.h