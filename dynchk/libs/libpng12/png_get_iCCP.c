// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <libpng12/png.h>
#undef png_get_iCCP
static png_uint_32(*funcptr) (png_structp , png_infop , png_charpp , int * , png_charpp , png_uint_32 * ) = 0;

extern int __lsb_check_params;
png_uint_32 png_get_iCCP (png_structp arg0 , png_infop arg1 , png_charpp arg2 , int * arg3 , png_charpp arg4 , png_uint_32 * arg5 )
{
	int reset_flag = __lsb_check_params;
	png_uint_32 ret_value  ;
	__lsb_output(4, "Invoking wrapper for png_get_iCCP()");
	if(!funcptr)
		#if 1
			funcptr = dlvsym(RTLD_NEXT, "png_get_iCCP", "PNG12_0");
		#endif
	if(!funcptr) {
		__lsb_output(-1, "Failed to load png_get_iCCP. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "png_get_iCCP() - validating");
		validate_NULL_TYPETYPE(  arg0, "png_get_iCCP - arg0 (png_ptr)");
		validate_NULL_TYPETYPE(  arg1, "png_get_iCCP - arg1 (info_ptr)");
		validate_NULL_TYPETYPE(  arg2, "png_get_iCCP - arg2 (name)");
		if( arg3 ) {
		validate_RWaddress( arg3, "png_get_iCCP - arg3 (compression_type)");
		}
		validate_NULL_TYPETYPE(  arg3, "png_get_iCCP - arg3 (compression_type)");
		validate_NULL_TYPETYPE(  arg4, "png_get_iCCP - arg4 (profile)");
		if( arg5 ) {
		validate_RWaddress( arg5, "png_get_iCCP - arg5 (proflen)");
		}
		validate_NULL_TYPETYPE(  arg5, "png_get_iCCP - arg5 (proflen)");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3, arg4, arg5);
	__lsb_check_params = reset_flag;
	return ret_value;
}

