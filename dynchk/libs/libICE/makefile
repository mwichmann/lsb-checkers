HAND_FUNCS= 

include gen.mk

FUNCS = $(HAND_FUNCS) $(GEN_FUNCS)

all: $(FUNCS) libICE.o

libICE.o : $(FUNCS)
	$(LD) -r -o $@ $(FUNCS)


clean:
	rm -f $(FUNCS) libICE.o
