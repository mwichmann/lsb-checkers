// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <netdb.h>
#include <stddef.h>
#undef gethostbyname_r
static int(*funcptr) (const char * , struct hostent * , char * , size_t , struct hostent * * , int * ) = 0;

extern int __lsb_check_params;
int gethostbyname_r (const char * arg0 , struct hostent * arg1 , char * arg2 , size_t arg3 , struct hostent * * arg4 , int * arg5 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	__lsb_output(4, "Invoking wrapper for gethostbyname_r()");
	if(!funcptr)
		#if defined __i386__
			funcptr = dlvsym(RTLD_NEXT, "gethostbyname_r", "GLIBC_2.1.2");
		#endif
		#if defined __ia64__
			funcptr = dlvsym(RTLD_NEXT, "gethostbyname_r", "GLIBC_2.2");
		#endif
		#if defined __powerpc__ && !defined __powerpc64__
			funcptr = dlvsym(RTLD_NEXT, "gethostbyname_r", "GLIBC_2.1.2");
		#endif
		#if defined __powerpc64__
			funcptr = dlvsym(RTLD_NEXT, "gethostbyname_r", "GLIBC_2.3");
		#endif
		#if defined __s390__ && !defined __s390x__
			funcptr = dlvsym(RTLD_NEXT, "gethostbyname_r", "GLIBC_2.1.2");
		#endif
		#if defined __x86_64__
			funcptr = dlvsym(RTLD_NEXT, "gethostbyname_r", "GLIBC_2.2.5");
		#endif
		#if defined __s390x__
			funcptr = dlvsym(RTLD_NEXT, "gethostbyname_r", "GLIBC_2.2");
		#endif
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gethostbyname_r. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gethostbyname_r() - validating");
		validate_Rdaddress( arg0, "gethostbyname_r - arg0 (__name)");
		validate_NULL_TYPETYPE(  arg0, "gethostbyname_r - arg0 (__name)");
		validate_RWaddress( arg1, "gethostbyname_r - arg1 (__result_buf)");
		validate_NULL_TYPETYPE(  arg1, "gethostbyname_r - arg1 (__result_buf)");
		validate_RWaddress( arg2, "gethostbyname_r - arg2 (__buf)");
		validate_NULL_TYPETYPE(  arg2, "gethostbyname_r - arg2 (__buf)");
		validate_NULL_TYPETYPE(  arg3, "gethostbyname_r - arg3 (__buflen)");
		validate_RWaddress( arg4, "gethostbyname_r - arg4 (__result)");
		validate_NULL_TYPETYPE(  arg4, "gethostbyname_r - arg4 (__result)");
		validate_RWaddress( arg5, "gethostbyname_r - arg5 (__h_errnop)");
		validate_NULL_TYPETYPE(  arg5, "gethostbyname_r - arg5 (__h_errnop)");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3, arg4, arg5);
	__lsb_check_params = reset_flag;
	return ret_value;
}

