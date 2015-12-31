########################################################################################
# include mother makefile (for top define macro)
include ../../qr_define.mk
########################################################################################
# DEFINE MACRO
CLASSDIR_INTERFACEQR = $(BIN)/interfaceQR
JAVA_SRC = $(wildcard *.java)
JAVA_CLASS 	= $(addprefix $(CLASSDIR_INTERFACEQR)/,$(JAVA_SRC:.java=.class))

ATARGET = build_sub
CTARGET = clean_sub
########################################################################################
# DEFINE MACRO FOR MAKE FILE
########################################################################################
# for subdir make
include ../../ss_sub.mk
########################################################################################
$(CLASSDIR_INTERFACEQR)/%.class: $(CURDIR)/%.java
	@echo 'Building target: $@'
	$(JCC) $(JFLAGS) -classpath $(CLASSPATH)/ -d $(BIN)/ $<
	@echo 'Finished building target: $@'
	@echo ' '
build_sub: $(JAVA_CLASS)

# clean for rebuild next make
clean_sub:
	@echo 'remove output file'
	$(RM) $(JAVA_CLASS)
