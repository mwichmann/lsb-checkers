LSBLIBCHK_VERSION=unofficial

include libs.mk

OBJS = libchk.o libs.o $(LIBOBJS)

CFLAGS=-g -I../elfchk -DLSBVERSION=\"$$LSBVERSION\" -DLSBLIBCHK_VERSION=\"$(LSBLIBCHK_VERSION)\" -Wall

all:: libchk

libchk: $(OBJS) ../elfchk/libelfchk.a ../tetj/libtetj.a
	cc $(CFLAGS) -o libchk $(OBJS) -L../elfchk -L ../tetj -lelfchk -ltetj

libs.c:
	./mkfunclist

install:
	install -d $(INSTALL_ROOT)/$(BINDIR)
	install libchk $(INSTALL_ROOT)/$(BINDIR)/lsblibchk
	install lsblibchk.1 $(INSTALL_ROOT)/$(MANDIR)/man1/lsblibchk.1

# Distclean means will need database to rebuild
distclean: clean
	rm -f libs.h libs.c

clean:
	rm -f $(OBJS) libchk

.PHONE: clean distclean install

