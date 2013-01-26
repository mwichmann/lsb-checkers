// Code generated by gen_tests.pl

#include "../type_tests.h"
#include <ucontext.h>

#if defined __x86_64__
int validate_struct__libc_fpxreg(struct _libc_fpxreg  * input, char *name)
{
int failure = 0;
	if(validate_NULL_TYPETYPE(input-> significand,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> exponent,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> padding,name ))
		failure = 1;
return failure;
}

#endif /* defined __x86_64__ */