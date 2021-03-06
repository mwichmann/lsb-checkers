// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <X11/Xft/Xft.h>
#include <X11/extensions/Xrender.h>
#undef XftDrawSetClipRectangles
static int(*funcptr) (XftDraw * , int , int , const XRectangle * , int ) = 0;

extern int __lsb_check_params;
int XftDrawSetClipRectangles (XftDraw * arg0 , int arg1 , int arg2 , const XRectangle * arg3 , int arg4 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	__lsb_output(4, "Invoking wrapper for XftDrawSetClipRectangles()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XftDrawSetClipRectangles");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load XftDrawSetClipRectangles. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "XftDrawSetClipRectangles() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "XftDrawSetClipRectangles - arg0");
		}
		validate_NULL_TYPETYPE(  arg0, "XftDrawSetClipRectangles - arg0");
		validate_NULL_TYPETYPE(  arg1, "XftDrawSetClipRectangles - arg1");
		validate_NULL_TYPETYPE(  arg2, "XftDrawSetClipRectangles - arg2");
		if( arg3 ) {
		validate_Rdaddress( arg3, "XftDrawSetClipRectangles - arg3");
		}
		validate_NULL_TYPETYPE(  arg3, "XftDrawSetClipRectangles - arg3");
		validate_NULL_TYPETYPE(  arg4, "XftDrawSetClipRectangles - arg4");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3, arg4);
	__lsb_check_params = reset_flag;
	return ret_value;
}

