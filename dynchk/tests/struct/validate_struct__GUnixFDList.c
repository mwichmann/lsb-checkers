// Code generated by gen_tests.pl

#include "../type_tests.h"
#include <gio-unix-2.0/gio/gunixfdlist.h>

int validate_struct__GUnixFDList(struct _GUnixFDList  * input, char *name)
{
int failure = 0;
	if(validate_NULL_TYPETYPE(input-> parent_instance,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> priv,name ))
		failure = 1;
return failure;
}

