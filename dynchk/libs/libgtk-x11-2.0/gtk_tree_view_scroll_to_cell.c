// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-2.0/gtk/gtk.h>
#include <glib-2.0/glib.h>
#undef gtk_tree_view_scroll_to_cell
static void(*funcptr) (GtkTreeView * , GtkTreePath * , GtkTreeViewColumn * , gboolean , gfloat , gfloat ) = 0;

extern int __lsb_check_params;
void gtk_tree_view_scroll_to_cell (GtkTreeView * arg0 , GtkTreePath * arg1 , GtkTreeViewColumn * arg2 , gboolean arg3 , gfloat arg4 , gfloat arg5 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for gtk_tree_view_scroll_to_cell()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gtk_tree_view_scroll_to_cell");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gtk_tree_view_scroll_to_cell. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gtk_tree_view_scroll_to_cell() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "gtk_tree_view_scroll_to_cell - arg0 (tree_view)");
		}
		validate_NULL_TYPETYPE(  arg0, "gtk_tree_view_scroll_to_cell - arg0 (tree_view)");
		if( arg1 ) {
		validate_RWaddress( arg1, "gtk_tree_view_scroll_to_cell - arg1 (path)");
		}
		validate_NULL_TYPETYPE(  arg1, "gtk_tree_view_scroll_to_cell - arg1 (path)");
		if( arg2 ) {
		validate_RWaddress( arg2, "gtk_tree_view_scroll_to_cell - arg2 (column)");
		}
		validate_NULL_TYPETYPE(  arg2, "gtk_tree_view_scroll_to_cell - arg2 (column)");
		validate_NULL_TYPETYPE(  arg3, "gtk_tree_view_scroll_to_cell - arg3 (use_align)");
		validate_NULL_TYPETYPE(  arg4, "gtk_tree_view_scroll_to_cell - arg4 (row_align)");
		validate_NULL_TYPETYPE(  arg5, "gtk_tree_view_scroll_to_cell - arg5 (col_align)");
	}
	funcptr(arg0, arg1, arg2, arg3, arg4, arg5);
	__lsb_check_params = reset_flag;
}

