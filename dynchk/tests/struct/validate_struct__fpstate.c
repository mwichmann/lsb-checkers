// Code generated by gen_tests.pl

#include "../type_tests.h"
#include <signal.h>

void validate_struct__fpstate(struct _fpstate * input)
{
	validate_NULL_TYPETYPE(input->cw);
	validate_NULL_TYPETYPE(input->sw);
	validate_NULL_TYPETYPE(input->tag);
	validate_NULL_TYPETYPE(input->ipoff);
	validate_NULL_TYPETYPE(input->cssel);
	validate_NULL_TYPETYPE(input->dataoff);
	validate_NULL_TYPETYPE(input->datasel);
	validate_NULL_TYPETYPE(input->_st);
	validate_NULL_TYPETYPE(input->status);
	validate_NULL_TYPETYPE(input->magic);
	validate_NULL_TYPETYPE(input->_fxsr_env);
	validate_NULL_TYPETYPE(input->mxcsr);
	validate_NULL_TYPETYPE(input->reserved);
	validate_NULL_TYPETYPE(input->_fxsr_st);
	validate_NULL_TYPETYPE(input->_xmm);
	validate_NULL_TYPETYPE(input->padding);
}

