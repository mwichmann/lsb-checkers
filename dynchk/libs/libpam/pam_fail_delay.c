// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include <dlfcn.h>
#include <security/pam_appl.h>
#undef pam_fail_delay
static int(*funcptr) (pam_handle_t * , unsigned int ) = 0;

extern int __lsb_check_params;
int pam_fail_delay (pam_handle_t * arg0 , unsigned int arg1 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "pam_fail_delay");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "pam_fail_delay()");
		validate_RWaddress( arg0, "pam_fail_delay - arg0");
		validate_NULL_TYPETYPE(  arg0, "pam_fail_delay - arg0");
		validate_NULL_TYPETYPE(  arg1, "pam_fail_delay - arg1");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}

