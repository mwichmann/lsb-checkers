// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <tiffio.h>
#undef TIFFSetErrorHandlerExt
static TIFFErrorHandlerExt(*funcptr) (TIFFErrorHandlerExt ) = 0;

extern int __lsb_check_params;
TIFFErrorHandlerExt TIFFSetErrorHandlerExt (TIFFErrorHandlerExt arg0 )
{
	int reset_flag = __lsb_check_params;
	TIFFErrorHandlerExt ret_value  ;
	__lsb_output(4, "Invoking wrapper for TIFFSetErrorHandlerExt()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "TIFFSetErrorHandlerExt");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load TIFFSetErrorHandlerExt. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "TIFFSetErrorHandlerExt() - validating");
		validate_NULL_TYPETYPE(  arg0, "TIFFSetErrorHandlerExt - arg0");
	}
	ret_value = funcptr(arg0);
	__lsb_check_params = reset_flag;
	return ret_value;
}

