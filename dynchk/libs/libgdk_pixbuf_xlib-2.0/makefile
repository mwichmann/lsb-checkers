include hands.mk

include gen.mk

FUNCS = $(HAND_FUNCS) $(GEN_FUNCS)

all: $(FUNCS) libgdk_pixbuf_xlib-2.0.a

libgdk_pixbuf_xlib-2.0.a : $(FUNCS)
	ar rcs $@ $(FUNCS)

clean:
	rm -f $(FUNCS) libgdk_pixbuf_xlib-2.0.a
