// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <GL/gl.h>
#undef glStencilMask
static void(*funcptr) (GLuint ) = 0;

extern int __lsb_check_params;
void glStencilMask (GLuint arg0 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for glStencilMask()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "glStencilMask");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load glStencilMask. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "glStencilMask() - validating");
		validate_NULL_TYPETYPE(  arg0, "glStencilMask - arg0 (mask)");
	}
	funcptr(arg0);
	__lsb_check_params = reset_flag;
}

