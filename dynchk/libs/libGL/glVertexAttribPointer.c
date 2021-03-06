// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <GL/gl.h>
#include <GL/glext.h>
#undef glVertexAttribPointer
static void(*funcptr) (GLuint , GLint , GLenum , GLboolean , GLsizei , const GLvoid * ) = 0;

extern int __lsb_check_params;
void glVertexAttribPointer (GLuint arg0 , GLint arg1 , GLenum arg2 , GLboolean arg3 , GLsizei arg4 , const GLvoid * arg5 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for glVertexAttribPointer()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "glVertexAttribPointer");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load glVertexAttribPointer. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "glVertexAttribPointer() - validating");
		validate_NULL_TYPETYPE(  arg0, "glVertexAttribPointer - arg0");
		validate_NULL_TYPETYPE(  arg1, "glVertexAttribPointer - arg1");
		validate_NULL_TYPETYPE(  arg2, "glVertexAttribPointer - arg2");
		validate_NULL_TYPETYPE(  arg3, "glVertexAttribPointer - arg3");
		validate_NULL_TYPETYPE(  arg4, "glVertexAttribPointer - arg4");
		if( arg5 ) {
		validate_Rdaddress( arg5, "glVertexAttribPointer - arg5");
		}
		validate_NULL_TYPETYPE(  arg5, "glVertexAttribPointer - arg5");
	}
	funcptr(arg0, arg1, arg2, arg3, arg4, arg5);
	__lsb_check_params = reset_flag;
}

