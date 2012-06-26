include hands.mk

include gen.mk

FUNCS = $(HAND_FUNCS) $(GEN_FUNCS)

all: $(FUNCS) libpango-1.0.o

libpango-1.0.o : $(FUNCS)
	$(LD) -r -o $@ $(FUNCS)

clean:
	rm -f $(FUNCS) libpango-1.0.o
