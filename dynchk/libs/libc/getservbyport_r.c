// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <netdb.h>
#include <stddef.h>
#undef getservbyport_r
static int(*funcptr) (int , const char * , struct servent * , char * , size_t , struct servent * * ) = 0;

extern int __lsb_check_params;
int getservbyport_r (int arg0 , const char * arg1 , struct servent * arg2 , char * arg3 , size_t arg4 , struct servent * * arg5 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	__lsb_output(4, "Invoking wrapper for getservbyport_r()");
	if(!funcptr)
		#if defined __i386__
			funcptr = dlvsym(RTLD_NEXT, "getservbyport_r", "GLIBC_2.1.2");
		#endif
		#if defined __ia64__
			funcptr = dlvsym(RTLD_NEXT, "getservbyport_r", "GLIBC_2.2");
		#endif
		#if defined __powerpc__ && !defined __powerpc64__
			funcptr = dlvsym(RTLD_NEXT, "getservbyport_r", "GLIBC_2.1.2");
		#endif
		#if defined __powerpc64__
			funcptr = dlvsym(RTLD_NEXT, "getservbyport_r", "GLIBC_2.3");
		#endif
		#if defined __s390__ && !defined __s390x__
			funcptr = dlvsym(RTLD_NEXT, "getservbyport_r", "GLIBC_2.1.2");
		#endif
		#if defined __x86_64__
			funcptr = dlvsym(RTLD_NEXT, "getservbyport_r", "GLIBC_2.2.5");
		#endif
		#if defined __s390x__
			funcptr = dlvsym(RTLD_NEXT, "getservbyport_r", "GLIBC_2.2");
		#endif
	if(!funcptr) {
		__lsb_output(-1, "Failed to load getservbyport_r. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "getservbyport_r() - validating");
		validate_NULL_TYPETYPE(  arg0, "getservbyport_r - arg0 (__port)");
		if( arg1 ) {
		validate_Rdaddress( arg1, "getservbyport_r - arg1 (__proto)");
		}
		validate_NULL_TYPETYPE(  arg1, "getservbyport_r - arg1 (__proto)");
		if( arg2 ) {
		validate_RWaddress( arg2, "getservbyport_r - arg2 (__result_buf)");
		}
		validate_NULL_TYPETYPE(  arg2, "getservbyport_r - arg2 (__result_buf)");
		if( arg3 ) {
		validate_RWaddress( arg3, "getservbyport_r - arg3 (__buf)");
		}
		validate_NULL_TYPETYPE(  arg3, "getservbyport_r - arg3 (__buf)");
		validate_NULL_TYPETYPE(  arg4, "getservbyport_r - arg4 (__buflen)");
		if( arg5 ) {
		validate_RWaddress( arg5, "getservbyport_r - arg5 (__result)");
		}
		validate_NULL_TYPETYPE(  arg5, "getservbyport_r - arg5 (__result)");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3, arg4, arg5);
	__lsb_check_params = reset_flag;
	return ret_value;
}
