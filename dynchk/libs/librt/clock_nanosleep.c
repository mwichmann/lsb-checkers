// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <sys/types.h>
#include <sys/time.h>
#include <time.h>
#undef clock_nanosleep
static int(*funcptr) (clockid_t , int , const struct timespec * , struct timespec * ) = 0;

extern int __lsb_check_params;
int clock_nanosleep (clockid_t arg0 , int arg1 , const struct timespec * arg2 , struct timespec * arg3 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	__lsb_output(4, "Invoking wrapper for clock_nanosleep()");
	if(!funcptr)
		#if defined __i386__
			funcptr = dlvsym(RTLD_NEXT, "clock_nanosleep", "GLIBC_2.2");
		#endif
		#if defined __ia64__
			funcptr = dlvsym(RTLD_NEXT, "clock_nanosleep", "GLIBC_2.2");
		#endif
		#if defined __powerpc__ && !defined __powerpc64__
			funcptr = dlvsym(RTLD_NEXT, "clock_nanosleep", "GLIBC_2.2");
		#endif
		#if defined __powerpc64__
			funcptr = dlvsym(RTLD_NEXT, "clock_nanosleep", "GLIBC_2.3");
		#endif
		#if defined __s390__ && !defined __s390x__
			funcptr = dlvsym(RTLD_NEXT, "clock_nanosleep", "GLIBC_2.2");
		#endif
		#if defined __x86_64__
			funcptr = dlvsym(RTLD_NEXT, "clock_nanosleep", "GLIBC_2.2.5");
		#endif
		#if defined __s390x__
			funcptr = dlvsym(RTLD_NEXT, "clock_nanosleep", "GLIBC_2.2");
		#endif
	if(!funcptr) {
		__lsb_output(-1, "Failed to load clock_nanosleep. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "clock_nanosleep() - validating");
		validate_NULL_TYPETYPE(  arg0, "clock_nanosleep - arg0 (__clock_id)");
		validate_NULL_TYPETYPE(  arg1, "clock_nanosleep - arg1 (__flags)");
		if( arg2 ) {
		validate_Rdaddress( arg2, "clock_nanosleep - arg2 (__req)");
		}
		validate_NULL_TYPETYPE(  arg2, "clock_nanosleep - arg2 (__req)");
		if( arg3 ) {
		validate_RWaddress( arg3, "clock_nanosleep - arg3 (__rem)");
		}
		validate_NULL_TYPETYPE(  arg3, "clock_nanosleep - arg3 (__rem)");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3);
	__lsb_check_params = reset_flag;
	return ret_value;
}

