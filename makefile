SUBDIRS=tetj fhschk elfchk rpmchk appchk libchk cmdchk pkgchk archk


all:
	for d in $(SUBDIRS);do (cd $$d && $(MAKE) all LSBVERSION=$$LSBVERSION);done

install:
	for d in $(SUBDIRS);do (cd $$d && $(MAKE) install);done

gensrc:
	for d in $(SUBDIRS);do (cd $$d && $(MAKE) gensrc);done

clean:
	for d in $(SUBDIRS);do (cd $$d && $(MAKE) clean);done

distclean:
	for d in $(SUBDIRS);do (cd $$d && $(MAKE) distclean);done
