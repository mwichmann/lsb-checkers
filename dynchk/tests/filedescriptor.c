#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

int validate_filedescriptor(const int fd, const char *name)
{
	if(fd >= sysconf(_SC_OPEN_MAX))
	{
		fprintf(stderr, "lsbdynchk: %s: File descriptor %x is too high.\n",
					name);
		fprintf(stderr,"\t%x is the highest value this system allows.\n",
					fd, sysconf(_SC_OPEN_MAX) );
		return 1;
	}
	else if(fd<0)
	{
	fprintf(stderr, "lsbdynchk: %s: File descriptor %x is negative, and thus invalid.\n", name, fd);
	return 1;
	}
	return 0;
}
