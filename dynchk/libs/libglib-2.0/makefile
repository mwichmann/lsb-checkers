include hands.mk

include gen.mk

FUNCS = $(HAND_FUNCS) $(GEN_FUNCS)

all: $(FUNCS) libglib-2.0.a

libglib-2.0.a : $(FUNCS)
	ar rcs $@ $(FUNCS)

clean:
	rm -f $(FUNCS) libglib-2.0.a
