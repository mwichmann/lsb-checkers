
include libs.mk

OBJS = libchk.o libs.o $(LIBOBJS)

CFLAGS=-g -I../elfchk -DLSBVERSION=\"$$LSBVERSION\" -Wall

all:: libchk

libchk: $(OBJS) ../elfchk/libelfchk.a ../tetj/libtetj.a
	cc $(CFLAGS) -o libchk $(OBJS) -L../elfchk -L ../tetj -lelfchk -ltetj

libs.c:
	./mkfunclist

install:
	install libchk $$LSBHOME/src/build/usr/bin/lsblibchk

# Distclean means will need database to rebuild
distclean: clean
	rm -f libs.h libs.c

clean:
	rm -f $(OBJS) libchk

.PHONE: clean distclean

