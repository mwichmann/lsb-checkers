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
#if defined(__ia64__)
#define RPMARCH	0x0900
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
	HDRTAG_IMAGE	= 61,
	HDRTAG_SIGNATURES = 62,
	HDRTAG_IMMUTABLE= 63,
	HDRTAG_REGIONS	= 64,
	HDRTAG_I18NTABLE= 100,
	HDRTAG_SIGBASE	= 256, /* obsolete SIGTAGS start at 1000 now */
	HDRTAG_TAGBASE	= 1000,
	} HdrPrivIndexTag;

typedef enum {
	/* These are the old, obsolete values */
	SIGOLDTAG_SIZE	= 257,
	SIGOLDTAG_LEMD5_1	= 258,
	SIGOLDTAG_PGP	= 259,
	SIGOLDTAG_LEMD5_2	= 260,
	SIGOLDTAG_MD5	= 261,
	SIGOLDTAG_GPG	= 262,
	SIGOLDTAG_PGP5	= 263,
	SIGOLDTAG_BADSHA1HEADER	= 264,
	SIGOLDTAG_SHA1HEADER	= 265,
	/* These are the current values */
	SIGTAG_SIZE	= 1000,
	SIGTAG_LEMD5_1	= 1001,
	SIGTAG_PGP	= 1002,
	SIGTAG_LEMD5_2	= 1003,
	SIGTAG_MD5	= 1004
	} SigIndexTag;

typedef enum {
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

/*
 * Archive format -
 * really cpio, but it doesn't actually match the cpio definition ?!?!?!
 */

typedef struct {
	char	c_magic[6];
	char	c_ino[8];
	char	c_mode[8];
	char	c_uid[8];
	char	c_gid[8];
	char	c_nlink[8];
	char	c_mtime[8];
	char	c_filesize[8];
	char	c_devmajor[8];
	char	c_devminor[8];
	char	c_rdevmajor[8];
	char	c_rdevminor[8];
	char	c_namesize[8];
	char	c_checksum[8];
	} RpmArchiveHeader;

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

/* fhs.c */
extern void checkRpmArchiveFilename(char *filename, struct tetj_handle *journal);

/* archive.c */
void checkRpmArchive(RpmFile *file1, struct tetj_handle *journal);

/* hdr.c */
void checkRpmHdr(RpmFile *file1, struct tetj_handle *journal);
void checkRpmSignature(RpmFile *file1, struct tetj_handle *journal);
void checkRpmHeader(RpmFile *file1, struct tetj_handle *journal);


#endif /* _RPMCHK_H */
