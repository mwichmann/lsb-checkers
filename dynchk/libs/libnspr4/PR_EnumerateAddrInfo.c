// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <nspr4/prnetdb.h>
#include <nspr4/prtypes.h>
#include <nspr4/prio.h>
#undef PR_EnumerateAddrInfo
static void *(*funcptr) (void * , const PRAddrInfo * , PRUint16 , PRNetAddr * ) = 0;

extern int __lsb_check_params;
void * PR_EnumerateAddrInfo (void * arg0 , const PRAddrInfo * arg1 , PRUint16 arg2 , PRNetAddr * arg3 )
{
	int reset_flag = __lsb_check_params;
	void * ret_value  ;
	__lsb_output(4, "Invoking wrapper for PR_EnumerateAddrInfo()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "PR_EnumerateAddrInfo");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load PR_EnumerateAddrInfo. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "PR_EnumerateAddrInfo() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "PR_EnumerateAddrInfo - arg0 (enumPtr)");
		}
		validate_NULL_TYPETYPE(  arg0, "PR_EnumerateAddrInfo - arg0 (enumPtr)");
		if( arg1 ) {
		validate_Rdaddress( arg1, "PR_EnumerateAddrInfo - arg1 (addrInfo)");
		}
		validate_NULL_TYPETYPE(  arg1, "PR_EnumerateAddrInfo - arg1 (addrInfo)");
		validate_NULL_TYPETYPE(  arg2, "PR_EnumerateAddrInfo - arg2 (port)");
		if( arg3 ) {
		validate_RWaddress( arg3, "PR_EnumerateAddrInfo - arg3 (result)");
		}
		validate_NULL_TYPETYPE(  arg3, "PR_EnumerateAddrInfo - arg3 (result)");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3);
	__lsb_check_params = reset_flag;
	return ret_value;
}
