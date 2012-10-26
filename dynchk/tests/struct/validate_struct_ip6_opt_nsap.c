// Code generated by gen_tests.pl

#include "../type_tests.h"
#include <netinet/ip6.h>

int validate_struct_ip6_opt_nsap(struct ip6_opt_nsap  * input, char *name)
{
int failure = 0;
	if(validate_NULL_TYPETYPE(input-> ip6on_type,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> ip6on_len,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> ip6on_src_nsap_len,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> ip6on_dst_nsap_len,name ))
		failure = 1;
return failure;
}

