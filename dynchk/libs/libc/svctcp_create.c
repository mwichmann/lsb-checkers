// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <sys/types.h>
#include <rpc/svc.h>
#undef svctcp_create
static SVCXPRT *(*funcptr) (int , u_int , u_int ) = 0;

extern int __lsb_check_params;
SVCXPRT * svctcp_create (int arg0 , u_int arg1 , u_int arg2 )
{
	int reset_flag = __lsb_check_params;
	SVCXPRT * ret_value  ;
	__lsb_output(4, "Invoking wrapper for svctcp_create()");
	if(!funcptr)
		#if defined __i386__
			funcptr = dlvsym(RTLD_NEXT, "svctcp_create", "GLIBC_2.0");
		#endif
		#if defined __ia64__
			funcptr = dlvsym(RTLD_NEXT, "svctcp_create", "GLIBC_2.2");
		#endif
		#if defined __powerpc__ && !defined __powerpc64__
			funcptr = dlvsym(RTLD_NEXT, "svctcp_create", "GLIBC_2.0");
		#endif
		#if defined __powerpc64__
			funcptr = dlvsym(RTLD_NEXT, "svctcp_create", "GLIBC_2.3");
		#endif
		#if defined __s390__ && !defined __s390x__
			funcptr = dlvsym(RTLD_NEXT, "svctcp_create", "GLIBC_2.0");
		#endif
		#if defined __x86_64__
			funcptr = dlvsym(RTLD_NEXT, "svctcp_create", "GLIBC_2.2.5");
		#endif
		#if defined __s390x__
			funcptr = dlvsym(RTLD_NEXT, "svctcp_create", "GLIBC_2.2");
		#endif
	if(!funcptr) {
		__lsb_output(-1, "Failed to load svctcp_create. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "svctcp_create() - validating");
		validate_NULL_TYPETYPE(  arg0, "svctcp_create - arg0 (__sock)");
		validate_NULL_TYPETYPE(  arg1, "svctcp_create - arg1 (__sendsize)");
		validate_NULL_TYPETYPE(  arg2, "svctcp_create - arg2 (__recvsize)");
	}
	ret_value = funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
	return ret_value;
}

