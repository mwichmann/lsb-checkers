// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include <dlfcn.h>
#include <X11/Xlib.h>
#undef XFontsOfFontSet
static int(*funcptr) (XFontSet , XFontStruct * * * , char * * * ) = 0;

extern int __lsb_check_params;
int XFontsOfFontSet (XFontSet arg0 , XFontStruct * * * arg1 , char * * * arg2 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, " XFontsOfFontSet ");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(5-reset_flag, "XFontsOfFontSet()");
		validate_NULL_TYPETYPE(  arg0, "XFontsOfFontSet - arg0");
		validate_RWaddress( arg1, "XFontsOfFontSet - arg1");
		validate_NULL_TYPETYPE(  arg1, "XFontsOfFontSet - arg1");
		validate_RWaddress( arg2, "XFontsOfFontSet - arg2");
		validate_NULL_TYPETYPE(  arg2, "XFontsOfFontSet - arg2");
	}
	ret_value = funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
	return ret_value;
}

