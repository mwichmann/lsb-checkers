// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <security/pam_appl.h>
#undef pam_strerror
static const char *(*funcptr) (pam_handle_t * , int ) = 0;

const char * pam_strerror (pam_handle_t * arg0 , int arg1 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "pam_strerror");
	validate_Rdaddress( arg0, "pam_strerror - arg0");
	validate_NULL_TYPETYPE(  arg0, "pam_strerror - arg0");
	validate_NULL_TYPETYPE(  arg1, "pam_strerror - arg1");
	return funcptr(arg0, arg1);
}

const char * __lsb_pam_strerror (pam_handle_t * arg0 , int arg1 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "pam_strerror");
	return funcptr(arg0, arg1);
}

