HAND_FUNCS= \
fprintf.o ioctl.o open.o open64.o printf.o fscanf.o sscanf.o scanf.o

include gen.mk

FUNCS = $(HAND_FUNCS) $(GEN_FUNCS)

CFLAGS=-I../../tests -fPIC -Wall 

all: $(FUNCS)

clean:
	rm -f $(FUNCS)
