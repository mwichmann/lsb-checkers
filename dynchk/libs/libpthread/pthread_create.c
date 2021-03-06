// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <lsb/pthread.h>
#include <pthread.h>
#undef pthread_create
static int(*funcptr) (pthread_t * , const pthread_attr_t * , void *(* )(void *), void * ) = 0;

extern int __lsb_check_params;
int pthread_create (pthread_t * arg0 , const pthread_attr_t * arg1 , void *(* arg2 )(void *), void * arg3 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	__lsb_output(4, "Invoking wrapper for pthread_create()");
	if(!funcptr)
		#if defined __i386__
			funcptr = dlvsym(RTLD_NEXT, "pthread_create", "GLIBC_2.1");
		#endif
		#if defined __powerpc__ && !defined __powerpc64__
			funcptr = dlvsym(RTLD_NEXT, "pthread_create", "GLIBC_2.1");
		#endif
		#if defined __s390__ && !defined __s390x__
			funcptr = dlvsym(RTLD_NEXT, "pthread_create", "GLIBC_2.1");
		#endif
		#if defined __ia64__
			funcptr = dlvsym(RTLD_NEXT, "pthread_create", "GLIBC_2.2");
		#endif
		#if defined __s390x__
			funcptr = dlvsym(RTLD_NEXT, "pthread_create", "GLIBC_2.2");
		#endif
		#if defined __x86_64__
			funcptr = dlvsym(RTLD_NEXT, "pthread_create", "GLIBC_2.2.5");
		#endif
		#if defined __powerpc64__
			funcptr = dlvsym(RTLD_NEXT, "pthread_create", "GLIBC_2.3");
		#endif
	if(!funcptr) {
		__lsb_output(-1, "Failed to load pthread_create. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "pthread_create() - validating");
		validate_RWaddress( arg0, "pthread_create - arg0 (__newthread)");
		validate_NULL_TYPETYPE(  arg0, "pthread_create - arg0 (__newthread)");
		if( arg1 ) {
		validate_Rdaddress( arg1, "pthread_create - arg1 (__attr)");
		}
		validate_NULL_TYPETYPE(  arg1, "pthread_create - arg1 (__attr)");
		validate_Rdaddress( arg2, "pthread_create - arg2 (__start_routine)");
		validate_NULL_TYPETYPE(  arg2, "pthread_create - arg2 (__start_routine)");
		validate_RWaddress( arg3, "pthread_create - arg3 (__arg)");
		validate_NULL_TYPETYPE(  arg3, "pthread_create - arg3 (__arg)");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3);
	__lsb_check_params = reset_flag;
	return ret_value;
}

