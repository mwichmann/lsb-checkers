// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <rpc/xdr.h>
#include <sys/types.h>
#undef xdrrec_create
static void(*funcptr) (XDR * , u_int , u_int , caddr_t , int(* )(char *, char *, int), int(* )(char *, char *, int)) = 0;

extern int __lsb_check_params;
void xdrrec_create (XDR * arg0 , u_int arg1 , u_int arg2 , caddr_t arg3 , int(* arg4 )(char *, char *, int), int(* arg5 )(char *, char *, int))
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for xdrrec_create()");
	if(!funcptr)
		#if defined __i386__
			funcptr = dlvsym(RTLD_NEXT, "xdrrec_create", "GLIBC_2.0");
		#endif
		#if defined __powerpc__ && !defined __powerpc64__
			funcptr = dlvsym(RTLD_NEXT, "xdrrec_create", "GLIBC_2.0");
		#endif
		#if defined __s390__ && !defined __s390x__
			funcptr = dlvsym(RTLD_NEXT, "xdrrec_create", "GLIBC_2.0");
		#endif
		#if defined __ia64__
			funcptr = dlvsym(RTLD_NEXT, "xdrrec_create", "GLIBC_2.2");
		#endif
		#if defined __s390x__
			funcptr = dlvsym(RTLD_NEXT, "xdrrec_create", "GLIBC_2.2");
		#endif
		#if defined __x86_64__
			funcptr = dlvsym(RTLD_NEXT, "xdrrec_create", "GLIBC_2.2.5");
		#endif
		#if defined __powerpc64__
			funcptr = dlvsym(RTLD_NEXT, "xdrrec_create", "GLIBC_2.3");
		#endif
	if(!funcptr) {
		__lsb_output(-1, "Failed to load xdrrec_create. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "xdrrec_create() - validating");
		validate_RWaddress( arg0, "xdrrec_create - arg0 (__xdrs)");
		validate_NULL_TYPETYPE(  arg0, "xdrrec_create - arg0 (__xdrs)");
		validate_NULL_TYPETYPE(  arg1, "xdrrec_create - arg1 (__sendsize)");
		validate_NULL_TYPETYPE(  arg2, "xdrrec_create - arg2 (__recvsize)");
		validate_NULL_TYPETYPE(  arg3, "xdrrec_create - arg3 (__tcp_handle)");
		validate_Rdaddress( arg4, "xdrrec_create - arg4 (__readit)");
		validate_NULL_TYPETYPE(  arg4, "xdrrec_create - arg4 (__readit)");
		validate_Rdaddress( arg5, "xdrrec_create - arg5 (__writeit)");
		validate_NULL_TYPETYPE(  arg5, "xdrrec_create - arg5 (__writeit)");
	}
	funcptr(arg0, arg1, arg2, arg3, arg4, arg5);
	__lsb_check_params = reset_flag;
}

