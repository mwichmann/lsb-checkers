// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <libpng15/png.h>
#include <libpng15/pngconf.h>
#undef png_write_chunk_start
static void(*funcptr) (png_structp , png_const_bytep , png_uint_32 ) = 0;

extern int __lsb_check_params;
void png_write_chunk_start (png_structp arg0 , png_const_bytep arg1 , png_uint_32 arg2 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for png_write_chunk_start()");
	if(!funcptr)
		#if 1
			funcptr = dlvsym(RTLD_NEXT, "png_write_chunk_start", "PNG15_0");
		#endif
	if(!funcptr) {
		__lsb_output(-1, "Failed to load png_write_chunk_start. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "png_write_chunk_start() - validating");
		validate_NULL_TYPETYPE(  arg0, "png_write_chunk_start - arg0 (png_ptr)");
		validate_NULL_TYPETYPE(  arg1, "png_write_chunk_start - arg1 (chunk_name)");
		validate_NULL_TYPETYPE(  arg2, "png_write_chunk_start - arg2 (length)");
	}
	funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
}

