#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

static int curmaxfd = 0;

int validate_filedescriptor(const int fd, const char *name)
{
	if(fd < 0)
	{
		fprintf(stderr,
		   "lsbdynchk: %s: File descriptor %x is negative, and thus invalid.\n",
		   name, fd);
		return 1;
	}

	if(fd > curmaxfd) {
		fprintf(stderr,"old curmaxfd = %d\n", curmaxfd );
		curmaxfd=sysconf(_SC_OPEN_MAX);
		fprintf(stderr,"new curmaxfd = %d\n", curmaxfd );
	}

	if(fd >= curmaxfd )
	{
		fprintf(stderr,
			"lsbdynchk: %s: File descriptor %x is too high.\n",
			name, fd );
		fprintf(stderr,
			"\t%x is the highest value this system allows.\n",
			sysconf(_SC_OPEN_MAX) );
		return 1;
	}
	return 0;
}
