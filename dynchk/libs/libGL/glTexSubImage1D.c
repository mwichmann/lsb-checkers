// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include <dlfcn.h>
#include <GL/gl.h>
#undef glTexSubImage1D
static void(*funcptr) (GLenum , GLint , GLint , GLsizei , GLenum , GLenum , GLvoid * ) = 0;

extern int __lsb_check_params;
void glTexSubImage1D (GLenum arg0 , GLint arg1 , GLint arg2 , GLsizei arg3 , GLenum arg4 , GLenum arg5 , GLvoid * arg6 )
{
	int reset_flag = __lsb_check_params;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, " glTexSubImage1D ");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(5-reset_flag, "glTexSubImage1D()");
		validate_NULL_TYPETYPE(  arg0, "glTexSubImage1D - arg0");
		validate_NULL_TYPETYPE(  arg1, "glTexSubImage1D - arg1");
		validate_NULL_TYPETYPE(  arg2, "glTexSubImage1D - arg2");
		validate_NULL_TYPETYPE(  arg3, "glTexSubImage1D - arg3");
		validate_NULL_TYPETYPE(  arg4, "glTexSubImage1D - arg4");
		validate_NULL_TYPETYPE(  arg5, "glTexSubImage1D - arg5");
		validate_RWaddress( arg6, "glTexSubImage1D - arg6");
		validate_NULL_TYPETYPE(  arg6, "glTexSubImage1D - arg6");
	}
	funcptr(arg0, arg1, arg2, arg3, arg4, arg5, arg6);
	__lsb_check_params = reset_flag;
}

