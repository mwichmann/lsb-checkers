#include <stdio.h>
#include <sys/types.h>
#include "memmap.h"

int validate_Rdaddress(const void *address, const char *name)
{
	if( !mem_is_Rd(address) ) {
		fprintf(stderr,
				"Parameter %p to %s is not a valid Rd address\n",
				address, name );
		return 1;
		abort();
	}
	return 0;
}
