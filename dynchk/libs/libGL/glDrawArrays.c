// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <GL/gl.h>
#undef glDrawArrays
static void(*funcptr) (GLenum , GLint , GLsizei ) = 0;

extern int __lsb_check_params;
void glDrawArrays (GLenum arg0 , GLint arg1 , GLsizei arg2 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for glDrawArrays()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "glDrawArrays");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load glDrawArrays. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "glDrawArrays() - validating");
		validate_NULL_TYPETYPE(  arg0, "glDrawArrays - arg0 (mode)");
		validate_NULL_TYPETYPE(  arg1, "glDrawArrays - arg1 (first)");
		validate_NULL_TYPETYPE(  arg2, "glDrawArrays - arg2 (count)");
	}
	funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
}

