// Code generated by gen_tests.pl

#include <sys/socket.h>

void validate_struct_sockaddr(struct sockaddr * input)
{
	validate_NULL_TYPETYPE(input->sa_family);
	validate_NULL_TYPETYPE(input->sa_data);
}

