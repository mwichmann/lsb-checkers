// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include <dlfcn.h>
#include <GL/gl.h>
#undef glRectiv
static void(*funcptr) (GLint * , GLint * ) = 0;

extern int __lsb_check_params;
void glRectiv (GLint * arg0 , GLint * arg1 )
{
	int reset_flag = __lsb_check_params;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, " glRectiv ");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(5-reset_flag, "glRectiv()");
		validate_RWaddress( arg0, "glRectiv - arg0");
		validate_NULL_TYPETYPE(  arg0, "glRectiv - arg0");
		validate_RWaddress( arg1, "glRectiv - arg1");
		validate_NULL_TYPETYPE(  arg1, "glRectiv - arg1");
	}
	funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
}

