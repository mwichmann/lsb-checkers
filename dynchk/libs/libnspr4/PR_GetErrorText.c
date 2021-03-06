// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <nspr4/prerror.h>
#undef PR_GetErrorText
static PRInt32(*funcptr) (char * ) = 0;

extern int __lsb_check_params;
PRInt32 PR_GetErrorText (char * arg0 )
{
	int reset_flag = __lsb_check_params;
	PRInt32 ret_value  ;
	__lsb_output(4, "Invoking wrapper for PR_GetErrorText()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "PR_GetErrorText");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load PR_GetErrorText. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "PR_GetErrorText() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "PR_GetErrorText - arg0 (text)");
		}
		validate_NULL_TYPETYPE(  arg0, "PR_GetErrorText - arg0 (text)");
	}
	ret_value = funcptr(arg0);
	__lsb_check_params = reset_flag;
	return ret_value;
}

