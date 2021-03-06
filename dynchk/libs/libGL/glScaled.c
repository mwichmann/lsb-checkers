// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <GL/gl.h>
#undef glScaled
static void(*funcptr) (GLdouble , GLdouble , GLdouble ) = 0;

extern int __lsb_check_params;
void glScaled (GLdouble arg0 , GLdouble arg1 , GLdouble arg2 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for glScaled()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "glScaled");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load glScaled. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "glScaled() - validating");
		validate_NULL_TYPETYPE(  arg0, "glScaled - arg0 (x)");
		validate_NULL_TYPETYPE(  arg1, "glScaled - arg1 (y)");
		validate_NULL_TYPETYPE(  arg2, "glScaled - arg2 (z)");
	}
	funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
}

