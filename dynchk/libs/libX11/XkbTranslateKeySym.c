// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include <dlfcn.h>
#include <X11/Xlib.h>
#include <X11/X.h>
#include <X11/XKBlib.h>
#undef XkbTranslateKeySym
static (*funcptr)(Display * , KeySym * , unsigned int , char * , int , int * ) = 0;

extern int __lsb_check_params;
 XkbTranslateKeySym(Display * arg0 , KeySym * arg1 , unsigned int arg2 , char * arg3 , int arg4 , int * arg5 )
{
	int reset_flag = __lsb_check_params;
	 ret_value ;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, " XkbTranslateKeySym ");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(5-reset_flag, "XkbTranslateKeySym()");
		validate_RWaddress( arg0, "XkbTranslateKeySym - arg0");
		validate_NULL_TYPETYPE(  arg0, "XkbTranslateKeySym - arg0");
		validate_RWaddress( arg1, "XkbTranslateKeySym - arg1");
		validate_NULL_TYPETYPE(  arg1, "XkbTranslateKeySym - arg1");
		validate_NULL_TYPETYPE(  arg2, "XkbTranslateKeySym - arg2");
		validate_RWaddress( arg3, "XkbTranslateKeySym - arg3");
		validate_NULL_TYPETYPE(  arg3, "XkbTranslateKeySym - arg3");
		validate_NULL_TYPETYPE(  arg4, "XkbTranslateKeySym - arg4");
		validate_RWaddress( arg5, "XkbTranslateKeySym - arg5");
		validate_NULL_TYPETYPE(  arg5, "XkbTranslateKeySym - arg5");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3, arg4, arg5);
	__lsb_check_params = reset_flag;
	return ret_value;
}

