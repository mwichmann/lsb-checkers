// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <X11/Xlib.h>
#include <X11/extensions/XKBstr.h>
#include <X11/XKBlib.h>
#undef XkbGetKeyModifierMap
static int(*funcptr) (Display * , unsigned int , unsigned int , XkbDescPtr ) = 0;

extern int __lsb_check_params;
int XkbGetKeyModifierMap (Display * arg0 , unsigned int arg1 , unsigned int arg2 , XkbDescPtr arg3 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	__lsb_output(4, "Invoking wrapper for XkbGetKeyModifierMap()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XkbGetKeyModifierMap");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load XkbGetKeyModifierMap. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "XkbGetKeyModifierMap() - validating");
		validate_RWaddress( arg0, "XkbGetKeyModifierMap - arg0");
		validate_NULL_TYPETYPE(  arg0, "XkbGetKeyModifierMap - arg0");
		validate_NULL_TYPETYPE(  arg1, "XkbGetKeyModifierMap - arg1");
		validate_NULL_TYPETYPE(  arg2, "XkbGetKeyModifierMap - arg2");
		validate_NULL_TYPETYPE(  arg3, "XkbGetKeyModifierMap - arg3");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3);
	__lsb_check_params = reset_flag;
	return ret_value;
}

