HAND_FUNCS= \
fprintf.o ioctl.o open.o open64.o printf.o 

include gen.mk

FUNCS = $(HAND_FUNCS) $(GEN_FUNCS)

CFLAGS=-I../../tests -fPIC -Wall 

all: $(FUNCS)

clean:
	rm -f $(FUNCS)
