// Code generated by gen_tests.pl

#include "../type_tests.h"
#include <gtk-3.0/gdk/gdk.h>

int validate_struct__GdkRGBA(struct _GdkRGBA  * input, char *name)
{
int failure = 0;
	if(validate_NULL_TYPETYPE(input-> red,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> green,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> blue,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> alpha,name ))
		failure = 1;
return failure;
}

