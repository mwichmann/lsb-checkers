// Code generated by gen_tests.pl

#include "../type_tests.h"
#include <netinet/icmp6.h>

int validate_struct_mld_hdr(struct mld_hdr  * input, char *name)
{
int failure = 0;
	if(validate_struct_icmp6_hdr( &(input-> mld_icmp6_hdr),name ))
		failure = 1;
	if(validate_struct_in6_addr( &(input-> mld_addr),name ))
		failure = 1;
return failure;
}

