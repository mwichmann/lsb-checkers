// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <glib-2.0/glib.h>
#undef g_thread_unref
static void(*funcptr) (GThread * ) = 0;

extern int __lsb_check_params;
void g_thread_unref (GThread * arg0 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for g_thread_unref()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "g_thread_unref");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load g_thread_unref. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "g_thread_unref() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "g_thread_unref - arg0 (thread)");
		}
		validate_NULL_TYPETYPE(  arg0, "g_thread_unref - arg0 (thread)");
	}
	funcptr(arg0);
	__lsb_check_params = reset_flag;
}

