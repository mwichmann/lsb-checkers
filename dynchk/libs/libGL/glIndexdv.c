// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include <dlfcn.h>
#include <GL/gl.h>
#undef glIndexdv
static void(*funcptr) (GLdouble * ) = 0;

extern int __lsb_check_params;
void glIndexdv (GLdouble * arg0 )
{
	int reset_flag = __lsb_check_params;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, " glIndexdv ");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(5-reset_flag, "glIndexdv()");
		validate_RWaddress( arg0, "glIndexdv - arg0");
		validate_NULL_TYPETYPE(  arg0, "glIndexdv - arg0");
	}
	funcptr(arg0);
	__lsb_check_params = reset_flag;
}

