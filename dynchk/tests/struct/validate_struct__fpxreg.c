// Code generated by gen_tests.pl

#include <signal.h>

void validate_struct__fpxreg(struct _fpxreg * input)
{
	validate_NULL_TYPETYPE(input->significand);
	validate_NULL_TYPETYPE(input->exponent);
	validate_NULL_TYPETYPE(input->padding);
}

