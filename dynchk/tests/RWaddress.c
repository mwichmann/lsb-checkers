#include <stdio.h>
#include <sys/types.h>
#include "memmap.h"
#include "../misc/lsb_output.h"

int validate_RWaddress(const void *address, const char *name)
{
	if( !mem_is_RW(address) ) {
		__lsb_fail(name, "%p is not a valid read-write address",
				address );
		return 1;
	}
	return 0;
}
