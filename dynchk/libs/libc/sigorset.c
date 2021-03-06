// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <signal.h>
#undef sigorset
static int(*funcptr) (sigset_t * , const sigset_t * , const sigset_t * ) = 0;

extern int __lsb_check_params;
int sigorset (sigset_t * arg0 , const sigset_t * arg1 , const sigset_t * arg2 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	__lsb_output(4, "Invoking wrapper for sigorset()");
	if(!funcptr)
		#if defined __i386__
			funcptr = dlvsym(RTLD_NEXT, "sigorset", "GLIBC_2.0");
		#endif
		#if defined __powerpc__ && !defined __powerpc64__
			funcptr = dlvsym(RTLD_NEXT, "sigorset", "GLIBC_2.0");
		#endif
		#if defined __s390__ && !defined __s390x__
			funcptr = dlvsym(RTLD_NEXT, "sigorset", "GLIBC_2.0");
		#endif
		#if defined __ia64__
			funcptr = dlvsym(RTLD_NEXT, "sigorset", "GLIBC_2.2");
		#endif
		#if defined __s390x__
			funcptr = dlvsym(RTLD_NEXT, "sigorset", "GLIBC_2.2");
		#endif
		#if defined __x86_64__
			funcptr = dlvsym(RTLD_NEXT, "sigorset", "GLIBC_2.2.5");
		#endif
		#if defined __powerpc64__
			funcptr = dlvsym(RTLD_NEXT, "sigorset", "GLIBC_2.3");
		#endif
	if(!funcptr) {
		__lsb_output(-1, "Failed to load sigorset. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "sigorset() - validating");
		validate_RWaddress( arg0, "sigorset - arg0 (__set)");
		validate_NULL_TYPETYPE(  arg0, "sigorset - arg0 (__set)");
		validate_Rdaddress( arg1, "sigorset - arg1 (__left)");
		validate_NULL_TYPETYPE(  arg1, "sigorset - arg1 (__left)");
		validate_Rdaddress( arg2, "sigorset - arg2 (__right)");
		validate_NULL_TYPETYPE(  arg2, "sigorset - arg2 (__right)");
	}
	ret_value = funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
	return ret_value;
}

