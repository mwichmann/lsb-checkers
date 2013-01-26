// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <tiffio.h>
#include <tiff.h>
#undef TIFFWriteScanline
static int(*funcptr) (TIFF * , void * , uint32 , uint16 ) = 0;

extern int __lsb_check_params;
int TIFFWriteScanline (TIFF * arg0 , void * arg1 , uint32 arg2 , uint16 arg3 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	__lsb_output(4, "Invoking wrapper for TIFFWriteScanline()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "TIFFWriteScanline");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load TIFFWriteScanline. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "TIFFWriteScanline() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "TIFFWriteScanline - arg0 (tif)");
		}
		validate_NULL_TYPETYPE(  arg0, "TIFFWriteScanline - arg0 (tif)");
		if( arg1 ) {
		validate_RWaddress( arg1, "TIFFWriteScanline - arg1 (buf)");
		}
		validate_NULL_TYPETYPE(  arg1, "TIFFWriteScanline - arg1 (buf)");
		validate_NULL_TYPETYPE(  arg2, "TIFFWriteScanline - arg2 (row)");
		validate_NULL_TYPETYPE(  arg3, "TIFFWriteScanline - arg3 (sample)");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3);
	__lsb_check_params = reset_flag;
	return ret_value;
}
