// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <nspr4/prio.h>
#include <nspr4/prtypes.h>
#include <nspr4/prnetdb.h>
#undef PR_NetAddrToString
static PRStatus(*funcptr) (const PRNetAddr * , char * , PRUint32 ) = 0;

extern int __lsb_check_params;
PRStatus PR_NetAddrToString (const PRNetAddr * arg0 , char * arg1 , PRUint32 arg2 )
{
	int reset_flag = __lsb_check_params;
	PRStatus ret_value  ;
	__lsb_output(4, "Invoking wrapper for PR_NetAddrToString()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "PR_NetAddrToString");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load PR_NetAddrToString. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "PR_NetAddrToString() - validating");
		if( arg0 ) {
		validate_Rdaddress( arg0, "PR_NetAddrToString - arg0 (addr)");
		}
		validate_NULL_TYPETYPE(  arg0, "PR_NetAddrToString - arg0 (addr)");
		if( arg1 ) {
		validate_RWaddress( arg1, "PR_NetAddrToString - arg1 (string)");
		}
		validate_NULL_TYPETYPE(  arg1, "PR_NetAddrToString - arg1 (string)");
		validate_NULL_TYPETYPE(  arg2, "PR_NetAddrToString - arg2 (size)");
	}
	ret_value = funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
	return ret_value;
}

