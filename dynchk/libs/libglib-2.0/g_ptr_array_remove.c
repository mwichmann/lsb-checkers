// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <glib-2.0/glib.h>
#undef g_ptr_array_remove
static gboolean(*funcptr) (GPtrArray * , gpointer ) = 0;

extern int __lsb_check_params;
gboolean g_ptr_array_remove (GPtrArray * arg0 , gpointer arg1 )
{
	int reset_flag = __lsb_check_params;
	gboolean ret_value  ;
	__lsb_output(4, "Invoking wrapper for g_ptr_array_remove()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "g_ptr_array_remove");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load g_ptr_array_remove. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "g_ptr_array_remove() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "g_ptr_array_remove - arg0 (array)");
		}
		validate_NULL_TYPETYPE(  arg0, "g_ptr_array_remove - arg0 (array)");
		validate_NULL_TYPETYPE(  arg1, "g_ptr_array_remove - arg1 (data)");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}

