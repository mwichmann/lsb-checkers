// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <GL/gl.h>
#undef glRasterPos3d
static void(*funcptr) (GLdouble , GLdouble , GLdouble ) = 0;

extern int __lsb_check_params;
extern int __lsb_output(int, char*, ...);
void glRasterPos3d (GLdouble arg0 , GLdouble arg1 , GLdouble arg2 )
{
	int reset_flag = __lsb_check_params;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "glRasterPos3d");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
	__lsb_output(5-__lsb_check_params, "glRasterPos3d()");
		validate_NULL_TYPETYPE(  arg0, "glRasterPos3d - arg0");
		validate_NULL_TYPETYPE(  arg1, "glRasterPos3d - arg1");
		validate_NULL_TYPETYPE(  arg2, "glRasterPos3d - arg2");
	}
	funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
}

