// Code generated by gen_tests.pl

#include "../type_tests.h"
#include <glib-2.0/gio/gactionmap.h>

int validate_struct__GActionEntry(struct _GActionEntry  * input, char *name)
{
int failure = 0;
	if(validate_NULL_TYPETYPE(input-> name,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> activate,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> parameter_type,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> state,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> change_state,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> padding,name ))
		failure = 1;
return failure;
}

