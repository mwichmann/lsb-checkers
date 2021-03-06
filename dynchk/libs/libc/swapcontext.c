// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <ucontext.h>
#undef swapcontext
static int(*funcptr) (ucontext_t * , const struct ucontext * ) = 0;

extern int __lsb_check_params;
int swapcontext (ucontext_t * arg0 , const struct ucontext * arg1 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	__lsb_output(4, "Invoking wrapper for swapcontext()");
	if(!funcptr)
		#if defined __i386__
			funcptr = dlvsym(RTLD_NEXT, "swapcontext", "GLIBC_2.1");
		#endif
		#if defined __s390__ && !defined __s390x__
			funcptr = dlvsym(RTLD_NEXT, "swapcontext", "GLIBC_2.1");
		#endif
		#if defined __ia64__
			funcptr = dlvsym(RTLD_NEXT, "swapcontext", "GLIBC_2.2");
		#endif
		#if defined __s390x__
			funcptr = dlvsym(RTLD_NEXT, "swapcontext", "GLIBC_2.2");
		#endif
		#if defined __x86_64__
			funcptr = dlvsym(RTLD_NEXT, "swapcontext", "GLIBC_2.2.5");
		#endif
		#if defined __powerpc__ && !defined __powerpc64__
			funcptr = dlvsym(RTLD_NEXT, "swapcontext", "GLIBC_2.3.4");
		#endif
		#if defined __powerpc64__
			funcptr = dlvsym(RTLD_NEXT, "swapcontext", "GLIBC_2.3.4");
		#endif
	if(!funcptr) {
		__lsb_output(-1, "Failed to load swapcontext. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "swapcontext() - validating");
		validate_RWaddress( arg0, "swapcontext - arg0 (__oucp)");
		validate_NULL_TYPETYPE(  arg0, "swapcontext - arg0 (__oucp)");
		validate_Rdaddress( arg1, "swapcontext - arg1 (__ucp)");
		validate_NULL_TYPETYPE(  arg1, "swapcontext - arg1 (__ucp)");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}

