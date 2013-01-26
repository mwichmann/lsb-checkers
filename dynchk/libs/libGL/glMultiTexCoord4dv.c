// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <GL/gl.h>
#undef glMultiTexCoord4dv
static void(*funcptr) (GLenum , const GLdouble * ) = 0;

extern int __lsb_check_params;
void glMultiTexCoord4dv (GLenum arg0 , const GLdouble * arg1 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for glMultiTexCoord4dv()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "glMultiTexCoord4dv");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load glMultiTexCoord4dv. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "glMultiTexCoord4dv() - validating");
		validate_NULL_TYPETYPE(  arg0, "glMultiTexCoord4dv - arg0 (target)");
		if( arg1 ) {
		validate_Rdaddress( arg1, "glMultiTexCoord4dv - arg1 (v)");
		}
		validate_NULL_TYPETYPE(  arg1, "glMultiTexCoord4dv - arg1 (v)");
	}
	funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
}
