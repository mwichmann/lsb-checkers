// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <X11/Xlib.h>
#undef XmbTextPerCharExtents
static int(*funcptr) (XFontSet , const char * , int , XRectangle * , XRectangle * , int , int * , XRectangle * , XRectangle * ) = 0;

extern int __lsb_check_params;
int XmbTextPerCharExtents (XFontSet arg0 , const char * arg1 , int arg2 , XRectangle * arg3 , XRectangle * arg4 , int arg5 , int * arg6 , XRectangle * arg7 , XRectangle * arg8 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	__lsb_output(4, "Invoking wrapper for XmbTextPerCharExtents()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XmbTextPerCharExtents");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load XmbTextPerCharExtents. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "XmbTextPerCharExtents() - validating");
		validate_NULL_TYPETYPE(  arg0, "XmbTextPerCharExtents - arg0");
		validate_Rdaddress( arg1, "XmbTextPerCharExtents - arg1");
		validate_NULL_TYPETYPE(  arg1, "XmbTextPerCharExtents - arg1");
		validate_NULL_TYPETYPE(  arg2, "XmbTextPerCharExtents - arg2");
		validate_RWaddress( arg3, "XmbTextPerCharExtents - arg3");
		validate_NULL_TYPETYPE(  arg3, "XmbTextPerCharExtents - arg3");
		validate_RWaddress( arg4, "XmbTextPerCharExtents - arg4");
		validate_NULL_TYPETYPE(  arg4, "XmbTextPerCharExtents - arg4");
		validate_NULL_TYPETYPE(  arg5, "XmbTextPerCharExtents - arg5");
		validate_RWaddress( arg6, "XmbTextPerCharExtents - arg6");
		validate_NULL_TYPETYPE(  arg6, "XmbTextPerCharExtents - arg6");
		validate_RWaddress( arg7, "XmbTextPerCharExtents - arg7");
		validate_NULL_TYPETYPE(  arg7, "XmbTextPerCharExtents - arg7");
		validate_RWaddress( arg8, "XmbTextPerCharExtents - arg8");
		validate_NULL_TYPETYPE(  arg8, "XmbTextPerCharExtents - arg8");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8);
	__lsb_check_params = reset_flag;
	return ret_value;
}

