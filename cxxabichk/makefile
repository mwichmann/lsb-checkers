
OBJS = libchk.o classchk.o libstdcxx_so_5.o tetj.o util.o hdr.o symvers.o
SRCS = classchk.c elfchk.h hdr.h libchk.c libchk.h libstdcxx_so_5.c \
	tetj.c tetj.h util.c hdr.c symvers.c symvers.h

CFLAGS=-g -DLSBVERSION=\"$$LSBVERSION\" -D_CXXABICHK_ -Wall

all:: cxxabichk

cxxabichk: $(OBJS) 
	$(CC) $(CFLAGS) -o cxxabichk $(OBJS) -ldl

elfchk.h:
	cp ../elfchk/elfchk.h .
	cp ../elfchk/hdr.h .
	cp ../elfchk/symvers.h .

tetj.h:
	cp ../tetj/tetj.h .

libchk.c: elfchk.h tetj.h
	cp ../libchk/libchk.c .
	cp ../libchk/libchk.h .
	
classchk.c: elfchk.h
	cp ../libchk/classchk.c .
	
libstdcxx_so_5.c:
	cp ../libchk/libstdcxx_so_5.c .
	
tetj.c: tetj.h
	cp ../tetj/tetj.c .
	
util.c:
	cp ../elfchk/util.c .
	
hdr.c:
	cp ../elfchk/hdr.c .
	
symvers.c:
	cp ../elfchk/symvers.c .
	
dist: $(SRCS)
	tar zcf cxxabichk.tar.gz $(SRCS) makefile

clean:
	rm -f $(OBJS) cxxabichk

distclean: clean
	rm -f $(SRCS) journal.*

.PHONE: clean distclean install

