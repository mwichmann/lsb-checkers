// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <glib-2.0/glib.h>
#undef g_ptr_array_sort
static void(*funcptr) (GPtrArray * , GCompareFunc ) = 0;

extern int __lsb_check_params;
void g_ptr_array_sort (GPtrArray * arg0 , GCompareFunc arg1 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for g_ptr_array_sort()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "g_ptr_array_sort");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load g_ptr_array_sort. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "g_ptr_array_sort() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "g_ptr_array_sort - arg0 (array)");
		}
		validate_NULL_TYPETYPE(  arg0, "g_ptr_array_sort - arg0 (array)");
		validate_NULL_TYPETYPE(  arg1, "g_ptr_array_sort - arg1 (compare_func)");
	}
	funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
}

