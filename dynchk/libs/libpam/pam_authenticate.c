// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
static int(*funcptr)(pam_handle_t *, int) = 0;

int pam_authenticate(pam_handle_t * arg0, int arg1)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "pam_authenticate");
	validate_NULL_TYPETYPE(arg0, "pam_authenticate");
	validate_NULL_TYPETYPE(arg1, "pam_authenticate");
	return funcptr(arg0, arg1);
}

int lsb_pam_authenticate(pam_handle_t * arg0, int arg1)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "pam_authenticate");
	return funcptr(arg0, arg1);
}

