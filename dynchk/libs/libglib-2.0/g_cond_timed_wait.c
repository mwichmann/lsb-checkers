// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <glib-2.0/glib.h>
#undef g_cond_timed_wait
static gboolean(*funcptr) (GCond * , GMutex * , GTimeVal * ) = 0;

extern int __lsb_check_params;
gboolean g_cond_timed_wait (GCond * arg0 , GMutex * arg1 , GTimeVal * arg2 )
{
	int reset_flag = __lsb_check_params;
	gboolean ret_value  ;
	__lsb_output(4, "Invoking wrapper for g_cond_timed_wait()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "g_cond_timed_wait");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load g_cond_timed_wait. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "g_cond_timed_wait() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "g_cond_timed_wait - arg0 (cond)");
		}
		validate_NULL_TYPETYPE(  arg0, "g_cond_timed_wait - arg0 (cond)");
		if( arg1 ) {
		validate_RWaddress( arg1, "g_cond_timed_wait - arg1 (mutex)");
		}
		validate_NULL_TYPETYPE(  arg1, "g_cond_timed_wait - arg1 (mutex)");
		if( arg2 ) {
		validate_RWaddress( arg2, "g_cond_timed_wait - arg2 (timeval)");
		}
		validate_NULL_TYPETYPE(  arg2, "g_cond_timed_wait - arg2 (timeval)");
	}
	ret_value = funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
	return ret_value;
}

