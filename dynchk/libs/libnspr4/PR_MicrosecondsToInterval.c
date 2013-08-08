// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <nspr4/prtypes.h>
#include <nspr4/prinrval.h>
#undef PR_MicrosecondsToInterval
static PRIntervalTime(*funcptr) (PRUint32 ) = 0;

extern int __lsb_check_params;
PRIntervalTime PR_MicrosecondsToInterval (PRUint32 arg0 )
{
	int reset_flag = __lsb_check_params;
	PRIntervalTime ret_value  ;
	__lsb_output(4, "Invoking wrapper for PR_MicrosecondsToInterval()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "PR_MicrosecondsToInterval");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load PR_MicrosecondsToInterval. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "PR_MicrosecondsToInterval() - validating");
		validate_NULL_TYPETYPE(  arg0, "PR_MicrosecondsToInterval - arg0 (micro)");
	}
	ret_value = funcptr(arg0);
	__lsb_check_params = reset_flag;
	return ret_value;
}

