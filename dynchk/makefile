WRAPPER_LIBS = libs/libc/libc.o
TEST_LIB = tests/tests.o

all: liblsbdynchk.so

$(WRAPPER_LIBS):
	cd libs && make all

$(TEST_LIB):
	cd tests && make all

liblsbdynchk.so: $(WRAPPER_LIBS) $(TEST_LIB) makefile
	ld -shared -soname liblsbdynchk.so.1 -o liblsbdynchk.so.1 -ldl -lc $(WRAPPER_LIBS) $(TEST_LIB)

install:
	cp -f liblsbdynchk.so.1 /usr/lib/liblsbdynchk.so.1

clean:
	for d in libs tests;do (cd $$d && make clean);done
	rm -f *~ liblsbdynchk.so.1

.PHONY: all install
