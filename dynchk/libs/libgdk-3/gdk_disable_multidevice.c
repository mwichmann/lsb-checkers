// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-3.0/gdk/gdk.h>
#undef gdk_disable_multidevice
static void(*funcptr) () = 0;

extern int __lsb_check_params;
void gdk_disable_multidevice ()
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for gdk_disable_multidevice()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gdk_disable_multidevice");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gdk_disable_multidevice. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gdk_disable_multidevice() - validating");
	}
	funcptr();
	__lsb_check_params = reset_flag;
}

