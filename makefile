########################################################################################
# include mother makefile (for top define macro)
include qr_define.mk
include compile_c.mk
########################################################################################
# DEFINE MACRO
#TARGET = $(CLASS_DIR)/NativeClassC.class
TARGET = $(QR_TOP)/qr
BUILDCLASS =
DATA_BASE = \
$(SRC)/db 
########################################################################################
# Every subdirectory with source files must be described here, add new add last list!
SUB_DIRS = \
$(SRC)/qrNativeC \
$(SRC)/interfaceQR 
# create directory for building code
_create_dirs := $(shell mkdir -p \
$(BIN) \
$(LIBJNI) \
$(BUILD_OBJ) )
########################################################################################
# DEFINE MACRO FOR MAKE FILE
########################################################################################
#
########################################################################################
# for subdir make
# include ss_sub.mk
########################################################################################
# first target will be run when make call!
# default this create makefile for java program
make_all: create_db $(TARGET) make_sub
	@echo 'Building target: $@'
	@echo 'Finished building target: $@'
	@echo ' '

create_db: $(DATA_BASE)
	@echo 'Building target: $@'
	for d in $(DATA_BASE); do \
		(cd $$d && $(MAKE) all) || exit $$? ; \
	done ;
	@echo 'Finished building target: $@'
	@echo ' '

# qrNativeC.NativeClassC.class dependent on qrNativeC.NativeClassC.java
$(TARGET):$(OBJS)
	@echo 'Building target: $@'
	@echo 'Finished building target: $@'
	@echo ' '

make_sub: $(SUB_DIRS)
	for d in $(SUB_DIRS); do \
		(cd $$d && $(MAKE) all) || exit $$? ; \
	done ;

run:
#	java -Djava.library.path=$(CLASSPATH) qrNativeC.NativeClassC
	java -classpath $(CLASSPATH) qrNativeC.NativeClassC
# clean for rebuild next make
clean:
	@echo 'remove output file'
	$(RM) $(CLASS_JNI_DIR)/*.class
	$(RM) $(BUILD_OBJ)/*.o
	$(RM) $(LIBJNI)/*.so
	$(RM) $(LIB_H)/qrNativeC*.h
	$(RM) $(BIN)/*
