// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <GL/gl.h>
#include <GL/glext.h>
#undef glSecondaryColor3ub
static void(*funcptr) (GLubyte , GLubyte , GLubyte ) = 0;

extern int __lsb_check_params;
void glSecondaryColor3ub (GLubyte arg0 , GLubyte arg1 , GLubyte arg2 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for glSecondaryColor3ub()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "glSecondaryColor3ub");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load glSecondaryColor3ub. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "glSecondaryColor3ub() - validating");
		validate_NULL_TYPETYPE(  arg0, "glSecondaryColor3ub - arg0");
		validate_NULL_TYPETYPE(  arg1, "glSecondaryColor3ub - arg1");
		validate_NULL_TYPETYPE(  arg2, "glSecondaryColor3ub - arg2");
	}
	funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
}

