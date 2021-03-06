// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <nspr4/prtypes.h>
#include <nspr4/prio.h>
#include <nspr4/prnetdb.h>
#undef PR_ConvertIPv4AddrToIPv6
static void(*funcptr) (PRUint32 , PRIPv6Addr * ) = 0;

extern int __lsb_check_params;
void PR_ConvertIPv4AddrToIPv6 (PRUint32 arg0 , PRIPv6Addr * arg1 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for PR_ConvertIPv4AddrToIPv6()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "PR_ConvertIPv4AddrToIPv6");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load PR_ConvertIPv4AddrToIPv6. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "PR_ConvertIPv4AddrToIPv6() - validating");
		validate_NULL_TYPETYPE(  arg0, "PR_ConvertIPv4AddrToIPv6 - arg0 (v4addr)");
		if( arg1 ) {
		validate_RWaddress( arg1, "PR_ConvertIPv4AddrToIPv6 - arg1 (v6addr)");
		}
		validate_NULL_TYPETYPE(  arg1, "PR_ConvertIPv4AddrToIPv6 - arg1 (v6addr)");
	}
	funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
}

