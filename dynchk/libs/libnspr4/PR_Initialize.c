// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <nspr4/prinit.h>
#include <nspr4/prtypes.h>
#undef PR_Initialize
static PRIntn(*funcptr) (PRPrimordialFn , PRIntn , char * * , PRUintn ) = 0;

extern int __lsb_check_params;
PRIntn PR_Initialize (PRPrimordialFn arg0 , PRIntn arg1 , char * * arg2 , PRUintn arg3 )
{
	int reset_flag = __lsb_check_params;
	PRIntn ret_value  ;
	__lsb_output(4, "Invoking wrapper for PR_Initialize()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "PR_Initialize");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load PR_Initialize. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "PR_Initialize() - validating");
		validate_NULL_TYPETYPE(  arg0, "PR_Initialize - arg0 (prmain)");
		validate_NULL_TYPETYPE(  arg1, "PR_Initialize - arg1 (argc)");
		if( arg2 ) {
		validate_RWaddress( arg2, "PR_Initialize - arg2 (argv)");
		}
		validate_NULL_TYPETYPE(  arg2, "PR_Initialize - arg2 (argv)");
		validate_NULL_TYPETYPE(  arg3, "PR_Initialize - arg3 (maxPTDs)");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3);
	__lsb_check_params = reset_flag;
	return ret_value;
}

