// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <GL/gl.h>
#include <GL/glext.h>
#undef glVertexAttrib3dv
static void(*funcptr) (GLuint , const GLdouble * ) = 0;

extern int __lsb_check_params;
void glVertexAttrib3dv (GLuint arg0 , const GLdouble * arg1 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for glVertexAttrib3dv()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "glVertexAttrib3dv");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load glVertexAttrib3dv. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "glVertexAttrib3dv() - validating");
		validate_NULL_TYPETYPE(  arg0, "glVertexAttrib3dv - arg0");
		if( arg1 ) {
		validate_Rdaddress( arg1, "glVertexAttrib3dv - arg1");
		}
		validate_NULL_TYPETYPE(  arg1, "glVertexAttrib3dv - arg1");
	}
	funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
}

