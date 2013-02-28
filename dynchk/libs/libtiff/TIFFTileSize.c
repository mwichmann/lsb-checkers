// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <tiffio.h>
#undef TIFFTileSize
static tmsize_t(*funcptr) (TIFF * ) = 0;

extern int __lsb_check_params;
tmsize_t TIFFTileSize (TIFF * arg0 )
{
	int reset_flag = __lsb_check_params;
	tmsize_t ret_value  ;
	__lsb_output(4, "Invoking wrapper for TIFFTileSize()");
	if(!funcptr)
		#if 1
			funcptr = dlvsym(RTLD_NEXT, "TIFFTileSize", "LIBTIFF_4.0");
		#endif
	if(!funcptr) {
		__lsb_output(-1, "Failed to load TIFFTileSize. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "TIFFTileSize() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "TIFFTileSize - arg0 (tif)");
		}
		validate_NULL_TYPETYPE(  arg0, "TIFFTileSize - arg0 (tif)");
	}
	ret_value = funcptr(arg0);
	__lsb_check_params = reset_flag;
	return ret_value;
}

