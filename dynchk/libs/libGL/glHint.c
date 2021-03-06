// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <GL/gl.h>
#undef glHint
static void(*funcptr) (GLenum , GLenum ) = 0;

extern int __lsb_check_params;
void glHint (GLenum arg0 , GLenum arg1 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for glHint()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "glHint");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load glHint. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "glHint() - validating");
		validate_NULL_TYPETYPE(  arg0, "glHint - arg0 (target)");
		validate_NULL_TYPETYPE(  arg1, "glHint - arg1 (mode)");
	}
	funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
}

