OBJS = fhspaths.o mkabs.o
SRCS = fhspaths.c mkabs.c fhschk.h

CFLAGS += -fPIC -Wall -g

all: $(OBJS)
	ar rcs fhs.a $(OBJS)

fhspaths.c: ../../fhschk/fhspaths.c
	cp ../../fhschk/fhschk.h .
	cp ../../fhschk/fhspaths.c .

mkabs.c: ../../fhschk/mkabs.c
	cp ../../fhschk/mkabs.c .

clean:
	rm -f $(OBJS) fhs.a

distclean: clean
	rm -f $(SRCS)
