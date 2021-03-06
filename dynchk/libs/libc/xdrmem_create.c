// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <rpc/xdr.h>
#include <sys/types.h>
#undef xdrmem_create
static void(*funcptr) (XDR * , caddr_t , u_int , enum xdr_op ) = 0;

extern int __lsb_check_params;
void xdrmem_create (XDR * arg0 , caddr_t arg1 , u_int arg2 , enum xdr_op arg3 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for xdrmem_create()");
	if(!funcptr)
		#if defined __i386__
			funcptr = dlvsym(RTLD_NEXT, "xdrmem_create", "GLIBC_2.0");
		#endif
		#if defined __powerpc__ && !defined __powerpc64__
			funcptr = dlvsym(RTLD_NEXT, "xdrmem_create", "GLIBC_2.0");
		#endif
		#if defined __s390__ && !defined __s390x__
			funcptr = dlvsym(RTLD_NEXT, "xdrmem_create", "GLIBC_2.0");
		#endif
		#if defined __ia64__
			funcptr = dlvsym(RTLD_NEXT, "xdrmem_create", "GLIBC_2.2");
		#endif
		#if defined __s390x__
			funcptr = dlvsym(RTLD_NEXT, "xdrmem_create", "GLIBC_2.2");
		#endif
		#if defined __x86_64__
			funcptr = dlvsym(RTLD_NEXT, "xdrmem_create", "GLIBC_2.2.5");
		#endif
		#if defined __powerpc64__
			funcptr = dlvsym(RTLD_NEXT, "xdrmem_create", "GLIBC_2.3");
		#endif
	if(!funcptr) {
		__lsb_output(-1, "Failed to load xdrmem_create. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "xdrmem_create() - validating");
		validate_RWaddress( arg0, "xdrmem_create - arg0 (__xdrs)");
		validate_NULL_TYPETYPE(  arg0, "xdrmem_create - arg0 (__xdrs)");
		validate_NULL_TYPETYPE(  arg1, "xdrmem_create - arg1 (__addr)");
		validate_NULL_TYPETYPE(  arg2, "xdrmem_create - arg2 (__size)");
		validate_NULL_TYPETYPE(  arg3, "xdrmem_create - arg3 (__xop)");
	}
	funcptr(arg0, arg1, arg2, arg3);
	__lsb_check_params = reset_flag;
}

