// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <GL/gl.h>
#undef glMapGrid1f
static void(*funcptr) (GLint , GLfloat , GLfloat ) = 0;

extern int __lsb_check_params;
void glMapGrid1f (GLint arg0 , GLfloat arg1 , GLfloat arg2 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for glMapGrid1f()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "glMapGrid1f");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load glMapGrid1f. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "glMapGrid1f() - validating");
		validate_NULL_TYPETYPE(  arg0, "glMapGrid1f - arg0 (un)");
		validate_NULL_TYPETYPE(  arg1, "glMapGrid1f - arg1 (u1)");
		validate_NULL_TYPETYPE(  arg2, "glMapGrid1f - arg2 (u2)");
	}
	funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
}

