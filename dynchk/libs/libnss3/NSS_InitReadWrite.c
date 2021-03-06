// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <nss3/nss.h>
#undef NSS_InitReadWrite
static SECStatus(*funcptr) (const char * ) = 0;

extern int __lsb_check_params;
SECStatus NSS_InitReadWrite (const char * arg0 )
{
	int reset_flag = __lsb_check_params;
	SECStatus ret_value  ;
	__lsb_output(4, "Invoking wrapper for NSS_InitReadWrite()");
	if(!funcptr)
		#if 1
			funcptr = dlvsym(RTLD_NEXT, "NSS_InitReadWrite", "NSS_3.2");
		#endif
	if(!funcptr) {
		__lsb_output(-1, "Failed to load NSS_InitReadWrite. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "NSS_InitReadWrite() - validating");
		if( arg0 ) {
		validate_Rdaddress( arg0, "NSS_InitReadWrite - arg0 (configdir)");
		}
		validate_NULL_TYPETYPE(  arg0, "NSS_InitReadWrite - arg0 (configdir)");
	}
	ret_value = funcptr(arg0);
	__lsb_check_params = reset_flag;
	return ret_value;
}

