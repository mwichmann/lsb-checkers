HAND_FUNCS= \

include gen.mk

FUNCS = $(HAND_FUNCS) $(GEN_FUNCS)

all: $(FUNCS) libpthread.o

libpthread.o : $(FUNCS)
	$(LD) -r -o $@ $(FUNCS)


clean:
	rm -f $(FUNCS) libpthread.o
