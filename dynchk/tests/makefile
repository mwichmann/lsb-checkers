TEST_OBJS= \
RWaddress.o filedescriptor.o filemode.o ioctlreq.o pathname.o

include struct.mk

TESTS = $(TEST_OBJS) $(STRUCTTESTS)

CFLAGS=-fPIC -Wall 

all: $(TESTS)
	ar cvq libtests.a $(TESTS)

clean:
	rm -f $(TESTS) libtests.a
