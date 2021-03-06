// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <X11/Xlib.h>
#include <X11/X.h>
#undef XDrawImageString16
static int(*funcptr) (Display * , Drawable , GC , int , int , const XChar2b * , int ) = 0;

extern int __lsb_check_params;
int XDrawImageString16 (Display * arg0 , Drawable arg1 , GC arg2 , int arg3 , int arg4 , const XChar2b * arg5 , int arg6 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	__lsb_output(4, "Invoking wrapper for XDrawImageString16()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XDrawImageString16");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load XDrawImageString16. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "XDrawImageString16() - validating");
		validate_RWaddress( arg0, "XDrawImageString16 - arg0");
		validate_NULL_TYPETYPE(  arg0, "XDrawImageString16 - arg0");
		validate_NULL_TYPETYPE(  arg1, "XDrawImageString16 - arg1");
		validate_NULL_TYPETYPE(  arg2, "XDrawImageString16 - arg2");
		validate_NULL_TYPETYPE(  arg3, "XDrawImageString16 - arg3");
		validate_NULL_TYPETYPE(  arg4, "XDrawImageString16 - arg4");
		validate_Rdaddress( arg5, "XDrawImageString16 - arg5");
		validate_NULL_TYPETYPE(  arg5, "XDrawImageString16 - arg5");
		validate_NULL_TYPETYPE(  arg6, "XDrawImageString16 - arg6");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3, arg4, arg5, arg6);
	__lsb_check_params = reset_flag;
	return ret_value;
}

