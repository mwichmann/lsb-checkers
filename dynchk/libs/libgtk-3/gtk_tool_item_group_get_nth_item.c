// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-3.0/gtk/gtk.h>
#include <glib-2.0/glib.h>
#undef gtk_tool_item_group_get_nth_item
static GtkToolItem *(*funcptr) (GtkToolItemGroup * , guint ) = 0;

extern int __lsb_check_params;
GtkToolItem * gtk_tool_item_group_get_nth_item (GtkToolItemGroup * arg0 , guint arg1 )
{
	int reset_flag = __lsb_check_params;
	GtkToolItem * ret_value  ;
	__lsb_output(4, "Invoking wrapper for gtk_tool_item_group_get_nth_item()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gtk_tool_item_group_get_nth_item");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gtk_tool_item_group_get_nth_item. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gtk_tool_item_group_get_nth_item() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "gtk_tool_item_group_get_nth_item - arg0 (group)");
		}
		validate_NULL_TYPETYPE(  arg0, "gtk_tool_item_group_get_nth_item - arg0 (group)");
		validate_NULL_TYPETYPE(  arg1, "gtk_tool_item_group_get_nth_item - arg1");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}

