CFLAGS=-g -Wall -DLSBVERSION=\"3.0\"

OBJS=archive.o hdr.o idxtag.o lead.o rpmchk.o util.o vals.o fhs.o idxtbl.o \
	md5c.o check.o dependencies.o
GENSRCS=rpmtag.h idxtbl.c
LIBS= ../tetj/libtetj.a ../fhschk/libfhschk.a
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
	./mktaghdr >rpmtag.h

idxtbl.c:
	./mktagtbl >idxtbl.c

clean:
	rm -f $(OBJS) $(LIB)

distclean: clean
	rm -f $(GENSRCS)
