// Code generated by gen_tests.pl

#include <rpc/svc.h>

void validate_struct_SVCXPRT(struct SVCXPRT * input)
{
	validate_NULL_TYPETYPE(input->xp_sock);
	validate_NULL_TYPETYPE(input->xp_port);
	validate_NULL_TYPETYPE(input->xp_ops);
	validate_NULL_TYPETYPE(input->xp_addrlen);
	validate_struct_sockaddr_in(input->xp_raddr);
	validate_struct_opaque_auth(input->xp_verf);
	validate_NULL_TYPETYPE(input->xp_p1);
	validate_NULL_TYPETYPE(input->xp_p2);
	validate_NULL_TYPETYPE(input->xp_pad);
}

