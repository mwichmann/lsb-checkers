#include <stdio.h>
#include <sys/types.h>

void validate_pathname(const char *arg, const char *name)
{
	fprintf(stderr, "lsbdynchk: %s: %s is a parameter.(stub)\n", name, arg);
}

void validate_filemode(const mode_t arg, const char *name)
{
//	 I need to know legal values for mode_t in LSB.
//   see linux-stat.h
	if( !(0200000 > arg && arg >= 0) )
		fprintf(stderr,
				"lsbdynchk: %s: Filemode %o outside legal bounds\n", name, (int)arg);
}

void validate_RWaddress(const void *address, const char *name)
{
	fprintf(stderr,
			"lsbdynchk: %s: Address %p is a parameter.(stub)\n", name, address);
}
void validate_filedescriptor(const int fd, const char *name)
{
	if(fd > -1)  //Ought to be something about MAXFD.  I have no clue where that can be found.
		fprintf(stderr, "lsbdynchk: %s: File descriptor %x is a parameter (stub)\n", name, fd);
	else if(fd < 0)
		fprintf(stderr, "lsbdynchk: %s: File descriptor %x is less than zero.\n", name, fd);
}
