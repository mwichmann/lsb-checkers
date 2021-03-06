// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <glib-2.0/glib.h>
#undef g_source_set_callback
static void(*funcptr) (GSource * , GSourceFunc , gpointer , GDestroyNotify ) = 0;

extern int __lsb_check_params;
void g_source_set_callback (GSource * arg0 , GSourceFunc arg1 , gpointer arg2 , GDestroyNotify arg3 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for g_source_set_callback()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "g_source_set_callback");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load g_source_set_callback. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "g_source_set_callback() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "g_source_set_callback - arg0 (source)");
		}
		validate_NULL_TYPETYPE(  arg0, "g_source_set_callback - arg0 (source)");
		validate_NULL_TYPETYPE(  arg1, "g_source_set_callback - arg1 (func)");
		validate_NULL_TYPETYPE(  arg2, "g_source_set_callback - arg2 (data)");
		validate_NULL_TYPETYPE(  arg3, "g_source_set_callback - arg3 (notify)");
	}
	funcptr(arg0, arg1, arg2, arg3);
	__lsb_check_params = reset_flag;
}

