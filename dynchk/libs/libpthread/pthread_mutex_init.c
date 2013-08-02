// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <pthread.h>
#undef pthread_mutex_init
static int(*funcptr) (pthread_mutex_t * , const pthread_mutexattr_t * ) = 0;

extern int __lsb_check_params;
int pthread_mutex_init (pthread_mutex_t * arg0 , const pthread_mutexattr_t * arg1 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	__lsb_output(4, "Invoking wrapper for pthread_mutex_init()");
	if(!funcptr)
		#if defined __i386__
			funcptr = dlvsym(RTLD_NEXT, "pthread_mutex_init", "GLIBC_2.0");
		#endif
		#if defined __powerpc__ && !defined __powerpc64__
			funcptr = dlvsym(RTLD_NEXT, "pthread_mutex_init", "GLIBC_2.0");
		#endif
		#if defined __s390__ && !defined __s390x__
			funcptr = dlvsym(RTLD_NEXT, "pthread_mutex_init", "GLIBC_2.0");
		#endif
		#if defined __ia64__
			funcptr = dlvsym(RTLD_NEXT, "pthread_mutex_init", "GLIBC_2.2");
		#endif
		#if defined __s390x__
			funcptr = dlvsym(RTLD_NEXT, "pthread_mutex_init", "GLIBC_2.2");
		#endif
		#if defined __x86_64__
			funcptr = dlvsym(RTLD_NEXT, "pthread_mutex_init", "GLIBC_2.2.5");
		#endif
		#if defined __powerpc64__
			funcptr = dlvsym(RTLD_NEXT, "pthread_mutex_init", "GLIBC_2.3");
		#endif
	if(!funcptr) {
		__lsb_output(-1, "Failed to load pthread_mutex_init. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "pthread_mutex_init() - validating");
		validate_RWaddress( arg0, "pthread_mutex_init - arg0 (__mutex)");
		validate_NULL_TYPETYPE(  arg0, "pthread_mutex_init - arg0 (__mutex)");
		if( arg1 ) {
		validate_Rdaddress( arg1, "pthread_mutex_init - arg1 (__mutexattr)");
		}
		validate_NULL_TYPETYPE(  arg1, "pthread_mutex_init - arg1 (__mutexattr)");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}

