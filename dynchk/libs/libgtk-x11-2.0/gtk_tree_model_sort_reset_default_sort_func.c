// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-2.0/gtk/gtk.h>
#undef gtk_tree_model_sort_reset_default_sort_func
static void(*funcptr) (GtkTreeModelSort * ) = 0;

extern int __lsb_check_params;
void gtk_tree_model_sort_reset_default_sort_func (GtkTreeModelSort * arg0 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for gtk_tree_model_sort_reset_default_sort_func()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gtk_tree_model_sort_reset_default_sort_func");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gtk_tree_model_sort_reset_default_sort_func. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gtk_tree_model_sort_reset_default_sort_func() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "gtk_tree_model_sort_reset_default_sort_func - arg0 (tree_model_sort)");
		}
		validate_NULL_TYPETYPE(  arg0, "gtk_tree_model_sort_reset_default_sort_func - arg0 (tree_model_sort)");
	}
	funcptr(arg0);
	__lsb_check_params = reset_flag;
}

