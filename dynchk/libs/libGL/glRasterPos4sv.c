// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <GL/gl.h>
#undef glRasterPos4sv
static void(*funcptr) (const GLshort * ) = 0;

extern int __lsb_check_params;
void glRasterPos4sv (const GLshort * arg0 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for glRasterPos4sv()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "glRasterPos4sv");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load glRasterPos4sv. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "glRasterPos4sv() - validating");
		validate_Rdaddress( arg0, "glRasterPos4sv - arg0 (v)");
		validate_NULL_TYPETYPE(  arg0, "glRasterPos4sv - arg0 (v)");
	}
	funcptr(arg0);
	__lsb_check_params = reset_flag;
}

