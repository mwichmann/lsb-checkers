CFLAGS=-g -Wall

OBJS=dynsyms.o dynamic.o dyntags.o dtneeded.o elfchk.o hdr.o proghdr.o \
	sectinfo.o sections.o symvers.o util.o proginterp.o progbits.o
GENSRCS=dynsyms.c dtneeded.c sectinfo.c dyntags.c dynsyms.c.chk
LIBS= ../tetj/libtetj.a
LIB=libelfchk.a

all: $(LIB) test

install:

$(LIB): $(OBJS)
	rm -f $(LIB);ar clq $(LIB) $(OBJS)

test: test.c $(LIB) $(LIBS)
	cc -o test $(CFLAGS) test.c $(LIB) $(LIBS)

check: dynsyms.c dynsyms.c.chk
	diff dynsyms.c dynsyms.c.chk

dynsyms.c:
	./mkfunclist >dynsyms.c

dynsyms.c.chk:
	./mkfunclist2 >dynsyms.c.chk

dyntags.c:
	./mkdyntags >dyntags.c

dtneeded.c:
	./mkdtneededlist >dtneeded.c

sectinfo.c:
	./mksectinfo >sectinfo.c

clean:
	rm -f $(OBJS) $(LIB)

distclean: clean
	rm -f $(GENSRCS)
