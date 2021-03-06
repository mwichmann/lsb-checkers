// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <nspr4/prio.h>
#include <nss3/ssl.h>
#undef SSL_RevealPinArg
static void *(*funcptr) (PRFileDesc * ) = 0;

extern int __lsb_check_params;
void * SSL_RevealPinArg (PRFileDesc * arg0 )
{
	int reset_flag = __lsb_check_params;
	void * ret_value  ;
	__lsb_output(4, "Invoking wrapper for SSL_RevealPinArg()");
	if(!funcptr)
		#if 1
			funcptr = dlvsym(RTLD_NEXT, "SSL_RevealPinArg", "NSS_3.2");
		#endif
	if(!funcptr) {
		__lsb_output(-1, "Failed to load SSL_RevealPinArg. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "SSL_RevealPinArg() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "SSL_RevealPinArg - arg0 (socket)");
		}
		validate_NULL_TYPETYPE(  arg0, "SSL_RevealPinArg - arg0 (socket)");
	}
	ret_value = funcptr(arg0);
	__lsb_check_params = reset_flag;
	return ret_value;
}

