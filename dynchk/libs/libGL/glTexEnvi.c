// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include <dlfcn.h>
#include <GL/gl.h>
#undef glTexEnvi
static void(*funcptr) (GLenum , GLenum , GLint ) = 0;

extern int __lsb_check_params;
void glTexEnvi (GLenum arg0 , GLenum arg1 , GLint arg2 )
{
	int reset_flag = __lsb_check_params;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, " glTexEnvi ");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(5-reset_flag, "glTexEnvi()");
		validate_NULL_TYPETYPE(  arg0, "glTexEnvi - arg0");
		validate_NULL_TYPETYPE(  arg1, "glTexEnvi - arg1");
		validate_NULL_TYPETYPE(  arg2, "glTexEnvi - arg2");
	}
	funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
}

