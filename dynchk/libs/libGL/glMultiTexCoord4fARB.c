// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <GL/gl.h>
#undef glMultiTexCoord4fARB
static void(*funcptr) (GLenum , GLfloat , GLfloat , GLfloat , GLfloat ) = 0;

extern int __lsb_check_params;
extern int __lsb_output(int, char*, ...);
void glMultiTexCoord4fARB (GLenum arg0 , GLfloat arg1 , GLfloat arg2 , GLfloat arg3 , GLfloat arg4 )
{
	int reset_flag = __lsb_check_params;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "glMultiTexCoord4fARB");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
	__lsb_output(5-__lsb_check_params, "glMultiTexCoord4fARB()");
		validate_NULL_TYPETYPE(  arg0, "glMultiTexCoord4fARB - arg0");
		validate_NULL_TYPETYPE(  arg1, "glMultiTexCoord4fARB - arg1");
		validate_NULL_TYPETYPE(  arg2, "glMultiTexCoord4fARB - arg2");
		validate_NULL_TYPETYPE(  arg3, "glMultiTexCoord4fARB - arg3");
		validate_NULL_TYPETYPE(  arg4, "glMultiTexCoord4fARB - arg4");
	}
	funcptr(arg0, arg1, arg2, arg3, arg4);
	__lsb_check_params = reset_flag;
}

