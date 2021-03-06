// Code generated by gen_tests.pl

#include "../type_tests.h"
#include <gtk-3.0/gdk/gdk.h>

int validate_struct__GdkWindowClass(struct _GdkWindowClass  * input, char *name)
{
int failure = 0;
	if(validate_NULL_TYPETYPE(input-> parent_class,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> pick_embedded_child,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> to_embedder,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> from_embedder,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> create_surface,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> _gdk_reserved1,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> _gdk_reserved2,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> _gdk_reserved3,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> _gdk_reserved4,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> _gdk_reserved5,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> _gdk_reserved6,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> _gdk_reserved7,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> _gdk_reserved8,name ))
		failure = 1;
return failure;
}

