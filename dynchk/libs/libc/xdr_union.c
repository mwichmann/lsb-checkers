// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <rpc/xdr.h>
#include <rpc/types.h>
#undef xdr_union
static bool_t(*funcptr) (XDR * , enum_t * , char * , const struct xdr_discrim * , xdrproc_t ) = 0;

extern int __lsb_check_params;
bool_t xdr_union (XDR * arg0 , enum_t * arg1 , char * arg2 , const struct xdr_discrim * arg3 , xdrproc_t arg4 )
{
	int reset_flag = __lsb_check_params;
	bool_t ret_value  ;
	__lsb_output(4, "Invoking wrapper for xdr_union()");
	if(!funcptr)
		#if defined __i386__
			funcptr = dlvsym(RTLD_NEXT, "xdr_union", "GLIBC_2.0");
		#endif
		#if defined __powerpc__ && !defined __powerpc64__
			funcptr = dlvsym(RTLD_NEXT, "xdr_union", "GLIBC_2.0");
		#endif
		#if defined __s390__ && !defined __s390x__
			funcptr = dlvsym(RTLD_NEXT, "xdr_union", "GLIBC_2.0");
		#endif
		#if defined __ia64__
			funcptr = dlvsym(RTLD_NEXT, "xdr_union", "GLIBC_2.2");
		#endif
		#if defined __s390x__
			funcptr = dlvsym(RTLD_NEXT, "xdr_union", "GLIBC_2.2");
		#endif
		#if defined __x86_64__
			funcptr = dlvsym(RTLD_NEXT, "xdr_union", "GLIBC_2.2.5");
		#endif
		#if defined __powerpc64__
			funcptr = dlvsym(RTLD_NEXT, "xdr_union", "GLIBC_2.3");
		#endif
	if(!funcptr) {
		__lsb_output(-1, "Failed to load xdr_union. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "xdr_union() - validating");
		validate_RWaddress( arg0, "xdr_union - arg0 (__xdrs)");
		validate_NULL_TYPETYPE(  arg0, "xdr_union - arg0 (__xdrs)");
		validate_RWaddress( arg1, "xdr_union - arg1 (__dscmp)");
		validate_NULL_TYPETYPE(  arg1, "xdr_union - arg1 (__dscmp)");
		validate_RWaddress( arg2, "xdr_union - arg2 (__unp)");
		validate_NULL_TYPETYPE(  arg2, "xdr_union - arg2 (__unp)");
		validate_Rdaddress( arg3, "xdr_union - arg3 (__choices)");
		validate_NULL_TYPETYPE(  arg3, "xdr_union - arg3 (__choices)");
		validate_NULL_TYPETYPE(  arg4, "xdr_union - arg4 (dfault)");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3, arg4);
	__lsb_check_params = reset_flag;
	return ret_value;
}

