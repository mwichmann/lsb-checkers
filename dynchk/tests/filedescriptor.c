#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include "../misc/lsb_output.h"

static int curmaxfd = -1;

int validate_filedescriptor(const int fd, const char *name)
{
	if(fd < 0)
	{
		__lsb_fail(name, "%x is an invalid file descriptor. (It is negative)", fd);
		return 1;
	}

	if(fd > curmaxfd) {
		__lsb_output(3,"old curmaxfd = %d\n", curmaxfd );
		curmaxfd=sysconf(_SC_OPEN_MAX);
		__lsb_output(3,"new curmaxfd = %d\n", curmaxfd );
	}

	if(fd >= curmaxfd )
	{
		__lsb_fail(name, "%x is an invalid file descriptor. (It is larger than _SC_OPEN_MAX == %x)", fd, sysconf(_SC_OPEN_MAX));
		return 1;
	}
	return 0;
}
