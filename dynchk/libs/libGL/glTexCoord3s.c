// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <GL/gl.h>
#undef glTexCoord3s
static void(*funcptr) (GLshort , GLshort , GLshort ) = 0;

extern int __lsb_check_params;
extern int __lsb_output(int, char*, ...);
void glTexCoord3s (GLshort arg0 , GLshort arg1 , GLshort arg2 )
{
	int reset_flag = __lsb_check_params;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "glTexCoord3s");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
	__lsb_output(5-__lsb_check_params, "glTexCoord3s()");
		validate_NULL_TYPETYPE(  arg0, "glTexCoord3s - arg0");
		validate_NULL_TYPETYPE(  arg1, "glTexCoord3s - arg1");
		validate_NULL_TYPETYPE(  arg2, "glTexCoord3s - arg2");
	}
	funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
}

