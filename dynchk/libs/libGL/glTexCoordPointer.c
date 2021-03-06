// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <GL/gl.h>
#undef glTexCoordPointer
static void(*funcptr) (GLint , GLenum , GLsizei , const GLvoid * ) = 0;

extern int __lsb_check_params;
void glTexCoordPointer (GLint arg0 , GLenum arg1 , GLsizei arg2 , const GLvoid * arg3 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for glTexCoordPointer()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "glTexCoordPointer");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load glTexCoordPointer. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "glTexCoordPointer() - validating");
		validate_NULL_TYPETYPE(  arg0, "glTexCoordPointer - arg0 (size)");
		validate_NULL_TYPETYPE(  arg1, "glTexCoordPointer - arg1 (type)");
		validate_NULL_TYPETYPE(  arg2, "glTexCoordPointer - arg2 (stride)");
		validate_Rdaddress( arg3, "glTexCoordPointer - arg3 (pointer)");
		validate_NULL_TYPETYPE(  arg3, "glTexCoordPointer - arg3 (pointer)");
	}
	funcptr(arg0, arg1, arg2, arg3);
	__lsb_check_params = reset_flag;
}

