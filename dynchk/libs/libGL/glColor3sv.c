// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include <dlfcn.h>
#include <GL/gl.h>
#undef glColor3sv
static void(*funcptr) (GLshort * ) = 0;

extern int __lsb_check_params;
void glColor3sv (GLshort * arg0 )
{
	int reset_flag = __lsb_check_params;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, " glColor3sv ");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(5-reset_flag, "glColor3sv()");
		validate_RWaddress( arg0, "glColor3sv - arg0");
		validate_NULL_TYPETYPE(  arg0, "glColor3sv - arg0");
	}
	funcptr(arg0);
	__lsb_check_params = reset_flag;
}

