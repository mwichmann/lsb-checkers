// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <X11/extensions/XKBstr.h>
#include <X11/X.h>
#include <X11/XKBlib.h>
#undef XkbApplyCompatMapToKey
static int(*funcptr) (XkbDescPtr , KeyCode , XkbChangesPtr ) = 0;

extern int __lsb_check_params;
int XkbApplyCompatMapToKey (XkbDescPtr arg0 , KeyCode arg1 , XkbChangesPtr arg2 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	__lsb_output(4, "Invoking wrapper for XkbApplyCompatMapToKey()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XkbApplyCompatMapToKey");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load XkbApplyCompatMapToKey. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "XkbApplyCompatMapToKey() - validating");
		validate_NULL_TYPETYPE(  arg0, "XkbApplyCompatMapToKey - arg0");
		validate_NULL_TYPETYPE(  arg1, "XkbApplyCompatMapToKey - arg1");
		validate_NULL_TYPETYPE(  arg2, "XkbApplyCompatMapToKey - arg2");
	}
	ret_value = funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
	return ret_value;
}

