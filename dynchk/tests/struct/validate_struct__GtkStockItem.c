// Code generated by gen_tests.pl

#include "../type_tests.h"
#include <gtk-3.0/gtk/gtk.h>

int validate_struct__GtkStockItem(struct _GtkStockItem  * input, char *name)
{
int failure = 0;
	if(validate_NULL_TYPETYPE(input-> stock_id,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> label,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> modifier,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> keyval,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> translation_domain,name ))
		failure = 1;
return failure;
}
