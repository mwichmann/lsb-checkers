// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <pthread.h>
#include <sys/types.h>
#undef pthread_condattr_getclock
static int(*funcptr) (const pthread_condattr_t * , clockid_t * ) = 0;

extern int __lsb_check_params;
int pthread_condattr_getclock (const pthread_condattr_t * arg0 , clockid_t * arg1 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	__lsb_output(4, "Invoking wrapper for pthread_condattr_getclock()");
	if(!funcptr)
		#if 1
			funcptr = dlvsym(RTLD_NEXT, "pthread_condattr_getclock", "GLIBC_2.3.3");
		#endif
	if(!funcptr) {
		__lsb_output(-1, "Failed to load pthread_condattr_getclock. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "pthread_condattr_getclock() - validating");
		validate_Rdaddress( arg0, "pthread_condattr_getclock - arg0 (attr)");
		validate_NULL_TYPETYPE(  arg0, "pthread_condattr_getclock - arg0 (attr)");
		validate_RWaddress( arg1, "pthread_condattr_getclock - arg1 (clock_id)");
		validate_NULL_TYPETYPE(  arg1, "pthread_condattr_getclock - arg1 (clock_id)");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}

