#ifndef _RPMCHK_H
#define _RPMCHK_H

#include <sys/types.h>
#include <netinet/in.h>

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

/*
 * Each Index has a type associated with it. These are the types which
 * may be used.
 */
typedef enum {
	NULL_TYPE=0,
	CHAR=1,
	INT8=2,
	INT16=3,
	INT32=4,
	INT64=5,
	STRING=6,
	BIN=7,
	STRING_ARRAY=8,
	I18NSTRING=9
	} RpmIndexType;

/*
 * Each index has a tag that identifies what it is. These are the tags which
 * may be used.
 */
typedef enum {
	SIGTAG_SIZE = 1000,
	SIGTAG_MD5 = 1001,
	SIGTAG_PGP = 1002
	} SigIndexTag;

typedef enum {
	RPMTAG_IMAGE = 61,
	RPMTAG_SIGNATURES = 62,
	RPMTAG_IMMUTABLE = 63,
	RPMTAG_REGIONS = 64,
	RPMTAG_I18NTABLE = 100,
	RPMTAG_SIGBASE	= 256,

	RPMTAG_NAME	= 1000,
	RPMTAG_VERSION	= 1001,
	RPMTAG_RELEASE	= 1002,
	RPMTAG_SERIAL	= 1003,
	RPMTAG_SUMMARY	= 1004,
	RPMTAG_DESCRIPTION	= 1005,
	RPMTAG_BUILDTIME	= 1006,
	RPMTAG_BUILDHOST	= 1007,
	RPMTAG_INSTALLTIME	= 1008,
	RPMTAG_SIZE	= 1009,
	RPMTAG_DISTRIBUTION	= 1010,
	RPMTAG_VENDOR	= 1011,
	RPMTAG_GIF	= 1012,
	RPMTAG_XPM	= 1013,
	RPMTAG_LICENSE	= 1014,
	RPMTAG_PACKAGER	= 1015,
	RPMTAG_GROUP	= 1016,
	RPMTAG_CHANGELOG	= 1017,
	RPMTAG_SOURCE	= 1018,
	RPMTAG_PATCH	= 1019,
	RPMTAG_URL	= 1020,
	RPMTAG_OS	= 1021,
	RPMTAG_ARCH	= 1022,
	RPMTAG_PREIN	= 1023,
	RPMTAG_POSTIN	= 1024,
	RPMTAG_PREUN	= 1025,
	RPMTAG_POSTUN	= 1026,
	RPMTAG_OLDFILENAMES	= 1027,
	RPMTAG_FILESIZES	= 1028,
	RPMTAG_FILESTATES	= 1029,
	RPMTAG_FILEMODES	= 1030,
	RPMTAG_FILEUIDS	= 1031,
	RPMTAG_FILEGIDS	= 1032,
	RPMTAG_FILERDEVS	= 1033,
	RPMTAG_FILEMTIMES	= 1034,
	RPMTAG_FILEMD5S	= 1035,
	RPMTAG_FILELINKTOS	= 1036,
	RPMTAG_FILEFLAGS	= 1037,
	RPMTAG_ROOT	= 1038,
	RPMTAG_FILEUSERNAME	= 1039,
	RPMTAG_FILEGROUPNAME	= 1040,
	RPMTAG_EXCLUDE		= 1041,
	RPMTAG_EXCLUSIVE	= 1042,
	RPMTAG_ICON	= 1043,
	RPMTAG_SOURCRPM	= 1044,
	RPMTAG_FILEVERIFYFLAGS	= 1045,
	RPMTAG_ARCHIVESIZE	= 1046,
	RPMTAG_PROVIDENAME	= 1047,
	RPMTAG_REQUIREFLAGS	= 1048,
	RPMTAG_REQUIRENAME	= 1049,
	RPMTAG_REQUIREVERSION	= 1050,

	RPMTAG_VERIFYSCRIPT = 1079
	} RpmIndexTag;

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
	caddr_t     storeaddr;  /* Start store for the current header */
	caddr_t     archive;
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

/* RPM Index things */

typedef void (*IdxTagFunc)(RpmFile *, RpmHdrIndex *, struct tetj_handle *);

typedef struct	{
	RpmIndexTag	tag;
	char		*name;
	IdxTagFunc	func;
	} RpmIdxTagFuncRec;

extern RpmIdxTagFuncRec SigTags[];
extern int numSigIdxTags;
extern RpmIdxTagFuncRec HdrTags[];
extern int numHdrIdxTags;

/* vals.c */
extern char *architecture;
extern char *validos;
extern char *validdepver;
extern char *pkgname;
extern int lsbdepidx;

/* util.c */
extern RpmFile *OpenRpmFile(char *name);
extern void checkRpm(RpmFile *file1, struct tetj_handle *journal);
extern void checkRpmLead(RpmFile *file1, struct tetj_handle *journal);
extern void checkRpmHeader(RpmFile *file1, struct tetj_handle *journal);
#endif /* _RPMCHK_H */
