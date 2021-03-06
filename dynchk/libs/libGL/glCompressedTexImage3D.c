// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <GL/gl.h>
#undef glCompressedTexImage3D
static void(*funcptr) (GLenum , GLint , GLenum , GLsizei , GLsizei , GLsizei , GLint , GLsizei , const GLvoid * ) = 0;

extern int __lsb_check_params;
void glCompressedTexImage3D (GLenum arg0 , GLint arg1 , GLenum arg2 , GLsizei arg3 , GLsizei arg4 , GLsizei arg5 , GLint arg6 , GLsizei arg7 , const GLvoid * arg8 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for glCompressedTexImage3D()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "glCompressedTexImage3D");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load glCompressedTexImage3D. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "glCompressedTexImage3D() - validating");
		validate_NULL_TYPETYPE(  arg0, "glCompressedTexImage3D - arg0 (target)");
		validate_NULL_TYPETYPE(  arg1, "glCompressedTexImage3D - arg1 (level)");
		validate_NULL_TYPETYPE(  arg2, "glCompressedTexImage3D - arg2 (internalformat)");
		validate_NULL_TYPETYPE(  arg3, "glCompressedTexImage3D - arg3 (width)");
		validate_NULL_TYPETYPE(  arg4, "glCompressedTexImage3D - arg4 (height)");
		validate_NULL_TYPETYPE(  arg5, "glCompressedTexImage3D - arg5 (depth)");
		validate_NULL_TYPETYPE(  arg6, "glCompressedTexImage3D - arg6 (border)");
		validate_NULL_TYPETYPE(  arg7, "glCompressedTexImage3D - arg7 (imageSize)");
		if( arg8 ) {
		validate_Rdaddress( arg8, "glCompressedTexImage3D - arg8 (data)");
		}
		validate_NULL_TYPETYPE(  arg8, "glCompressedTexImage3D - arg8 (data)");
	}
	funcptr(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8);
	__lsb_check_params = reset_flag;
}

