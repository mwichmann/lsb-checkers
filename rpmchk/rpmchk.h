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
#define RPMARCH	0x0001
#endif
#if defined(__ia64__)
#define RPMARCH	0x0009
#endif

#define RPMOS	0x0001 /* Linux */

#define RPMSIGTYPE	0x0005

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

#include "rpmtag.h"

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
	RpmHeader	*header;
	RpmHeader	*nexthdr;
	caddr_t     storeaddr;  /* Start store for the current header */
	caddr_t     archive;
	}	RpmFile;

/* RPM Index things */

typedef void (*IdxTagFunc)(RpmFile *, RpmHdrIndex *, struct tetj_handle *);

typedef enum { Required, Optional } RpmIdxReqd ;

typedef enum { NotSeen, Seen } RpmIdxStatus ;

typedef struct	{
	RpmIndexTag	tag;
	char		*name;
	RpmIndexType	type;
	int		count;
	IdxTagFunc	func;
	RpmIdxReqd	reqd;
	RpmIdxStatus	status;
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
extern unsigned char *sigdata;
extern int lsbdepidx;
extern int archivesize;
extern int *filesizes;
extern int *filenames;

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
