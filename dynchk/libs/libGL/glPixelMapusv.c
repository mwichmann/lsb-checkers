// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <GL/gl.h>
#undef glPixelMapusv
static void(*funcptr) (GLenum , GLint , GLushort * ) = 0;

extern int __lsb_check_params;
extern int __lsb_output(int, char*, ...);
void glPixelMapusv (GLenum arg0 , GLint arg1 , GLushort * arg2 )
{
	int reset_flag = __lsb_check_params;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "glPixelMapusv");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
	__lsb_output(5-__lsb_check_params, "glPixelMapusv()");
		validate_NULL_TYPETYPE(  arg0, "glPixelMapusv - arg0");
		validate_NULL_TYPETYPE(  arg1, "glPixelMapusv - arg1");
	validate_RWaddress( arg2, "glPixelMapusv - arg2");
		validate_NULL_TYPETYPE(  arg2, "glPixelMapusv - arg2");
	}
	funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
}

