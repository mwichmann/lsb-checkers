// Code generated by gen_tests.pl

#include "../type_tests.h"
#include <lsb/time.h>

int validate_struct_timeval(struct timeval  * input, char *name)
{
int failure = 0;
	if(validate_NULL_TYPETYPE(input-> tv_sec,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> tv_usec,name ))
		failure = 1;
return failure;
}

