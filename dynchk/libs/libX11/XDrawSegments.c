// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <X11/Xlib.h>
#include <X11/X.h>
#undef XDrawSegments
static int(*funcptr) (Display * , Drawable , GC , XSegment * , int ) = 0;

extern int __lsb_check_params;
extern int __lsb_output(int, char*, ...);
int XDrawSegments (Display * arg0 , Drawable arg1 , GC arg2 , XSegment * arg3 , int arg4 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XDrawSegments");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
	__lsb_output(5-__lsb_check_params, "XDrawSegments()");
	validate_RWaddress( arg0, "XDrawSegments - arg0");
		validate_NULL_TYPETYPE(  arg0, "XDrawSegments - arg0");
		validate_NULL_TYPETYPE(  arg1, "XDrawSegments - arg1");
		validate_NULL_TYPETYPE(  arg2, "XDrawSegments - arg2");
	validate_RWaddress( arg3, "XDrawSegments - arg3");
		validate_NULL_TYPETYPE(  arg3, "XDrawSegments - arg3");
		validate_NULL_TYPETYPE(  arg4, "XDrawSegments - arg4");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3, arg4);
	__lsb_check_params = reset_flag;
	return ret_value;
}

