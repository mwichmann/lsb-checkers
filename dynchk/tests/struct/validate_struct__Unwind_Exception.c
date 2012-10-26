// Code generated by gen_tests.pl

#include "../type_tests.h"
#include <unwind.h>

int validate_struct__Unwind_Exception(struct _Unwind_Exception  * input, char *name)
{
int failure = 0;
	if(validate_NULL_TYPETYPE(input-> exception_class,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> exception_cleanup,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> private_1,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> private_2,name ))
		failure = 1;
return failure;
}

