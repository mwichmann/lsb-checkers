// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <nspr4/prio.h>
#include <nss3/certt.h>
#include <nss3/keythi.h>
#include <nss3/ssl.h>
#undef NSS_GetClientAuthData
static SECStatus(*funcptr) (void * , PRFileDesc * , struct CERTDistNamesStr * , struct CERTCertificateStr * * , struct SECKEYPrivateKeyStr * * ) = 0;

extern int __lsb_check_params;
SECStatus NSS_GetClientAuthData (void * arg0 , PRFileDesc * arg1 , struct CERTDistNamesStr * arg2 , struct CERTCertificateStr * * arg3 , struct SECKEYPrivateKeyStr * * arg4 )
{
	int reset_flag = __lsb_check_params;
	SECStatus ret_value  ;
	__lsb_output(4, "Invoking wrapper for NSS_GetClientAuthData()");
	if(!funcptr)
		#if 1
			funcptr = dlvsym(RTLD_NEXT, "NSS_GetClientAuthData", "NSS_3.2");
		#endif
	if(!funcptr) {
		__lsb_output(-1, "Failed to load NSS_GetClientAuthData. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "NSS_GetClientAuthData() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "NSS_GetClientAuthData - arg0 (arg)");
		}
		validate_NULL_TYPETYPE(  arg0, "NSS_GetClientAuthData - arg0 (arg)");
		if( arg1 ) {
		validate_RWaddress( arg1, "NSS_GetClientAuthData - arg1 (socket)");
		}
		validate_NULL_TYPETYPE(  arg1, "NSS_GetClientAuthData - arg1 (socket)");
		if( arg2 ) {
		validate_RWaddress( arg2, "NSS_GetClientAuthData - arg2 (caNames)");
		}
		validate_NULL_TYPETYPE(  arg2, "NSS_GetClientAuthData - arg2 (caNames)");
		if( arg3 ) {
		validate_RWaddress( arg3, "NSS_GetClientAuthData - arg3 (pRetCert)");
		}
		validate_NULL_TYPETYPE(  arg3, "NSS_GetClientAuthData - arg3 (pRetCert)");
		if( arg4 ) {
		validate_RWaddress( arg4, "NSS_GetClientAuthData - arg4 (pRetKey)");
		}
		validate_NULL_TYPETYPE(  arg4, "NSS_GetClientAuthData - arg4 (pRetKey)");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3, arg4);
	__lsb_check_params = reset_flag;
	return ret_value;
}

