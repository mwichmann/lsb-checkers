// Code generated by gen_tests.pl

#include "../type_tests.h"
#include <gtk-3.0/gtk/gtk.h>

int validate_struct__GtkStyleProviderIface(struct _GtkStyleProviderIface  * input, char *name)
{
int failure = 0;
	if(validate_NULL_TYPETYPE(input-> g_iface,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> get_style,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> get_style_property,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> get_icon_factory,name ))
		failure = 1;
return failure;
}
