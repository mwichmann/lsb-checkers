// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <GL/gl.h>
#undef glMap1d
static void(*funcptr) (GLenum , GLdouble , GLdouble , GLint , GLint , GLdouble * ) = 0;

extern int __lsb_check_params;
extern int __lsb_output(int, char*, ...);
void glMap1d (GLenum arg0 , GLdouble arg1 , GLdouble arg2 , GLint arg3 , GLint arg4 , GLdouble * arg5 )
{
	int reset_flag = __lsb_check_params;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "glMap1d");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
	__lsb_output(5-__lsb_check_params, "glMap1d()");
		validate_NULL_TYPETYPE(  arg0, "glMap1d - arg0");
		validate_NULL_TYPETYPE(  arg1, "glMap1d - arg1");
		validate_NULL_TYPETYPE(  arg2, "glMap1d - arg2");
		validate_NULL_TYPETYPE(  arg3, "glMap1d - arg3");
		validate_NULL_TYPETYPE(  arg4, "glMap1d - arg4");
	validate_RWaddress( arg5, "glMap1d - arg5");
		validate_NULL_TYPETYPE(  arg5, "glMap1d - arg5");
	}
	funcptr(arg0, arg1, arg2, arg3, arg4, arg5);
	__lsb_check_params = reset_flag;
}

