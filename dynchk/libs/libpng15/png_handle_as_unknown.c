// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <libpng15/png.h>
#include <libpng15/pngconf.h>
#undef png_handle_as_unknown
static int(*funcptr) (png_structp , png_const_bytep ) = 0;

extern int __lsb_check_params;
int png_handle_as_unknown (png_structp arg0 , png_const_bytep arg1 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	__lsb_output(4, "Invoking wrapper for png_handle_as_unknown()");
	if(!funcptr)
		#if 1
			funcptr = dlvsym(RTLD_NEXT, "png_handle_as_unknown", "PNG15_0");
		#endif
	if(!funcptr) {
		__lsb_output(-1, "Failed to load png_handle_as_unknown. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "png_handle_as_unknown() - validating");
		validate_NULL_TYPETYPE(  arg0, "png_handle_as_unknown - arg0 (png_ptr)");
		validate_NULL_TYPETYPE(  arg1, "png_handle_as_unknown - arg1 (chunk_name)");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}

