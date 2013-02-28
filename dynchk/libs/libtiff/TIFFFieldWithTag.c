// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <tiffio.h>
#include <tiff.h>
#undef TIFFFieldWithTag
static const TIFFField *(*funcptr) (TIFF * , uint32 ) = 0;

extern int __lsb_check_params;
const TIFFField * TIFFFieldWithTag (TIFF * arg0 , uint32 arg1 )
{
	int reset_flag = __lsb_check_params;
	const TIFFField * ret_value  ;
	__lsb_output(4, "Invoking wrapper for TIFFFieldWithTag()");
	if(!funcptr)
		#if 1
			funcptr = dlvsym(RTLD_NEXT, "TIFFFieldWithTag", "LIBTIFF_4.0");
		#endif
	if(!funcptr) {
		__lsb_output(-1, "Failed to load TIFFFieldWithTag. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "TIFFFieldWithTag() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "TIFFFieldWithTag - arg0");
		}
		validate_NULL_TYPETYPE(  arg0, "TIFFFieldWithTag - arg0");
		validate_NULL_TYPETYPE(  arg1, "TIFFFieldWithTag - arg1");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}

