// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include <dlfcn.h>
#include <X11/Xlib.h>
#include <X11/X.h>
#include <X11/Xutil.h>
#include <X11/extensions/shape.h>
#undef XShapeCombineRegion
static void(*funcptr) (Display * , Window , int , int , int , Region , int ) = 0;

extern int __lsb_check_params;
void XShapeCombineRegion (Display * arg0 , Window arg1 , int arg2 , int arg3 , int arg4 , Region arg5 , int arg6 )
{
	int reset_flag = __lsb_check_params;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, " XShapeCombineRegion ");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(5-reset_flag, "XShapeCombineRegion()");
		validate_RWaddress( arg0, "XShapeCombineRegion - arg0");
		validate_NULL_TYPETYPE(  arg0, "XShapeCombineRegion - arg0");
		validate_NULL_TYPETYPE(  arg1, "XShapeCombineRegion - arg1");
		validate_NULL_TYPETYPE(  arg2, "XShapeCombineRegion - arg2");
		validate_NULL_TYPETYPE(  arg3, "XShapeCombineRegion - arg3");
		validate_NULL_TYPETYPE(  arg4, "XShapeCombineRegion - arg4");
		validate_NULL_TYPETYPE(  arg5, "XShapeCombineRegion - arg5");
		validate_NULL_TYPETYPE(  arg6, "XShapeCombineRegion - arg6");
	}
	funcptr(arg0, arg1, arg2, arg3, arg4, arg5, arg6);
	__lsb_check_params = reset_flag;
}

