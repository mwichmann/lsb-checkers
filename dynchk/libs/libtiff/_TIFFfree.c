// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <tiffio.h>
#undef _TIFFfree
static void(*funcptr) (void * ) = 0;

extern int __lsb_check_params;
void _TIFFfree (void * arg0 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for _TIFFfree()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "_TIFFfree");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load _TIFFfree. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "_TIFFfree() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "_TIFFfree - arg0 (p)");
		}
		validate_NULL_TYPETYPE(  arg0, "_TIFFfree - arg0 (p)");
	}
	funcptr(arg0);
	__lsb_check_params = reset_flag;
}

