// Code generated by gen_tests.pl

#include "../type_tests.h"
#include <gtk-3.0/gtk/gtk.h>

int validate_struct__GtkActionClass(struct _GtkActionClass  * input, char *name)
{
int failure = 0;
	if(validate_NULL_TYPETYPE(input-> parent_class,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> activate,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> menu_item_type,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> toolbar_item_type,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> create_menu_item,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> create_tool_item,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> connect_proxy,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> disconnect_proxy,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> create_menu,name ))
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

