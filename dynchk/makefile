WRAPPER_LIBS = \
	libs/libc/libc.o \
	libs/libpam/libpam.o \
	libs/libncurses/libncurses.o \
	libs/libz/libz.o \
	libs/libm/libm.o \
	libs/libX11/libX11.o 
#	libs/libpthread/libpthread.o

TEST_LIB = tests/tests.o
FHS_LIB = fhs/fhs.o

all: liblsbdynchk.so lsbdynchk

$(WRAPPER_LIBS): build_libs makefile

build_libs:
	cd libs && make all

$(TEST_LIB):: 
	cd tests && make all

$(FHS_LIB):: 
	cd fhs && make all

liblsbdynchk.so: $(WRAPPER_LIBS) $(FHS_LIB) $(TEST_LIB) misc/global_flag.o  misc/lsb_output.o makefile
	ld -shared -soname liblsbdynchk.so.1 -o liblsbdynchk.so.1 -ldl -lc $(WRAPPER_LIBS) $(TEST_LIB) $(FHS_LIB) misc/global_flag.o misc/lsb_output.o

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


clean:
	for d in libs tests;do (cd $$d && make clean);done
	rm -f *~ liblsbdynchk.so.1

.PHONY: all install
