SUBDIRS=elfchk appchk devchk 


all:
	for d in $(SUBDIRS);do (cd $$d;make all);done

clean:
	for d in $(SUBDIRS);do (cd $$d;make clean);done
