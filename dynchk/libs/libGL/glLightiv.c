// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include <dlfcn.h>
#include <GL/gl.h>
#undef glLightiv
static void(*funcptr) (GLenum , GLenum , GLint * ) = 0;

extern int __lsb_check_params;
void glLightiv (GLenum arg0 , GLenum arg1 , GLint * arg2 )
{
	int reset_flag = __lsb_check_params;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, " glLightiv ");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(5-reset_flag, "glLightiv()");
		validate_NULL_TYPETYPE(  arg0, "glLightiv - arg0");
		validate_NULL_TYPETYPE(  arg1, "glLightiv - arg1");
		validate_RWaddress( arg2, "glLightiv - arg2");
		validate_NULL_TYPETYPE(  arg2, "glLightiv - arg2");
	}
	funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
}

