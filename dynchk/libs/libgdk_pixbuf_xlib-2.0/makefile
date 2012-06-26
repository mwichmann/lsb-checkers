include hands.mk

include gen.mk

FUNCS = $(HAND_FUNCS) $(GEN_FUNCS)

all: $(FUNCS) libgdk_pixbuf_xlib-2.0.o

libgdk_pixbuf_xlib-2.0.o : $(FUNCS)
	$(LD) -r -o $@ $(FUNCS)

clean:
	rm -f $(FUNCS) libgdk_pixbuf_xlib-2.0.o
