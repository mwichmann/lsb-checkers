
include libs.mk

OBJS = libchk.o libs.o $(LIBOBJS)

CFLAGS=-g -I../elfchk -DLSBVERSION=\"$$LSBVERSION\"

all:: libchk

libchk: $(OBJS) ../elfchk/libelfchk.a
	cc $(CFLAGS) -o libchk $(OBJS) -L../elfchk -lelfchk

libs.c:
	./mkfunclist

install:
	install libchk $$LSBHOME/src/build/usr/bin/lsblibchk

clean:
	rm -f $(OBJS) libs.h libs.c
