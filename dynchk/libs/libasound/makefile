include hands.mk

include gen.mk

FUNCS = $(HAND_FUNCS) $(GEN_FUNCS)

all: $(FUNCS) libasound.o

libasound.o : $(FUNCS)
	$(LD) -r -o $@ $(FUNCS)

clean:
	rm -f $(FUNCS) libasound.o
