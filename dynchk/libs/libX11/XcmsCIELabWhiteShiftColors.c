// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include <dlfcn.h>
#include <X11/Xcms.h>
#undef XcmsCIELabWhiteShiftColors
static int(*funcptr) (XcmsCCC , XcmsColor * , XcmsColor * , XcmsColorFormat , XcmsColor * , unsigned int , int * ) = 0;

extern int __lsb_check_params;
int XcmsCIELabWhiteShiftColors (XcmsCCC arg0 , XcmsColor * arg1 , XcmsColor * arg2 , XcmsColorFormat arg3 , XcmsColor * arg4 , unsigned int arg5 , int * arg6 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, " XcmsCIELabWhiteShiftColors ");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(5-reset_flag, "XcmsCIELabWhiteShiftColors()");
		validate_NULL_TYPETYPE(  arg0, "XcmsCIELabWhiteShiftColors - arg0");
		validate_RWaddress( arg1, "XcmsCIELabWhiteShiftColors - arg1");
		validate_NULL_TYPETYPE(  arg1, "XcmsCIELabWhiteShiftColors - arg1");
		validate_RWaddress( arg2, "XcmsCIELabWhiteShiftColors - arg2");
		validate_NULL_TYPETYPE(  arg2, "XcmsCIELabWhiteShiftColors - arg2");
		validate_NULL_TYPETYPE(  arg3, "XcmsCIELabWhiteShiftColors - arg3");
		validate_RWaddress( arg4, "XcmsCIELabWhiteShiftColors - arg4");
		validate_NULL_TYPETYPE(  arg4, "XcmsCIELabWhiteShiftColors - arg4");
		validate_NULL_TYPETYPE(  arg5, "XcmsCIELabWhiteShiftColors - arg5");
		validate_RWaddress( arg6, "XcmsCIELabWhiteShiftColors - arg6");
		validate_NULL_TYPETYPE(  arg6, "XcmsCIELabWhiteShiftColors - arg6");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3, arg4, arg5, arg6);
	__lsb_check_params = reset_flag;
	return ret_value;
}

