#include <stdio.h>
#include "../elfchk/elfchk.h"

main(int argc, char *argv[])
{
ElfFile	*elffile;

if( argc != 2 ) {
	fprintf(stderr, "usage: %s file\n", argv[0] );
	exit(1);
	}

if( (elffile = OpenElfFile(argv[1])) == NULL ) {
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
