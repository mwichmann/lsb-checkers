// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <rpc/xdr.h>
#undef xdr_short
static bool_t(*funcptr) (XDR * , short * ) = 0;

extern int __lsb_check_params;
bool_t xdr_short (XDR * arg0 , short * arg1 )
{
	int reset_flag = __lsb_check_params;
	bool_t ret_value  ;
	__lsb_output(4, "Invoking wrapper for xdr_short()");
	if(!funcptr)
		#if defined __i386__
			funcptr = dlvsym(RTLD_NEXT, "xdr_short", "GLIBC_2.0");
		#endif
		#if defined __ia64__
			funcptr = dlvsym(RTLD_NEXT, "xdr_short", "GLIBC_2.2");
		#endif
		#if defined __powerpc__ && !defined __powerpc64__
			funcptr = dlvsym(RTLD_NEXT, "xdr_short", "GLIBC_2.0");
		#endif
		#if defined __powerpc64__
			funcptr = dlvsym(RTLD_NEXT, "xdr_short", "GLIBC_2.3");
		#endif
		#if defined __s390__ && !defined __s390x__
			funcptr = dlvsym(RTLD_NEXT, "xdr_short", "GLIBC_2.0");
		#endif
		#if defined __x86_64__
			funcptr = dlvsym(RTLD_NEXT, "xdr_short", "GLIBC_2.2.5");
		#endif
		#if defined __s390x__
			funcptr = dlvsym(RTLD_NEXT, "xdr_short", "GLIBC_2.2");
		#endif
	if(!funcptr) {
		__lsb_output(-1, "Failed to load xdr_short. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "xdr_short() - validating");
		validate_RWaddress( arg0, "xdr_short - arg0 (__xdrs)");
		validate_NULL_TYPETYPE(  arg0, "xdr_short - arg0 (__xdrs)");
		validate_RWaddress( arg1, "xdr_short - arg1 (__sp)");
		validate_NULL_TYPETYPE(  arg1, "xdr_short - arg1 (__sp)");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}

