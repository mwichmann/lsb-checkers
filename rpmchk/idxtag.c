#include <stdio.h>
#include <string.h>
#include "rpmchk.h"
#include "tagfuncs.h"
#include "../tetj/tetj.h"

/*
 * This table contains entries for the Signature tags.
 */
RpmIdxTagFuncRec	SigTags[] = {
	{SIGTAG_SIZE,	"SIGTAG_SIZE",		checkRpmIdxSIGSIZE},
	{SIGTAG_MD5,	"SIGTAG_MD5",		checkRpmIdxSIGMD5},
	{SIGTAG_PGP,	"SIGTAG_PGP",		checkRpmIdxSIGPGP}
	};

int numSigIdxTags = sizeof(SigTags)/sizeof(RpmIdxTagFuncRec);

/*
 * This table contains entries for the normal RPM tags.
 */
RpmIdxTagFuncRec	HdrTags[] = {
	{RPMTAG_NAME,	"RPMTAG_NAME",		checkRpmIdxNAME},
	{RPMTAG_VERSION, "RPMTAG_VERSION",	checkRpmIdxVERSION},
	{RPMTAG_RELEASE, "RPMTAG_RELEASE",	checkRpmIdxRELEASE},
	{RPMTAG_SERIAL,	"RPMTAG_SERIAL",	checkRpmIdxSERIAL},
	{RPMTAG_SUMMARY, "RPMTAG_SUMMARY",	checkRpmIdxSUMMARY},
	{RPMTAG_DESCRIPTION, "RPMTAG_DESCRIPTION",	checkRpmIdxUNKNOWN},
	{RPMTAG_BUILDTIME, "RPMTAG_BUILDTIME",	checkRpmIdxUNKNOWN},
	{RPMTAG_BUILDHOST, "RPMTAG_BUILDHOST",	checkRpmIdxUNKNOWN},
	{RPMTAG_INSTALLTIME, "RPMTAG_INSTALLTIME",	checkRpmIdxUNKNOWN},
	{RPMTAG_SIZE, "RPMTAG_SIZE",	checkRpmIdxUNKNOWN},
	{RPMTAG_DISTRIBUTION, "RPMTAG_DISTRIBUTION",	checkRpmIdxUNKNOWN},
	{RPMTAG_VENDOR, "RPMTAG_VENDOR",	checkRpmIdxUNKNOWN},
	{RPMTAG_GIF, "RPMTAG_GIF",	checkRpmIdxUNKNOWN},
	{RPMTAG_XPM, "RPMTAG_XPM",	checkRpmIdxUNKNOWN},
	{RPMTAG_LICENSE, "RPMTAG_LICENSE",	checkRpmIdxUNKNOWN},
	{RPMTAG_PACKAGER, "RPMTAG_PACKAGER",	checkRpmIdxUNKNOWN},
	{RPMTAG_GROUP, "RPMTAG_GROUP",	checkRpmIdxUNKNOWN},
	{RPMTAG_CHANGELOG, "RPMTAG_CHANGELOG",	checkRpmIdxUNKNOWN},
	{RPMTAG_SOURCE, "RPMTAG_SOURCE",	checkRpmIdxUNKNOWN},
	{RPMTAG_PATCH, "RPMTAG_PATCH",	checkRpmIdxUNKNOWN},
	{RPMTAG_URL, "RPMTAG_URL",	checkRpmIdxUNKNOWN},
	{RPMTAG_OS, "RPMTAG_OS",	checkRpmIdxOS},
	{RPMTAG_ARCH, "RPMTAG_ARCH",	checkRpmIdxARCH},
	{RPMTAG_PREIN, "RPMTAG_PREIN",	checkRpmIdxUNKNOWN},
	{RPMTAG_POSTIN, "RPMTAG_POSTIN",	checkRpmIdxUNKNOWN},
	{RPMTAG_PREUN, "RPMTAG_PREUN",	checkRpmIdxUNKNOWN},
	{RPMTAG_POSTUN, "RPMTAG_POSTUN",	checkRpmIdxUNKNOWN},
	{RPMTAG_OLDFILENAMES, "RPMTAG_OLDFILENAMES",	checkRpmIdxUNKNOWN},
	{RPMTAG_FILESIZES, "RPMTAG_FILESIZES",	checkRpmIdxUNKNOWN},
	{RPMTAG_FILESTATES, "RPMTAG_FILESTATES",	checkRpmIdxUNKNOWN},
	{RPMTAG_FILEMODES, "RPMTAG_FILEMODES",	checkRpmIdxUNKNOWN},
	{RPMTAG_FILEUIDS, "RPMTAG_FILEUIDS",	checkRpmIdxUNKNOWN},
	{RPMTAG_FILEGIDS, "RPMTAG_FILEGIDS",	checkRpmIdxUNKNOWN},
	{RPMTAG_FILERDEVS, "RPMTAG_FILERDEVS",	checkRpmIdxUNKNOWN},
	{RPMTAG_FILEMTIMES, "RPMTAG_FILEMTIMES",	checkRpmIdxUNKNOWN},
	{RPMTAG_FILEMD5S, "RPMTAG_FILEMD5S",	checkRpmIdxUNKNOWN},
	{RPMTAG_FILELINKTOS, "RPMTAG_FILELINKTOS",	checkRpmIdxUNKNOWN},
	{RPMTAG_FILEFLAGS, "RPMTAG_FILEFLAGS",	checkRpmIdxUNKNOWN},
	{RPMTAG_ROOT, "RPMTAG_ROOT",	checkRpmIdxUNKNOWN},
	{RPMTAG_FILEUSERNAME, "RPMTAG_FILEUSERNAME",	checkRpmIdxUNKNOWN},
	{RPMTAG_FILEGROUPNAME, "RPMTAG_FILEGROUPNAME",	checkRpmIdxUNKNOWN},
	{RPMTAG_EXCLUDE, "RPMTAG_EXCLUDE",	checkRpmIdxUNKNOWN},
	{RPMTAG_EXCLUSIVE, "RPMTAG_EXCLUSIVE",	checkRpmIdxUNKNOWN},
	{RPMTAG_ICON, "RPMTAG_ICON",	checkRpmIdxUNKNOWN},
	{RPMTAG_SOURCRPM, "RPMTAG_SOURCRPM",	checkRpmIdxUNKNOWN},
	{RPMTAG_FILEVERIFYFLAGS, "RPMTAG_FILEVERIFYFLAGS",	checkRpmIdxUNKNOWN},
	{RPMTAG_ARCHIVESIZE, "RPMTAG_ARCHIVESIZE",	checkRpmIdxUNKNOWN},
	{RPMTAG_PROVIDENAME, "RPMTAG_PROVIDENAME",	checkRpmIdxPROVIDNAME},
	{RPMTAG_REQUIREFLAGS, "RPMTAG_REQUIREFLAGS",	checkRpmIdxREQUIREFLAGS},
	{RPMTAG_REQUIRENAME, "RPMTAG_REQUIRENAME",	checkRpmIdxREQUIRENAME},
	{RPMTAG_REQUIREVERSION, "RPMTAG_REQUIREVERSION",	checkRpmIdxREQUIREVERSION},
	};

