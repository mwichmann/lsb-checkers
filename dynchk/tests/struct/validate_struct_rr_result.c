// Code generated by gen_tests.pl

#include "../type_tests.h"
#include <netinet/icmp6.h>

int validate_struct_rr_result(struct rr_result  * input, char *name)
{
int failure = 0;
	if(validate_NULL_TYPETYPE(input-> rrr_flags,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> rrr_ordinal,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> rrr_matchedlen,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> rrr_ifid,name ))
		failure = 1;
	if(validate_struct_in6_addr( &(input-> rrr_prefix),name ))
		failure = 1;
return failure;
}

