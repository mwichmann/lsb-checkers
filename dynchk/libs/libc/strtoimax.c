// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <inttypes.h>
#undef strtoimax
static intmax_t(*funcptr) (const char * , char * * , int ) = 0;

extern int __lsb_check_params;
intmax_t strtoimax (const char * arg0 , char * * arg1 , int arg2 )
{
	int reset_flag = __lsb_check_params;
	intmax_t ret_value  ;
	__lsb_output(4, "Invoking wrapper for strtoimax()");
	if(!funcptr)
		#if defined __i386__
			funcptr = dlvsym(RTLD_NEXT, "strtoimax", "GLIBC_2.1");
		#endif
		#if defined __ia64__
			funcptr = dlvsym(RTLD_NEXT, "strtoimax", "GLIBC_2.2");
		#endif
		#if defined __powerpc__ && !defined __powerpc64__
			funcptr = dlvsym(RTLD_NEXT, "strtoimax", "GLIBC_2.1");
		#endif
		#if defined __powerpc64__
			funcptr = dlvsym(RTLD_NEXT, "strtoimax", "GLIBC_2.3");
		#endif
		#if defined __s390__ && !defined __s390x__
			funcptr = dlvsym(RTLD_NEXT, "strtoimax", "GLIBC_2.1");
		#endif
		#if defined __x86_64__
			funcptr = dlvsym(RTLD_NEXT, "strtoimax", "GLIBC_2.2.5");
		#endif
		#if defined __s390x__
			funcptr = dlvsym(RTLD_NEXT, "strtoimax", "GLIBC_2.2");
		#endif
	if(!funcptr) {
		__lsb_output(-1, "Failed to load strtoimax. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "strtoimax() - validating");
		validate_Rdaddress( arg0, "strtoimax - arg0 (__nptr)");
		validate_NULL_TYPETYPE(  arg0, "strtoimax - arg0 (__nptr)");
		validate_RWaddress( arg1, "strtoimax - arg1 (__endptr)");
		validate_NULL_TYPETYPE(  arg1, "strtoimax - arg1 (__endptr)");
		validate_NULL_TYPETYPE(  arg2, "strtoimax - arg2 (__base)");
	}
	ret_value = funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
	return ret_value;
}

