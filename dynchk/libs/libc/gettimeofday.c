// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <lsb/time.h>
#include <sys/time.h>
#undef gettimeofday
static int(*funcptr) (struct timeval * , struct timezone * ) = 0;

extern int __lsb_check_params;
int gettimeofday (struct timeval * arg0 , struct timezone * arg1 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	__lsb_output(4, "Invoking wrapper for gettimeofday()");
	if(!funcptr)
		#if defined __i386__
			funcptr = dlvsym(RTLD_NEXT, "gettimeofday", "GLIBC_2.0");
		#endif
		#if defined __ia64__
			funcptr = dlvsym(RTLD_NEXT, "gettimeofday", "GLIBC_2.2");
		#endif
		#if defined __powerpc__ && !defined __powerpc64__
			funcptr = dlvsym(RTLD_NEXT, "gettimeofday", "GLIBC_2.0");
		#endif
		#if defined __powerpc64__
			funcptr = dlvsym(RTLD_NEXT, "gettimeofday", "GLIBC_2.3");
		#endif
		#if defined __s390__ && !defined __s390x__
			funcptr = dlvsym(RTLD_NEXT, "gettimeofday", "GLIBC_2.0");
		#endif
		#if defined __x86_64__
			funcptr = dlvsym(RTLD_NEXT, "gettimeofday", "GLIBC_2.2.5");
		#endif
		#if defined __s390x__
			funcptr = dlvsym(RTLD_NEXT, "gettimeofday", "GLIBC_2.2");
		#endif
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gettimeofday. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gettimeofday() - validating");
		validate_RWaddress( arg0, "gettimeofday - arg0 (__tv)");
		validate_NULL_TYPETYPE(  arg0, "gettimeofday - arg0 (__tv)");
		if( arg1 ) {
		validate_RWaddress( arg1, "gettimeofday - arg1 (__tz)");
		}
		validate_NULL_TYPETYPE(  arg1, "gettimeofday - arg1 (__tz)");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}

