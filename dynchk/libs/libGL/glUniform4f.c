// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <GL/gl.h>
#include <GL/glext.h>
#undef glUniform4f
static void(*funcptr) (GLint , GLfloat , GLfloat , GLfloat , GLfloat ) = 0;

extern int __lsb_check_params;
void glUniform4f (GLint arg0 , GLfloat arg1 , GLfloat arg2 , GLfloat arg3 , GLfloat arg4 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for glUniform4f()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "glUniform4f");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load glUniform4f. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "glUniform4f() - validating");
		validate_NULL_TYPETYPE(  arg0, "glUniform4f - arg0");
		validate_NULL_TYPETYPE(  arg1, "glUniform4f - arg1");
		validate_NULL_TYPETYPE(  arg2, "glUniform4f - arg2");
		validate_NULL_TYPETYPE(  arg3, "glUniform4f - arg3");
		validate_NULL_TYPETYPE(  arg4, "glUniform4f - arg4");
	}
	funcptr(arg0, arg1, arg2, arg3, arg4);
	__lsb_check_params = reset_flag;
}

