include hands.mk

include gen.mk

FUNCS = $(HAND_FUNCS) $(GEN_FUNCS)

all: $(FUNCS) libm.a

libm.a : $(FUNCS)
	ar rcs $@ $(FUNCS)

clean:
	rm -f $(FUNCS) libm.a
