#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include "../fhs/fhschk.h"

int validate_pathname_flags(const char *arg, int flags, const char *name)
{
	if( (flags&O_RDONLY) || (flags&O_RDWR) )
		if( !is_fhs_readable(arg)) {
			fprintf(stderr,"FHS does not permit reading %s\n", arg);
		return 1;
		}
	if( (flags&O_WRONLY) || (flags&O_RDWR) )
		if( !is_fhs_writable(arg)) {
			fprintf(stderr,"FHS does not permit writing %s\n", arg);
		return 1;
		}
	if( flags&O_CREAT )
		if( !is_fhs_creatable(arg)) {
			fprintf(stderr,"FHS does not permit creating %s\n", arg);
		return 1;
		}
	return 0;
}

int validate_pathname(const char *arg, const char *name)
{
return validate_pathname_flags(arg,O_RDONLY,name);
}
