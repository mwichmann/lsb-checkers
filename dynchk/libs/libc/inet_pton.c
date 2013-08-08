// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <arpa/inet.h>
#undef inet_pton
static int(*funcptr) (int , const char * , void * ) = 0;

extern int __lsb_check_params;
int inet_pton (int arg0 , const char * arg1 , void * arg2 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	__lsb_output(4, "Invoking wrapper for inet_pton()");
	if(!funcptr)
		#if defined __i386__
			funcptr = dlvsym(RTLD_NEXT, "inet_pton", "GLIBC_2.0");
		#endif
		#if defined __ia64__
			funcptr = dlvsym(RTLD_NEXT, "inet_pton", "GLIBC_2.2");
		#endif
		#if defined __powerpc__ && !defined __powerpc64__
			funcptr = dlvsym(RTLD_NEXT, "inet_pton", "GLIBC_2.0");
		#endif
		#if defined __powerpc64__
			funcptr = dlvsym(RTLD_NEXT, "inet_pton", "GLIBC_2.3");
		#endif
		#if defined __s390__ && !defined __s390x__
			funcptr = dlvsym(RTLD_NEXT, "inet_pton", "GLIBC_2.0");
		#endif
		#if defined __x86_64__
			funcptr = dlvsym(RTLD_NEXT, "inet_pton", "GLIBC_2.2.5");
		#endif
		#if defined __s390x__
			funcptr = dlvsym(RTLD_NEXT, "inet_pton", "GLIBC_2.2");
		#endif
	if(!funcptr) {
		__lsb_output(-1, "Failed to load inet_pton. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "inet_pton() - validating");
		validate_NULL_TYPETYPE(  arg0, "inet_pton - arg0 (__af)");
		validate_Rdaddress( arg1, "inet_pton - arg1 (__cp)");
		validate_NULL_TYPETYPE(  arg1, "inet_pton - arg1 (__cp)");
		validate_RWaddress( arg2, "inet_pton - arg2 (__buf)");
		validate_NULL_TYPETYPE(  arg2, "inet_pton - arg2 (__buf)");
	}
	ret_value = funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
	return ret_value;
}

