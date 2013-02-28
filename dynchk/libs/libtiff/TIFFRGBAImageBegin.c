// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <tiffio.h>
#undef TIFFRGBAImageBegin
static int(*funcptr) (TIFFRGBAImage * , TIFF * , int , char * ) = 0;

extern int __lsb_check_params;
int TIFFRGBAImageBegin (TIFFRGBAImage * arg0 , TIFF * arg1 , int arg2 , char * arg3 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	__lsb_output(4, "Invoking wrapper for TIFFRGBAImageBegin()");
	if(!funcptr)
		#if 1
			funcptr = dlvsym(RTLD_NEXT, "TIFFRGBAImageBegin", "LIBTIFF_4.0");
		#endif
	if(!funcptr) {
		__lsb_output(-1, "Failed to load TIFFRGBAImageBegin. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "TIFFRGBAImageBegin() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "TIFFRGBAImageBegin - arg0");
		}
		validate_NULL_TYPETYPE(  arg0, "TIFFRGBAImageBegin - arg0");
		if( arg1 ) {
		validate_RWaddress( arg1, "TIFFRGBAImageBegin - arg1");
		}
		validate_NULL_TYPETYPE(  arg1, "TIFFRGBAImageBegin - arg1");
		validate_NULL_TYPETYPE(  arg2, "TIFFRGBAImageBegin - arg2");
		if( arg3 ) {
		validate_RWaddress( arg3, "TIFFRGBAImageBegin - arg3");
		}
		validate_NULL_TYPETYPE(  arg3, "TIFFRGBAImageBegin - arg3");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3);
	__lsb_check_params = reset_flag;
	return ret_value;
}

