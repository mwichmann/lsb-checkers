include hands.mk

include gen.mk

FUNCS = $(HAND_FUNCS) $(GEN_FUNCS)

all: $(FUNCS) libnss3.o

libnss3.o : $(FUNCS)
	$(LD) -r -o $@ $(FUNCS)

clean:
	rm -f $(FUNCS) libnss3.o
