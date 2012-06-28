include hands.mk

include gen.mk

FUNCS = $(HAND_FUNCS) $(GEN_FUNCS)

all: $(FUNCS) libasound.a

libasound.a : $(FUNCS)
	ar rcs $@ $(FUNCS)

clean:
	rm -f $(FUNCS) libasound.a
