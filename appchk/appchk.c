#include <stdio.h>
#include <getopt.h>
#include "../elfchk/elfchk.h"

extern int add_library_symbols(char *);
extern int checksymbols(ElfFile *);

main(int argc, char *argv[])
{
char	c;
ElfFile	*elffile;

while(1) {
	c=getopt(argc,argv,"L:");
	if( c == -1 )
		break;
	switch(c) {
		case 'L':
			printf("Adding symbols for library %s\n", optarg);
			add_library_symbols(optarg);
			break;
		default:
			printf ("?? getopt returned character code 0%o ??\n", c);
		}
	}

if( optind >= argc ) {
	fprintf(stderr, "usage: %s [-L libpath ] file\n", argv[0] );
	exit(1);
	}

if( (elffile = OpenElfFile(argv[optind])) == NULL ) {
	fprintf(stderr, "%s: Unable to open file %s\n", argv[0], argv[optind] );
	exit(2);
	}

checkElf(elffile);
checksymbols(elffile);
/*
check_intepreter(elffile);
check_DT_NEEDED(elffile);
check_symbols(elffile);
*/
exit(0);
}
