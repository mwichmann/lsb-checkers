// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <nspr4/prtypes.h>
#include <nspr4/prthread.h>
#undef PR_GetThreadPrivate
static void *(*funcptr) (PRUintn ) = 0;

extern int __lsb_check_params;
void * PR_GetThreadPrivate (PRUintn arg0 )
{
	int reset_flag = __lsb_check_params;
	void * ret_value  ;
	__lsb_output(4, "Invoking wrapper for PR_GetThreadPrivate()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "PR_GetThreadPrivate");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load PR_GetThreadPrivate. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "PR_GetThreadPrivate() - validating");
		validate_NULL_TYPETYPE(  arg0, "PR_GetThreadPrivate - arg0 (tpdIndex)");
	}
	ret_value = funcptr(arg0);
	__lsb_check_params = reset_flag;
	return ret_value;
}

