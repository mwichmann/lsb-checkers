#include <stdlib.h>
#include <stdio.h>
#include "rpmchk.h"

int main(int argc, char *argv[])
{
RpmFile	*rpmfile;

if( (rpmfile = OpenRpmFile("./lsbdev.rpm")) == NULL ) {
	fprintf(stderr, "%s: Unable to open file %s\n", argv[0], argv[1] );
	exit(2);
	}

checkRpm(rpmfile, NULL);
/*
check_intepreter(rpmfile);
check_DT_NEEDED(rpmfile);
check_symbols(rpmfile);
*/
exit(0);
}
