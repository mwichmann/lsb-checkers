// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <sys/select.h>
#include <sys/time.h>
#undef select
static int(*funcptr) (int , fd_set * , fd_set * , fd_set * , struct timeval * ) = 0;

extern int __lsb_check_params;
int select (int arg0 , fd_set * arg1 , fd_set * arg2 , fd_set * arg3 , struct timeval * arg4 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	__lsb_output(4, "Invoking wrapper for select()");
	if(!funcptr)
		#if defined __i386__
			funcptr = dlvsym(RTLD_NEXT, "select", "GLIBC_2.0");
		#endif
		#if defined __powerpc__ && !defined __powerpc64__
			funcptr = dlvsym(RTLD_NEXT, "select", "GLIBC_2.0");
		#endif
		#if defined __s390__ && !defined __s390x__
			funcptr = dlvsym(RTLD_NEXT, "select", "GLIBC_2.0");
		#endif
		#if defined __ia64__
			funcptr = dlvsym(RTLD_NEXT, "select", "GLIBC_2.2");
		#endif
		#if defined __s390x__
			funcptr = dlvsym(RTLD_NEXT, "select", "GLIBC_2.2");
		#endif
		#if defined __x86_64__
			funcptr = dlvsym(RTLD_NEXT, "select", "GLIBC_2.2.5");
		#endif
		#if defined __powerpc64__
			funcptr = dlvsym(RTLD_NEXT, "select", "GLIBC_2.3");
		#endif
	if(!funcptr) {
		__lsb_output(-1, "Failed to load select. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "select() - validating");
		validate_NULL_TYPETYPE(  arg0, "select - arg0 (__nfds)");
		if( arg1 ) {
		validate_RWaddress( arg1, "select - arg1 (__readfds)");
		}
		validate_NULL_TYPETYPE(  arg1, "select - arg1 (__readfds)");
		if( arg2 ) {
		validate_RWaddress( arg2, "select - arg2 (__writefds)");
		}
		validate_NULL_TYPETYPE(  arg2, "select - arg2 (__writefds)");
		if( arg3 ) {
		validate_RWaddress( arg3, "select - arg3 (__exceptfds)");
		}
		validate_NULL_TYPETYPE(  arg3, "select - arg3 (__exceptfds)");
		if( arg4 ) {
		validate_RWaddress( arg4, "select - arg4 (__timeout)");
		}
		validate_NULL_TYPETYPE(  arg4, "select - arg4 (__timeout)");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3, arg4);
	__lsb_check_params = reset_flag;
	return ret_value;
}

