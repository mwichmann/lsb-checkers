// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <GL/gl.h>
#undef glEvalPoint1
static void(*funcptr) (GLint ) = 0;

extern int __lsb_check_params;
void glEvalPoint1 (GLint arg0 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for glEvalPoint1()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "glEvalPoint1");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load glEvalPoint1. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "glEvalPoint1() - validating");
		validate_NULL_TYPETYPE(  arg0, "glEvalPoint1 - arg0 (i)");
	}
	funcptr(arg0);
	__lsb_check_params = reset_flag;
}

