// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <security/_pam_types.h>
#undef pam_getenv
static const char *(*funcptr) (pam_handle_t * , const char * ) = 0;

extern int __lsb_check_params;
const char * pam_getenv (pam_handle_t * arg0 , const char * arg1 )
{
	int reset_flag = __lsb_check_params;
	const char * ret_value  ;
	__lsb_output(4, "Invoking wrapper for pam_getenv()");
	if(!funcptr)
		#if 1
			funcptr = dlvsym(RTLD_NEXT, "pam_getenv", "LIBPAM_1.0");
		#endif
	if(!funcptr) {
		__lsb_output(-1, "Failed to load pam_getenv. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "pam_getenv() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "pam_getenv - arg0");
		}
		validate_NULL_TYPETYPE(  arg0, "pam_getenv - arg0");
		if( arg1 ) {
		validate_Rdaddress( arg1, "pam_getenv - arg1");
		}
		validate_NULL_TYPETYPE(  arg1, "pam_getenv - arg1");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}

