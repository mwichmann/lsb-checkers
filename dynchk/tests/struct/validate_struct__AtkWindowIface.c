// Code generated by gen_tests.pl

#include "../type_tests.h"
#include <atk-1.0/atk/atkwindow.h>

int validate_struct__AtkWindowIface(struct _AtkWindowIface  * input, char *name)
{
int failure = 0;
	if(validate_NULL_TYPETYPE(input-> parent,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> _padding_dummy,name ))
		failure = 1;
return failure;
}

