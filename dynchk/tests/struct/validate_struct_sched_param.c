// Code generated by gen_tests.pl

#include "../type_tests.h"
#include <sched.h>

int validate_struct_sched_param(struct sched_param  * input, char *name)
{
int failure = 0;
	if(validate_NULL_TYPETYPE(input-> sched_priority,name ))
		failure = 1;
return failure;
}

