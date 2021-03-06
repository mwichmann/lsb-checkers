// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <glib-2.0/glib.h>
#undef g_tree_new_with_data
static GTree *(*funcptr) (GCompareDataFunc , gpointer ) = 0;

extern int __lsb_check_params;
GTree * g_tree_new_with_data (GCompareDataFunc arg0 , gpointer arg1 )
{
	int reset_flag = __lsb_check_params;
	GTree * ret_value  ;
	__lsb_output(4, "Invoking wrapper for g_tree_new_with_data()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "g_tree_new_with_data");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load g_tree_new_with_data. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "g_tree_new_with_data() - validating");
		validate_NULL_TYPETYPE(  arg0, "g_tree_new_with_data - arg0 (key_compare_func)");
		validate_NULL_TYPETYPE(  arg1, "g_tree_new_with_data - arg1 (key_compare_data)");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}

