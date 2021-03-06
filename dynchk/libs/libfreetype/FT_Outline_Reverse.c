// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <freetype/ftimage.h>
#include <freetype/ftoutln.h>
#undef FT_Outline_Reverse
static void(*funcptr) (FT_Outline * ) = 0;

extern int __lsb_check_params;
void FT_Outline_Reverse (FT_Outline * arg0 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for FT_Outline_Reverse()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "FT_Outline_Reverse");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load FT_Outline_Reverse. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "FT_Outline_Reverse() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "FT_Outline_Reverse - arg0");
		}
		validate_NULL_TYPETYPE(  arg0, "FT_Outline_Reverse - arg0");
	}
	funcptr(arg0);
	__lsb_check_params = reset_flag;
}

