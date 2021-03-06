// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-2.0/gtk/gtk.h>
#undef gtk_tree_model_filter_refilter
static void(*funcptr) (GtkTreeModelFilter * ) = 0;

extern int __lsb_check_params;
void gtk_tree_model_filter_refilter (GtkTreeModelFilter * arg0 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for gtk_tree_model_filter_refilter()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gtk_tree_model_filter_refilter");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gtk_tree_model_filter_refilter. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gtk_tree_model_filter_refilter() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "gtk_tree_model_filter_refilter - arg0 (filter)");
		}
		validate_NULL_TYPETYPE(  arg0, "gtk_tree_model_filter_refilter - arg0 (filter)");
	}
	funcptr(arg0);
	__lsb_check_params = reset_flag;
}

