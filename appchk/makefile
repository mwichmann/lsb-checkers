CFLAGS=-g

OBJS=appchk.o 
LIB=../elfchk/libelfchk.a

all: appchk

appchk: $(OBJS) $(LIB)
	$(CC) $(CFLAGS) -o appchk $(OBJS) $(LIB)
clean:
	rm -f $(OBJS) appchk