int numHdrIdxTags = sizeof(HdrTags)/sizeof(RpmIdxTagFuncRec);

void
checkRpmIdx(RpmFile *file1, RpmHdrIndex *hidx, RpmIdxTagFuncRec Tags[],
				int numtags, struct tetj_handle *journal)
{
int		htag, htype, hoffset, hcount;
int		i,j,nindex,tag;
RpmHeader	*hdr;

hdr=(RpmHeader *)file1->nexthdr;
nindex=ntohl(hdr->nindex);
htag=ntohl(hidx->tag);
htype=ntohl(hidx->type);
hoffset=ntohl(hidx->offset);
hcount=ntohl(hidx->count);

fprintf(stderr,"checkRpmIdx() type=%d offset=%x count=%x\n",
						htype,hoffset,hcount);

for(i=1;i<nindex;i++) {
	tag=ntohl(hidx[i].tag);
	for(j=0;j<numtags;j++)
		if( Tags[j].tag == tag ) {
			Tags[j].func(file1, &hidx[i], journal);
			break;
			}
	if( j == numtags )
		checkRpmIdxUNKNOWN(file1, &hidx[i], journal);
	}
}

/*
 * These functions correspond to the tag values for a Signature
 */

void
checkRpmIdxSIGSIZE(RpmFile *file1, RpmHdrIndex *hidx, struct tetj_handle *journal)
{
int		htag, htype, hoffset, hcount;
int		nindex;
RpmHeader	*hdr;

hdr=(RpmHeader *)file1->nexthdr;
nindex=ntohl(hdr->nindex);
htag=ntohl(hidx->tag);
htype=ntohl(hidx->type);
hoffset=ntohl(hidx->offset);
hcount=ntohl(hidx->count);

fprintf(stderr,"checkRpmIdxSIGSIZE() type=%d offset=%x count=%x\n",
						htype,hoffset,hcount);
}

void
checkRpmIdxSIGMD5(RpmFile *file1, RpmHdrIndex *hidx, struct tetj_handle *journal)
{
int		htag, htype, hoffset, hcount;
int		nindex;
RpmHeader	*hdr;

hdr=(RpmHeader *)file1->nexthdr;
nindex=ntohl(hdr->nindex);
htag=ntohl(hidx->tag);
htype=ntohl(hidx->type);
hoffset=ntohl(hidx->offset);
hcount=ntohl(hidx->count);

fprintf(stderr,"checkRpmIdxSIGMD5() type=%d offset=%x count=%x\n",
						htype,hoffset,hcount);
}

