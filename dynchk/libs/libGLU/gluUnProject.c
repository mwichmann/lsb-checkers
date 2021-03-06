// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <GL/gl.h>
#include <GL/glu.h>
#undef gluUnProject
static GLint(*funcptr) (GLdouble , GLdouble , GLdouble , const GLdouble * , const GLdouble * , const GLint * , GLdouble * , GLdouble * , GLdouble * ) = 0;

extern int __lsb_check_params;
GLint gluUnProject (GLdouble arg0 , GLdouble arg1 , GLdouble arg2 , const GLdouble * arg3 , const GLdouble * arg4 , const GLint * arg5 , GLdouble * arg6 , GLdouble * arg7 , GLdouble * arg8 )
{
	int reset_flag = __lsb_check_params;
	GLint ret_value  ;
	__lsb_output(4, "Invoking wrapper for gluUnProject()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gluUnProject");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gluUnProject. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gluUnProject() - validating");
		validate_NULL_TYPETYPE(  arg0, "gluUnProject - arg0 (winX)");
		validate_NULL_TYPETYPE(  arg1, "gluUnProject - arg1 (winY)");
		validate_NULL_TYPETYPE(  arg2, "gluUnProject - arg2 (winZ)");
		if( arg3 ) {
		validate_Rdaddress( arg3, "gluUnProject - arg3 (model)");
		}
		validate_NULL_TYPETYPE(  arg3, "gluUnProject - arg3 (model)");
		if( arg4 ) {
		validate_Rdaddress( arg4, "gluUnProject - arg4 (proj)");
		}
		validate_NULL_TYPETYPE(  arg4, "gluUnProject - arg4 (proj)");
		if( arg5 ) {
		validate_Rdaddress( arg5, "gluUnProject - arg5 (view)");
		}
		validate_NULL_TYPETYPE(  arg5, "gluUnProject - arg5 (view)");
		if( arg6 ) {
		validate_RWaddress( arg6, "gluUnProject - arg6 (objX)");
		}
		validate_NULL_TYPETYPE(  arg6, "gluUnProject - arg6 (objX)");
		if( arg7 ) {
		validate_RWaddress( arg7, "gluUnProject - arg7 (objY)");
		}
		validate_NULL_TYPETYPE(  arg7, "gluUnProject - arg7 (objY)");
		if( arg8 ) {
		validate_RWaddress( arg8, "gluUnProject - arg8 (objZ)");
		}
		validate_NULL_TYPETYPE(  arg8, "gluUnProject - arg8 (objZ)");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8);
	__lsb_check_params = reset_flag;
	return ret_value;
}

