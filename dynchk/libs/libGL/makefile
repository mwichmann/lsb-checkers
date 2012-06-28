include hands.mk

include gen.mk

FUNCS = $(HAND_FUNCS) $(GEN_FUNCS)

all: $(FUNCS) libGL.a

libGL.a : $(FUNCS)
	ar rcs $@ $(FUNCS)

clean:
	rm -f $(FUNCS) libGL.a
