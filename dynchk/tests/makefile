TEST_OBJS= \
RWaddress.o filedescriptor.o filemode.o ioctlreq.o pathname.o

CFLAGS=-I../../tests -fPIC -Wall 

all: $(TEST_OBJS)
	ar cvq libtests.a $(TEST_OBJS)

clean:
	rm -f $(TEST_OBJS)
