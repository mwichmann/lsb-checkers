CFLAGS=-g -Wall -Werror -I../tetj

OBJS=dynamic.o elfchk.o hdr.o proghdr.o sections.o symvers.o util.o \
	proginterp.o progbits.o note.o dumpbytes.o dwarf.o ../lsb_version.o
GENSRCS=dynsyms.c dtneeded.c sectinfo.c secttype.c dyntags.c modules.c ../lsb_version.c
GENOBJS=$(shell echo $(GENSRCS) | sed s/\\.c/.o/g)
LIBS= ../tetj/libtetj.a
LIB=libelfchk.a

CFLAGS_APPCHK=-include appchk_untetj.h
OBJS_APPCHK=$(shell echo $(OBJS) | perl -pe 's/(\S+)\.o/\1_appchk.o/g')
LIB_APPCHK=libelfchk_appchk.a

all: modules.c $(LIB) $(LIB_APPCHK) test

include ../Makefile.common

install:

%_appchk.o: %.c
	$(CC) $(CFLAGS) $(CFLAGS_APPCHK) -c -o $@ $<

$(LIB): $(OBJS) $(GENOBJS)
	rm -f $(LIB);ar clq $(LIB) $(OBJS) $(GENOBJS)

$(LIB_APPCHK): $(OBJS_APPCHK)
	rm -f $(LIB_APPCHK);ar clq $(LIB_APPCHK) $(OBJS_APPCHK)

test: test.c $(LIB) $(LIBS)
	$(CC) -o test $(CFLAGS) test.c $(LIB) $(LIBS)

check: dynsyms.c dynsyms.c.chk
	diff dynsyms.c dynsyms.c.chk

gensrc: $(GENSRCS)

dynsyms.c:
	./mkfunclist -v `cat ../LSB_VERSIONS` >dynsyms.c

dynsyms.c.chk:
	./mkfunclist2 -v `cat ../LSB_VERSIONS` >dynsyms.c.chk

dyntags.c:
	./mkdyntags -v `cat ../LSB_VERSIONS` | indent -kr >dyntags.c

dtneeded.c:
	./mkdtneededlist -v `cat ../LSB_VERSIONS` >dtneeded.c

sectinfo.c:
	./mksectinfo -v `cat ../LSB_VERSIONS` >sectinfo.c

secttype.c:
	./mksecttype >secttype.c

modules.c modules.h: 
	./mkmodlist -v `cat ../LSB_VERSIONS`

clean:
	rm -f $(OBJS) $(GENOBJS) $(LIB) $(OBJS_APPCHK) $(LIB_APPCHK) test

distclean: clean
	rm -f $(GENSRCS) dynsyms.c.chk modules.h
