// Code generated by gen_tests.pl

#include "../type_tests.h"
#include <sys/resource.h>

int validate_struct_rlimit64(struct rlimit64  * input, char *name)
{
int failure = 0;
	if(validate_NULL_TYPETYPE(input-> rlim_cur,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> rlim_max,name ))
		failure = 1;
return failure;
}

