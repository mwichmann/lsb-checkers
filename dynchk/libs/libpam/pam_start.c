// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <security/_pam_types.h>
#include <security/pam_appl.h>
#undef pam_start
static int(*funcptr) (const char * , const char * , const struct pam_conv * , pam_handle_t * * ) = 0;

extern int __lsb_check_params;
int pam_start (const char * arg0 , const char * arg1 , const struct pam_conv * arg2 , pam_handle_t * * arg3 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	__lsb_output(4, "Invoking wrapper for pam_start()");
	if(!funcptr)
		#if 1
			funcptr = dlvsym(RTLD_NEXT, "pam_start", "LIBPAM_1.0");
		#endif
	if(!funcptr) {
		__lsb_output(-1, "Failed to load pam_start. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "pam_start() - validating");
		if( arg0 ) {
		validate_Rdaddress( arg0, "pam_start - arg0");
		}
		validate_NULL_TYPETYPE(  arg0, "pam_start - arg0");
		if( arg1 ) {
		validate_Rdaddress( arg1, "pam_start - arg1");
		}
		validate_NULL_TYPETYPE(  arg1, "pam_start - arg1");
		if( arg2 ) {
		validate_Rdaddress( arg2, "pam_start - arg2");
		}
		validate_NULL_TYPETYPE(  arg2, "pam_start - arg2");
		if( arg3 ) {
		validate_RWaddress( arg3, "pam_start - arg3");
		}
		validate_NULL_TYPETYPE(  arg3, "pam_start - arg3");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3);
	__lsb_check_params = reset_flag;
	return ret_value;
}

