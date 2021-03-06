// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <fnmatch.h>
#undef fnmatch
static int(*funcptr) (const char * , const char * , int ) = 0;

extern int __lsb_check_params;
int fnmatch (const char * arg0 , const char * arg1 , int arg2 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	__lsb_output(4, "Invoking wrapper for fnmatch()");
	if(!funcptr)
		#if defined __i386__
			funcptr = dlvsym(RTLD_NEXT, "fnmatch", "GLIBC_2.2.3");
		#endif
		#if defined __ia64__
			funcptr = dlvsym(RTLD_NEXT, "fnmatch", "GLIBC_2.2.3");
		#endif
		#if defined __powerpc__ && !defined __powerpc64__
			funcptr = dlvsym(RTLD_NEXT, "fnmatch", "GLIBC_2.2.3");
		#endif
		#if defined __s390__ && !defined __s390x__
			funcptr = dlvsym(RTLD_NEXT, "fnmatch", "GLIBC_2.2.3");
		#endif
		#if defined __s390x__
			funcptr = dlvsym(RTLD_NEXT, "fnmatch", "GLIBC_2.2.3");
		#endif
		#if defined __x86_64__
			funcptr = dlvsym(RTLD_NEXT, "fnmatch", "GLIBC_2.2.5");
		#endif
		#if defined __powerpc64__
			funcptr = dlvsym(RTLD_NEXT, "fnmatch", "GLIBC_2.3");
		#endif
	if(!funcptr) {
		__lsb_output(-1, "Failed to load fnmatch. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "fnmatch() - validating");
		validate_Rdaddress( arg0, "fnmatch - arg0 (__pattern)");
		validate_NULL_TYPETYPE(  arg0, "fnmatch - arg0 (__pattern)");
		validate_Rdaddress( arg1, "fnmatch - arg1 (__name)");
		validate_NULL_TYPETYPE(  arg1, "fnmatch - arg1 (__name)");
		validate_NULL_TYPETYPE(  arg2, "fnmatch - arg2 (__flags)");
	}
	ret_value = funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
	return ret_value;
}

