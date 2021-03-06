// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <security/_pam_types.h>
#undef pam_getenvlist
static char * *(*funcptr) (pam_handle_t * ) = 0;

extern int __lsb_check_params;
char * * pam_getenvlist (pam_handle_t * arg0 )
{
	int reset_flag = __lsb_check_params;
	char * * ret_value  ;
	__lsb_output(4, "Invoking wrapper for pam_getenvlist()");
	if(!funcptr)
		#if 1
			funcptr = dlvsym(RTLD_NEXT, "pam_getenvlist", "LIBPAM_1.0");
		#endif
	if(!funcptr) {
		__lsb_output(-1, "Failed to load pam_getenvlist. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "pam_getenvlist() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "pam_getenvlist - arg0");
		}
		validate_NULL_TYPETYPE(  arg0, "pam_getenvlist - arg0");
	}
	ret_value = funcptr(arg0);
	__lsb_check_params = reset_flag;
	return ret_value;
}

