// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <GL/gl.h>
#include <GL/glext.h>
#undef glSecondaryColor3b
static void(*funcptr) (GLbyte , GLbyte , GLbyte ) = 0;

extern int __lsb_check_params;
void glSecondaryColor3b (GLbyte arg0 , GLbyte arg1 , GLbyte arg2 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for glSecondaryColor3b()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "glSecondaryColor3b");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load glSecondaryColor3b. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "glSecondaryColor3b() - validating");
		validate_NULL_TYPETYPE(  arg0, "glSecondaryColor3b - arg0");
		validate_NULL_TYPETYPE(  arg1, "glSecondaryColor3b - arg1");
		validate_NULL_TYPETYPE(  arg2, "glSecondaryColor3b - arg2");
	}
	funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
}

