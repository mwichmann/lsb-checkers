// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include <dlfcn.h>
#include <X11/Xlib.h>
#undef XTextExtents
static int(*funcptr) (XFontStruct * , const char * , int , int * , int * , int * , XCharStruct * ) = 0;

extern int __lsb_check_params;
int XTextExtents (XFontStruct * arg0 , const char * arg1 , int arg2 , int * arg3 , int * arg4 , int * arg5 , XCharStruct * arg6 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, " XTextExtents ");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(5-reset_flag, "XTextExtents()");
		validate_RWaddress( arg0, "XTextExtents - arg0");
		validate_NULL_TYPETYPE(  arg0, "XTextExtents - arg0");
		validate_Rdaddress( arg1, "XTextExtents - arg1");
		validate_NULL_TYPETYPE(  arg1, "XTextExtents - arg1");
		validate_NULL_TYPETYPE(  arg2, "XTextExtents - arg2");
		validate_RWaddress( arg3, "XTextExtents - arg3");
		validate_NULL_TYPETYPE(  arg3, "XTextExtents - arg3");
		validate_RWaddress( arg4, "XTextExtents - arg4");
		validate_NULL_TYPETYPE(  arg4, "XTextExtents - arg4");
		validate_RWaddress( arg5, "XTextExtents - arg5");
		validate_NULL_TYPETYPE(  arg5, "XTextExtents - arg5");
		validate_RWaddress( arg6, "XTextExtents - arg6");
		validate_NULL_TYPETYPE(  arg6, "XTextExtents - arg6");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3, arg4, arg5, arg6);
	__lsb_check_params = reset_flag;
	return ret_value;
}

