CFLAGS=-g

OBJS=dynsyms.o dynamic.o dyntags.o dtneeded.o elfchk.o hdr.o proghdr.o \
	sectinfo.o sections.o util.o
GENSRCS=dynsyms.c dtneeded.c sectinfo.c dyntags.c
LIB=libelfchk.a

all: $(LIB) test

install:

$(LIB): $(OBJS)
	rm -f $(LIB);ar clq $(LIB) $(OBJS)

test: test.c $(LIB)
	cc -o test $(CFLAGS) test.c $(LIB)

dynsyms.c: ./mkfunclist
	./mkfunclist >dynsyms.c

dyntags.c: ./mkdyntags
	./mkdyntags >dyntags.c

dtneeded.c: ./mkdtneededlist
	./mkdtneededlist >dtneeded.c

sectinfo.c: ./mksectinfo
	./mksectinfo >sectinfo.c

clean:
	rm -f $(OBJS) $(GENSRCS) $(LIB)
