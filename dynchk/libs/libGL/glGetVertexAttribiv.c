// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <GL/gl.h>
#include <GL/glext.h>
#undef glGetVertexAttribiv
static void(*funcptr) (GLuint , GLenum , GLint * ) = 0;

extern int __lsb_check_params;
void glGetVertexAttribiv (GLuint arg0 , GLenum arg1 , GLint * arg2 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for glGetVertexAttribiv()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "glGetVertexAttribiv");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load glGetVertexAttribiv. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "glGetVertexAttribiv() - validating");
		validate_NULL_TYPETYPE(  arg0, "glGetVertexAttribiv - arg0");
		validate_NULL_TYPETYPE(  arg1, "glGetVertexAttribiv - arg1");
		if( arg2 ) {
		validate_RWaddress( arg2, "glGetVertexAttribiv - arg2");
		}
		validate_NULL_TYPETYPE(  arg2, "glGetVertexAttribiv - arg2");
	}
	funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
}

