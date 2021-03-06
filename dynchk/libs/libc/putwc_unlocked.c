// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <stddef.h>
#include <stdio.h>
#include <wchar.h>
#undef putwc_unlocked
static wint_t(*funcptr) (wchar_t , FILE * ) = 0;

extern int __lsb_check_params;
wint_t putwc_unlocked (wchar_t arg0 , FILE * arg1 )
{
	int reset_flag = __lsb_check_params;
	wint_t ret_value  ;
	__lsb_output(4, "Invoking wrapper for putwc_unlocked()");
	if(!funcptr)
		#if defined __i386__
			funcptr = dlvsym(RTLD_NEXT, "putwc_unlocked", "GLIBC_2.2");
		#endif
		#if defined __ia64__
			funcptr = dlvsym(RTLD_NEXT, "putwc_unlocked", "GLIBC_2.2");
		#endif
		#if defined __powerpc__ && !defined __powerpc64__
			funcptr = dlvsym(RTLD_NEXT, "putwc_unlocked", "GLIBC_2.2");
		#endif
		#if defined __s390__ && !defined __s390x__
			funcptr = dlvsym(RTLD_NEXT, "putwc_unlocked", "GLIBC_2.2");
		#endif
		#if defined __s390x__
			funcptr = dlvsym(RTLD_NEXT, "putwc_unlocked", "GLIBC_2.2");
		#endif
		#if defined __x86_64__
			funcptr = dlvsym(RTLD_NEXT, "putwc_unlocked", "GLIBC_2.2.5");
		#endif
		#if defined __powerpc64__
			funcptr = dlvsym(RTLD_NEXT, "putwc_unlocked", "GLIBC_2.3");
		#endif
	if(!funcptr) {
		__lsb_output(-1, "Failed to load putwc_unlocked. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "putwc_unlocked() - validating");
		validate_NULL_TYPETYPE(  arg0, "putwc_unlocked - arg0 (__wc)");
		if( arg1 ) {
		validate_RWaddress( arg1, "putwc_unlocked - arg1 (__stream)");
		}
		validate_NULL_TYPETYPE(  arg1, "putwc_unlocked - arg1 (__stream)");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}

