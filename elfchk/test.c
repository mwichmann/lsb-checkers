#include <stdio.h>
#include "elfchk.h"

main(int argc, char *argv[])
{
ElfFile	*elffile;

if( (elffile = OpenElfFile("./test")) == NULL ) {
	fprintf(stderr, "%s: Unable to open file %s\n", argv[0], argv[1] );
	exit(2);
	}

checkElf(elffile);
/*
check_intepreter(elffile);
check_DT_NEEDED(elffile);
check_symbols(elffile);
*/
exit(0);
}
