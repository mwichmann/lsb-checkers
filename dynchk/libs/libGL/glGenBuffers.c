// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <GL/gl.h>
#include <GL/glext.h>
#undef glGenBuffers
static void(*funcptr) (GLsizei , GLuint * ) = 0;

extern int __lsb_check_params;
void glGenBuffers (GLsizei arg0 , GLuint * arg1 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for glGenBuffers()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "glGenBuffers");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load glGenBuffers. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "glGenBuffers() - validating");
		validate_NULL_TYPETYPE(  arg0, "glGenBuffers - arg0");
		if( arg1 ) {
		validate_RWaddress( arg1, "glGenBuffers - arg1");
		}
		validate_NULL_TYPETYPE(  arg1, "glGenBuffers - arg1");
	}
	funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
}

