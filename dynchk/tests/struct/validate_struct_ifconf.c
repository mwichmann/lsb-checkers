// Code generated by gen_tests.pl

#include "../type_tests.h"
#include <net/if.h>

int validate_struct_ifconf(struct ifconf  * input, char *name)
{
int failure = 0;
	if(validate_NULL_TYPETYPE(input-> ifc_len,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input->ifc_ifcu. ifcu_buf,name ))
		failure = 1;
return failure;
return failure;
}

