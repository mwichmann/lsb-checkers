
OBJS = libchk.o classchk.o libstdcxx_so_6.o tetj.o util.o hdr.o symvers.o ../elfchk/modules.o
SRCS = classchk.c elfchk.h hdr.h libchk.c libchk.h libstdcxx_so_6.c \
	tetj.c tetj.h util.c hdr.c symvers.c symvers.h

CFLAGS=-g -DLSBVERSION=\"$$LSBVERSION\" -DLSBLIBCHK_VERSION=\"$$LSBVERSION\" -D_CXXABICHK_ -Wall -I../elfchk
LSBLIBCHK_VERSION=unofficial

all:: cxxabichk

cxxabichk: $(OBJS) 
	$(CC) $(CFLAGS) -o cxxabichk $(OBJS) -ldl

elfchk.h: ../elfchk/elfchk.h ../elfchk/modules.c ../elfchk/modules.h
	cp ../elfchk/elfchk.h .
	cp ../elfchk/hdr.h .
	cp ../elfchk/symvers.h .

tetj.h:
	cp ../tetj/tetj.h .

libchk.c: elfchk.h tetj.h ../libchk/libchk.c ../libchk/libchk.h
	cp ../libchk/libchk.c .
	cp ../libchk/libchk.h .
	
classchk.c: elfchk.h ../libchk/classchk.c
	cp ../libchk/classchk.c .
	
libstdcxx_so_6.c: ../libchk/libstdcxx_so_6.c
	cp ../libchk/libstdcxx_so_6.c .
	
tetj.c: tetj.h
	cp ../tetj/tetj.c .
	
util.c: ../elfchk/util.c
	cp ../elfchk/util.c .
	
hdr.c:
	cp ../elfchk/hdr.c .
	
symvers.c:
	cp ../elfchk/symvers.c .
	
dist: $(SRCS) README
	cd ..;tar zcf cxxabichk.tar.gz cxxabichk

clean:
	rm -f $(OBJS) cxxabichk

distclean: clean
	rm -f $(SRCS) journal.*

.PHONY: clean distclean install

