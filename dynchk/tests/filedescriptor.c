#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include "../libs/__lsb_funcs.h"

void validate_filedescriptor(const int fd, const char *name)
{
	if(fd >= __lsb_sysconf(_SC_OPEN_MAX))
	{
		__lsb_fprintf(stderr, "lsbdynchk: %s: File descriptor %x is too high.\n",
					name);
		__lsb_fprintf(stderr,"\t%x is the highest value this system allows.\n",
					fd, __lsb_sysconf(_SC_OPEN_MAX) );
	}
	else if(fd<0)
		__lsb_fprintf(stderr, "lsbdynchk: %s: File descriptor %x is negative, and thus invalid.\n", name, fd);

}
