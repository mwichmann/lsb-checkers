LSBLIBCHK_VERSION=unofficial

include libs.mk

OBJS = libchk.o libs.o classchk.o $(LIBOBJS)

CFLAGS=-g -I../elfchk -I../tetj -DLSBVERSION=\"$$LSBVERSION\" -DLSBLIBCHK_VERSION=\"$(LSBLIBCHK_VERSION)\" -Wall

all:: libchk dummy_link

libchk: $(OBJS) ../elfchk/libelfchk.a ../tetj/libtetj.a
	$(CC) $(CFLAGS) -o libchk $(OBJS) -L../elfchk -L ../tetj -lelfchk -ltetj -ldl

libs.c:
	./mkfunclist

LSB_LINKER=`./lsb_linker`

LIB64=$(shell case `arch` in (ppc64 | s390x | x86_64) echo 64 ;; esac)

#XXX add /opt/lsb/lib or /opt/lsb/lib64, for the moment leave old path in place too
dummy_link: dummy_link.o makefile
	$(CXX) -nostdlib -Wl,--dynamic-linker=$(LSB_LINKER) -L/opt/lsb/lib$(LIB64) -L/opt/lsbdev-base/lib dummy_link.o -lGL -lICE -lSM -lX11 -lXext -lXt -lc -lcrypt -ldl -lgcc_s -lm -lncurses -lpam -lpthread -lutil -lz -lstdc++  -o $@

install:
	install -d $(INSTALL_ROOT)/$(BINDIR)
	install libchk lsblibchk dummy_link $(INSTALL_ROOT)/$(BINDIR)/
	install -d $(INSTALL_ROOT)/$(MANDIR)/man1/
	install lsblibchk.1 $(INSTALL_ROOT)/$(MANDIR)/man1/lsblibchk.1

test: libchk dummy_link
	./test_libchk

dumpints: dumpints.o libstdcxx_so_5.o

# Distclean means will need database to rebuild
distclean: clean
	rm -f libs.h libs.c

clean:
	rm -f $(OBJS) libchk dummy_link dummy_link.o

.PHONY: clean distclean install test

