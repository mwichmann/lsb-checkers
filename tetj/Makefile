CFLAGS=-g -Wall -Werror
OBJS=tetj.o

LIB=libtetj.a

all: $(LIB) 

install:

$(LIB): $(OBJS)
	rm -f $(LIB);ar clq $(LIB) $(OBJS)

tetjtest: tetjtest.o $(LIB)
	$(CC) $(CFLAGS) -o tetjtest tetjtest.o $(LIB)

test:	tetjtest
	./tetjtest

clean:
	rm -f $(OBJS) $(LIB)

distclean: clean
