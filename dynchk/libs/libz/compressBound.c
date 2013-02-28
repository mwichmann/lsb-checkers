// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <zlib.h>
#undef compressBound
static uLong(*funcptr) (uLong ) = 0;

extern int __lsb_check_params;
uLong compressBound (uLong arg0 )
{
	int reset_flag = __lsb_check_params;
	uLong ret_value  ;
	__lsb_output(4, "Invoking wrapper for compressBound()");
	if(!funcptr)
		#if 1
			funcptr = dlvsym(RTLD_NEXT, "compressBound", "ZLIB_1.2.0");
		#endif
	if(!funcptr) {
		__lsb_output(-1, "Failed to load compressBound. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "compressBound() - validating");
		validate_NULL_TYPETYPE(  arg0, "compressBound - arg0 (sourceLen)");
	}
	ret_value = funcptr(arg0);
	__lsb_check_params = reset_flag;
	return ret_value;
}

