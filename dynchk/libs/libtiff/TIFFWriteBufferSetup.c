// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <tiffio.h>
#undef TIFFWriteBufferSetup
static int(*funcptr) (TIFF * , void * , tmsize_t ) = 0;

extern int __lsb_check_params;
int TIFFWriteBufferSetup (TIFF * arg0 , void * arg1 , tmsize_t arg2 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	__lsb_output(4, "Invoking wrapper for TIFFWriteBufferSetup()");
	if(!funcptr)
		#if 1
			funcptr = dlvsym(RTLD_NEXT, "TIFFWriteBufferSetup", "LIBTIFF_4.0");
		#endif
	if(!funcptr) {
		__lsb_output(-1, "Failed to load TIFFWriteBufferSetup. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "TIFFWriteBufferSetup() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "TIFFWriteBufferSetup - arg0 (tif)");
		}
		validate_NULL_TYPETYPE(  arg0, "TIFFWriteBufferSetup - arg0 (tif)");
		if( arg1 ) {
		validate_RWaddress( arg1, "TIFFWriteBufferSetup - arg1 (bp)");
		}
		validate_NULL_TYPETYPE(  arg1, "TIFFWriteBufferSetup - arg1 (bp)");
		validate_NULL_TYPETYPE(  arg2, "TIFFWriteBufferSetup - arg2 (size)");
	}
	ret_value = funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
	return ret_value;
}

