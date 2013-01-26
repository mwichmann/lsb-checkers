// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <tiffio.h>
#undef TIFFFileName
static const char *(*funcptr) (TIFF * ) = 0;

extern int __lsb_check_params;
const char * TIFFFileName (TIFF * arg0 )
{
	int reset_flag = __lsb_check_params;
	const char * ret_value  ;
	__lsb_output(4, "Invoking wrapper for TIFFFileName()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "TIFFFileName");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load TIFFFileName. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "TIFFFileName() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "TIFFFileName - arg0");
		}
		validate_NULL_TYPETYPE(  arg0, "TIFFFileName - arg0");
	}
	ret_value = funcptr(arg0);
	__lsb_check_params = reset_flag;
	return ret_value;
}
