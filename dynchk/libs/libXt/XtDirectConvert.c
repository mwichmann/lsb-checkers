// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <X11/Intrinsic.h>
#include <X11/Xresource.h>
#undef XtDirectConvert
static void(*funcptr) (XtConverter , XrmValuePtr , Cardinal , XrmValuePtr , XrmValue * ) = 0;

extern int __lsb_check_params;
extern int __lsb_output(int, char*, ...);
void XtDirectConvert (XtConverter arg0 , XrmValuePtr arg1 , Cardinal arg2 , XrmValuePtr arg3 , XrmValue * arg4 )
{
	int reset_flag = __lsb_check_params;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XtDirectConvert");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
	__lsb_output(5-__lsb_check_params, "XtDirectConvert()");
		validate_NULL_TYPETYPE(  arg0, "XtDirectConvert - arg0");
		validate_NULL_TYPETYPE(  arg1, "XtDirectConvert - arg1");
		validate_NULL_TYPETYPE(  arg2, "XtDirectConvert - arg2");
		validate_NULL_TYPETYPE(  arg3, "XtDirectConvert - arg3");
	validate_RWaddress( arg4, "XtDirectConvert - arg4");
		validate_NULL_TYPETYPE(  arg4, "XtDirectConvert - arg4");
	}
	funcptr(arg0, arg1, arg2, arg3, arg4);
	__lsb_check_params = reset_flag;
}

