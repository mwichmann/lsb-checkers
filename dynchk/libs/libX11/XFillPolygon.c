// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <X11/Xlib.h>
#include <X11/X.h>
#undef XFillPolygon
static int(*funcptr) (Display * , Drawable , GC , XPoint * , int , int , int ) = 0;

extern int __lsb_check_params;
int XFillPolygon (Display * arg0 , Drawable arg1 , GC arg2 , XPoint * arg3 , int arg4 , int arg5 , int arg6 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	__lsb_output(4, "Invoking wrapper for XFillPolygon()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XFillPolygon");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load XFillPolygon. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "XFillPolygon() - validating");
		validate_RWaddress( arg0, "XFillPolygon - arg0");
		validate_NULL_TYPETYPE(  arg0, "XFillPolygon - arg0");
		validate_NULL_TYPETYPE(  arg1, "XFillPolygon - arg1");
		validate_NULL_TYPETYPE(  arg2, "XFillPolygon - arg2");
		validate_RWaddress( arg3, "XFillPolygon - arg3");
		validate_NULL_TYPETYPE(  arg3, "XFillPolygon - arg3");
		validate_NULL_TYPETYPE(  arg4, "XFillPolygon - arg4");
		validate_NULL_TYPETYPE(  arg5, "XFillPolygon - arg5");
		validate_NULL_TYPETYPE(  arg6, "XFillPolygon - arg6");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3, arg4, arg5, arg6);
	__lsb_check_params = reset_flag;
	return ret_value;
}

