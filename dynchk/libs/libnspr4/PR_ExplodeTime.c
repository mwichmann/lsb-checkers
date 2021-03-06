// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <nspr4/prtime.h>
#undef PR_ExplodeTime
static void(*funcptr) (PRTime , PRTimeParamFn , PRExplodedTime * ) = 0;

extern int __lsb_check_params;
void PR_ExplodeTime (PRTime arg0 , PRTimeParamFn arg1 , PRExplodedTime * arg2 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for PR_ExplodeTime()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "PR_ExplodeTime");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load PR_ExplodeTime. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "PR_ExplodeTime() - validating");
		validate_NULL_TYPETYPE(  arg0, "PR_ExplodeTime - arg0 (usecs)");
		validate_NULL_TYPETYPE(  arg1, "PR_ExplodeTime - arg1 (params)");
		if( arg2 ) {
		validate_RWaddress( arg2, "PR_ExplodeTime - arg2 (expoded)");
		}
		validate_NULL_TYPETYPE(  arg2, "PR_ExplodeTime - arg2 (expoded)");
	}
	funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
}

