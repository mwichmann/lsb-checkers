// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <rpc/xdr.h>
#include <sys/types.h>
#undef xdr_pointer
static bool_t(*funcptr) (XDR * , char * * , u_int , xdrproc_t ) = 0;

extern int __lsb_check_params;
bool_t xdr_pointer (XDR * arg0 , char * * arg1 , u_int arg2 , xdrproc_t arg3 )
{
	int reset_flag = __lsb_check_params;
	bool_t ret_value  ;
	__lsb_output(4, "Invoking wrapper for xdr_pointer()");
	if(!funcptr)
		#if defined __i386__
			funcptr = dlvsym(RTLD_NEXT, "xdr_pointer", "GLIBC_2.0");
		#endif
		#if defined __powerpc__ && !defined __powerpc64__
			funcptr = dlvsym(RTLD_NEXT, "xdr_pointer", "GLIBC_2.0");
		#endif
		#if defined __s390__ && !defined __s390x__
			funcptr = dlvsym(RTLD_NEXT, "xdr_pointer", "GLIBC_2.0");
		#endif
		#if defined __ia64__
			funcptr = dlvsym(RTLD_NEXT, "xdr_pointer", "GLIBC_2.2");
		#endif
		#if defined __s390x__
			funcptr = dlvsym(RTLD_NEXT, "xdr_pointer", "GLIBC_2.2");
		#endif
		#if defined __x86_64__
			funcptr = dlvsym(RTLD_NEXT, "xdr_pointer", "GLIBC_2.2.5");
		#endif
		#if defined __powerpc64__
			funcptr = dlvsym(RTLD_NEXT, "xdr_pointer", "GLIBC_2.3");
		#endif
	if(!funcptr) {
		__lsb_output(-1, "Failed to load xdr_pointer. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "xdr_pointer() - validating");
		validate_RWaddress( arg0, "xdr_pointer - arg0 (__xdrs)");
		validate_NULL_TYPETYPE(  arg0, "xdr_pointer - arg0 (__xdrs)");
		validate_RWaddress( arg1, "xdr_pointer - arg1 (__objpp)");
		validate_NULL_TYPETYPE(  arg1, "xdr_pointer - arg1 (__objpp)");
		validate_NULL_TYPETYPE(  arg2, "xdr_pointer - arg2 (__obj_size)");
		validate_NULL_TYPETYPE(  arg3, "xdr_pointer - arg3 (__xdr_obj)");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3);
	__lsb_check_params = reset_flag;
	return ret_value;
}

