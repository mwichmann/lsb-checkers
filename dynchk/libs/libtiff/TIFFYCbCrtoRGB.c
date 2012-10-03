// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <tiffio.h>
#include <tiff.h>
#undef TIFFYCbCrtoRGB
static void(*funcptr) (TIFFYCbCrToRGB * , uint32 , int32 , int32 , uint32 * , uint32 * , uint32 * ) = 0;

extern int __lsb_check_params;
void TIFFYCbCrtoRGB (TIFFYCbCrToRGB * arg0 , uint32 arg1 , int32 arg2 , int32 arg3 , uint32 * arg4 , uint32 * arg5 , uint32 * arg6 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for TIFFYCbCrtoRGB()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "TIFFYCbCrtoRGB");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load TIFFYCbCrtoRGB. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "TIFFYCbCrtoRGB() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "TIFFYCbCrtoRGB - arg0");
		}
		validate_NULL_TYPETYPE(  arg0, "TIFFYCbCrtoRGB - arg0");
		validate_NULL_TYPETYPE(  arg1, "TIFFYCbCrtoRGB - arg1");
		validate_NULL_TYPETYPE(  arg2, "TIFFYCbCrtoRGB - arg2");
		validate_NULL_TYPETYPE(  arg3, "TIFFYCbCrtoRGB - arg3");
		if( arg4 ) {
		validate_RWaddress( arg4, "TIFFYCbCrtoRGB - arg4");
		}
		validate_NULL_TYPETYPE(  arg4, "TIFFYCbCrtoRGB - arg4");
		if( arg5 ) {
		validate_RWaddress( arg5, "TIFFYCbCrtoRGB - arg5");
		}
		validate_NULL_TYPETYPE(  arg5, "TIFFYCbCrtoRGB - arg5");
		if( arg6 ) {
		validate_RWaddress( arg6, "TIFFYCbCrtoRGB - arg6");
		}
		validate_NULL_TYPETYPE(  arg6, "TIFFYCbCrtoRGB - arg6");
	}
	funcptr(arg0, arg1, arg2, arg3, arg4, arg5, arg6);
	__lsb_check_params = reset_flag;
}

