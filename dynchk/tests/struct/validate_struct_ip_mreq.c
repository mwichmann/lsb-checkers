// Code generated by gen_tests.pl

#include "../type_tests.h"
#include <netinet/in.h>

void validate_struct_ip_mreq(struct ip_mreq * input)
{
	validate_struct_in_addr(input->imr_multiaddr);
	validate_struct_in_addr(input->imr_interface);
}

