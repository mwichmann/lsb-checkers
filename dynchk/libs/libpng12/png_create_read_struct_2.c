// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <libpng12/png.h>
#undef png_create_read_struct_2
static png_structp(*funcptr) (png_const_charp , png_voidp , png_error_ptr , png_error_ptr , png_voidp , png_malloc_ptr , png_free_ptr ) = 0;

extern int __lsb_check_params;
png_structp png_create_read_struct_2 (png_const_charp arg0 , png_voidp arg1 , png_error_ptr arg2 , png_error_ptr arg3 , png_voidp arg4 , png_malloc_ptr arg5 , png_free_ptr arg6 )
{
	int reset_flag = __lsb_check_params;
	png_structp ret_value  ;
	__lsb_output(4, "Invoking wrapper for png_create_read_struct_2()");
	if(!funcptr)
		#if 1
			funcptr = dlvsym(RTLD_NEXT, "png_create_read_struct_2", "PNG12_0");
		#endif
	if(!funcptr) {
		__lsb_output(-1, "Failed to load png_create_read_struct_2. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "png_create_read_struct_2() - validating");
		validate_NULL_TYPETYPE(  arg0, "png_create_read_struct_2 - arg0 (user_png_ver)");
		validate_NULL_TYPETYPE(  arg1, "png_create_read_struct_2 - arg1 (error_ptr)");
		validate_NULL_TYPETYPE(  arg2, "png_create_read_struct_2 - arg2 (error_fn)");
		validate_NULL_TYPETYPE(  arg3, "png_create_read_struct_2 - arg3 (warn_fn)");
		validate_NULL_TYPETYPE(  arg4, "png_create_read_struct_2 - arg4 (mem_ptr)");
		validate_NULL_TYPETYPE(  arg5, "png_create_read_struct_2 - arg5 (malloc_fn)");
		validate_NULL_TYPETYPE(  arg6, "png_create_read_struct_2 - arg6 (free_fn)");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3, arg4, arg5, arg6);
	__lsb_check_params = reset_flag;
	return ret_value;
}

