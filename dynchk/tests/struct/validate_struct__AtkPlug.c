// Code generated by gen_tests.pl

#include "../type_tests.h"
#include <atk-1.0/atk/atkplug.h>

int validate_struct__AtkPlug(struct _AtkPlug  * input, char *name)
{
int failure = 0;
	if(validate_NULL_TYPETYPE(input-> parent,name ))
		failure = 1;
return failure;
}

