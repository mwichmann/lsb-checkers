// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <GL/gl.h>
#undef glGetTexLevelParameteriv
static void(*funcptr) (GLenum , GLint , GLenum , GLint * ) = 0;

extern int __lsb_check_params;
void glGetTexLevelParameteriv (GLenum arg0 , GLint arg1 , GLenum arg2 , GLint * arg3 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for glGetTexLevelParameteriv()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "glGetTexLevelParameteriv");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load glGetTexLevelParameteriv. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "glGetTexLevelParameteriv() - validating");
		validate_NULL_TYPETYPE(  arg0, "glGetTexLevelParameteriv - arg0 (target)");
		validate_NULL_TYPETYPE(  arg1, "glGetTexLevelParameteriv - arg1 (level)");
		validate_NULL_TYPETYPE(  arg2, "glGetTexLevelParameteriv - arg2 (pname)");
		validate_RWaddress( arg3, "glGetTexLevelParameteriv - arg3 (params)");
		validate_NULL_TYPETYPE(  arg3, "glGetTexLevelParameteriv - arg3 (params)");
	}
	funcptr(arg0, arg1, arg2, arg3);
	__lsb_check_params = reset_flag;
}

