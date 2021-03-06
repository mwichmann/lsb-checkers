// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <tiffio.h>
#undef TIFFReadDirectory
static int(*funcptr) (TIFF * ) = 0;

extern int __lsb_check_params;
int TIFFReadDirectory (TIFF * arg0 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	__lsb_output(4, "Invoking wrapper for TIFFReadDirectory()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "TIFFReadDirectory");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load TIFFReadDirectory. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "TIFFReadDirectory() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "TIFFReadDirectory - arg0 (tif)");
		}
		validate_NULL_TYPETYPE(  arg0, "TIFFReadDirectory - arg0 (tif)");
	}
	ret_value = funcptr(arg0);
	__lsb_check_params = reset_flag;
	return ret_value;
}

