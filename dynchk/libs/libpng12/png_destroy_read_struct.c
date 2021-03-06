// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <libpng12/png.h>
#undef png_destroy_read_struct
static void(*funcptr) (png_structpp , png_infopp , png_infopp ) = 0;

extern int __lsb_check_params;
void png_destroy_read_struct (png_structpp arg0 , png_infopp arg1 , png_infopp arg2 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for png_destroy_read_struct()");
	if(!funcptr)
		#if 1
			funcptr = dlvsym(RTLD_NEXT, "png_destroy_read_struct", "PNG12_0");
		#endif
	if(!funcptr) {
		__lsb_output(-1, "Failed to load png_destroy_read_struct. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "png_destroy_read_struct() - validating");
		validate_NULL_TYPETYPE(  arg0, "png_destroy_read_struct - arg0 (png_ptr_ptr)");
		validate_NULL_TYPETYPE(  arg1, "png_destroy_read_struct - arg1 (info_ptr_ptr)");
		validate_NULL_TYPETYPE(  arg2, "png_destroy_read_struct - arg2 (end_info_ptr_ptr)");
	}
	funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
}

