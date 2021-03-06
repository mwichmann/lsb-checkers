// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <glib-2.0/glib.h>
#undef g_thread_create_full
static GThread *(*funcptr) (GThreadFunc , gpointer , gulong , gboolean , gboolean , GThreadPriority , GError * * ) = 0;

extern int __lsb_check_params;
GThread * g_thread_create_full (GThreadFunc arg0 , gpointer arg1 , gulong arg2 , gboolean arg3 , gboolean arg4 , GThreadPriority arg5 , GError * * arg6 )
{
	int reset_flag = __lsb_check_params;
	GThread * ret_value  ;
	__lsb_output(4, "Invoking wrapper for g_thread_create_full()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "g_thread_create_full");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load g_thread_create_full. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "g_thread_create_full() - validating");
		validate_NULL_TYPETYPE(  arg0, "g_thread_create_full - arg0 (func)");
		validate_NULL_TYPETYPE(  arg1, "g_thread_create_full - arg1 (data)");
		validate_NULL_TYPETYPE(  arg2, "g_thread_create_full - arg2 (stack_size)");
		validate_NULL_TYPETYPE(  arg3, "g_thread_create_full - arg3 (joinable)");
		validate_NULL_TYPETYPE(  arg4, "g_thread_create_full - arg4 (bound)");
		validate_NULL_TYPETYPE(  arg5, "g_thread_create_full - arg5 (priority)");
		if( arg6 ) {
		validate_RWaddress( arg6, "g_thread_create_full - arg6 (error)");
		}
		validate_NULL_TYPETYPE(  arg6, "g_thread_create_full - arg6 (error)");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3, arg4, arg5, arg6);
	__lsb_check_params = reset_flag;
	return ret_value;
}

