HAND_FUNCS= \

include gen.mk

FUNCS = $(HAND_FUNCS) $(GEN_FUNCS)

CFLAGS=-I../../tests -fPIC -Wall 

all: $(FUNCS)

clean:
	rm -f $(FUNCS)
