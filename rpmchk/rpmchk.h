#ifndef _RPMCHK_H
#define _RPMCHK_H

#include <sys/types.h>

struct tetj_handle;

/*
 * RPM file Lead
 */
typedef struct rpmlead {
    unsigned char magic[4];
    unsigned char major, minor;
    short type;
    short archnum;
    char name[66];
    short osnum;
    short signature_type;
    char reserved[16];
    } RpmLead;

#define RPMMAG "\355\253\356\333"
#define SRPMMAG	4

#define RPMFILEVERMAJ	0x03
#define RPMFILEVERMIN	0x00

#define RPMBINPKG	0x0000
#define RPMSRCPKG	0x0001

#if defined(__i386__)
#define RPMARCH	0x0100
#endif

#define RPMOS	0x0100 /* Linux */

#define RPMSIGTYPE	0x0500

typedef struct rpmheader {
    unsigned char magic[3];
    unsigned char version;
    char reserved[4];
    int	nindex;
    int	hsize;
    } RpmHeader;

#define RPMHDRMAG "\216\255\350"
#define SRPMHDRMAG	3

#define RPMHDRVER	1

typedef struct rpmhdrindex {
    int	tag;
    int	type;
    int	offset;
    int	count;
    } RpmHdrIndex;

/*
 * An in memory representation of the RPM file.
 */
typedef	struct	{
	int	fd;
	caddr_t     addr;  /* Start address of the file */
	int	size;
	RpmLead	*laddr;
	RpmHeader	*signature;
	RpmHeader	*nexthdr;
#if 0
	Elf32_Shdr *saddr; /* Start address of the next section of the file */
	Elf32_Phdr *paddr; /* address of the program header of the file */
	caddr_t     straddr;  /* Start address of the string table */
	int	strndx;	   /* index of the string table */
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
#endif
	}	RpmFile;

/* util.c */
extern RpmFile *OpenRpmFile(char *name);
extern void checkRpm(RpmFile *file1, struct tetj_handle *journal);
#endif /* _RPMCHK_H */
