LIBS=libc

all:
	for d in $(LIBS);do (cd $$d && make all);done

clean:
	for d in $(LIBS);do (cd $$d && make clean);done
