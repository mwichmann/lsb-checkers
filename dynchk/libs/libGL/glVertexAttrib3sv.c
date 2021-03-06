// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <GL/gl.h>
#include <GL/glext.h>
#undef glVertexAttrib3sv
static void(*funcptr) (GLuint , const GLshort * ) = 0;

extern int __lsb_check_params;
void glVertexAttrib3sv (GLuint arg0 , const GLshort * arg1 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for glVertexAttrib3sv()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "glVertexAttrib3sv");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load glVertexAttrib3sv. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "glVertexAttrib3sv() - validating");
		validate_NULL_TYPETYPE(  arg0, "glVertexAttrib3sv - arg0");
		if( arg1 ) {
		validate_Rdaddress( arg1, "glVertexAttrib3sv - arg1");
		}
		validate_NULL_TYPETYPE(  arg1, "glVertexAttrib3sv - arg1");
	}
	funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
}

