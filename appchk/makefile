CFLAGS=-g 

OBJS=appchk.o libraries.o symbols.o
LIB=../elfchk/libelfchk.a

all: appchk

appchk: $(OBJS) $(LIB)
	$(CC) $(CFLAGS) -o appchk $(OBJS) $(LIB)

install:
	install appchk $$LSBHOME/src/build/usr/bin/lsbappchk

clean:
	rm -f $(OBJS) appchk
