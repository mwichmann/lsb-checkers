// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <security/pam_appl.h>
#undef pam_chauthtok
static int(*funcptr) (pam_handle_t * , int ) = 0;

int pam_chauthtok (pam_handle_t * arg0 , int arg1 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "pam_chauthtok");
	validate_NULL_TYPETYPE(arg0, "pam_chauthtok");
	validate_NULL_TYPETYPE(arg1, "pam_chauthtok");
	return funcptr(arg0, arg1);
}

int lsb_pam_chauthtok (pam_handle_t * arg0 , int arg1 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "pam_chauthtok");
	return funcptr(arg0, arg1);
}