void
checkRpmIdxSIGPGP(RpmFile *file1, RpmHdrIndex *hidx, struct tetj_handle *journal)
{
int		htag, htype, hoffset, hcount;
int		nindex;
RpmHeader	*hdr;

hdr=(RpmHeader *)file1->nexthdr;
nindex=ntohl(hdr->nindex);
htag=ntohl(hidx->tag);
htype=ntohl(hidx->type);
hoffset=ntohl(hidx->offset);
hcount=ntohl(hidx->count);

fprintf(stderr,"checkRpmIdxSIGPGP() type=%d offset=%x count=%x\n",
						htype,hoffset,hcount);
}

/*
 * These functions are for the normal RPM tags.
 */
void
checkRpmIdxSIGNATURES(RpmFile *file1, RpmHdrIndex *hidx, struct tetj_handle *journal)
{
int		htag, htype, hoffset, hcount;
int		nindex;
RpmHeader	*hdr;

hdr=(RpmHeader *)file1->nexthdr;
nindex=ntohl(hdr->nindex);
htag=ntohl(hidx->tag);
htype=ntohl(hidx->type);
hoffset=ntohl(hidx->offset);
hcount=ntohl(hidx->count);

fprintf(stderr,"checkRpmIdxSIGNATURES() type=%d offset=%x count=%x\n",
						htype,hoffset,hcount);
}

void
checkRpmIdxIMMUTABLE(RpmFile *file1, RpmHdrIndex *hidx, struct tetj_handle *journal)
{
int		htag, htype, hoffset, hcount;
int		nindex;
RpmHeader	*hdr;

hdr=(RpmHeader *)file1->nexthdr;
nindex=ntohl(hdr->nindex);
htag=ntohl(hidx->tag);
htype=ntohl(hidx->type);
hoffset=ntohl(hidx->offset);
hcount=ntohl(hidx->count);
fprintf(stderr,"checkRpmIdxIMMUTABLE() type=%d offset=%x count=%x\n",
						htype,hoffset,hcount);
}

void
checkRpmIdxUNKNOWN(RpmFile *file1, RpmHdrIndex *hidx, struct tetj_handle *journal)
{
int		htag, htype, hoffset, hcount;

htag=ntohl(hidx->tag);
htype=ntohl(hidx->type);
hoffset=ntohl(hidx->offset);
hcount=ntohl(hidx->count);
/*
fprintf(stderr,"checkRpmIdxUNKNOWN() tag=%d type=%d offset=%x count=%x\n",
						htag,htype,hoffset,hcount);
*/
}

void
checkRpmIdxNAME(RpmFile *file1, RpmHdrIndex *hidx, struct tetj_handle *journal)
{
int	htag, htype, hoffset, hcount;

htag=ntohl(hidx->tag);
htype=ntohl(hidx->type);
hoffset=ntohl(hidx->offset);
hcount=ntohl(hidx->count);
pkgname=file1->storeaddr+hoffset;

fprintf(stderr,"checkRpmIdxNAME() type=%d offset=%x count=%x %s\n",
						htype,hoffset,hcount,pkgname);
}

void
checkRpmIdxVERSION(RpmFile *file1, RpmHdrIndex *hidx, struct tetj_handle *journal)
{
int	htag, htype, hoffset, hcount;
char	*name;

htag=ntohl(hidx->tag);
htype=ntohl(hidx->type);
hoffset=ntohl(hidx->offset);
hcount=ntohl(hidx->count);
name=file1->storeaddr+hoffset;
fprintf(stderr,"checkRpmIdxVERSION() type=%d offset=%x count=%x %s\n",
						htype,hoffset,hcount,name);
}

void
checkRpmIdxRELEASE(RpmFile *file1, RpmHdrIndex *hidx, struct tetj_handle *journal)
{
int	htag, htype, hoffset, hcount;
char	*name;

htag=ntohl(hidx->tag);
htype=ntohl(hidx->type);
hoffset=ntohl(hidx->offset);
hcount=ntohl(hidx->count);
name=file1->storeaddr+hoffset;
fprintf(stderr,"checkRpmIdxRELEASE() type=%d offset=%x count=%x %s\n",
						htype,hoffset,hcount,name);
}

void
checkRpmIdxSERIAL(RpmFile *file1, RpmHdrIndex *hidx, struct tetj_handle *journal)
{
int		htag, htype, hoffset, hcount;

htag=ntohl(hidx->tag);
htype=ntohl(hidx->type);
hoffset=ntohl(hidx->offset);
hcount=ntohl(hidx->count);
fprintf(stderr,"checkRpmIdxSERIAL() type=%d offset=%x count=%x\n",
						htype,hoffset,hcount);
}

