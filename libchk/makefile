
include libs.mk

OBJS = libchk.o libs.o $(LIBOBJS)

CFLAGS=-I../elfchk

all:: libchk

libchk: $(OBJS)
	cc -o libchk $(OBJS) -L../elfchk -lelfchk

libs.c: mkfunclist
	./mkfunclist

install:
	install libchk $$LSBHOME/src/build/usr/bin/lsblibchk

clean:
	rm -f $(OBJS) libs.h libs.c
