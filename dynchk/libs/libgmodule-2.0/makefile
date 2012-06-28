include hands.mk

include gen.mk

FUNCS = $(HAND_FUNCS) $(GEN_FUNCS)

all: $(FUNCS) libgmodule-2.0.a

libgmodule-2.0.a : $(FUNCS)
	ar rcs $@ $(FUNCS)

clean:
	rm -f $(FUNCS) libgmodule-2.0.a
