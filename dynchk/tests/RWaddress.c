#include <stdio.h>
#include <sys/types.h>
#include "memmap.h"

int validate_RWaddress(const void *address, const char *name)
{
	if( !mem_is_RW(address) ) {
		fprintf(stderr,"Parameter to %s is not a valid RW address %p\n",
				name, address );
		return 1;
	}
	return 0;
}
