HAND_FUNCS= \
fprintf.o ioctl.o open.o open64.o fscanf.o sscanf.o scanf.o mmap.o \
calloc.o malloc.o realloc.o free.o tcgetattr.o tcsetattr.o
#printf.o

include gen.mk

FUNCS = $(HAND_FUNCS) $(GEN_FUNCS)

all: $(FUNCS) libc.o

libc.o : $(FUNCS)
	$(LD) -r -o $@ $(FUNCS)


clean:
	rm -f $(FUNCS) libc.o
