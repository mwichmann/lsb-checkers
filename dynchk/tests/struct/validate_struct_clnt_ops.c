// Code generated by gen_tests.pl

#include "../type_tests.h"
#include <rpc/clnt.h>

void validate_struct_clnt_ops(struct clnt_ops * input)
{
	validate_NULL_TYPETYPE(input->enum clnt_stat(*cl_call)(struct CLIENT *u_longxdrproc_tcaddr_txdrproc_tcaddr_tstruct timeval));
	validate_NULL_TYPETYPE(input->void(*cl_abort)(void));
	validate_NULL_TYPETYPE(input->void(*cl_geterr)(struct CLIENT *struct rpc_err *));
	validate_NULL_TYPETYPE(input->bool_t(*cl_freeres)(struct CLIENT *xdrproc_tcaddr_t));
	validate_NULL_TYPETYPE(input->void(*cl_destroy)(struct CLIENT *));
	validate_NULL_TYPETYPE(input->bool_t(*cl_control)(struct CLIENT *intchar *));
}

