// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <stddef.h>
#include <stdlib.h>
#undef wcstombs
static size_t(*funcptr) (char * , const wchar_t * , size_t ) = 0;

extern int __lsb_check_params;
size_t wcstombs (char * arg0 , const wchar_t * arg1 , size_t arg2 )
{
	int reset_flag = __lsb_check_params;
	size_t ret_value  ;
	__lsb_output(4, "Invoking wrapper for wcstombs()");
	if(!funcptr)
		#if defined __i386__
			funcptr = dlvsym(RTLD_NEXT, "wcstombs", "GLIBC_2.0");
		#endif
		#if defined __powerpc__ && !defined __powerpc64__
			funcptr = dlvsym(RTLD_NEXT, "wcstombs", "GLIBC_2.0");
		#endif
		#if defined __s390__ && !defined __s390x__
			funcptr = dlvsym(RTLD_NEXT, "wcstombs", "GLIBC_2.0");
		#endif
		#if defined __ia64__
			funcptr = dlvsym(RTLD_NEXT, "wcstombs", "GLIBC_2.2");
		#endif
		#if defined __s390x__
			funcptr = dlvsym(RTLD_NEXT, "wcstombs", "GLIBC_2.2");
		#endif
		#if defined __x86_64__
			funcptr = dlvsym(RTLD_NEXT, "wcstombs", "GLIBC_2.2.5");
		#endif
		#if defined __powerpc64__
			funcptr = dlvsym(RTLD_NEXT, "wcstombs", "GLIBC_2.3");
		#endif
	if(!funcptr) {
		__lsb_output(-1, "Failed to load wcstombs. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "wcstombs() - validating");
		validate_RWaddress( arg0, "wcstombs - arg0 (__s)");
		validate_NULL_TYPETYPE(  arg0, "wcstombs - arg0 (__s)");
		validate_Rdaddress( arg1, "wcstombs - arg1 (__pwcs)");
		validate_NULL_TYPETYPE(  arg1, "wcstombs - arg1 (__pwcs)");
		validate_NULL_TYPETYPE(  arg2, "wcstombs - arg2 (__n)");
	}
	ret_value = funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
	return ret_value;
}

