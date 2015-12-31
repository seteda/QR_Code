

.PHONY: all clean check
 
all:	$(ATARGET)
	for d in $(SUB_DIRS); do	\
	    (cd $$d && $(MAKE) $@) || exit $$? ;	\
	done ;
	
#clean:	$(CTARGET)
#	for d in $(SUB_DIRS); do	\
#	    (cd $$d && $(MAKE) $@) || exit $$? ;	\
#	done ;

check:	$(DTARGET)
	for d in $(SUB_DIRS); do	\
	    (cd $$d && $(MAKE) $@) || exit $$? ;	\
	done ;