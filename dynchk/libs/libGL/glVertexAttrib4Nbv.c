// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <GL/gl.h>
#include <GL/glext.h>
#undef glVertexAttrib4Nbv
static void(*funcptr) (GLuint , const GLbyte * ) = 0;

extern int __lsb_check_params;
void glVertexAttrib4Nbv (GLuint arg0 , const GLbyte * arg1 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for glVertexAttrib4Nbv()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "glVertexAttrib4Nbv");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load glVertexAttrib4Nbv. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "glVertexAttrib4Nbv() - validating");
		validate_NULL_TYPETYPE(  arg0, "glVertexAttrib4Nbv - arg0");
		if( arg1 ) {
		validate_Rdaddress( arg1, "glVertexAttrib4Nbv - arg1");
		}
		validate_NULL_TYPETYPE(  arg1, "glVertexAttrib4Nbv - arg1");
	}
	funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
}

