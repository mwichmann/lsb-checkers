// Code generated by gen_tests.pl

#include "../type_tests.h"
#include <gtk-3.0/gtk/gtk.h>

int validate_struct__GtkMenuShellClass(struct _GtkMenuShellClass  * input, char *name)
{
int failure = 0;
	if(validate_NULL_TYPETYPE(input-> parent_class,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> submenu_placement,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> deactivate,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> selection_done,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> move_current,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> activate_current,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> cancel,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> select_item,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> insert,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> get_popup_delay,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> move_selected,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> _gtk_reserved1,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> _gtk_reserved2,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> _gtk_reserved3,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> _gtk_reserved4,name ))
		failure = 1;
return failure;
}

