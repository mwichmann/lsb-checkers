// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <GL/gl.h>
#include <GL/glext.h>
#undef glWindowPos2f
static void(*funcptr) (GLfloat , GLfloat ) = 0;

extern int __lsb_check_params;
void glWindowPos2f (GLfloat arg0 , GLfloat arg1 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for glWindowPos2f()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "glWindowPos2f");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load glWindowPos2f. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "glWindowPos2f() - validating");
		validate_NULL_TYPETYPE(  arg0, "glWindowPos2f - arg0");
		validate_NULL_TYPETYPE(  arg1, "glWindowPos2f - arg1");
	}
	funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
}

