CFLAGS=-g -DLSBVERSION=\"$$LSBVERSION\" -Wall

OBJS=appchk.o libraries.o symbols.o check_file.o
LIB=../elfchk/libelfchk.a ../tetj/libtetj.a

all: appchk

appchk: $(OBJS) $(LIB)
	$(CC) $(CFLAGS) -o appchk $(OBJS) $(LIB)

install:
	install -d $$LSBHOME/src/build/usr/bin
	install appchk $$LSBHOME/src/build/usr/bin/lsbappchk
	install -d $$LSBHOME/src/build/usr/share/man/man1
	install lsbappchk.1 $$LSBHOME/src/build/usr/share/man/man1/lsbappchk.1

clean:
	rm -f $(OBJS) appchk

distclean: clean

test_journal: test_journal.o tetj.o
	$(CC) $(CFLAGS) -o test_journal test_journal.o tetj.o
