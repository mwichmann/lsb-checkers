include hands.mk

include gen.mk

FUNCS = $(HAND_FUNCS) $(GEN_FUNCS)

all: $(FUNCS) libfreetype.o

libfreetype.o : $(FUNCS)
	$(LD) -r -o $@ $(FUNCS)

clean:
	rm -f $(FUNCS) libfreetype.o
