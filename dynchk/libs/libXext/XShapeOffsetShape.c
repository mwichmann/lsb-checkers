// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <X11/Xlib.h>
#include <X11/X.h>
#include <X11/extensions/shape.h>
#undef XShapeOffsetShape
static void(*funcptr) (Display * , Window , int , int , int ) = 0;

extern int __lsb_check_params;
extern int __lsb_output(int, char*, ...);
void XShapeOffsetShape (Display * arg0 , Window arg1 , int arg2 , int arg3 , int arg4 )
{
	int reset_flag = __lsb_check_params;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XShapeOffsetShape");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
	__lsb_output(5-__lsb_check_params, "XShapeOffsetShape()");
	validate_RWaddress( arg0, "XShapeOffsetShape - arg0");
		validate_NULL_TYPETYPE(  arg0, "XShapeOffsetShape - arg0");
		validate_NULL_TYPETYPE(  arg1, "XShapeOffsetShape - arg1");
		validate_NULL_TYPETYPE(  arg2, "XShapeOffsetShape - arg2");
		validate_NULL_TYPETYPE(  arg3, "XShapeOffsetShape - arg3");
		validate_NULL_TYPETYPE(  arg4, "XShapeOffsetShape - arg4");
	}
	funcptr(arg0, arg1, arg2, arg3, arg4);
	__lsb_check_params = reset_flag;
}

