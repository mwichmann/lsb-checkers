#include <stdio.h>
#include <sys/types.h>
#include "../libs/lsb_funcs.h"

void validate_RWaddress(const void *address, const char *name)
{
	lsb_fprintf(stderr,
			"lsbdynchk: %s: Address %p is a parameter.(stub)\n",
			name, address);
}
