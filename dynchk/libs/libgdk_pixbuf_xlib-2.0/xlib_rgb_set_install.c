// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gdk-pixbuf-2.0/gdk-pixbuf-xlib/gdk-pixbuf-xlib.h>
#undef xlib_rgb_set_install
static void(*funcptr) (int ) = 0;

extern int __lsb_check_params;
void xlib_rgb_set_install (int arg0 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for xlib_rgb_set_install()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "xlib_rgb_set_install");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load xlib_rgb_set_install. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "xlib_rgb_set_install() - validating");
		validate_NULL_TYPETYPE(  arg0, "xlib_rgb_set_install - arg0 (install)");
	}
	funcptr(arg0);
	__lsb_check_params = reset_flag;
}

