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

dummy_link: dummy_link.o makefile
	g++ -nostdlib -Wl,--dynamic-linker=$(LSB_LINKER) -L/opt/lsbdev-base/lib -lGL -lICE -lSM -lX11 -lXext -lXt -lc -lcrypt -ldl -lgcc_s -lm -lncurses -lpam -lpthread -lutil -lz -lstdc++ dummy_link.o -o $@

install:
	install -d $(INSTALL_ROOT)/$(BINDIR)
	install libchk lsblibchk dummy_link $(INSTALL_ROOT)/$(BINDIR)/
	install -d $(INSTALL_ROOT)/$(MANDIR)/man1/
	install lsblibchk.1 $(INSTALL_ROOT)/$(MANDIR)/man1/lsblibchk.1

test: libchk dummy_link
	./test_libchk

# Distclean means will need database to rebuild
distclean: clean
	rm -f libs.h libs.c

clean:
	rm -f $(OBJS) libchk dummy_link dummy_link.o

.PHONY: clean distclean install test

