// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <fontconfig/fontconfig.h>
#undef FcInit
static FcBool(*funcptr) () = 0;

extern int __lsb_check_params;
FcBool FcInit ()
{
	int reset_flag = __lsb_check_params;
	FcBool ret_value  ;
	__lsb_output(4, "Invoking wrapper for FcInit()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "FcInit");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load FcInit. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "FcInit() - validating");
	}
	ret_value = funcptr();
	__lsb_check_params = reset_flag;
	return ret_value;
}

