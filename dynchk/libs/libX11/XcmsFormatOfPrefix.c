// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <X11/Xcms.h>
#undef XcmsFormatOfPrefix
static XcmsColorFormat(*funcptr) (char * ) = 0;

extern int __lsb_check_params;
extern int __lsb_output(int, char*, ...);
XcmsColorFormat XcmsFormatOfPrefix (char * arg0 )
{
	int reset_flag = __lsb_check_params;
	XcmsColorFormat ret_value  ;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XcmsFormatOfPrefix");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
	__lsb_output(5-__lsb_check_params, "XcmsFormatOfPrefix()");
	validate_RWaddress( arg0, "XcmsFormatOfPrefix - arg0");
		validate_NULL_TYPETYPE(  arg0, "XcmsFormatOfPrefix - arg0");
	}
	ret_value = funcptr(arg0);
	__lsb_check_params = reset_flag;
	return ret_value;
}

