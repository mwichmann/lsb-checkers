// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <GL/gl.h>
#include <GL/glext.h>
#undef glVertexAttrib2fv
static void(*funcptr) (GLuint , const GLfloat * ) = 0;

extern int __lsb_check_params;
void glVertexAttrib2fv (GLuint arg0 , const GLfloat * arg1 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for glVertexAttrib2fv()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "glVertexAttrib2fv");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load glVertexAttrib2fv. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "glVertexAttrib2fv() - validating");
		validate_NULL_TYPETYPE(  arg0, "glVertexAttrib2fv - arg0");
		if( arg1 ) {
		validate_Rdaddress( arg1, "glVertexAttrib2fv - arg1");
		}
		validate_NULL_TYPETYPE(  arg1, "glVertexAttrib2fv - arg1");
	}
	funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
}

