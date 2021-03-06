// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <X11/Xlib.h>
#include <X11/X.h>
#include <X11/Xutil.h>
#undef XSetStandardColormap
static void(*funcptr) (Display * , Window , XStandardColormap * , Atom ) = 0;

extern int __lsb_check_params;
void XSetStandardColormap (Display * arg0 , Window arg1 , XStandardColormap * arg2 , Atom arg3 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for XSetStandardColormap()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XSetStandardColormap");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load XSetStandardColormap. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "XSetStandardColormap() - validating");
		validate_RWaddress( arg0, "XSetStandardColormap - arg0");
		validate_NULL_TYPETYPE(  arg0, "XSetStandardColormap - arg0");
		validate_NULL_TYPETYPE(  arg1, "XSetStandardColormap - arg1");
		validate_RWaddress( arg2, "XSetStandardColormap - arg2");
		validate_NULL_TYPETYPE(  arg2, "XSetStandardColormap - arg2");
		validate_NULL_TYPETYPE(  arg3, "XSetStandardColormap - arg3");
	}
	funcptr(arg0, arg1, arg2, arg3);
	__lsb_check_params = reset_flag;
}

