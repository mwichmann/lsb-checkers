// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include <dlfcn.h>
#include <X11/Xlib.h>
#undef XLoadQueryFont
static XFontStruct *(*funcptr) (Display * , const char * ) = 0;

extern int __lsb_check_params;
XFontStruct * XLoadQueryFont (Display * arg0 , const char * arg1 )
{
	int reset_flag = __lsb_check_params;
	XFontStruct * ret_value  ;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, " XLoadQueryFont ");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(5-reset_flag, "XLoadQueryFont()");
		validate_RWaddress( arg0, "XLoadQueryFont - arg0");
		validate_NULL_TYPETYPE(  arg0, "XLoadQueryFont - arg0");
		validate_Rdaddress( arg1, "XLoadQueryFont - arg1");
		validate_NULL_TYPETYPE(  arg1, "XLoadQueryFont - arg1");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}

