// Code generated by gen_tests.pl

#include "../type_tests.h"
#include <gtk-3.0/gtk/gtk.h>

int validate_struct__GtkSettingsValue(struct _GtkSettingsValue  * input, char *name)
{
int failure = 0;
	if(validate_NULL_TYPETYPE(input-> origin,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> value,name ))
		failure = 1;
return failure;
}
