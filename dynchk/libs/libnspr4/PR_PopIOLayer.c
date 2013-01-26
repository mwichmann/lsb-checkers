// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <nspr4/prio.h>
#undef PR_PopIOLayer
static PRFileDesc *(*funcptr) (PRFileDesc * , PRDescIdentity ) = 0;

extern int __lsb_check_params;
PRFileDesc * PR_PopIOLayer (PRFileDesc * arg0 , PRDescIdentity arg1 )
{
	int reset_flag = __lsb_check_params;
	PRFileDesc * ret_value  ;
	__lsb_output(4, "Invoking wrapper for PR_PopIOLayer()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "PR_PopIOLayer");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load PR_PopIOLayer. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "PR_PopIOLayer() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "PR_PopIOLayer - arg0 (fd_stack)");
		}
		validate_NULL_TYPETYPE(  arg0, "PR_PopIOLayer - arg0 (fd_stack)");
		validate_NULL_TYPETYPE(  arg1, "PR_PopIOLayer - arg1 (id)");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}
