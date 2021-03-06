// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <fontconfig/fontconfig.h>
#undef FcConfigGetCurrent
static FcConfig *(*funcptr) () = 0;

extern int __lsb_check_params;
FcConfig * FcConfigGetCurrent ()
{
	int reset_flag = __lsb_check_params;
	FcConfig * ret_value  ;
	__lsb_output(4, "Invoking wrapper for FcConfigGetCurrent()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "FcConfigGetCurrent");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load FcConfigGetCurrent. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "FcConfigGetCurrent() - validating");
	}
	ret_value = funcptr();
	__lsb_check_params = reset_flag;
	return ret_value;
}

