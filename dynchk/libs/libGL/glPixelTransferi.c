// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <GL/gl.h>
#undef glPixelTransferi
static void(*funcptr) (GLenum , GLint ) = 0;

extern int __lsb_check_params;
void glPixelTransferi (GLenum arg0 , GLint arg1 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for glPixelTransferi()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "glPixelTransferi");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load glPixelTransferi. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "glPixelTransferi() - validating");
		validate_NULL_TYPETYPE(  arg0, "glPixelTransferi - arg0 (pname)");
		validate_NULL_TYPETYPE(  arg1, "glPixelTransferi - arg1 (param)");
	}
	funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
}

