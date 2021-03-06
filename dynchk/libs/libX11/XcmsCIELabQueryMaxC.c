// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <X11/Xcms.h>
#undef XcmsCIELabQueryMaxC
static int(*funcptr) (XcmsCCC , XcmsFloat , XcmsFloat , XcmsColor * ) = 0;

extern int __lsb_check_params;
int XcmsCIELabQueryMaxC (XcmsCCC arg0 , XcmsFloat arg1 , XcmsFloat arg2 , XcmsColor * arg3 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	__lsb_output(4, "Invoking wrapper for XcmsCIELabQueryMaxC()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XcmsCIELabQueryMaxC");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load XcmsCIELabQueryMaxC. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "XcmsCIELabQueryMaxC() - validating");
		validate_NULL_TYPETYPE(  arg0, "XcmsCIELabQueryMaxC - arg0");
		validate_NULL_TYPETYPE(  arg1, "XcmsCIELabQueryMaxC - arg1");
		validate_NULL_TYPETYPE(  arg2, "XcmsCIELabQueryMaxC - arg2");
		validate_RWaddress( arg3, "XcmsCIELabQueryMaxC - arg3");
		validate_NULL_TYPETYPE(  arg3, "XcmsCIELabQueryMaxC - arg3");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3);
	__lsb_check_params = reset_flag;
	return ret_value;
}

