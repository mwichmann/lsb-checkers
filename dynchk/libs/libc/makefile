HAND_FUNCS= \
printf.o fprintf.o ioctl.o fscanf.o sscanf.o scanf.o \
calloc.o realloc.o free.o \
malloc.o open.o open64.o mmap.o munmap.o 

include gen.mk

FUNCS = $(HAND_FUNCS) $(GEN_FUNCS)

all: $(FUNCS) libc.o

libc.o : $(FUNCS)
	$(LD) -r -o $@ $(FUNCS)


clean:
	rm -f $(FUNCS) libc.o
