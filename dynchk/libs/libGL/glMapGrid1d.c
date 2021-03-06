// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <GL/gl.h>
#undef glMapGrid1d
static void(*funcptr) (GLint , GLdouble , GLdouble ) = 0;

extern int __lsb_check_params;
void glMapGrid1d (GLint arg0 , GLdouble arg1 , GLdouble arg2 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for glMapGrid1d()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "glMapGrid1d");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load glMapGrid1d. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "glMapGrid1d() - validating");
		validate_NULL_TYPETYPE(  arg0, "glMapGrid1d - arg0 (un)");
		validate_NULL_TYPETYPE(  arg1, "glMapGrid1d - arg1 (u1)");
		validate_NULL_TYPETYPE(  arg2, "glMapGrid1d - arg2 (u2)");
	}
	funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
}

