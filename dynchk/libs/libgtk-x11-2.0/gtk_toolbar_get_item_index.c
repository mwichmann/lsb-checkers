// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-2.0/gtk/gtk.h>
#undef gtk_toolbar_get_item_index
static gint(*funcptr) (GtkToolbar * , GtkToolItem * ) = 0;

extern int __lsb_check_params;
gint gtk_toolbar_get_item_index (GtkToolbar * arg0 , GtkToolItem * arg1 )
{
	int reset_flag = __lsb_check_params;
	gint ret_value  ;
	__lsb_output(4, "Invoking wrapper for gtk_toolbar_get_item_index()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gtk_toolbar_get_item_index");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gtk_toolbar_get_item_index. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gtk_toolbar_get_item_index() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "gtk_toolbar_get_item_index - arg0 (toolbar)");
		}
		validate_NULL_TYPETYPE(  arg0, "gtk_toolbar_get_item_index - arg0 (toolbar)");
		if( arg1 ) {
		validate_RWaddress( arg1, "gtk_toolbar_get_item_index - arg1 (item)");
		}
		validate_NULL_TYPETYPE(  arg1, "gtk_toolbar_get_item_index - arg1 (item)");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}

