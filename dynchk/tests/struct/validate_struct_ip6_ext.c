// Code generated by gen_tests.pl

#include "../type_tests.h"
#include <netinet/ip6.h>

int validate_struct_ip6_ext(struct ip6_ext  * input, char *name)
{
int failure = 0;
	if(validate_NULL_TYPETYPE(input-> ip6e_nxt,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> ip6e_len,name ))
		failure = 1;
return failure;
}

