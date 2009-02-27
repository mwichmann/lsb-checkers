CFLAGS=-g -Wall -Werror
OBJS=tetj.o
TESTOBJ=tetjtest.o

LIB=libtetj.a

all: $(LIB) 

install:

$(LIB): $(OBJS)
	rm -f $(LIB);ar clq $(LIB) $(OBJS)

tetjtest: tetjtest.o $(LIB)
	$(CC) $(CFLAGS) -o tetjtest tetjtest.o $(LIB)

test:	tetjtest
	./tetjtest

testall: test
	./tetj.py
	./tetjtest.sh

clean:
	rm -f $(OBJS) $(LIB)

distclean: clean
	rm -f $(TESTOBJ) tetjtest
