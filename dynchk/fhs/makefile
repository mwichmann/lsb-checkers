OBJS = fhspaths.o mkabs.o
SRCS = fhspaths.c mkabs.c fhschk.h

CFLAGS += -fPIC -Wall -g

all: $(OBJS)
	ld -r -o fhs.o $(OBJS)

fhspaths.c: ../../fhschk/fhspaths.c
	cp ../../fhschk/fhschk.h .
	cp ../../fhschk/fhspaths.c .

mkabs.c: ../../fhschk/mkabs.c
	cp ../../fhschk/mkabs.c .

clean:
	rm -f $(OBJS) fhs.o

distclean: clean
	rm -f $(SRCS)
