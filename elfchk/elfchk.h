#include <sys/types.h>
#include "../../include/elf.h"

/*
 * External tables that are generated from the DB.
 */


extern char *DtNeeded[];
extern int numDtNeeded;
extern char *DynSyms[];
extern int numDynSyms;


typedef	struct	{
	int	fd;
	caddr_t     addr;  /* Start address of the file */
	Elf32_Shdr *saddr; /* Start address of the next section of the file */
	Elf32_Phdr *paddr; /* address of the program header of the file */
	caddr_t     straddr;  /* Start address of the string table */
	int	strndx;	   /* index of the string table */
	int	size;
	int	numph;
	int	numsh;
	}	ElfFile;

