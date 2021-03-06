// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <GL/gl.h>
#undef glVertex2dv
static void(*funcptr) (const GLdouble * ) = 0;

extern int __lsb_check_params;
void glVertex2dv (const GLdouble * arg0 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for glVertex2dv()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "glVertex2dv");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load glVertex2dv. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "glVertex2dv() - validating");
		validate_Rdaddress( arg0, "glVertex2dv - arg0 (v)");
		validate_NULL_TYPETYPE(  arg0, "glVertex2dv - arg0 (v)");
	}
	funcptr(arg0);
	__lsb_check_params = reset_flag;
}

