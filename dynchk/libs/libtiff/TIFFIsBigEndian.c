// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <tiffio.h>
#undef TIFFIsBigEndian
static int(*funcptr) (TIFF * ) = 0;

extern int __lsb_check_params;
int TIFFIsBigEndian (TIFF * arg0 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	__lsb_output(4, "Invoking wrapper for TIFFIsBigEndian()");
	if(!funcptr)
		#if 1
			funcptr = dlvsym(RTLD_NEXT, "TIFFIsBigEndian", "LIBTIFF_4.0");
		#endif
	if(!funcptr) {
		__lsb_output(-1, "Failed to load TIFFIsBigEndian. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "TIFFIsBigEndian() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "TIFFIsBigEndian - arg0");
		}
		validate_NULL_TYPETYPE(  arg0, "TIFFIsBigEndian - arg0");
	}
	ret_value = funcptr(arg0);
	__lsb_check_params = reset_flag;
	return ret_value;
}

