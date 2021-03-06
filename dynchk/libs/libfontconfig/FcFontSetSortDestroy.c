// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <fontconfig/fontconfig.h>
#undef FcFontSetSortDestroy
static void(*funcptr) (FcFontSet * ) = 0;

extern int __lsb_check_params;
void FcFontSetSortDestroy (FcFontSet * arg0 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for FcFontSetSortDestroy()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "FcFontSetSortDestroy");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load FcFontSetSortDestroy. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "FcFontSetSortDestroy() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "FcFontSetSortDestroy - arg0 (fs)");
		}
		validate_NULL_TYPETYPE(  arg0, "FcFontSetSortDestroy - arg0 (fs)");
	}
	funcptr(arg0);
	__lsb_check_params = reset_flag;
}

