#include <stdio.h>
#include <sys/types.h>
#include "memmap.h"
#include "../misc/lsb_output.h"

int validate_Rdaddress(const void *address, const char *name)
{
	if( !mem_is_Rd(address) ) {
		__lsb_fail(name,"%p is not a valid read address", address);
		fprintf(stdout, "booga");
		return 1;
		abort();
	}
	return 0;
}
