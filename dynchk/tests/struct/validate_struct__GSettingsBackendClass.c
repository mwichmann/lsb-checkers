// Code generated by gen_tests.pl

#include "../type_tests.h"
#include <glib-2.0/gio/gsettingsbackend.h>

int validate_struct__GSettingsBackendClass(struct _GSettingsBackendClass  * input, char *name)
{
int failure = 0;
	if(validate_NULL_TYPETYPE(input-> parent_class,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> read,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> get_writable,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> write,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> write_tree,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> reset,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> subscribe,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> unsubscribe,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> sync,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> get_permission,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> padding,name ))
		failure = 1;
return failure;
}

