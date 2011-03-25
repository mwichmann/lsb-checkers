LSBCMDCHK_VERSION=unofficial
LSB_SUPPORTED_VERSIONS=$(shell cat ../LSB_VERSIONS)
LSB_DEFAULT_VERSION=$(shell rev ../LSB_VERSIONS | cut -d\, -f1 |rev|sed s/\\.//)

OBJS = cmdchk.o ../lsb_version.o

CFLAGS=-g -I../elfchk -DLSB_SUPPORTED_VERSIONS=\"$(LSB_SUPPORTED_VERSIONS)\" -DLSBVERSION=\"$$LSBVERSION\" -DLSBCMDCHK_VERSION=\"$(LSBCMDCHK_VERSION)\" -Wall -Werror

GENSRCS=cmds.h cmdlist cmdchk.py

all:: cmdchk

include ../Makefile.common

cmdchk: $(OBJS) ../tetj/libtetj.a
	$(CC) $(CFLAGS) -o cmdchk $(OBJS) ../tetj/libtetj.a

gensrc: $(GENSRCS)

cmds.h:
	./mkcmdlist

cmdchk.o: cmds.h

cmdlist:
	./mkcmdlist2

cmdchk.py: cmdchk.py.sed
	sed -e "s#@VERSIONS@#`./mkversioned`#" -e "s#@WARNING@#This is a generated file, edit cmdchk.py.sed instead#" < $< > $@
	chmod +x $@

release:
	sed -e "s#@VERSIONS@#`./mkversioned --release`#" -e "s#@WARNING@#This is a generated file, edit cmdchk.py.sed instead#" < cmdchk.py.sed > cmdchk.py
	chmod +x cmdchk.py

install:
	install -d $(INSTALL_ROOT)/$(BINDIR)
	install cmdchk $(INSTALL_ROOT)$(BINDIR)/lsbcmdchk
	install -d $(INSTALL_ROOT)/$(MANDIR)/man1
	install lsbcmdchk.1 $(INSTALL_ROOT)/$(MANDIR)/man1/lsbcmdchk.1

# Distclean means will need database to rebuild
distclean: clean
	rm -f $(GENSRCS)

clean:
	rm -f $(OBJS) cmdchk

.PHONY: clean distclean

