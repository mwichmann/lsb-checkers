// Code generated by gen_tests.pl

#include "../type_tests.h"
#include <netinet/icmp6.h>

int validate_struct_nd_opt_rd_hdr(struct nd_opt_rd_hdr  * input, char *name)
{
int failure = 0;
	if(validate_NULL_TYPETYPE(input-> nd_opt_rh_type,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> nd_opt_rh_len,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> nd_opt_rh_reserved1,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> nd_opt_rh_reserved2,name ))
		failure = 1;
return failure;
}

