#ifndef _ELFCHK_H
#define _ELFCHK_H

#include <sys/types.h>
#include <elf.h>

struct versym {
	char *name;
	char *vername;
	};

#if defined(__alpha) || defined(__alpha__) || \
    defined(__ia64__) || defined(ia64)
#define Elf32_Ehdr Elf64_Ehdr
#define Elf32_Shdr Elf64_Shdr
#define Elf32_Phdr Elf64_Phdr
#define Elf32_Dyn  Elf64_Dyn
#define Elf32_Sym  Elf64_Sym
#define Elf32_Rel  Elf64_Rel
#define Elf32_Verdef  Elf64_Verdef
#define Elf32_Verdaux  Elf64_Verdaux
#endif

/*
 * External tables that are generated from the DB.
 */


extern char *DtNeeded[];
extern int numDtNeeded;
extern struct versym DynSyms[];
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
	Elf32_Shdr *dynsymhdr;	/* Dynamic Symbol table header */

	int	numsyms;
	Elf32_Shdr *symhdr;	/* Symbol table header */
	Elf32_Sym	*syms; /* Array of symbol entries */

	Elf32_Shdr *dynhdr;	/* Dynamic entries header */
	Elf32_Dyn	*dyns; /* Array of dynamic entries */
	int	numdynents;

	Elf32_Shdr *dynshdr;	/* Dynamic string table header */

	Elf32_Shdr *verhdr;	/* Version entries header */
	Elf32_Half	*vers; /* Array of version entries */

	Elf32_Shdr *verdhdr;	/* Version definition header */
	Elf32_Verdef	*verd; /* Array of verdef entries */
	int	numverdefs;

	Elf32_Shdr *vernhdr;	/* Version dependency header */
	Elf32_Verneed	*vern; /* Array of verneed entries */
	int	numverneed;

	char	*versionnames[32]; /* arbitrary size, but big enough for now */
	}	ElfFile;

/* util.c */
extern char *ElfGetStringIndex(ElfFile *file, int offset, int index);
extern char *ElfGetString(ElfFile *file, int offset);
extern ElfFile *OpenElfFile(char *name);
extern void checkElf(ElfFile *file1, int isProgram);

#endif /* _ELFCHK_H */
