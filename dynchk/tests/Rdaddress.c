#include <stdio.h>
#include <sys/types.h>
#include "../libs/lsb_funcs.h"
#include "memmap.h"

void validate_Rdaddress(const void *address, const char *name)
{
	if( !mem_is_Rd(address) ) {
		lsb_fprintf(stderr,
				"Parameter %p to %s is not a valid Rd address\n",
				address, name );
		lsb_abort();
	}
}
