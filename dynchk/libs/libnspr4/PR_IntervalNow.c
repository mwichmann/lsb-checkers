// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <nspr4/prinrval.h>
#undef PR_IntervalNow
static PRIntervalTime(*funcptr) () = 0;

extern int __lsb_check_params;
PRIntervalTime PR_IntervalNow ()
{
	int reset_flag = __lsb_check_params;
	PRIntervalTime ret_value  ;
	__lsb_output(4, "Invoking wrapper for PR_IntervalNow()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "PR_IntervalNow");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load PR_IntervalNow. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "PR_IntervalNow() - validating");
	}
	ret_value = funcptr();
	__lsb_check_params = reset_flag;
	return ret_value;
}
