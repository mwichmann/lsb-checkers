#include <stdio.h>
#include <sys/types.h>

void validate_ioctlreq(const int arg, const char *name)
{
	lsb_fprintf(stderr, "lsbdynchk: %s: %x is a parameter.(stub)\n", name, arg);
}
