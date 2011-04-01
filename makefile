export BINDIR=/bin
export MANDIR=/man

SUBDIRS=tetj fhschk elfchk rpmchk appchk libchk cmdchk pkgchk archk
RELEASEDIRS=libchk appchk cmdchk pkgchk

all:
	for d in $(SUBDIRS);do (cd $$d && $(MAKE) all LSBVERSION=$$LSBVERSION);done

test:
	for d in $(RELEASEDIRS);do (cd $$d && $(MAKE) test);done

install:
	for d in $(RELEASEDIRS);do (cd $$d && $(MAKE) install);done

gensrc:
	for d in $(SUBDIRS);do (cd $$d && $(MAKE) gensrc);done

clean:
	for d in $(SUBDIRS);do (cd $$d && $(MAKE) clean);done

distclean:
	for d in $(SUBDIRS);do (cd $$d && $(MAKE) distclean);done
