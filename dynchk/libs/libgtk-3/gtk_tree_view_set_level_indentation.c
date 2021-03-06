// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-3.0/gtk/gtk.h>
#include <glib-2.0/glib.h>
#undef gtk_tree_view_set_level_indentation
static void(*funcptr) (GtkTreeView * , gint ) = 0;

extern int __lsb_check_params;
void gtk_tree_view_set_level_indentation (GtkTreeView * arg0 , gint arg1 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for gtk_tree_view_set_level_indentation()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gtk_tree_view_set_level_indentation");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gtk_tree_view_set_level_indentation. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gtk_tree_view_set_level_indentation() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "gtk_tree_view_set_level_indentation - arg0 (tree_view)");
		}
		validate_NULL_TYPETYPE(  arg0, "gtk_tree_view_set_level_indentation - arg0 (tree_view)");
		validate_NULL_TYPETYPE(  arg1, "gtk_tree_view_set_level_indentation - arg1");
	}
	funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
}

