// Code generated by gen_tests.pl

#include "../type_tests.h"
#include <glib-2.0/glib.h>

int validate_struct__GRecMutex(struct _GRecMutex  * input, char *name)
{
int failure = 0;
	if(validate_NULL_TYPETYPE(input-> p,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> i,name ))
		failure = 1;
return failure;
}
