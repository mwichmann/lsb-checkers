// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <GL/gl.h>
#undef glGetMapfv
static void(*funcptr) (GLenum , GLenum , GLfloat * ) = 0;

extern int __lsb_check_params;
void glGetMapfv (GLenum arg0 , GLenum arg1 , GLfloat * arg2 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for glGetMapfv()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "glGetMapfv");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load glGetMapfv. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "glGetMapfv() - validating");
		validate_NULL_TYPETYPE(  arg0, "glGetMapfv - arg0 (target)");
		validate_NULL_TYPETYPE(  arg1, "glGetMapfv - arg1 (query)");
		validate_RWaddress( arg2, "glGetMapfv - arg2 (v)");
		validate_NULL_TYPETYPE(  arg2, "glGetMapfv - arg2 (v)");
	}
	funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
}

