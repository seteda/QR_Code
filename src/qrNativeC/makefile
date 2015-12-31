########################################################################################
# include mother makefile (for top define macro)
include ../../qr_define.mk
########################################################################################
# DEFINE MACRO
ATARGET = build_sub
CTARGET = clean_sub
########################################################################################
# DEFINE MACRO FOR MAKE FILE
BIN_NATIVEC = $(BIN)/qrNativeC
########################################################################################
# for subdir make after process ATARGET
include ../../ss_sub.mk
########################################################################################
build_sub: 
	@echo 'Building target: $@'
	@echo 'Creating qrNativeC class'
	$(JCC) $(JFLAGS) -d $(BIN) -classpath $(CLASSPATH)/ $(CLASS_JNI_DIR)/NativeClassC.java $(CLASS_JNI_DIR)/NativeInclude.java

	@echo 'Generate header file for JNI'
	javah -d $(LIB_H)/ -classpath $(CLASSPATH)/ qrNativeC.NativeClassC
	chmod +x $(LIB_H)/*.h

	@echo 'Creating libNativeInC.so for JNI'
	$(CC) $(CFLAGS) -I$(JDK_LIB) $(QR_SRC)/*.c -o $(LIBJNI)/libNativeInC.so $(LDFLAGS)

#	@echo 'Copy all class qrNative to bin/qrNativeC'
#	mkdir -p $(BIN_NATIVEC)
#	cp -r *.class $(BIN_NATIVEC)/

	@echo 'Finished building target: $@'
	@echo ' '

# clean for rebuild next make
clean_sub:
	@echo 'remove output file'
