// Code generated by gen_tests.pl

#include "../type_tests.h"
#include <curses.h>

void validate_struct_ldat(struct ldat * input)
{
	validate_NULL_TYPETYPE(input->text);
	validate_NULL_TYPETYPE(input->firstchar);
	validate_NULL_TYPETYPE(input->lastchar);
	validate_NULL_TYPETYPE(input->oldindex);
}

