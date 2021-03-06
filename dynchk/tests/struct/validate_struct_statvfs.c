// Code generated by gen_tests.pl

#include "../type_tests.h"
#include <sys/statvfs.h>

#if defined __i386__
int validate_struct_statvfs(struct statvfs  * input, char *name)
{
int failure = 0;
	if(validate_NULL_TYPETYPE(input-> f_bsize,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> f_frsize,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> f_blocks,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> f_bfree,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> f_bavail,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> f_files,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> f_ffree,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> f_favail,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> f_fsid,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> f_flag,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> f_namemax,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> __f_spare,name ))
		failure = 1;
return failure;
}

#endif /* defined __i386__ */
#if defined __ia64__
int validate_struct_statvfs(struct statvfs  * input, char *name)
{
int failure = 0;
	if(validate_NULL_TYPETYPE(input-> f_bsize,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> f_frsize,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> f_blocks,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> f_bfree,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> f_bavail,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> f_files,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> f_ffree,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> f_favail,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> f_fsid,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> f_flag,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> f_namemax,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> __f_spare,name ))
		failure = 1;
return failure;
}

#endif /* defined __ia64__ */
#if defined __powerpc__ && !defined __powerpc64__
int validate_struct_statvfs(struct statvfs  * input, char *name)
{
int failure = 0;
	if(validate_NULL_TYPETYPE(input-> f_bsize,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> f_frsize,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> f_blocks,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> f_bfree,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> f_bavail,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> f_files,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> f_ffree,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> f_favail,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> f_fsid,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> f_flag,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> f_namemax,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> __f_spare,name ))
		failure = 1;
return failure;
}

#endif /* defined __powerpc__ && !defined __powerpc64__ */
#if defined __powerpc64__
int validate_struct_statvfs(struct statvfs  * input, char *name)
{
int failure = 0;
	if(validate_NULL_TYPETYPE(input-> f_bsize,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> f_frsize,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> f_blocks,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> f_bfree,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> f_bavail,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> f_files,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> f_ffree,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> f_favail,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> f_fsid,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> f_flag,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> f_namemax,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> __f_spare,name ))
		failure = 1;
return failure;
}

#endif /* defined __powerpc64__ */
#if defined __s390__ && !defined __s390x__
int validate_struct_statvfs(struct statvfs  * input, char *name)
{
int failure = 0;
	if(validate_NULL_TYPETYPE(input-> f_bsize,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> f_frsize,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> f_blocks,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> f_bfree,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> f_bavail,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> f_files,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> f_ffree,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> f_favail,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> f_fsid,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> f_flag,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> f_namemax,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> __f_spare,name ))
		failure = 1;
return failure;
}

#endif /* defined __s390__ && !defined __s390x__ */
#if defined __x86_64__
int validate_struct_statvfs(struct statvfs  * input, char *name)
{
int failure = 0;
	if(validate_NULL_TYPETYPE(input-> f_bsize,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> f_frsize,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> f_blocks,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> f_bfree,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> f_bavail,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> f_files,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> f_ffree,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> f_favail,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> f_fsid,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> f_flag,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> f_namemax,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> __f_spare,name ))
		failure = 1;
return failure;
}

#endif /* defined __x86_64__ */
#if defined __s390x__
int validate_struct_statvfs(struct statvfs  * input, char *name)
{
int failure = 0;
	if(validate_NULL_TYPETYPE(input-> f_bsize,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> f_frsize,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> f_blocks,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> f_bfree,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> f_bavail,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> f_files,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> f_ffree,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> f_favail,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> f_fsid,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> f_flag,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> f_namemax,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> __f_spare,name ))
		failure = 1;
return failure;
}

#endif /* defined __s390x__ */
