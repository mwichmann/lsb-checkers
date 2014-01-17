// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-3.0/gtk/gtk.h>
#undef gtk_tree_view_column_new_with_area
static GtkTreeViewColumn *(*funcptr) (GtkCellArea * ) = 0;

extern int __lsb_check_params;
GtkTreeViewColumn * gtk_tree_view_column_new_with_area (GtkCellArea * arg0 )
{
	int reset_flag = __lsb_check_params;
	GtkTreeViewColumn * ret_value  ;
	__lsb_output(4, "Invoking wrapper for gtk_tree_view_column_new_with_area()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gtk_tree_view_column_new_with_area");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gtk_tree_view_column_new_with_area. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gtk_tree_view_column_new_with_area() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "gtk_tree_view_column_new_with_area - arg0 (area)");
		}
		validate_NULL_TYPETYPE(  arg0, "gtk_tree_view_column_new_with_area - arg0 (area)");
	}
	ret_value = funcptr(arg0);
	__lsb_check_params = reset_flag;
	return ret_value;
}

