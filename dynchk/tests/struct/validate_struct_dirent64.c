// Code generated by gen_tests.pl

#include <dirent.h>

void validate_struct_dirent64(struct dirent64 * input)
{
	validate_NULL_TYPETYPE(input->d_ino);
	validate_NULL_TYPETYPE(input->d_off);
	validate_NULL_TYPETYPE(input->d_reclen);
	validate_NULL_TYPETYPE(input->d_type);
	validate_NULL_TYPETYPE(input->d_name);
}

