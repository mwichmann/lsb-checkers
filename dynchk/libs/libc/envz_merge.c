// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <stddef.h>
#include <envz.h>
#undef envz_merge
static error_t(*funcptr) (char * * , size_t * , const char * , size_t , int ) = 0;

extern int __lsb_check_params;
error_t envz_merge (char * * arg0 , size_t * arg1 , const char * arg2 , size_t arg3 , int arg4 )
{
	int reset_flag = __lsb_check_params;
	error_t ret_value  ;
	__lsb_output(4, "Invoking wrapper for envz_merge()");
	if(!funcptr)
		#if defined __i386__
			funcptr = dlvsym(RTLD_NEXT, "envz_merge", "GLIBC_2.0");
		#endif
		#if defined __powerpc__ && !defined __powerpc64__
			funcptr = dlvsym(RTLD_NEXT, "envz_merge", "GLIBC_2.0");
		#endif
		#if defined __s390__ && !defined __s390x__
			funcptr = dlvsym(RTLD_NEXT, "envz_merge", "GLIBC_2.0");
		#endif
		#if defined __ia64__
			funcptr = dlvsym(RTLD_NEXT, "envz_merge", "GLIBC_2.2");
		#endif
		#if defined __s390x__
			funcptr = dlvsym(RTLD_NEXT, "envz_merge", "GLIBC_2.2");
		#endif
		#if defined __x86_64__
			funcptr = dlvsym(RTLD_NEXT, "envz_merge", "GLIBC_2.2.5");
		#endif
		#if defined __powerpc64__
			funcptr = dlvsym(RTLD_NEXT, "envz_merge", "GLIBC_2.3");
		#endif
	if(!funcptr) {
		__lsb_output(-1, "Failed to load envz_merge. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "envz_merge() - validating");
		validate_RWaddress( arg0, "envz_merge - arg0 (envz)");
		validate_NULL_TYPETYPE(  arg0, "envz_merge - arg0 (envz)");
		validate_RWaddress( arg1, "envz_merge - arg1 (envz_len)");
		validate_NULL_TYPETYPE(  arg1, "envz_merge - arg1 (envz_len)");
		validate_Rdaddress( arg2, "envz_merge - arg2 (envz2)");
		validate_NULL_TYPETYPE(  arg2, "envz_merge - arg2 (envz2)");
		validate_NULL_TYPETYPE(  arg3, "envz_merge - arg3 (envz2_len)");
		validate_NULL_TYPETYPE(  arg4, "envz_merge - arg4 (override)");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3, arg4);
	__lsb_check_params = reset_flag;
	return ret_value;
}

