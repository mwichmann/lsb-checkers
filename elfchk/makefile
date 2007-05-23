CFLAGS=-g -Wall -I../tetj

OBJS=dynamic.o elfchk.o hdr.o proghdr.o sections.o symvers.o util.o \
	proginterp.o progbits.o note.o dumpbytes.o dwarf.o
GENSRCS=dynsyms.c dtneeded.c sectinfo.c secttype.c dyntags.c modules.c
GENOBJS=$(shell echo $(GENSRCS) | sed s/\\.c/.o/g)
LIBS= ../tetj/libtetj.a
LIB=libelfchk.a

CFLAGS_APPCHK=-include appchk_untetj.h
OBJS_APPCHK=$(shell echo $(OBJS) | perl -pe 's/(\S+)\.o/\1_appchk.o/g')
LIB_APPCHK=libelfchk_appchk.a

all: modules.c $(LIB) $(LIB_APPCHK) test

install:

%_appchk.o: %.c
	$(CC) $(CFLAGS) $(CFLAGS_APPCHK) -c -o $@ $<

$(LIB): $(OBJS) $(GENOBJS)
	rm -f $(LIB);ar clq $(LIB) $(OBJS) $(GENOBJS)

$(LIB_APPCHK): $(OBJS_APPCHK)
	rm -f $(LIB_APPCHK);ar clq $(LIB_APPCHK) $(OBJS_APPCHK)

test: test.c $(LIB) $(LIBS)
	cc -o test $(CFLAGS) test.c $(LIB) $(LIBS)

check: dynsyms.c dynsyms.c.chk
	diff dynsyms.c dynsyms.c.chk

gensrc: $(GENSRCS)

dynsyms.c:
	./mkfunclist -v `cat LSB_VERSION` >dynsyms.c

dynsyms.c.chk:
	./mkfunclist2 -v `cat LSB_VERSION` >dynsyms.c.chk

dyntags.c:
	./mkdyntags -v `cat LSB_VERSION` >dyntags.c

dtneeded.c:
	./mkdtneededlist -v `cat LSB_VERSION` >dtneeded.c

sectinfo.c:
	./mksectinfo -v `cat LSB_VERSION` >sectinfo.c

secttype.c:
	./mksecttype >secttype.c

modules.c modules.h: 
	./mkmodlist -v `cat LSB_VERSION`

clean:
	rm -f $(OBJS) $(GENOBJS) $(LIB) $(OBJS_APPCHK) $(LIB_APPCHK) test

distclean: clean
	rm -f $(GENSRCS) dynsyms.c.chk modules.h
