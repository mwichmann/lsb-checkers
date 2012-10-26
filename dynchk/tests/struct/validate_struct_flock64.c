// Code generated by gen_tests.pl

#include "../type_tests.h"
#include <fcntl.h>

int validate_struct_flock64(struct flock64  * input, char *name)
{
int failure = 0;
	if(validate_NULL_TYPETYPE(input-> l_type,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> l_whence,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> l_start,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> l_len,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> l_pid,name ))
		failure = 1;
return failure;
}

