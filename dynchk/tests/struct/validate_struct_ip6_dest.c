// Code generated by gen_tests.pl

#include "../type_tests.h"
#include <netinet/ip6.h>

int validate_struct_ip6_dest(struct ip6_dest  * input, char *name)
{
int failure = 0;
	if(validate_NULL_TYPETYPE(input-> ip6d_nxt,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> ip6d_len,name ))
		failure = 1;
return failure;
}

