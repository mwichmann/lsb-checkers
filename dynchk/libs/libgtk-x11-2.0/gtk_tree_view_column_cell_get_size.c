// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-2.0/gtk/gtk.h>
#include <gtk-2.0/gdk/gdk.h>
#include <glib-2.0/glib.h>
#undef gtk_tree_view_column_cell_get_size
static void(*funcptr) (GtkTreeViewColumn * , const GdkRectangle * , gint * , gint * , gint * , gint * ) = 0;

extern int __lsb_check_params;
void gtk_tree_view_column_cell_get_size (GtkTreeViewColumn * arg0 , const GdkRectangle * arg1 , gint * arg2 , gint * arg3 , gint * arg4 , gint * arg5 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for gtk_tree_view_column_cell_get_size()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gtk_tree_view_column_cell_get_size");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gtk_tree_view_column_cell_get_size. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gtk_tree_view_column_cell_get_size() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "gtk_tree_view_column_cell_get_size - arg0 (tree_column)");
		}
		validate_NULL_TYPETYPE(  arg0, "gtk_tree_view_column_cell_get_size - arg0 (tree_column)");
		if( arg1 ) {
		validate_Rdaddress( arg1, "gtk_tree_view_column_cell_get_size - arg1 (cell_area)");
		}
		validate_NULL_TYPETYPE(  arg1, "gtk_tree_view_column_cell_get_size - arg1 (cell_area)");
		if( arg2 ) {
		validate_RWaddress( arg2, "gtk_tree_view_column_cell_get_size - arg2 (x_offset)");
		}
		validate_NULL_TYPETYPE(  arg2, "gtk_tree_view_column_cell_get_size - arg2 (x_offset)");
		if( arg3 ) {
		validate_RWaddress( arg3, "gtk_tree_view_column_cell_get_size - arg3 (y_offset)");
		}
		validate_NULL_TYPETYPE(  arg3, "gtk_tree_view_column_cell_get_size - arg3 (y_offset)");
		if( arg4 ) {
		validate_RWaddress( arg4, "gtk_tree_view_column_cell_get_size - arg4 (width)");
		}
		validate_NULL_TYPETYPE(  arg4, "gtk_tree_view_column_cell_get_size - arg4 (width)");
		if( arg5 ) {
		validate_RWaddress( arg5, "gtk_tree_view_column_cell_get_size - arg5 (height)");
		}
		validate_NULL_TYPETYPE(  arg5, "gtk_tree_view_column_cell_get_size - arg5 (height)");
	}
	funcptr(arg0, arg1, arg2, arg3, arg4, arg5);
	__lsb_check_params = reset_flag;
}

