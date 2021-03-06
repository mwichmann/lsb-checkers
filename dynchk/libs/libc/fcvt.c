// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <stdlib.h>
#undef fcvt
static char *(*funcptr) (double , int , int * , int * ) = 0;

extern int __lsb_check_params;
char * fcvt (double arg0 , int arg1 , int * arg2 , int * arg3 )
{
	int reset_flag = __lsb_check_params;
	char * ret_value  ;
	__lsb_output(4, "Invoking wrapper for fcvt()");
	if(!funcptr)
		#if defined __i386__
			funcptr = dlvsym(RTLD_NEXT, "fcvt", "GLIBC_2.0");
		#endif
		#if defined __powerpc__ && !defined __powerpc64__
			funcptr = dlvsym(RTLD_NEXT, "fcvt", "GLIBC_2.0");
		#endif
		#if defined __s390__ && !defined __s390x__
			funcptr = dlvsym(RTLD_NEXT, "fcvt", "GLIBC_2.0");
		#endif
		#if defined __ia64__
			funcptr = dlvsym(RTLD_NEXT, "fcvt", "GLIBC_2.2");
		#endif
		#if defined __s390x__
			funcptr = dlvsym(RTLD_NEXT, "fcvt", "GLIBC_2.2");
		#endif
		#if defined __x86_64__
			funcptr = dlvsym(RTLD_NEXT, "fcvt", "GLIBC_2.2.5");
		#endif
		#if defined __powerpc64__
			funcptr = dlvsym(RTLD_NEXT, "fcvt", "GLIBC_2.3");
		#endif
	if(!funcptr) {
		__lsb_output(-1, "Failed to load fcvt. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "fcvt() - validating");
		validate_NULL_TYPETYPE(  arg0, "fcvt - arg0 (__value)");
		validate_NULL_TYPETYPE(  arg1, "fcvt - arg1 (__ndigit)");
		validate_RWaddress( arg2, "fcvt - arg2 (__decpt)");
		validate_NULL_TYPETYPE(  arg2, "fcvt - arg2 (__decpt)");
		validate_RWaddress( arg3, "fcvt - arg3 (__sign)");
		validate_NULL_TYPETYPE(  arg3, "fcvt - arg3 (__sign)");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3);
	__lsb_check_params = reset_flag;
	return ret_value;
}

