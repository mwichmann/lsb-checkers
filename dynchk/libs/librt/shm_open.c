// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <sys/types.h>
#include <sys/mman.h>
#undef shm_open
static int(*funcptr) (const char * , int , mode_t ) = 0;

extern int __lsb_check_params;
int shm_open (const char * arg0 , int arg1 , mode_t arg2 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	__lsb_output(4, "Invoking wrapper for shm_open()");
	if(!funcptr)
		#if defined __i386__
			funcptr = dlvsym(RTLD_NEXT, "shm_open", "GLIBC_2.2");
		#endif
		#if defined __ia64__
			funcptr = dlvsym(RTLD_NEXT, "shm_open", "GLIBC_2.2");
		#endif
		#if defined __powerpc__ && !defined __powerpc64__
			funcptr = dlvsym(RTLD_NEXT, "shm_open", "GLIBC_2.2");
		#endif
		#if defined __powerpc64__
			funcptr = dlvsym(RTLD_NEXT, "shm_open", "GLIBC_2.3");
		#endif
		#if defined __s390__ && !defined __s390x__
			funcptr = dlvsym(RTLD_NEXT, "shm_open", "GLIBC_2.2");
		#endif
		#if defined __x86_64__
			funcptr = dlvsym(RTLD_NEXT, "shm_open", "GLIBC_2.2.5");
		#endif
		#if defined __s390x__
			funcptr = dlvsym(RTLD_NEXT, "shm_open", "GLIBC_2.2");
		#endif
	if(!funcptr) {
		__lsb_output(-1, "Failed to load shm_open. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "shm_open() - validating");
		if( arg0 ) {
		validate_Rdaddress( arg0, "shm_open - arg0 (__name)");
		}
		validate_NULL_TYPETYPE(  arg0, "shm_open - arg0 (__name)");
		validate_NULL_TYPETYPE(  arg1, "shm_open - arg1 (__oflag)");
		validate_filemode(  arg2, "shm_open - arg2 (__mode)");
	}
	ret_value = funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
	return ret_value;
}
