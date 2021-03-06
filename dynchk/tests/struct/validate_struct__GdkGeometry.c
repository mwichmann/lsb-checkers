// Code generated by gen_tests.pl

#include "../type_tests.h"
#include <gtk-3.0/gdk/gdk.h>

int validate_struct__GdkGeometry(struct _GdkGeometry  * input, char *name)
{
int failure = 0;
	if(validate_NULL_TYPETYPE(input-> min_width,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> min_height,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> max_width,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> max_height,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> base_width,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> base_height,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> width_inc,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> height_inc,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> min_aspect,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> max_aspect,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> win_gravity,name ))
		failure = 1;
return failure;
}

