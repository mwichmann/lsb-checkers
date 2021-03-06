// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <termios.h>
#undef cfgetospeed
static speed_t(*funcptr) (const struct termios * ) = 0;

extern int __lsb_check_params;
speed_t cfgetospeed (const struct termios * arg0 )
{
	int reset_flag = __lsb_check_params;
	speed_t ret_value  ;
	__lsb_output(4, "Invoking wrapper for cfgetospeed()");
	if(!funcptr)
		#if defined __i386__
			funcptr = dlvsym(RTLD_NEXT, "cfgetospeed", "GLIBC_2.0");
		#endif
		#if defined __powerpc__ && !defined __powerpc64__
			funcptr = dlvsym(RTLD_NEXT, "cfgetospeed", "GLIBC_2.0");
		#endif
		#if defined __s390__ && !defined __s390x__
			funcptr = dlvsym(RTLD_NEXT, "cfgetospeed", "GLIBC_2.0");
		#endif
		#if defined __ia64__
			funcptr = dlvsym(RTLD_NEXT, "cfgetospeed", "GLIBC_2.2");
		#endif
		#if defined __s390x__
			funcptr = dlvsym(RTLD_NEXT, "cfgetospeed", "GLIBC_2.2");
		#endif
		#if defined __x86_64__
			funcptr = dlvsym(RTLD_NEXT, "cfgetospeed", "GLIBC_2.2.5");
		#endif
		#if defined __powerpc64__
			funcptr = dlvsym(RTLD_NEXT, "cfgetospeed", "GLIBC_2.3");
		#endif
	if(!funcptr) {
		__lsb_output(-1, "Failed to load cfgetospeed. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "cfgetospeed() - validating");
		validate_Rdaddress( arg0, "cfgetospeed - arg0 (__termios_p)");
		validate_NULL_TYPETYPE(  arg0, "cfgetospeed - arg0 (__termios_p)");
	}
	ret_value = funcptr(arg0);
	__lsb_check_params = reset_flag;
	return ret_value;
}

