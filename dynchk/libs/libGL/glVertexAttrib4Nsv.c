// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <GL/gl.h>
#include <GL/glext.h>
#undef glVertexAttrib4Nsv
static void(*funcptr) (GLuint , const GLshort * ) = 0;

extern int __lsb_check_params;
void glVertexAttrib4Nsv (GLuint arg0 , const GLshort * arg1 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for glVertexAttrib4Nsv()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "glVertexAttrib4Nsv");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load glVertexAttrib4Nsv. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "glVertexAttrib4Nsv() - validating");
		validate_NULL_TYPETYPE(  arg0, "glVertexAttrib4Nsv - arg0");
		if( arg1 ) {
		validate_Rdaddress( arg1, "glVertexAttrib4Nsv - arg1");
		}
		validate_NULL_TYPETYPE(  arg1, "glVertexAttrib4Nsv - arg1");
	}
	funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
}

