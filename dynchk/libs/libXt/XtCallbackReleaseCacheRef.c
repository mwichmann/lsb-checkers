// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include <dlfcn.h>
#include <X11/Intrinsic.h>
#undef XtCallbackReleaseCacheRef
static void(*funcptr) (Widget , XtPointer , XtPointer ) = 0;

extern int __lsb_check_params;
void XtCallbackReleaseCacheRef (Widget arg0 , XtPointer arg1 , XtPointer arg2 )
{
	int reset_flag = __lsb_check_params;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, " XtCallbackReleaseCacheRef ");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(5-reset_flag, "XtCallbackReleaseCacheRef()");
		validate_NULL_TYPETYPE(  arg0, "XtCallbackReleaseCacheRef - arg0");
		validate_NULL_TYPETYPE(  arg1, "XtCallbackReleaseCacheRef - arg1");
		validate_NULL_TYPETYPE(  arg2, "XtCallbackReleaseCacheRef - arg2");
	}
	funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
}

