// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <stddef.h>
#include <argz.h>
#undef argz_add
static error_t(*funcptr) (char * * , size_t * , const char * ) = 0;

extern int __lsb_check_params;
error_t argz_add (char * * arg0 , size_t * arg1 , const char * arg2 )
{
	int reset_flag = __lsb_check_params;
	error_t ret_value  ;
	__lsb_output(4, "Invoking wrapper for argz_add()");
	if(!funcptr)
		#if defined __i386__
			funcptr = dlvsym(RTLD_NEXT, "argz_add", "GLIBC_2.0");
		#endif
		#if defined __powerpc__ && !defined __powerpc64__
			funcptr = dlvsym(RTLD_NEXT, "argz_add", "GLIBC_2.0");
		#endif
		#if defined __s390__ && !defined __s390x__
			funcptr = dlvsym(RTLD_NEXT, "argz_add", "GLIBC_2.0");
		#endif
		#if defined __ia64__
			funcptr = dlvsym(RTLD_NEXT, "argz_add", "GLIBC_2.2");
		#endif
		#if defined __s390x__
			funcptr = dlvsym(RTLD_NEXT, "argz_add", "GLIBC_2.2");
		#endif
		#if defined __x86_64__
			funcptr = dlvsym(RTLD_NEXT, "argz_add", "GLIBC_2.2.5");
		#endif
		#if defined __powerpc64__
			funcptr = dlvsym(RTLD_NEXT, "argz_add", "GLIBC_2.3");
		#endif
	if(!funcptr) {
		__lsb_output(-1, "Failed to load argz_add. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "argz_add() - validating");
		validate_RWaddress( arg0, "argz_add - arg0 (argz)");
		validate_NULL_TYPETYPE(  arg0, "argz_add - arg0 (argz)");
		validate_RWaddress( arg1, "argz_add - arg1 (argz_len)");
		validate_NULL_TYPETYPE(  arg1, "argz_add - arg1 (argz_len)");
		validate_Rdaddress( arg2, "argz_add - arg2 (str)");
		validate_NULL_TYPETYPE(  arg2, "argz_add - arg2 (str)");
	}
	ret_value = funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
	return ret_value;
}

