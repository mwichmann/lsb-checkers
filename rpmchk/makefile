CFLAGS=-g -Wall -DLSBVERSION=\"$$LSBVERSION\"

OBJS=archive.o hdr.o idxtag.o lead.o rpmchk.o util.o vals.o fhs.o idxtbl.o \
	md5c.o check.o dependencies.o
GENSRCS=rpmtag.h idxtbl.c
LIBS= ../tetj/libtetj.a ../elfchk/libelfchk.a ../appchk/libappchk.a ../fhschk/libfhschk.a
LIB=librpmchk.a

all: $(LIB)

install:

$(OBJS): $(GENSRCS)

$(LIB): $(OBJS)
	rm -f $(LIB);ar clq $(LIB) $(OBJS)

test: test.c $(LIB) $(LIBS)
	$(CC) -o test $(CFLAGS) test.c $(LIB) $(LIBS) -lz

idx.o: rpmtag.h

rpmtag.h:
	./mktaghdr -v `cat LSB_VERSION` >rpmtag.h

idxtbl.c:
	./mktagtbl -v `cat LSB_VERSION` >idxtbl.c

clean:
	rm -f $(OBJS) $(LIB)

distclean: clean
	rm -f $(GENSRCS)
