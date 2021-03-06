// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <glib-2.0/glib-object.h>
#include <gtk-2.0/gdk/gdk.h>
#undef gdk_threads_set_lock_functions
static void(*funcptr) (GCallback , GCallback ) = 0;

extern int __lsb_check_params;
void gdk_threads_set_lock_functions (GCallback arg0 , GCallback arg1 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for gdk_threads_set_lock_functions()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gdk_threads_set_lock_functions");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gdk_threads_set_lock_functions. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gdk_threads_set_lock_functions() - validating");
		validate_NULL_TYPETYPE(  arg0, "gdk_threads_set_lock_functions - arg0 (enter_fn)");
		validate_NULL_TYPETYPE(  arg1, "gdk_threads_set_lock_functions - arg1 (leave_fn)");
	}
	funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
}

