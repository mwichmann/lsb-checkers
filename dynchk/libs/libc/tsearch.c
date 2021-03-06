// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <stdlib.h>
#include <search.h>
#undef tsearch
static void *(*funcptr) (const void * , void * * , __compar_fn_t ) = 0;

extern int __lsb_check_params;
void * tsearch (const void * arg0 , void * * arg1 , __compar_fn_t arg2 )
{
	int reset_flag = __lsb_check_params;
	void * ret_value  ;
	__lsb_output(4, "Invoking wrapper for tsearch()");
	if(!funcptr)
		#if defined __i386__
			funcptr = dlvsym(RTLD_NEXT, "tsearch", "GLIBC_2.0");
		#endif
		#if defined __powerpc__ && !defined __powerpc64__
			funcptr = dlvsym(RTLD_NEXT, "tsearch", "GLIBC_2.0");
		#endif
		#if defined __s390__ && !defined __s390x__
			funcptr = dlvsym(RTLD_NEXT, "tsearch", "GLIBC_2.0");
		#endif
		#if defined __ia64__
			funcptr = dlvsym(RTLD_NEXT, "tsearch", "GLIBC_2.2");
		#endif
		#if defined __s390x__
			funcptr = dlvsym(RTLD_NEXT, "tsearch", "GLIBC_2.2");
		#endif
		#if defined __x86_64__
			funcptr = dlvsym(RTLD_NEXT, "tsearch", "GLIBC_2.2.5");
		#endif
		#if defined __powerpc64__
			funcptr = dlvsym(RTLD_NEXT, "tsearch", "GLIBC_2.3");
		#endif
	if(!funcptr) {
		__lsb_output(-1, "Failed to load tsearch. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "tsearch() - validating");
		validate_Rdaddress( arg0, "tsearch - arg0 (__key)");
		validate_NULL_TYPETYPE(  arg0, "tsearch - arg0 (__key)");
		validate_RWaddress( arg1, "tsearch - arg1 (__rootp)");
		validate_NULL_TYPETYPE(  arg1, "tsearch - arg1 (__rootp)");
		validate_NULL_TYPETYPE(  arg2, "tsearch - arg2 (__compar)");
	}
	ret_value = funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
	return ret_value;
}

