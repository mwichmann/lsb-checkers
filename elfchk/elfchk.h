/*
 *
 * Copyright (c) 2001-2002 The Free Standards Group Inc
 * Copyright (c) 2000-2002 Stuart Anderson (anderson@freestandards.org)
 * Copyright (c) 2002 Chris Yeoh (yeohc@au.ibm.com)
 *
 */
#ifndef _ELFCHK_H
#define _ELFCHK_H

#include <sys/types.h>
#include <elf.h>

struct tetj_handle;

struct versym {
	char *name;
	char *vername;
	int   deprecated;
	};

#if defined(__alpha) || defined(__alpha__) || \
    defined(__ia64__)
#define Elf32_Ehdr Elf64_Ehdr
#define Elf32_Shdr Elf64_Shdr
#define Elf32_Phdr Elf64_Phdr
#define Elf32_Dyn  Elf64_Dyn
#define Elf32_Sym  Elf64_Sym
#define Elf32_Rel  Elf64_Rel
#define Elf32_Nhdr  Elf64_Nhdr
#define Elf32_Verdef  Elf64_Verdef
#define Elf32_Verdaux  Elf64_Verdaux
#endif

/*
 * Debugging interface: Set the environment variable ELFCHK_DEBUG to a value
 * that corresponds to the bits defined below.
 */
#define DEBUG_ENV_OVERRIDES	0x0001
#define DEBUG_PROGRAM_HEADERS	0x0002
#define DEBUG_SECTION_HEADERS	0x0004
#define DEBUG_SECTION_CONTENTS	0x0008
#define DEBUG_VERSION_CONTENTS	0x0010
#define DEBUG_DWARF_CONTENTS	0x0011

extern int elfchk_debug;

/*
 * External tables that are generated from the DB.
 */


extern char *DtNeeded[];
extern int numDtNeeded;
extern struct versym DynSyms[];
extern int numDynSyms;

/*
 * Global values that may be checked in various places.
 */
extern char *ProgInterp;


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
extern void checkElf(ElfFile *file1, int isProgram, 
                     struct tetj_handle *journal);

/* note.c */
extern int check_NOTE(ElfFile *file, unsigned char *notes, int length, struct tetj_handle *journal);

/* dumpbytes.c */
extern void dumpbytes(unsigned char *ptr, int size);

/* Add non LSB libraries to list which are ok to be in the DT_NEEDED section */
extern void addDTNeeded (char *filename);
#endif /* _ELFCHK_H */
