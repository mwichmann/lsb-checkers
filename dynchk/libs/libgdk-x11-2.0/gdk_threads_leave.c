// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-2.0/gdk/gdk.h>
#undef gdk_threads_leave
static void(*funcptr) () = 0;

extern int __lsb_check_params;
void gdk_threads_leave ()
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for gdk_threads_leave()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gdk_threads_leave");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gdk_threads_leave. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gdk_threads_leave() - validating");
	}
	funcptr();
	__lsb_check_params = reset_flag;
}
