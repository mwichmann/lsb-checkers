// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <GL/gl.h>
#undef glColorMaterial
static void(*funcptr) (GLenum , GLenum ) = 0;

extern int __lsb_check_params;
extern int __lsb_output(int, char*, ...);
void glColorMaterial (GLenum arg0 , GLenum arg1 )
{
	int reset_flag = __lsb_check_params;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "glColorMaterial");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
	__lsb_output(5-__lsb_check_params, "glColorMaterial()");
		validate_NULL_TYPETYPE(  arg0, "glColorMaterial - arg0");
		validate_NULL_TYPETYPE(  arg1, "glColorMaterial - arg1");
	}
	funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
}

