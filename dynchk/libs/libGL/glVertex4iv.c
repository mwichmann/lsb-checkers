// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <GL/gl.h>
#undef glVertex4iv
static void(*funcptr) (GLint * ) = 0;

extern int __lsb_check_params;
extern int __lsb_output(int, char*, ...);
void glVertex4iv (GLint * arg0 )
{
	int reset_flag = __lsb_check_params;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "glVertex4iv");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
	__lsb_output(5-__lsb_check_params, "glVertex4iv()");
	validate_RWaddress( arg0, "glVertex4iv - arg0");
		validate_NULL_TYPETYPE(  arg0, "glVertex4iv - arg0");
	}
	funcptr(arg0);
	__lsb_check_params = reset_flag;
}

