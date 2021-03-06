// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <tiffio.h>
#include <tiff.h>
#include <stdarg.h>
#undef TIFFVSetField
static int(*funcptr) (TIFF * , uint32 , va_list ) = 0;

extern int __lsb_check_params;
int TIFFVSetField (TIFF * arg0 , uint32 arg1 , va_list arg2 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	__lsb_output(4, "Invoking wrapper for TIFFVSetField()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "TIFFVSetField");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load TIFFVSetField. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "TIFFVSetField() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "TIFFVSetField - arg0");
		}
		validate_NULL_TYPETYPE(  arg0, "TIFFVSetField - arg0");
		validate_NULL_TYPETYPE(  arg1, "TIFFVSetField - arg1");
		validate_NULL_TYPETYPE(  arg2, "TIFFVSetField - arg2");
	}
	ret_value = funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
	return ret_value;
}

