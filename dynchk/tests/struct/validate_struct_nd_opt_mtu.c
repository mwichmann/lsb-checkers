// Code generated by gen_tests.pl

#include "../type_tests.h"
#include <netinet/icmp6.h>

int validate_struct_nd_opt_mtu(struct nd_opt_mtu  * input, char *name)
{
int failure = 0;
	if(validate_NULL_TYPETYPE(input-> nd_opt_mtu_type,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> nd_opt_mtu_len,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> nd_opt_mtu_reserved,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> nd_opt_mtu_mtu,name ))
		failure = 1;
return failure;
}

