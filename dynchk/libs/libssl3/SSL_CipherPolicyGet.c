// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <nspr4/prtypes.h>
#include <nss3/ssl.h>
#undef SSL_CipherPolicyGet
static SECStatus(*funcptr) (PRInt32 , PRInt32 * ) = 0;

extern int __lsb_check_params;
SECStatus SSL_CipherPolicyGet (PRInt32 arg0 , PRInt32 * arg1 )
{
	int reset_flag = __lsb_check_params;
	SECStatus ret_value  ;
	__lsb_output(4, "Invoking wrapper for SSL_CipherPolicyGet()");
	if(!funcptr)
		#if 1
			funcptr = dlvsym(RTLD_NEXT, "SSL_CipherPolicyGet", "NSS_3.2");
		#endif
	if(!funcptr) {
		__lsb_output(-1, "Failed to load SSL_CipherPolicyGet. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "SSL_CipherPolicyGet() - validating");
		validate_NULL_TYPETYPE(  arg0, "SSL_CipherPolicyGet - arg0 (cipher)");
		if( arg1 ) {
		validate_RWaddress( arg1, "SSL_CipherPolicyGet - arg1 (policy)");
		}
		validate_NULL_TYPETYPE(  arg1, "SSL_CipherPolicyGet - arg1 (policy)");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}

