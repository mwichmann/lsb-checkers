// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <GL/gl.h>
#undef glGetPixelMapusv
static void(*funcptr) (GLenum , GLushort * ) = 0;

extern int __lsb_check_params;
extern int __lsb_output(int, char*, ...);
void glGetPixelMapusv (GLenum arg0 , GLushort * arg1 )
{
	int reset_flag = __lsb_check_params;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "glGetPixelMapusv");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
	__lsb_output(5-__lsb_check_params, "glGetPixelMapusv()");
		validate_NULL_TYPETYPE(  arg0, "glGetPixelMapusv - arg0");
	validate_RWaddress( arg1, "glGetPixelMapusv - arg1");
		validate_NULL_TYPETYPE(  arg1, "glGetPixelMapusv - arg1");
	}
	funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
}

