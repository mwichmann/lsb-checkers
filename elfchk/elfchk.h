#include <sys/types.h>
#include <elf.h>
/*
#include "../../include/elf.h"
*/

#if defined(__alpha) || defined(__alpha__) || \
    defined(__ia64__) || defined(ia64)
#define Elf32_Ehdr Elf64_Ehdr
#define Elf32_Shdr Elf64_Shdr
#define Elf32_Phdr Elf64_Phdr
#define Elf32_Dyn  Elf64_Dyn
#define Elf32_Sym  Elf64_Sym
#define Elf32_Rel  Elf64_Rel
#endif

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

/* util.c */
extern char *ElfGetStringIndex(ElfFile *file, int offset, int index);
extern char *ElfGetString(ElfFile *file, int offset);
extern ElfFile *OpenElfFile(char *name);
