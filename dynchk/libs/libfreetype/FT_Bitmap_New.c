// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <freetype/ftimage.h>
#include <freetype/ftbitmap.h>
#undef FT_Bitmap_New
static void(*funcptr) (FT_Bitmap * ) = 0;

extern int __lsb_check_params;
void FT_Bitmap_New (FT_Bitmap * arg0 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for FT_Bitmap_New()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "FT_Bitmap_New");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load FT_Bitmap_New. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "FT_Bitmap_New() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "FT_Bitmap_New - arg0");
		}
		validate_NULL_TYPETYPE(  arg0, "FT_Bitmap_New - arg0");
	}
	funcptr(arg0);
	__lsb_check_params = reset_flag;
}
