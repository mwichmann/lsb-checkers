// Code generated by gen_tests.pl

#include "../type_tests.h"
#include <gtk-3.0/gtk/gtk.h>

int validate_struct__GtkOffscreenWindow(struct _GtkOffscreenWindow  * input, char *name)
{
int failure = 0;
	if(validate_NULL_TYPETYPE(input-> parent_object,name ))
		failure = 1;
return failure;
}

