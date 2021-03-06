// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <X11/Xft/Xft.h>
#undef XftDrawRect
static void(*funcptr) (XftDraw * , const XftColor * , int , int , unsigned int , unsigned int ) = 0;

extern int __lsb_check_params;
void XftDrawRect (XftDraw * arg0 , const XftColor * arg1 , int arg2 , int arg3 , unsigned int arg4 , unsigned int arg5 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for XftDrawRect()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XftDrawRect");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load XftDrawRect. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "XftDrawRect() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "XftDrawRect - arg0");
		}
		validate_NULL_TYPETYPE(  arg0, "XftDrawRect - arg0");
		if( arg1 ) {
		validate_Rdaddress( arg1, "XftDrawRect - arg1");
		}
		validate_NULL_TYPETYPE(  arg1, "XftDrawRect - arg1");
		validate_NULL_TYPETYPE(  arg2, "XftDrawRect - arg2");
		validate_NULL_TYPETYPE(  arg3, "XftDrawRect - arg3");
		validate_NULL_TYPETYPE(  arg4, "XftDrawRect - arg4");
		validate_NULL_TYPETYPE(  arg5, "XftDrawRect - arg5");
	}
	funcptr(arg0, arg1, arg2, arg3, arg4, arg5);
	__lsb_check_params = reset_flag;
}

