
OBJS = cmdchk.o cmds.o

CFLAGS=-g -I../elfchk -DLSBVERSION=\"$$LSBVERSION\" -Wall

all:: cmdchk

cmdchk: $(OBJS) ../tetj/libtetj.a
	cc $(CFLAGS) -o cmdchk $(OBJS) ../tetj/libtetj.a

cmds.c:
	./mkcmdlist

install:
	install cmdchk $$LSBHOME/src/build/usr/bin/lsbcmdchk

# Distclean means will need database to rebuild
distclean: clean
	rm -f cmds.c

clean:
	rm -f $(OBJS) cmdchk

.PHONE: clean distclean

