// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <tiffio.h>
#include <tiff.h>
#undef TIFFWriteTile
static tmsize_t(*funcptr) (TIFF * , void * , uint32 , uint32 , uint32 , uint16 ) = 0;

extern int __lsb_check_params;
tmsize_t TIFFWriteTile (TIFF * arg0 , void * arg1 , uint32 arg2 , uint32 arg3 , uint32 arg4 , uint16 arg5 )
{
	int reset_flag = __lsb_check_params;
	tmsize_t ret_value  ;
	__lsb_output(4, "Invoking wrapper for TIFFWriteTile()");
	if(!funcptr)
		#if 1
			funcptr = dlvsym(RTLD_NEXT, "TIFFWriteTile", "LIBTIFF_4.0");
		#endif
	if(!funcptr) {
		__lsb_output(-1, "Failed to load TIFFWriteTile. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "TIFFWriteTile() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "TIFFWriteTile - arg0 (tif)");
		}
		validate_NULL_TYPETYPE(  arg0, "TIFFWriteTile - arg0 (tif)");
		if( arg1 ) {
		validate_RWaddress( arg1, "TIFFWriteTile - arg1 (buf)");
		}
		validate_NULL_TYPETYPE(  arg1, "TIFFWriteTile - arg1 (buf)");
		validate_NULL_TYPETYPE(  arg2, "TIFFWriteTile - arg2 (x)");
		validate_NULL_TYPETYPE(  arg3, "TIFFWriteTile - arg3 (y)");
		validate_NULL_TYPETYPE(  arg4, "TIFFWriteTile - arg4 (z)");
		validate_NULL_TYPETYPE(  arg5, "TIFFWriteTile - arg5 (s)");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3, arg4, arg5);
	__lsb_check_params = reset_flag;
	return ret_value;
}

