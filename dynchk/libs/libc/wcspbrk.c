// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <stddef.h>
#include <wchar.h>
#undef wcspbrk
static wchar_t *(*funcptr) (const wchar_t * , const wchar_t * ) = 0;

extern int __lsb_check_params;
wchar_t * wcspbrk (const wchar_t * arg0 , const wchar_t * arg1 )
{
	int reset_flag = __lsb_check_params;
	wchar_t * ret_value  ;
	__lsb_output(4, "Invoking wrapper for wcspbrk()");
	if(!funcptr)
		#if defined __i386__
			funcptr = dlvsym(RTLD_NEXT, "wcspbrk", "GLIBC_2.0");
		#endif
		#if defined __powerpc__ && !defined __powerpc64__
			funcptr = dlvsym(RTLD_NEXT, "wcspbrk", "GLIBC_2.0");
		#endif
		#if defined __s390__ && !defined __s390x__
			funcptr = dlvsym(RTLD_NEXT, "wcspbrk", "GLIBC_2.0");
		#endif
		#if defined __ia64__
			funcptr = dlvsym(RTLD_NEXT, "wcspbrk", "GLIBC_2.2");
		#endif
		#if defined __s390x__
			funcptr = dlvsym(RTLD_NEXT, "wcspbrk", "GLIBC_2.2");
		#endif
		#if defined __x86_64__
			funcptr = dlvsym(RTLD_NEXT, "wcspbrk", "GLIBC_2.2.5");
		#endif
		#if defined __powerpc64__
			funcptr = dlvsym(RTLD_NEXT, "wcspbrk", "GLIBC_2.3");
		#endif
	if(!funcptr) {
		__lsb_output(-1, "Failed to load wcspbrk. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "wcspbrk() - validating");
		validate_Rdaddress( arg0, "wcspbrk - arg0 (__wcs)");
		validate_NULL_TYPETYPE(  arg0, "wcspbrk - arg0 (__wcs)");
		validate_Rdaddress( arg1, "wcspbrk - arg1 (__accept)");
		validate_NULL_TYPETYPE(  arg1, "wcspbrk - arg1 (__accept)");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}

