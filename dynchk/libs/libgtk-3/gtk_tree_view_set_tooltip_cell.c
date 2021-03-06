// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-3.0/gtk/gtk.h>
#undef gtk_tree_view_set_tooltip_cell
static void(*funcptr) (GtkTreeView * , GtkTooltip * , GtkTreePath * , GtkTreeViewColumn * , GtkCellRenderer * ) = 0;

extern int __lsb_check_params;
void gtk_tree_view_set_tooltip_cell (GtkTreeView * arg0 , GtkTooltip * arg1 , GtkTreePath * arg2 , GtkTreeViewColumn * arg3 , GtkCellRenderer * arg4 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for gtk_tree_view_set_tooltip_cell()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gtk_tree_view_set_tooltip_cell");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gtk_tree_view_set_tooltip_cell. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gtk_tree_view_set_tooltip_cell() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "gtk_tree_view_set_tooltip_cell - arg0 (tree_view)");
		}
		validate_NULL_TYPETYPE(  arg0, "gtk_tree_view_set_tooltip_cell - arg0 (tree_view)");
		if( arg1 ) {
		validate_RWaddress( arg1, "gtk_tree_view_set_tooltip_cell - arg1");
		}
		validate_NULL_TYPETYPE(  arg1, "gtk_tree_view_set_tooltip_cell - arg1");
		if( arg2 ) {
		validate_RWaddress( arg2, "gtk_tree_view_set_tooltip_cell - arg2");
		}
		validate_NULL_TYPETYPE(  arg2, "gtk_tree_view_set_tooltip_cell - arg2");
		if( arg3 ) {
		validate_RWaddress( arg3, "gtk_tree_view_set_tooltip_cell - arg3");
		}
		validate_NULL_TYPETYPE(  arg3, "gtk_tree_view_set_tooltip_cell - arg3");
		if( arg4 ) {
		validate_RWaddress( arg4, "gtk_tree_view_set_tooltip_cell - arg4");
		}
		validate_NULL_TYPETYPE(  arg4, "gtk_tree_view_set_tooltip_cell - arg4");
	}
	funcptr(arg0, arg1, arg2, arg3, arg4);
	__lsb_check_params = reset_flag;
}

