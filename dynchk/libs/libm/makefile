HAND_FUNCS= \

include gen.mk

FUNCS = $(HAND_FUNCS) $(GEN_FUNCS)

all: $(FUNCS) libm.o

libm.o : $(FUNCS)
	$(LD) -r -o $@ $(FUNCS)


clean:
	rm -f $(FUNCS) libm.o
