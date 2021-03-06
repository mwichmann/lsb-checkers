// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-2.0/gtk/gtk.h>
#include <glib-2.0/glib.h>
#undef gtk_tree_view_column_cell_set_cell_data
static void(*funcptr) (GtkTreeViewColumn * , GtkTreeModel * , GtkTreeIter * , gboolean , gboolean ) = 0;

extern int __lsb_check_params;
void gtk_tree_view_column_cell_set_cell_data (GtkTreeViewColumn * arg0 , GtkTreeModel * arg1 , GtkTreeIter * arg2 , gboolean arg3 , gboolean arg4 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for gtk_tree_view_column_cell_set_cell_data()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gtk_tree_view_column_cell_set_cell_data");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gtk_tree_view_column_cell_set_cell_data. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gtk_tree_view_column_cell_set_cell_data() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "gtk_tree_view_column_cell_set_cell_data - arg0 (tree_column)");
		}
		validate_NULL_TYPETYPE(  arg0, "gtk_tree_view_column_cell_set_cell_data - arg0 (tree_column)");
		if( arg1 ) {
		validate_RWaddress( arg1, "gtk_tree_view_column_cell_set_cell_data - arg1 (tree_model)");
		}
		validate_NULL_TYPETYPE(  arg1, "gtk_tree_view_column_cell_set_cell_data - arg1 (tree_model)");
		if( arg2 ) {
		validate_RWaddress( arg2, "gtk_tree_view_column_cell_set_cell_data - arg2 (iter)");
		}
		validate_NULL_TYPETYPE(  arg2, "gtk_tree_view_column_cell_set_cell_data - arg2 (iter)");
		validate_NULL_TYPETYPE(  arg3, "gtk_tree_view_column_cell_set_cell_data - arg3 (is_expander)");
		validate_NULL_TYPETYPE(  arg4, "gtk_tree_view_column_cell_set_cell_data - arg4 (is_expanded)");
	}
	funcptr(arg0, arg1, arg2, arg3, arg4);
	__lsb_check_params = reset_flag;
}

