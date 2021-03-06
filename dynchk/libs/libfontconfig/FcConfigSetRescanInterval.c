// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <fontconfig/fontconfig.h>
#undef FcConfigSetRescanInterval
static FcBool(*funcptr) (FcConfig * , int ) = 0;

extern int __lsb_check_params;
FcBool FcConfigSetRescanInterval (FcConfig * arg0 , int arg1 )
{
	int reset_flag = __lsb_check_params;
	FcBool ret_value  ;
	__lsb_output(4, "Invoking wrapper for FcConfigSetRescanInterval()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "FcConfigSetRescanInterval");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load FcConfigSetRescanInterval. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "FcConfigSetRescanInterval() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "FcConfigSetRescanInterval - arg0 (config)");
		}
		validate_NULL_TYPETYPE(  arg0, "FcConfigSetRescanInterval - arg0 (config)");
		validate_NULL_TYPETYPE(  arg1, "FcConfigSetRescanInterval - arg1 (rescanInterval)");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}

