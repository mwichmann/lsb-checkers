// Code generated by gen_tests.pl

#include "../type_tests.h"
#include <net/if.h>

int validate_struct_ifmap(struct ifmap  * input, char *name)
{
int failure = 0;
	if(validate_NULL_TYPETYPE(input-> mem_start,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> mem_end,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> base_addr,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> irq,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> dma,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> port,name ))
		failure = 1;
return failure;
}

