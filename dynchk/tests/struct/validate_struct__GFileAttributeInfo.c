// Code generated by gen_tests.pl

#include "../type_tests.h"
#include <glib-2.0/gio/gfileattribute.h>

int validate_struct__GFileAttributeInfo(struct _GFileAttributeInfo  * input, char *name)
{
int failure = 0;
	if(validate_NULL_TYPETYPE(input-> name,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> type,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> flags,name ))
		failure = 1;
return failure;
}

