TEST_OBJS= \
Rdaddress.o RWaddress.o filedescriptor.o filemode.o ioctlreq.o pathname.o \
memmap.o processid.o IPv4Address.o socketfamily.o socketport.o

#include ../libs.mk
include struct.mk

TESTS = $(TEST_OBJS) $(STRUCTTESTS)

CFLAGS=-D_ISOC99_SOURCE -D_XOPEN_SOURCE=500 -D_XOPEN_SOURCE_EXTENDED -D_LARGEFILE_SOURCE -D_LARGEFILE64_SOURCE -D_BSD_SOURCE -D_SVID_SOURCE -D_GNU_SOURCE -DXLIB_ILLEGAL_ACCESS
CFLAGS += -fPIC -Wall -g

all: $(TESTS)
	ar rcs tests.a $(TESTS)

../lib_list:
	cd .. && ./mkliblist -v `cat LSB_VERSION`

gensrc: ../lib_list
	./gen_tests.pl -v `cat ../LSB_VERSION` -l $(COMMALIBS) -a $(shell uname -m)

clean:
	rm -f $(TESTS) libtests.a tests.a

distclean: clean
	rm -f struct/*.c
