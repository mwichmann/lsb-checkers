// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <tiffio.h>
#undef TIFFGetClientInfo
static void *(*funcptr) (TIFF * , const char * ) = 0;

extern int __lsb_check_params;
void * TIFFGetClientInfo (TIFF * arg0 , const char * arg1 )
{
	int reset_flag = __lsb_check_params;
	void * ret_value  ;
	__lsb_output(4, "Invoking wrapper for TIFFGetClientInfo()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "TIFFGetClientInfo");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load TIFFGetClientInfo. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "TIFFGetClientInfo() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "TIFFGetClientInfo - arg0");
		}
		validate_NULL_TYPETYPE(  arg0, "TIFFGetClientInfo - arg0");
		if( arg1 ) {
		validate_Rdaddress( arg1, "TIFFGetClientInfo - arg1");
		}
		validate_NULL_TYPETYPE(  arg1, "TIFFGetClientInfo - arg1");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}
