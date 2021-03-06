// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <termios.h>
#include <sys/ioctl.h>
#include <pty.h>
#undef openpty
static int(*funcptr) (int * , int * , char * , const struct termios * , const struct winsize * ) = 0;

extern int __lsb_check_params;
int openpty (int * arg0 , int * arg1 , char * arg2 , const struct termios * arg3 , const struct winsize * arg4 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	__lsb_output(4, "Invoking wrapper for openpty()");
	if(!funcptr)
		#if defined __i386__
			funcptr = dlvsym(RTLD_NEXT, "openpty", "GLIBC_2.0");
		#endif
		#if defined __ia64__
			funcptr = dlvsym(RTLD_NEXT, "openpty", "GLIBC_2.0");
		#endif
		#if defined __powerpc__ && !defined __powerpc64__
			funcptr = dlvsym(RTLD_NEXT, "openpty", "GLIBC_2.0");
		#endif
		#if defined __s390__ && !defined __s390x__
			funcptr = dlvsym(RTLD_NEXT, "openpty", "GLIBC_2.0");
		#endif
		#if defined __s390x__
			funcptr = dlvsym(RTLD_NEXT, "openpty", "GLIBC_2.2");
		#endif
		#if defined __x86_64__
			funcptr = dlvsym(RTLD_NEXT, "openpty", "GLIBC_2.2.5");
		#endif
		#if defined __powerpc64__
			funcptr = dlvsym(RTLD_NEXT, "openpty", "GLIBC_2.3");
		#endif
	if(!funcptr) {
		__lsb_output(-1, "Failed to load openpty. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "openpty() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "openpty - arg0 (__amaster)");
		}
		validate_NULL_TYPETYPE(  arg0, "openpty - arg0 (__amaster)");
		if( arg1 ) {
		validate_RWaddress( arg1, "openpty - arg1 (__aslave)");
		}
		validate_NULL_TYPETYPE(  arg1, "openpty - arg1 (__aslave)");
		if( arg2 ) {
		validate_RWaddress( arg2, "openpty - arg2 (__name)");
		}
		validate_NULL_TYPETYPE(  arg2, "openpty - arg2 (__name)");
		if( arg3 ) {
		validate_Rdaddress( arg3, "openpty - arg3 (__termp)");
		}
		validate_NULL_TYPETYPE(  arg3, "openpty - arg3 (__termp)");
		if( arg4 ) {
		validate_Rdaddress( arg4, "openpty - arg4 (__winp)");
		}
		validate_NULL_TYPETYPE(  arg4, "openpty - arg4 (__winp)");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3, arg4);
	__lsb_check_params = reset_flag;
	return ret_value;
}

