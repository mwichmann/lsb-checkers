// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <X11/Xlib.h>
#include <X11/Xft/Xft.h>
#undef XftFontOpenXlfd
static XftFont *(*funcptr) (Display * , int , const char * ) = 0;

extern int __lsb_check_params;
XftFont * XftFontOpenXlfd (Display * arg0 , int arg1 , const char * arg2 )
{
	int reset_flag = __lsb_check_params;
	XftFont * ret_value  ;
	__lsb_output(4, "Invoking wrapper for XftFontOpenXlfd()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XftFontOpenXlfd");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load XftFontOpenXlfd. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "XftFontOpenXlfd() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "XftFontOpenXlfd - arg0");
		}
		validate_NULL_TYPETYPE(  arg0, "XftFontOpenXlfd - arg0");
		validate_NULL_TYPETYPE(  arg1, "XftFontOpenXlfd - arg1");
		if( arg2 ) {
		validate_Rdaddress( arg2, "XftFontOpenXlfd - arg2");
		}
		validate_NULL_TYPETYPE(  arg2, "XftFontOpenXlfd - arg2");
	}
	ret_value = funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
	return ret_value;
}

