WRAPPER_LIBS = \
	libs/libc/libc.o \
	libs/libpam/libpam.o \
	libs/libncurses/libncurses.o \
	libs/libz/libz.o \
	libs/libm/libm.o \
	libs/libpthread/libpthread.o \
	libs/libSM/libSM.o 

#	libs/libXt/libXt.o \
#	libs/libICE/libICE.o \
#	libs/libGL/libGL.o 
#	libs/libX11/libX11.o 


TEST_LIB = tests/tests.o
FHS_LIB = fhs/fhs.o
LIB64=$(shell case `arch` in (ppc64 | s390x | x86_64) echo 64 ;; esac)
#REAL_LIBS = -L/opt/lsb/lib$(LIB64) -lXt -lICE -l SM -lX11 -lGL -lncurses -lpam -lz -lm -ldl -lc 
REAL_LIBS = -L/opt/lsb/lib$(LIB64) -ldl

#TODO: generalize building stuff in the "misc" directory

all: liblsbdynchk.so lsbdynchk

$(WRAPPER_LIBS): build_libs makefile

build_libs:
	cd libs && make all

$(TEST_LIB):: 
	cd tests && make all

$(FHS_LIB):: 
	cd fhs && make all

liblsbdynchk.so: $(WRAPPER_LIBS) $(FHS_LIB) $(TEST_LIB) misc/global_flag.o misc/lsb_output.o makefile liblsbdynchk.Version
	gcc -shared -Wl,--version-script -Wl,liblsbdynchk.Version -Wl,-soname -Wl,liblsbdynchk.so.1 -o liblsbdynchk.so.1 $(REAL_LIBS) $(WRAPPER_LIBS) $(TEST_LIB) $(FHS_LIB) misc/lsb_output.o misc/global_flag.o

lsbdynchk: lsbdynchk.sed
	if [ -n "$(LIBDIR)" ] ; \
	then \
	   sed -e "s#@LIBDIR@#`echo $(INSTALL_ROOT)$(LIBDIR)`#" <lsbdynchk.sed >lsbdynchk; \
	else \
	   sed -e "s#@LIBDIR@#`pwd`#" <lsbdynchk.sed >lsbdynchk; \
	fi

test:

install:
	install -d $(DESTDIR)$(INSTALL_ROOT)/$(LIBDIR)
	install liblsbdynchk.so.1 $(DESTDIR)$(INSTALL_ROOT)/$(LIBDIR)/liblsbdynchk.so.1
	install -d $(DESTDIR)$(INSTALL_ROOT)/$(BINDIR)
	install lsbdynchk $(DESTDIR)$(INSTALL_ROOT)/$(BINDIR)/lsbdynchk
	install -d $(DESTDIR)$(INSTALL_ROOT)/$(MANDIR)/man1
	install lsbdynchk.1 $(DESTDIR)$(INSTALL_ROOT)/$(MANDIR)/man1/lsbdynchk.1


distclean: clean

clean:
	for d in libs tests;do (cd $$d && make clean);done
	rm -f *~ liblsbdynchk.so.1

.PHONY: all install

misc/global_flag.o: misc/global_flag.c
misc/lsb_output.o: misc/lsb_output.c
misc/startmain.o: misc/startmain.c
