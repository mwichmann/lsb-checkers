#include <stdio.h>
#include <sys/types.h>

void validate_filedescriptor(const int fd, const char *name)
{
	if(fd > -1)  //Ought to be something about MAXFD.  I have no clue where that can be found.
		fprintf(stderr, "lsbdynchk: %s: File descriptor %x is a parameter (stub)\n", name, fd);
	else if(fd < 0)
		fprintf(stderr, "lsbdynchk: %s: File descriptor %x is less than zero.\n", name, fd);
}
