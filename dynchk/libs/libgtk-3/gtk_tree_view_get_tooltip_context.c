// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-3.0/gtk/gtk.h>
#include <glib-2.0/glib.h>
#undef gtk_tree_view_get_tooltip_context
static gboolean(*funcptr) (GtkTreeView * , gint * , gint * , gboolean , GtkTreeModel * * , GtkTreePath * * , GtkTreeIter * ) = 0;

extern int __lsb_check_params;
gboolean gtk_tree_view_get_tooltip_context (GtkTreeView * arg0 , gint * arg1 , gint * arg2 , gboolean arg3 , GtkTreeModel * * arg4 , GtkTreePath * * arg5 , GtkTreeIter * arg6 )
{
	int reset_flag = __lsb_check_params;
	gboolean ret_value  ;
	__lsb_output(4, "Invoking wrapper for gtk_tree_view_get_tooltip_context()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gtk_tree_view_get_tooltip_context");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gtk_tree_view_get_tooltip_context. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gtk_tree_view_get_tooltip_context() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "gtk_tree_view_get_tooltip_context - arg0 (tree_view)");
		}
		validate_NULL_TYPETYPE(  arg0, "gtk_tree_view_get_tooltip_context - arg0 (tree_view)");
		if( arg1 ) {
		validate_RWaddress( arg1, "gtk_tree_view_get_tooltip_context - arg1");
		}
		validate_NULL_TYPETYPE(  arg1, "gtk_tree_view_get_tooltip_context - arg1");
		if( arg2 ) {
		validate_RWaddress( arg2, "gtk_tree_view_get_tooltip_context - arg2");
		}
		validate_NULL_TYPETYPE(  arg2, "gtk_tree_view_get_tooltip_context - arg2");
		validate_NULL_TYPETYPE(  arg3, "gtk_tree_view_get_tooltip_context - arg3");
		if( arg4 ) {
		validate_RWaddress( arg4, "gtk_tree_view_get_tooltip_context - arg4");
		}
		validate_NULL_TYPETYPE(  arg4, "gtk_tree_view_get_tooltip_context - arg4");
		if( arg5 ) {
		validate_RWaddress( arg5, "gtk_tree_view_get_tooltip_context - arg5");
		}
		validate_NULL_TYPETYPE(  arg5, "gtk_tree_view_get_tooltip_context - arg5");
		if( arg6 ) {
		validate_RWaddress( arg6, "gtk_tree_view_get_tooltip_context - arg6");
		}
		validate_NULL_TYPETYPE(  arg6, "gtk_tree_view_get_tooltip_context - arg6");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3, arg4, arg5, arg6);
	__lsb_check_params = reset_flag;
	return ret_value;
}
