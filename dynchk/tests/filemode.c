#include <stdio.h>
#include <sys/types.h>

void validate_filemode(const mode_t arg, const char *name)
{
//	 I need to know legal values for mode_t in LSB.
//   see linux-stat.h
	if( !(0200000 > arg && arg >= 0) )
		fprintf(stderr,
				"lsbdynchk: %s: Filemode %o outside legal bounds\n", name, (int)arg);
}
