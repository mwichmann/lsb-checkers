// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <GL/gl.h>
#undef glGetLightfv
static void(*funcptr) (GLenum , GLenum , GLfloat * ) = 0;

extern int __lsb_check_params;
void glGetLightfv (GLenum arg0 , GLenum arg1 , GLfloat * arg2 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for glGetLightfv()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "glGetLightfv");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load glGetLightfv. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "glGetLightfv() - validating");
		validate_NULL_TYPETYPE(  arg0, "glGetLightfv - arg0 (light)");
		validate_NULL_TYPETYPE(  arg1, "glGetLightfv - arg1 (pname)");
		validate_RWaddress( arg2, "glGetLightfv - arg2 (params)");
		validate_NULL_TYPETYPE(  arg2, "glGetLightfv - arg2 (params)");
	}
	funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
}

