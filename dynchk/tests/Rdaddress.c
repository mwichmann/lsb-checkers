#include <stdio.h>
#include <sys/types.h>
#include "../libs/__lsb_funcs.h"
#include "memmap.h"

void validate_Rdaddress(const void *address, const char *name)
{
	if( !mem_is_Rd(address) ) {
		__lsb_fprintf(stderr,
				"Parameter %p to %s is not a valid Rd address\n",
				address, name );
		__lsb_abort();
	}
}
