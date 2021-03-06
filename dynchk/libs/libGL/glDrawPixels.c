// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <GL/gl.h>
#undef glDrawPixels
static void(*funcptr) (GLsizei , GLsizei , GLenum , GLenum , const GLvoid * ) = 0;

extern int __lsb_check_params;
void glDrawPixels (GLsizei arg0 , GLsizei arg1 , GLenum arg2 , GLenum arg3 , const GLvoid * arg4 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for glDrawPixels()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "glDrawPixels");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load glDrawPixels. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "glDrawPixels() - validating");
		validate_NULL_TYPETYPE(  arg0, "glDrawPixels - arg0 (width)");
		validate_NULL_TYPETYPE(  arg1, "glDrawPixels - arg1 (height)");
		validate_NULL_TYPETYPE(  arg2, "glDrawPixels - arg2 (format)");
		validate_NULL_TYPETYPE(  arg3, "glDrawPixels - arg3 (type)");
		validate_Rdaddress( arg4, "glDrawPixels - arg4 (pixels)");
		validate_NULL_TYPETYPE(  arg4, "glDrawPixels - arg4 (pixels)");
	}
	funcptr(arg0, arg1, arg2, arg3, arg4);
	__lsb_check_params = reset_flag;
}

