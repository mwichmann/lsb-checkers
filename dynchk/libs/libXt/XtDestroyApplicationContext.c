// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include <dlfcn.h>
#include <X11/Intrinsic.h>
#undef XtDestroyApplicationContext
static void(*funcptr) (XtAppContext ) = 0;

extern int __lsb_check_params;
void XtDestroyApplicationContext (XtAppContext arg0 )
{
	int reset_flag = __lsb_check_params;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, " XtDestroyApplicationContext ");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(5-reset_flag, "XtDestroyApplicationContext()");
		validate_NULL_TYPETYPE(  arg0, "XtDestroyApplicationContext - arg0");
	}
	funcptr(arg0);
	__lsb_check_params = reset_flag;
}

