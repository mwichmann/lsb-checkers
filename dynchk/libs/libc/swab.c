// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <lsb/types.h>
#include <unistd.h>
#undef swab
static void(*funcptr) (const void * , void * , ssize_t ) = 0;

extern int __lsb_check_params;
void swab (const void * arg0 , void * arg1 , ssize_t arg2 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for swab()");
	if(!funcptr)
		#if defined __i386__
			funcptr = dlvsym(RTLD_NEXT, "swab", "GLIBC_2.0");
		#endif
		#if defined __ia64__
			funcptr = dlvsym(RTLD_NEXT, "swab", "GLIBC_2.2");
		#endif
		#if defined __powerpc__ && !defined __powerpc64__
			funcptr = dlvsym(RTLD_NEXT, "swab", "GLIBC_2.0");
		#endif
		#if defined __powerpc64__
			funcptr = dlvsym(RTLD_NEXT, "swab", "GLIBC_2.3");
		#endif
		#if defined __s390__ && !defined __s390x__
			funcptr = dlvsym(RTLD_NEXT, "swab", "GLIBC_2.0");
		#endif
		#if defined __x86_64__
			funcptr = dlvsym(RTLD_NEXT, "swab", "GLIBC_2.2.5");
		#endif
		#if defined __s390x__
			funcptr = dlvsym(RTLD_NEXT, "swab", "GLIBC_2.2");
		#endif
	if(!funcptr) {
		__lsb_output(-1, "Failed to load swab. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "swab() - validating");
		validate_Rdaddress( arg0, "swab - arg0 (__from)");
		validate_NULL_TYPETYPE(  arg0, "swab - arg0 (__from)");
		validate_RWaddress( arg1, "swab - arg1 (__to)");
		validate_NULL_TYPETYPE(  arg1, "swab - arg1 (__to)");
		validate_NULL_TYPETYPE(  arg2, "swab - arg2 (__n)");
	}
	funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
}

