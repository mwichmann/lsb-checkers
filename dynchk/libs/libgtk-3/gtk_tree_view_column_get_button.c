// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-3.0/gtk/gtk.h>
#undef gtk_tree_view_column_get_button
static GtkWidget *(*funcptr) (GtkTreeViewColumn * ) = 0;

extern int __lsb_check_params;
GtkWidget * gtk_tree_view_column_get_button (GtkTreeViewColumn * arg0 )
{
	int reset_flag = __lsb_check_params;
	GtkWidget * ret_value  ;
	__lsb_output(4, "Invoking wrapper for gtk_tree_view_column_get_button()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gtk_tree_view_column_get_button");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gtk_tree_view_column_get_button. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gtk_tree_view_column_get_button() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "gtk_tree_view_column_get_button - arg0 (tree_column)");
		}
		validate_NULL_TYPETYPE(  arg0, "gtk_tree_view_column_get_button - arg0 (tree_column)");
	}
	ret_value = funcptr(arg0);
	__lsb_check_params = reset_flag;
	return ret_value;
}

