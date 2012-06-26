include hands.mk

include gen.mk

FUNCS = $(HAND_FUNCS) $(GEN_FUNCS)

all: $(FUNCS) libgobject-2.0.o

libgobject-2.0.o : $(FUNCS)
	$(LD) -r -o $@ $(FUNCS)

clean:
	rm -f $(FUNCS) libgobject-2.0.o
