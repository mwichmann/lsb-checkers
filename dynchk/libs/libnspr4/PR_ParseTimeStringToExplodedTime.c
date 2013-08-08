// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <nspr4/prtypes.h>
#include <nspr4/prtime.h>
#undef PR_ParseTimeStringToExplodedTime
static PRStatus(*funcptr) (const char * , PRBool , PRExplodedTime * ) = 0;

extern int __lsb_check_params;
PRStatus PR_ParseTimeStringToExplodedTime (const char * arg0 , PRBool arg1 , PRExplodedTime * arg2 )
{
	int reset_flag = __lsb_check_params;
	PRStatus ret_value  ;
	__lsb_output(4, "Invoking wrapper for PR_ParseTimeStringToExplodedTime()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "PR_ParseTimeStringToExplodedTime");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load PR_ParseTimeStringToExplodedTime. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "PR_ParseTimeStringToExplodedTime() - validating");
		if( arg0 ) {
		validate_Rdaddress( arg0, "PR_ParseTimeStringToExplodedTime - arg0 (string)");
		}
		validate_NULL_TYPETYPE(  arg0, "PR_ParseTimeStringToExplodedTime - arg0 (string)");
		validate_NULL_TYPETYPE(  arg1, "PR_ParseTimeStringToExplodedTime - arg1 (default_to_gmt)");
		if( arg2 ) {
		validate_RWaddress( arg2, "PR_ParseTimeStringToExplodedTime - arg2 (result)");
		}
		validate_NULL_TYPETYPE(  arg2, "PR_ParseTimeStringToExplodedTime - arg2 (result)");
	}
	ret_value = funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
	return ret_value;
}

