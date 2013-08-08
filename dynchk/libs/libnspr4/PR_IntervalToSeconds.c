// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <nspr4/prinrval.h>
#undef PR_IntervalToSeconds
static PRUint32(*funcptr) (PRIntervalTime ) = 0;

extern int __lsb_check_params;
PRUint32 PR_IntervalToSeconds (PRIntervalTime arg0 )
{
	int reset_flag = __lsb_check_params;
	PRUint32 ret_value  ;
	__lsb_output(4, "Invoking wrapper for PR_IntervalToSeconds()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "PR_IntervalToSeconds");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load PR_IntervalToSeconds. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "PR_IntervalToSeconds() - validating");
		validate_NULL_TYPETYPE(  arg0, "PR_IntervalToSeconds - arg0 (ticks)");
	}
	ret_value = funcptr(arg0);
	__lsb_check_params = reset_flag;
	return ret_value;
}

