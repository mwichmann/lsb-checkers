// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <X11/extensions/XKBgeom.h>
#undef XkbAllocGeomOverlayRows
static int(*funcptr) (XkbOverlayPtr , int ) = 0;

extern int __lsb_check_params;
extern int __lsb_output(int, char*, ...);
int XkbAllocGeomOverlayRows (XkbOverlayPtr arg0 , int arg1 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XkbAllocGeomOverlayRows");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
	__lsb_output(5-__lsb_check_params, "XkbAllocGeomOverlayRows()");
		validate_NULL_TYPETYPE(  arg0, "XkbAllocGeomOverlayRows - arg0");
		validate_NULL_TYPETYPE(  arg1, "XkbAllocGeomOverlayRows - arg1");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}

