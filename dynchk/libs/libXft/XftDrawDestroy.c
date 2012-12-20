// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <X11/Xft/Xft.h>
#undef XftDrawDestroy
static void(*funcptr) (XftDraw * ) = 0;

extern int __lsb_check_params;
void XftDrawDestroy (XftDraw * arg0 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for XftDrawDestroy()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XftDrawDestroy");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load XftDrawDestroy. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "XftDrawDestroy() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "XftDrawDestroy - arg0");
		}
		validate_NULL_TYPETYPE(  arg0, "XftDrawDestroy - arg0");
	}
	funcptr(arg0);
	__lsb_check_params = reset_flag;
}

