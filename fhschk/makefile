OBJS = mkabs.o fhspaths.o
LIB = libfhschk.a

all: $(LIB)

$(LIB): $(OBJS)
	rm -f $(LIB);ar clq $(LIB) $(OBJS)

test: fhstest
	./fhstest

abstest: mkabs.c
	cc -g -DTEST -o abstest mkabs.c

fhstest: fhspaths.c mkabs.o
	cc -g -DTEST -o fhstest fhspaths.c mkabs.o
