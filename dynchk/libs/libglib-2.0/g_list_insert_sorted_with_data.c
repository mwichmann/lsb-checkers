// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <glib-2.0/glib.h>
#undef g_list_insert_sorted_with_data
static GList *(*funcptr) (GList * , gpointer , GCompareDataFunc , gpointer ) = 0;

extern int __lsb_check_params;
GList * g_list_insert_sorted_with_data (GList * arg0 , gpointer arg1 , GCompareDataFunc arg2 , gpointer arg3 )
{
	int reset_flag = __lsb_check_params;
	GList * ret_value  ;
	__lsb_output(4, "Invoking wrapper for g_list_insert_sorted_with_data()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "g_list_insert_sorted_with_data");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load g_list_insert_sorted_with_data. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "g_list_insert_sorted_with_data() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "g_list_insert_sorted_with_data - arg0 (list)");
		}
		validate_NULL_TYPETYPE(  arg0, "g_list_insert_sorted_with_data - arg0 (list)");
		validate_NULL_TYPETYPE(  arg1, "g_list_insert_sorted_with_data - arg1 (data)");
		validate_NULL_TYPETYPE(  arg2, "g_list_insert_sorted_with_data - arg2 (func)");
		validate_NULL_TYPETYPE(  arg3, "g_list_insert_sorted_with_data - arg3 (user_data)");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3);
	__lsb_check_params = reset_flag;
	return ret_value;
}

