SUBDIRS=elfchk appchk devchk libchk


all:
	for d in $(SUBDIRS);do (cd $$d;make all LSBVERSION=$$LSBVERSION);done

install:
	for d in $(SUBDIRS);do (cd $$d;make install);done

clean:
	for d in $(SUBDIRS);do (cd $$d;make clean);done
