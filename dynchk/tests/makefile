TEST_OBJS= \
RWaddress.o filedescriptor.o filemode.o ioctlreq.o pathname.o

include struct.mk

TESTS = $(TEST_OBJS) $(STRUCTTESTS)

CC = lsbcc 

CFLAGS=-D_ISOC99_SOURCE -D_XOPEN_SOURCE=500 -D_XOPEN_SOURCE_EXTENDED -D_LARGEFILE_SOURCE -D_LARGEFILE64_SOURCE -D_BSD_SOURCE -D_SVID_SOURCE -D_GNU_SOURCE -DXLIB_ILLEGAL_ACCESS -I/usr/X11R6/include
CFLAGS += -fPIC -Wall 

all: $(TESTS)
	ld -r -o tests.o $(TESTS)

clean:
	rm -f $(TESTS) libtests.a tests.o
