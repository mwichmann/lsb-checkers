// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-2.0/gtk/gtk.h>
#undef gtk_tree_selection_get_selected
static gboolean(*funcptr) (GtkTreeSelection * , GtkTreeModel * * , GtkTreeIter * ) = 0;

extern int __lsb_check_params;
gboolean gtk_tree_selection_get_selected (GtkTreeSelection * arg0 , GtkTreeModel * * arg1 , GtkTreeIter * arg2 )
{
	int reset_flag = __lsb_check_params;
	gboolean ret_value  ;
	__lsb_output(4, "Invoking wrapper for gtk_tree_selection_get_selected()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gtk_tree_selection_get_selected");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gtk_tree_selection_get_selected. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gtk_tree_selection_get_selected() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "gtk_tree_selection_get_selected - arg0 (selection)");
		}
		validate_NULL_TYPETYPE(  arg0, "gtk_tree_selection_get_selected - arg0 (selection)");
		if( arg1 ) {
		validate_RWaddress( arg1, "gtk_tree_selection_get_selected - arg1 (model)");
		}
		validate_NULL_TYPETYPE(  arg1, "gtk_tree_selection_get_selected - arg1 (model)");
		if( arg2 ) {
		validate_RWaddress( arg2, "gtk_tree_selection_get_selected - arg2 (iter)");
		}
		validate_NULL_TYPETYPE(  arg2, "gtk_tree_selection_get_selected - arg2 (iter)");
	}
	ret_value = funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
	return ret_value;
}

