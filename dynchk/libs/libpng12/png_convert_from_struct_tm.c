// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <libpng12/png.h>
#include <time.h>
#undef png_convert_from_struct_tm
static void(*funcptr) (png_timep , struct tm * ) = 0;

extern int __lsb_check_params;
void png_convert_from_struct_tm (png_timep arg0 , struct tm * arg1 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for png_convert_from_struct_tm()");
	if(!funcptr)
		#if 1
			funcptr = dlvsym(RTLD_NEXT, "png_convert_from_struct_tm", "PNG12_0");
		#endif
	if(!funcptr) {
		__lsb_output(-1, "Failed to load png_convert_from_struct_tm. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "png_convert_from_struct_tm() - validating");
		validate_NULL_TYPETYPE(  arg0, "png_convert_from_struct_tm - arg0 (ptime)");
		if( arg1 ) {
		validate_RWaddress( arg1, "png_convert_from_struct_tm - arg1 (ttime)");
		}
		validate_NULL_TYPETYPE(  arg1, "png_convert_from_struct_tm - arg1 (ttime)");
	}
	funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
}

