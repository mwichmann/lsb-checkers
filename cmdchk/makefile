LSBCMDCHK_VERSION=unofficial

OBJS = cmdchk.o cmds.o

CFLAGS=-g -I../elfchk -DLSBVERSION=\"$$LSBVERSION\" -DLSBCMDCHK_VERSION=\"$(LSBCMDCHK_VERSION)\" -Wall

all:: cmdchk cmdlist

cmdchk: $(OBJS) ../tetj/libtetj.a
	$(CC) $(CFLAGS) -o cmdchk $(OBJS) ../tetj/libtetj.a

cmds.c:
	./mkcmdlist

cmdlist:
	./mkcmdlist2

install:
	install -d $(INSTALL_ROOT)/$(BINDIR)
	install cmdchk $(INSTALL_ROOT)$(BINDIR)/lsbcmdchk

# Distclean means will need database to rebuild
distclean: clean
	rm -f cmds.c

clean:
	rm -f $(OBJS) cmdchk

.PHONE: clean distclean

