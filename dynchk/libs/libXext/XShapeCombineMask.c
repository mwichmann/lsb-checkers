// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "../../misc/lsb_dlsym.h"
#include <X11/Xlib.h>
#include <X11/X.h>
#include <X11/extensions/shape.h>
#undef XShapeCombineMask
static void(*funcptr) (Display * , Window , int , int , int , Pixmap , int ) = 0;

extern int __lsb_check_params;
void XShapeCombineMask (Display * arg0 , Window arg1 , int arg2 , int arg3 , int arg4 , Pixmap arg5 , int arg6 )
{
	int reset_flag = __lsb_check_params;
	if(!funcptr)
		funcptr = lsb_dlsym(RTLD_NEXT, "XShapeCombineMask");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "XShapeCombineMask()");
		validate_RWaddress( arg0, "XShapeCombineMask - arg0");
		validate_NULL_TYPETYPE(  arg0, "XShapeCombineMask - arg0");
		validate_NULL_TYPETYPE(  arg1, "XShapeCombineMask - arg1");
		validate_NULL_TYPETYPE(  arg2, "XShapeCombineMask - arg2");
		validate_NULL_TYPETYPE(  arg3, "XShapeCombineMask - arg3");
		validate_NULL_TYPETYPE(  arg4, "XShapeCombineMask - arg4");
		validate_NULL_TYPETYPE(  arg5, "XShapeCombineMask - arg5");
		validate_NULL_TYPETYPE(  arg6, "XShapeCombineMask - arg6");
	}
	funcptr(arg0, arg1, arg2, arg3, arg4, arg5, arg6);
	__lsb_check_params = reset_flag;
}

