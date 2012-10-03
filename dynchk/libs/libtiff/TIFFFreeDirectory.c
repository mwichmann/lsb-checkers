// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <tiffio.h>
#undef TIFFFreeDirectory
static void(*funcptr) (TIFF * ) = 0;

extern int __lsb_check_params;
void TIFFFreeDirectory (TIFF * arg0 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for TIFFFreeDirectory()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "TIFFFreeDirectory");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load TIFFFreeDirectory. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "TIFFFreeDirectory() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "TIFFFreeDirectory - arg0");
		}
		validate_NULL_TYPETYPE(  arg0, "TIFFFreeDirectory - arg0");
	}
	funcptr(arg0);
	__lsb_check_params = reset_flag;
}

