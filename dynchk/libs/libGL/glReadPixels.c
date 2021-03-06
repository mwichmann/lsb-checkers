// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <GL/gl.h>
#undef glReadPixels
static void(*funcptr) (GLint , GLint , GLsizei , GLsizei , GLenum , GLenum , GLvoid * ) = 0;

extern int __lsb_check_params;
void glReadPixels (GLint arg0 , GLint arg1 , GLsizei arg2 , GLsizei arg3 , GLenum arg4 , GLenum arg5 , GLvoid * arg6 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for glReadPixels()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "glReadPixels");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load glReadPixels. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "glReadPixels() - validating");
		validate_NULL_TYPETYPE(  arg0, "glReadPixels - arg0 (x)");
		validate_NULL_TYPETYPE(  arg1, "glReadPixels - arg1 (y)");
		validate_NULL_TYPETYPE(  arg2, "glReadPixels - arg2 (width)");
		validate_NULL_TYPETYPE(  arg3, "glReadPixels - arg3 (height)");
		validate_NULL_TYPETYPE(  arg4, "glReadPixels - arg4 (format)");
		validate_NULL_TYPETYPE(  arg5, "glReadPixels - arg5 (type)");
		validate_RWaddress( arg6, "glReadPixels - arg6 (pixels)");
		validate_NULL_TYPETYPE(  arg6, "glReadPixels - arg6 (pixels)");
	}
	funcptr(arg0, arg1, arg2, arg3, arg4, arg5, arg6);
	__lsb_check_params = reset_flag;
}

