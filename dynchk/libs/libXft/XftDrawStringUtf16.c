// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <X11/Xft/Xft.h>
#include <fontconfig/fontconfig.h>
#undef XftDrawStringUtf16
static void(*funcptr) (XftDraw * , const XftColor * , XftFont * , int , int , const FcChar8 * , FcEndian , int ) = 0;

extern int __lsb_check_params;
void XftDrawStringUtf16 (XftDraw * arg0 , const XftColor * arg1 , XftFont * arg2 , int arg3 , int arg4 , const FcChar8 * arg5 , FcEndian arg6 , int arg7 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for XftDrawStringUtf16()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XftDrawStringUtf16");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load XftDrawStringUtf16. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "XftDrawStringUtf16() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "XftDrawStringUtf16 - arg0");
		}
		validate_NULL_TYPETYPE(  arg0, "XftDrawStringUtf16 - arg0");
		if( arg1 ) {
		validate_Rdaddress( arg1, "XftDrawStringUtf16 - arg1");
		}
		validate_NULL_TYPETYPE(  arg1, "XftDrawStringUtf16 - arg1");
		if( arg2 ) {
		validate_RWaddress( arg2, "XftDrawStringUtf16 - arg2");
		}
		validate_NULL_TYPETYPE(  arg2, "XftDrawStringUtf16 - arg2");
		validate_NULL_TYPETYPE(  arg3, "XftDrawStringUtf16 - arg3");
		validate_NULL_TYPETYPE(  arg4, "XftDrawStringUtf16 - arg4");
		if( arg5 ) {
		validate_Rdaddress( arg5, "XftDrawStringUtf16 - arg5");
		}
		validate_NULL_TYPETYPE(  arg5, "XftDrawStringUtf16 - arg5");
		validate_NULL_TYPETYPE(  arg6, "XftDrawStringUtf16 - arg6");
		validate_NULL_TYPETYPE(  arg7, "XftDrawStringUtf16 - arg7");
	}
	funcptr(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7);
	__lsb_check_params = reset_flag;
}

