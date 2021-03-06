// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <sys/types.h>
#include <sys/time.h>
#include <time.h>
#undef clock_settime
static int(*funcptr) (clockid_t , const struct timespec * ) = 0;

extern int __lsb_check_params;
int clock_settime (clockid_t arg0 , const struct timespec * arg1 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	__lsb_output(4, "Invoking wrapper for clock_settime()");
	if(!funcptr)
		#if defined __powerpc__ && !defined __powerpc64__
			funcptr = dlvsym(RTLD_NEXT, "clock_settime", "GLIBC_2.2");
		#endif
		#if defined __ia64__
			funcptr = dlvsym(RTLD_NEXT, "clock_settime", "GLIBC_2.2");
		#endif
		#if defined __s390x__
			funcptr = dlvsym(RTLD_NEXT, "clock_settime", "GLIBC_2.2");
		#endif
		#if defined __s390__ && !defined __s390x__
			funcptr = dlvsym(RTLD_NEXT, "clock_settime", "GLIBC_2.2");
		#endif
		#if defined __i386__
			funcptr = dlvsym(RTLD_NEXT, "clock_settime", "GLIBC_2.2");
		#endif
		#if defined __x86_64__
			funcptr = dlvsym(RTLD_NEXT, "clock_settime", "GLIBC_2.2.5");
		#endif
		#if defined __powerpc64__
			funcptr = dlvsym(RTLD_NEXT, "clock_settime", "GLIBC_2.3");
		#endif
	if(!funcptr) {
		__lsb_output(-1, "Failed to load clock_settime. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "clock_settime() - validating");
		validate_NULL_TYPETYPE(  arg0, "clock_settime - arg0 (__clock_id)");
		if( arg1 ) {
		validate_Rdaddress( arg1, "clock_settime - arg1 (__tp)");
		}
		validate_NULL_TYPETYPE(  arg1, "clock_settime - arg1 (__tp)");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}

