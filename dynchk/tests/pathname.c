#include <stdio.h>
#include <sys/types.h>

void validate_pathname(const char *arg, const char *name)
{
	lsb_fprintf(stderr, "lsbdynchk: %s: %s is a parameter.(stub)\n", name, arg);
}
