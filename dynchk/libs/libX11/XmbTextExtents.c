// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include <dlfcn.h>
#include <X11/Xlib.h>
#undef XmbTextExtents
static int(*funcptr) (XFontSet , const char * , int , XRectangle * , XRectangle * ) = 0;

extern int __lsb_check_params;
int XmbTextExtents (XFontSet arg0 , const char * arg1 , int arg2 , XRectangle * arg3 , XRectangle * arg4 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, " XmbTextExtents ");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(5-reset_flag, "XmbTextExtents()");
		validate_NULL_TYPETYPE(  arg0, "XmbTextExtents - arg0");
		validate_Rdaddress( arg1, "XmbTextExtents - arg1");
		validate_NULL_TYPETYPE(  arg1, "XmbTextExtents - arg1");
		validate_NULL_TYPETYPE(  arg2, "XmbTextExtents - arg2");
		validate_RWaddress( arg3, "XmbTextExtents - arg3");
		validate_NULL_TYPETYPE(  arg3, "XmbTextExtents - arg3");
		validate_RWaddress( arg4, "XmbTextExtents - arg4");
		validate_NULL_TYPETYPE(  arg4, "XmbTextExtents - arg4");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3, arg4);
	__lsb_check_params = reset_flag;
	return ret_value;
}

