// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <stddef.h>
#include <stdarg.h>
#include <wchar.h>
#undef vwprintf
static int(*funcptr) (const wchar_t * , va_list ) = 0;

extern int __lsb_check_params;
int vwprintf (const wchar_t * arg0 , va_list arg1 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	__lsb_output(4, "Invoking wrapper for vwprintf()");
	if(!funcptr)
		#if defined __i386__
			funcptr = dlvsym(RTLD_NEXT, "vwprintf", "GLIBC_2.2");
		#endif
		#if defined __ia64__
			funcptr = dlvsym(RTLD_NEXT, "vwprintf", "GLIBC_2.2");
		#endif
		#if defined __powerpc__ && !defined __powerpc64__
			funcptr = dlvsym(RTLD_NEXT, "vwprintf", "GLIBC_2.2");
		#endif
		#if defined __s390__ && !defined __s390x__
			funcptr = dlvsym(RTLD_NEXT, "vwprintf", "GLIBC_2.2");
		#endif
		#if defined __s390x__
			funcptr = dlvsym(RTLD_NEXT, "vwprintf", "GLIBC_2.2");
		#endif
		#if defined __x86_64__
			funcptr = dlvsym(RTLD_NEXT, "vwprintf", "GLIBC_2.2.5");
		#endif
		#if defined __powerpc64__
			funcptr = dlvsym(RTLD_NEXT, "vwprintf", "GLIBC_2.3");
		#endif
		#if defined __powerpc64__
			funcptr = dlvsym(RTLD_NEXT, "vwprintf", "GLIBC_2.4");
		#endif
		#if defined __s390x__
			funcptr = dlvsym(RTLD_NEXT, "vwprintf", "GLIBC_2.4");
		#endif
		#if defined __powerpc__ && !defined __powerpc64__
			funcptr = dlvsym(RTLD_NEXT, "vwprintf", "GLIBC_2.4");
		#endif
		#if defined __s390__ && !defined __s390x__
			funcptr = dlvsym(RTLD_NEXT, "vwprintf", "GLIBC_2.4");
		#endif
	if(!funcptr) {
		__lsb_output(-1, "Failed to load vwprintf. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "vwprintf() - validating");
		validate_Rdaddress( arg0, "vwprintf - arg0 (__format)");
		validate_NULL_TYPETYPE(  arg0, "vwprintf - arg0 (__format)");
		validate_NULL_TYPETYPE(  arg1, "vwprintf - arg1 (__arg)");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}

