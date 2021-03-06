// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <glib-2.0/glib.h>
#undef g_ptr_array_set_size
static void(*funcptr) (GPtrArray * , gint ) = 0;

extern int __lsb_check_params;
void g_ptr_array_set_size (GPtrArray * arg0 , gint arg1 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for g_ptr_array_set_size()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "g_ptr_array_set_size");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load g_ptr_array_set_size. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "g_ptr_array_set_size() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "g_ptr_array_set_size - arg0 (array)");
		}
		validate_NULL_TYPETYPE(  arg0, "g_ptr_array_set_size - arg0 (array)");
		validate_NULL_TYPETYPE(  arg1, "g_ptr_array_set_size - arg1 (length)");
	}
	funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
}

