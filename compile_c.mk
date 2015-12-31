################################################################################
# include mother makefile (for top define macro)
################################################################################
include qr_define.mk
include source.mk
################################################################################
# Create for C makefile
################################################################################
C_SRCS += \
$(QR_SRC)/main.c \
$(QR_SRC)/data_mask.c \
$(QR_SRC)/db_main.c \
$(QR_SRC)/encode_data.c \
$(QR_SRC)/error_correction.c \
$(QR_SRC)/matrix.c \
$(QR_SRC)/structure_final_msg.c 

OBJS += \
$(BUILD_OBJ)/main.o \
$(BUILD_OBJ)/data_mask.o \
$(BUILD_OBJ)/db_main.o \
$(BUILD_OBJ)/encode_data.o \
$(BUILD_OBJ)/error_correction.o \
$(BUILD_OBJ)/matrix.o \
$(BUILD_OBJ)/structure_final_msg.o 

$(BUILD_OBJ)/%.o: $(QR_SRC)/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	$(CC) -g3 -Wall -c "$<" -o "$@"
	@echo 'Finished building: $<'
	@echo ' '	