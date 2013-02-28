// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <tiffio.h>
#include <tiff.h>
#undef TIFFReadRGBAImage
static int(*funcptr) (TIFF * , uint32 , uint32 , uint32 * , int ) = 0;

extern int __lsb_check_params;
int TIFFReadRGBAImage (TIFF * arg0 , uint32 arg1 , uint32 arg2 , uint32 * arg3 , int arg4 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	__lsb_output(4, "Invoking wrapper for TIFFReadRGBAImage()");
	if(!funcptr)
		#if 1
			funcptr = dlvsym(RTLD_NEXT, "TIFFReadRGBAImage", "LIBTIFF_4.0");
		#endif
	if(!funcptr) {
		__lsb_output(-1, "Failed to load TIFFReadRGBAImage. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "TIFFReadRGBAImage() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "TIFFReadRGBAImage - arg0");
		}
		validate_NULL_TYPETYPE(  arg0, "TIFFReadRGBAImage - arg0");
		validate_NULL_TYPETYPE(  arg1, "TIFFReadRGBAImage - arg1");
		validate_NULL_TYPETYPE(  arg2, "TIFFReadRGBAImage - arg2");
		if( arg3 ) {
		validate_RWaddress( arg3, "TIFFReadRGBAImage - arg3");
		}
		validate_NULL_TYPETYPE(  arg3, "TIFFReadRGBAImage - arg3");
		validate_NULL_TYPETYPE(  arg4, "TIFFReadRGBAImage - arg4");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3, arg4);
	__lsb_check_params = reset_flag;
	return ret_value;
}

