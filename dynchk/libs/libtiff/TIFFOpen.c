// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <tiffio.h>
#undef TIFFOpen
static TIFF *(*funcptr) (const char * , const char * ) = 0;

extern int __lsb_check_params;
TIFF * TIFFOpen (const char * arg0 , const char * arg1 )
{
	int reset_flag = __lsb_check_params;
	TIFF * ret_value  ;
	__lsb_output(4, "Invoking wrapper for TIFFOpen()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "TIFFOpen");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load TIFFOpen. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "TIFFOpen() - validating");
		if( arg0 ) {
		validate_Rdaddress( arg0, "TIFFOpen - arg0");
		}
		validate_NULL_TYPETYPE(  arg0, "TIFFOpen - arg0");
		if( arg1 ) {
		validate_Rdaddress( arg1, "TIFFOpen - arg1");
		}
		validate_NULL_TYPETYPE(  arg1, "TIFFOpen - arg1");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}

