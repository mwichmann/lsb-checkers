// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <aio.h>
#undef aio_fsync64
static int(*funcptr) (int , struct aiocb64 * ) = 0;

extern int __lsb_check_params;
int aio_fsync64 (int arg0 , struct aiocb64 * arg1 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	__lsb_output(4, "Invoking wrapper for aio_fsync64()");
	if(!funcptr)
		#if defined __i386__
			funcptr = dlvsym(RTLD_NEXT, "aio_fsync64", "GLIBC_2.1");
		#endif
		#if defined __ia64__
			funcptr = dlvsym(RTLD_NEXT, "aio_fsync64", "GLIBC_2.1");
		#endif
		#if defined __powerpc__ && !defined __powerpc64__
			funcptr = dlvsym(RTLD_NEXT, "aio_fsync64", "GLIBC_2.1");
		#endif
		#if defined __s390__ && !defined __s390x__
			funcptr = dlvsym(RTLD_NEXT, "aio_fsync64", "GLIBC_2.1");
		#endif
		#if defined __s390x__
			funcptr = dlvsym(RTLD_NEXT, "aio_fsync64", "GLIBC_2.2");
		#endif
		#if defined __x86_64__
			funcptr = dlvsym(RTLD_NEXT, "aio_fsync64", "GLIBC_2.2.5");
		#endif
		#if defined __powerpc64__
			funcptr = dlvsym(RTLD_NEXT, "aio_fsync64", "GLIBC_2.3");
		#endif
	if(!funcptr) {
		__lsb_output(-1, "Failed to load aio_fsync64. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "aio_fsync64() - validating");
		validate_NULL_TYPETYPE(  arg0, "aio_fsync64 - arg0 (operation)");
		if( arg1 ) {
		validate_RWaddress( arg1, "aio_fsync64 - arg1 (aiocbp)");
		}
		validate_NULL_TYPETYPE(  arg1, "aio_fsync64 - arg1 (aiocbp)");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}

