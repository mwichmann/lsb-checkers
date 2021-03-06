// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <pthread.h>
#undef pthread_mutex_consistent
static int(*funcptr) (pthread_mutex_t * ) = 0;

extern int __lsb_check_params;
int pthread_mutex_consistent (pthread_mutex_t * arg0 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	__lsb_output(4, "Invoking wrapper for pthread_mutex_consistent()");
	if(!funcptr)
		#if 1
			funcptr = dlvsym(RTLD_NEXT, "pthread_mutex_consistent", "GLIBC_2.12");
		#endif
	if(!funcptr) {
		__lsb_output(-1, "Failed to load pthread_mutex_consistent. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "pthread_mutex_consistent() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "pthread_mutex_consistent - arg0 (mutex)");
		}
		validate_NULL_TYPETYPE(  arg0, "pthread_mutex_consistent - arg0 (mutex)");
	}
	ret_value = funcptr(arg0);
	__lsb_check_params = reset_flag;
	return ret_value;
}

