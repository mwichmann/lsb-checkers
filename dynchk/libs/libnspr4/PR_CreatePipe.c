// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <nspr4/prio.h>
#undef PR_CreatePipe
static PRStatus(*funcptr) (PRFileDesc * * , PRFileDesc * * ) = 0;

extern int __lsb_check_params;
PRStatus PR_CreatePipe (PRFileDesc * * arg0 , PRFileDesc * * arg1 )
{
	int reset_flag = __lsb_check_params;
	PRStatus ret_value  ;
	__lsb_output(4, "Invoking wrapper for PR_CreatePipe()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "PR_CreatePipe");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load PR_CreatePipe. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "PR_CreatePipe() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "PR_CreatePipe - arg0 (readPipe)");
		}
		validate_NULL_TYPETYPE(  arg0, "PR_CreatePipe - arg0 (readPipe)");
		if( arg1 ) {
		validate_RWaddress( arg1, "PR_CreatePipe - arg1 (writePipe)");
		}
		validate_NULL_TYPETYPE(  arg1, "PR_CreatePipe - arg1 (writePipe)");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}

