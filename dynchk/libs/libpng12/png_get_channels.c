// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <libpng12/png.h>
#undef png_get_channels
static png_byte(*funcptr) (png_structp , png_infop ) = 0;

extern int __lsb_check_params;
png_byte png_get_channels (png_structp arg0 , png_infop arg1 )
{
	int reset_flag = __lsb_check_params;
	png_byte ret_value  ;
	__lsb_output(4, "Invoking wrapper for png_get_channels()");
	if(!funcptr)
		#if 1
			funcptr = dlvsym(RTLD_NEXT, "png_get_channels", "PNG12_0");
		#endif
	if(!funcptr) {
		__lsb_output(-1, "Failed to load png_get_channels. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "png_get_channels() - validating");
		validate_NULL_TYPETYPE(  arg0, "png_get_channels - arg0 (png_ptr)");
		validate_NULL_TYPETYPE(  arg1, "png_get_channels - arg1 (info_ptr)");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}

