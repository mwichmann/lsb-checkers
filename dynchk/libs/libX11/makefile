HAND_FUNCS= 

include gen.mk

FUNCS = $(HAND_FUNCS) $(GEN_FUNCS)

all: $(FUNCS) libX11.o

libX11.o : $(FUNCS)
	$(LD) -r -o $@ $(FUNCS)


clean:
	rm -f $(FUNCS) libX11.o
