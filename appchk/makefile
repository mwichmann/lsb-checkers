CFLAGS=-g -DLSBVERSION=\"$$LSBVERSION\" -Wall

OBJS=appchk.o libraries.o symbols.o
LIB=../elfchk/libelfchk.a

all: appchk

appchk: $(OBJS) $(LIB)
	$(CC) $(CFLAGS) -o appchk $(OBJS) $(LIB)

install:
	install -d $$LSBHOME/src/build/usr/bin
	install appchk $$LSBHOME/src/build/usr/bin/lsbappchk

clean:
	rm -f $(OBJS) appchk