void
checkRpmIdxSUMMARY(RpmFile *file1, RpmHdrIndex *hidx, struct tetj_handle *journal)
{
int	htag, htype, hoffset, hcount;
char	*name;

htag=ntohl(hidx->tag);
htype=ntohl(hidx->type);
hoffset=ntohl(hidx->offset);
hcount=ntohl(hidx->count);
name=file1->storeaddr+hoffset;
fprintf(stderr,"checkRpmIdxSUMMARY() type=%d offset=%x count=%x %s\n",
						htype,hoffset,hcount,name);
}

void
checkRpmIdxOS(RpmFile *file1, RpmHdrIndex *hidx, struct tetj_handle *journal)
{
int	htag, htype, hoffset, hcount;
char	*name;

htag=ntohl(hidx->tag);
htype=ntohl(hidx->type);
hoffset=ntohl(hidx->offset);
hcount=ntohl(hidx->count);
name=file1->storeaddr+hoffset;
if( strcmp(name,validos) != 0 ) {
	fprintf(stderr,"Incorrect RPMTAG_OS: expecting %s but found %s\n",
						validos,		name);
	}
}

void
checkRpmIdxARCH(RpmFile *file1, RpmHdrIndex *hidx, struct tetj_handle *journal)
{
int	htag, htype, hoffset, hcount;
char	*name;

htag=ntohl(hidx->tag);
htype=ntohl(hidx->type);
hoffset=ntohl(hidx->offset);
hcount=ntohl(hidx->count);
name=file1->storeaddr+hoffset;
if( strcmp(name,architecture) != 0 ) {
	fprintf(stderr,"Incorrect RPMTAG_ARCH: expecting %s but found %s\n",
						architecture,		name);
	}
}

void
checkRpmIdxPROVIDNAME(RpmFile *file1, RpmHdrIndex *hidx, struct tetj_handle *journal)
{
int	htag, htype, hoffset, hcount;
char	*name;

htag=ntohl(hidx->tag);
htype=ntohl(hidx->type);
hoffset=ntohl(hidx->offset);
hcount=ntohl(hidx->count);
name=file1->storeaddr+hoffset;
fprintf(stderr,"checkRpmIdxPROVIDNAME() type=%d offset=%x count=%x %s\n",
						htype,hoffset,hcount,name);
}

void
checkRpmIdxREQUIREFLAGS(RpmFile *file1, RpmHdrIndex *hidx, struct tetj_handle *journal)
{
int	htag, htype, hoffset, hcount;
int	flag;

htag=ntohl(hidx->tag);
htype=ntohl(hidx->type);
hoffset=ntohl(hidx->offset);
hcount=ntohl(hidx->count);
flag=*(file1->storeaddr+hoffset);
fprintf(stderr,"checkRpmIdxREQUIREFLAGS() type=%d offset=%x count=%x %x\n",
						htype,hoffset,hcount,flag);
}

void
checkRpmIdxREQUIRENAME(RpmFile *file1, RpmHdrIndex *hidx, struct tetj_handle *journal)
{
int	i, htag, htype, hoffset, hcount;
char	*name;

htag=ntohl(hidx->tag);
htype=ntohl(hidx->type);
hoffset=ntohl(hidx->offset);
hcount=ntohl(hidx->count);
name=file1->storeaddr+hoffset;
for(i=0;i<hcount;i++) {
	if( (strcmp(name,"lsb") != 0) && (strncmp(name,"rpmlib",6)!= 0) ) {
		fprintf(stderr,"Invalid RPMTAG_REQUIRENAME: expecting \"lsb\"");
		fprintf(stderr," but found %s\n", name );
	} else {
		if( strcmp(name,"lsb") == 0 ) 
			lsbdepidx=i;
	}
	name+=strlen(name)+1;
	}
}

void
checkRpmIdxREQUIREVERSION(RpmFile *file1, RpmHdrIndex *hidx, struct tetj_handle *journal)
{
int	i,htag, htype, hoffset, hcount;
char	*name;

htag=ntohl(hidx->tag);
htype=ntohl(hidx->type);
hoffset=ntohl(hidx->offset);
hcount=ntohl(hidx->count);
name=file1->storeaddr+hoffset;
for(i=0;i<hcount;i++) {
	if( i == lsbdepidx && strcmp(name,validdepver) != 0 ) {
		fprintf(stderr,"Incorrect version on \"lsb\" dependency: ");
		fprintf(stderr,"expecting %s but found %s\n",validdepver, name);
		}
	name+=strlen(name)+1;
	}
}
