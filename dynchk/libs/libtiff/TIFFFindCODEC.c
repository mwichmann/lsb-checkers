// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <tiff.h>
#include <tiffio.h>
#undef TIFFFindCODEC
static const TIFFCodec *(*funcptr) (uint16 ) = 0;

extern int __lsb_check_params;
const TIFFCodec * TIFFFindCODEC (uint16 arg0 )
{
	int reset_flag = __lsb_check_params;
	const TIFFCodec * ret_value  ;
	__lsb_output(4, "Invoking wrapper for TIFFFindCODEC()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "TIFFFindCODEC");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load TIFFFindCODEC. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "TIFFFindCODEC() - validating");
		validate_NULL_TYPETYPE(  arg0, "TIFFFindCODEC - arg0");
	}
	ret_value = funcptr(arg0);
	__lsb_check_params = reset_flag;
	return ret_value;
}

