// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "../../misc/lsb_dlsym.h"
#include <X11/X.h>
#include <X11/Xlib.h>
#undef XQueryBestSize
static int(*funcptr) (Display * , int , Drawable , unsigned int , unsigned int , unsigned int * , unsigned int * ) = 0;

extern int __lsb_check_params;
int XQueryBestSize (Display * arg0 , int arg1 , Drawable arg2 , unsigned int arg3 , unsigned int arg4 , unsigned int * arg5 , unsigned int * arg6 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	if(!funcptr)
		funcptr = lsb_dlsym(RTLD_NEXT, "XQueryBestSize");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "XQueryBestSize()");
		validate_RWaddress( arg0, "XQueryBestSize - arg0");
		validate_NULL_TYPETYPE(  arg0, "XQueryBestSize - arg0");
		validate_NULL_TYPETYPE(  arg1, "XQueryBestSize - arg1");
		validate_NULL_TYPETYPE(  arg2, "XQueryBestSize - arg2");
		validate_NULL_TYPETYPE(  arg3, "XQueryBestSize - arg3");
		validate_NULL_TYPETYPE(  arg4, "XQueryBestSize - arg4");
		validate_RWaddress( arg5, "XQueryBestSize - arg5");
		validate_NULL_TYPETYPE(  arg5, "XQueryBestSize - arg5");
		validate_RWaddress( arg6, "XQueryBestSize - arg6");
		validate_NULL_TYPETYPE(  arg6, "XQueryBestSize - arg6");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3, arg4, arg5, arg6);
	__lsb_check_params = reset_flag;
	return ret_value;
}

