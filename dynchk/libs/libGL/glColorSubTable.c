// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include <dlfcn.h>
#include <GL/gl.h>
#undef glColorSubTable
static void(*funcptr) (GLenum , GLsizei , GLsizei , GLenum , GLenum , GLvoid * ) = 0;

extern int __lsb_check_params;
void glColorSubTable (GLenum arg0 , GLsizei arg1 , GLsizei arg2 , GLenum arg3 , GLenum arg4 , GLvoid * arg5 )
{
	int reset_flag = __lsb_check_params;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, " glColorSubTable ");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(5-reset_flag, "glColorSubTable()");
		validate_NULL_TYPETYPE(  arg0, "glColorSubTable - arg0");
		validate_NULL_TYPETYPE(  arg1, "glColorSubTable - arg1");
		validate_NULL_TYPETYPE(  arg2, "glColorSubTable - arg2");
		validate_NULL_TYPETYPE(  arg3, "glColorSubTable - arg3");
		validate_NULL_TYPETYPE(  arg4, "glColorSubTable - arg4");
		validate_RWaddress( arg5, "glColorSubTable - arg5");
		validate_NULL_TYPETYPE(  arg5, "glColorSubTable - arg5");
	}
	funcptr(arg0, arg1, arg2, arg3, arg4, arg5);
	__lsb_check_params = reset_flag;
}

