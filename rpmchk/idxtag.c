#include <stdio.h>
#include <string.h>
#include "rpmchk.h"
#include "tagfuncs.h"
#include "../tetj/tetj.h"

/*
 * This table contains entries for the Signature tags.
 */
RpmIdxTagFuncRec	SigTags[] = {
	{HDRTAG_IMAGE,	"HDRTAG_IMAGE",		checkRpmIdxHDRIMAGE,		Optional, NotSeen},
	{HDRTAG_SIGNATURES, "HDRTAG_SIGNATURES", checkRpmIdxHDRSIGNATURES,	Optional, NotSeen},
	{HDRTAG_IMMUTABLE, "HDRTAG_IMMUTABLE",	checkRpmIdxHDRIMMUTABLE,	Optional, NotSeen},
	{HDRTAG_REGIONS, "HDRTAG_REGIONS",	checkRpmIdxHDRREGIONS,		Optional, NotSeen},
	{HDRTAG_I18NTABLE, "HDRTAG_I18NTABLE",	checkRpmIdxHDRI18NTABLE,	Optional, NotSeen},
	{HDRTAG_SIGBASE, "HDRTAG_SIGBASE",	checkRpmIdxHDRSIGBASE,		Optional, NotSeen},
	{HDRTAG_TAGBASE, "HDRTAG_TAGBASE",	checkRpmIdxHDRTAGBASE,		Optional, NotSeen},
	{SIGTAG_SIZE,	"SIGTAG_SIZE",		checkRpmIdxSIGSIZE,		Optional, NotSeen},
	{SIGOLDTAG_SIZE, "SIGTAG_SIZE",		checkRpmIdxSIGSIZE,		Optional, NotSeen},
	{SIGTAG_LEMD5_1,"SIGTAG_LEMD5_1",	checkRpmIdxUNKNOWN,		Optional, NotSeen},
	{SIGTAG_PGP,	"SIGTAG_PGP",		checkRpmIdxSIGPGP,		Optional, NotSeen},
	{SIGOLDTAG_PGP,	"SIGTAG_PGP",		checkRpmIdxSIGPGP,		Optional, NotSeen},
	{SIGTAG_LEMD5_2,"SIGTAG_LEMD5_2",	checkRpmIdxUNKNOWN,		Optional, NotSeen},
	{SIGTAG_MD5,	"SIGTAG_MD5",		checkRpmIdxSIGMD5,		Optional, NotSeen},
	{SIGOLDTAG_GPG,	"SIGTAG_GPG",		checkRpmIdxSIGGPG,		Optional, NotSeen},
	{SIGOLDTAG_PGP5, "SIGTAG_PGP5",		checkRpmIdxSIGPGP5,		Optional, NotSeen},
	{SIGOLDTAG_SHA1HEADER, "SIGTAG_SHA1HEADER", checkRpmIdxSIGSHA1HEADER,	Optional, NotSeen},
	{SIGOLDTAG_MD5,	"SIGTAG_MD5",		checkRpmIdxSIGMD5,		Optional, NotSeen},
	};

int numSigIdxTags = sizeof(SigTags)/sizeof(RpmIdxTagFuncRec);

/*
 * This table contains entries for the normal RPM tags.
 */
RpmIdxTagFuncRec	HdrTags[] = {
	{HDRTAG_IMAGE,	"HDRTAG_IMAGE",		checkRpmIdxHDRIMAGE,		Optional, NotSeen},
	{HDRTAG_SIGNATURES, "HDRTAG_SIGNATURES", checkRpmIdxHDRSIGNATURES,	Optional, NotSeen},
	{HDRTAG_IMMUTABLE, "HDRTAG_IMMUTABLE",	checkRpmIdxHDRIMMUTABLE,	Optional, NotSeen},
	{HDRTAG_REGIONS, "HDRTAG_REGIONS",	checkRpmIdxHDRREGIONS,		Optional, NotSeen},
	{HDRTAG_I18NTABLE, "HDRTAG_I18NTABLE",	checkRpmIdxHDRI18NTABLE,	Optional, NotSeen},
	{HDRTAG_SIGBASE, "HDRTAG_SIGBASE",	checkRpmIdxHDRSIGBASE,		Optional, NotSeen},
	{HDRTAG_TAGBASE, "HDRTAG_TAGBASE",	checkRpmIdxHDRTAGBASE,		Optional, NotSeen},
	{RPMTAG_NAME,	"RPMTAG_NAME",		checkRpmIdxNAME,		Optional, NotSeen},
	{RPMTAG_VERSION, "RPMTAG_VERSION",	checkRpmIdxVERSION,		Optional, NotSeen},
	{RPMTAG_RELEASE, "RPMTAG_RELEASE",	checkRpmIdxRELEASE,		Optional, NotSeen},
	{RPMTAG_SERIAL,	"RPMTAG_SERIAL",	checkRpmIdxSERIAL,		Optional, NotSeen},
	{RPMTAG_SUMMARY, "RPMTAG_SUMMARY",	checkRpmIdxSUMMARY,		Optional, NotSeen},
	{RPMTAG_DESCRIPTION, "RPMTAG_DESCRIPTION",	checkRpmIdxDESCRIPTION,	Optional, NotSeen},
	{RPMTAG_BUILDTIME, "RPMTAG_BUILDTIME",	checkRpmIdxUNKNOWN,		Optional, NotSeen},
	{RPMTAG_BUILDHOST, "RPMTAG_BUILDHOST",	checkRpmIdxUNKNOWN,		Optional, NotSeen},
	{RPMTAG_INSTALLTIME, "RPMTAG_INSTALLTIME",	checkRpmIdxUNKNOWN,	Optional, NotSeen},
	{RPMTAG_SIZE,	"RPMTAG_SIZE",		checkRpmIdxUNKNOWN,		Optional, NotSeen},
	{RPMTAG_DISTRIBUTION, "RPMTAG_DISTRIBUTION",	checkRpmIdxUNKNOWN,	Optional, NotSeen},
	{RPMTAG_VENDOR, "RPMTAG_VENDOR",	checkRpmIdxUNKNOWN,		Optional, NotSeen},
	{RPMTAG_GIF,	"RPMTAG_GIF",		checkRpmIdxUNKNOWN,		Optional, NotSeen},
	{RPMTAG_XPM,	"RPMTAG_XPM",		checkRpmIdxUNKNOWN,		Optional, NotSeen},
	{RPMTAG_LICENSE, "RPMTAG_LICENSE",	checkRpmIdxUNKNOWN,		Optional, NotSeen},
	{RPMTAG_PACKAGER, "RPMTAG_PACKAGER",	checkRpmIdxUNKNOWN,		Optional, NotSeen},
	{RPMTAG_GROUP,	"RPMTAG_GROUP",		checkRpmIdxUNKNOWN,		Optional, NotSeen},
	{RPMTAG_CHANGELOG, "RPMTAG_CHANGELOG",	checkRpmIdxUNKNOWN,		Optional, NotSeen},
	{RPMTAG_SOURCE, "RPMTAG_SOURCE",	checkRpmIdxUNKNOWN,		Optional, NotSeen},
	{RPMTAG_PATCH,	"RPMTAG_PATCH",		checkRpmIdxUNKNOWN,		Optional, NotSeen},
	{RPMTAG_URL,	"RPMTAG_URL",		checkRpmIdxUNKNOWN,		Optional, NotSeen},
	{RPMTAG_OS,	"RPMTAG_OS",		checkRpmIdxOS,			Optional, NotSeen},
	{RPMTAG_ARCH,	"RPMTAG_ARCH",		checkRpmIdxARCH,		Optional, NotSeen},
	{RPMTAG_PREIN,	"RPMTAG_PREIN",		checkRpmIdxUNKNOWN,		Optional, NotSeen},
	{RPMTAG_POSTIN,	"RPMTAG_POSTIN",	checkRpmIdxUNKNOWN,		Optional, NotSeen},
	{RPMTAG_PREUN,	"RPMTAG_PREUN",		checkRpmIdxUNKNOWN,		Optional, NotSeen},
	{RPMTAG_POSTUN, "RPMTAG_POSTUN",	checkRpmIdxUNKNOWN,		Optional, NotSeen},
	{RPMTAG_OLDFILENAMES, "RPMTAG_OLDFILENAMES",	checkRpmIdxUNKNOWN,	Optional, NotSeen},
	{RPMTAG_FILESIZES, "RPMTAG_FILESIZES",	checkRpmIdxUNKNOWN,		Optional, NotSeen},
	{RPMTAG_FILESTATES, "RPMTAG_FILESTATES",	checkRpmIdxUNKNOWN,	Optional, NotSeen},
	{RPMTAG_FILEMODES, "RPMTAG_FILEMODES",	checkRpmIdxUNKNOWN,		Optional, NotSeen},
	{RPMTAG_FILEUIDS, "RPMTAG_FILEUIDS",	checkRpmIdxUNKNOWN,		Optional, NotSeen},
	{RPMTAG_FILEGIDS, "RPMTAG_FILEGIDS",	checkRpmIdxUNKNOWN,		Optional, NotSeen},
	{RPMTAG_FILERDEVS, "RPMTAG_FILERDEVS",	checkRpmIdxUNKNOWN,		Optional, NotSeen},
	{RPMTAG_FILEMTIMES, "RPMTAG_FILEMTIMES",	checkRpmIdxUNKNOWN,	Optional, NotSeen},
	{RPMTAG_FILEMD5S, "RPMTAG_FILEMD5S",	checkRpmIdxUNKNOWN,		Optional, NotSeen},
	{RPMTAG_FILELINKTOS, "RPMTAG_FILELINKTOS",	checkRpmIdxUNKNOWN,	Optional, NotSeen},
	{RPMTAG_FILEFLAGS, "RPMTAG_FILEFLAGS",	checkRpmIdxUNKNOWN,		Optional, NotSeen},
	{RPMTAG_ROOT,	"RPMTAG_ROOT",		checkRpmIdxUNKNOWN,		Optional, NotSeen},
	{RPMTAG_FILEUSERNAME, "RPMTAG_FILEUSERNAME",	checkRpmIdxUNKNOWN,	Optional, NotSeen},
	{RPMTAG_FILEGROUPNAME, "RPMTAG_FILEGROUPNAME",	checkRpmIdxUNKNOWN,	Optional, NotSeen},
	{RPMTAG_EXCLUDE, "RPMTAG_EXCLUDE",	checkRpmIdxUNKNOWN,		Optional, NotSeen},
	{RPMTAG_EXCLUSIVE, "RPMTAG_EXCLUSIVE",	checkRpmIdxUNKNOWN,		Optional, NotSeen},
	{RPMTAG_ICON,	"RPMTAG_ICON",		checkRpmIdxUNKNOWN,		Optional, NotSeen},
	{RPMTAG_SOURCRPM, "RPMTAG_SOURCRPM",	checkRpmIdxUNKNOWN,		Optional, NotSeen},
	{RPMTAG_FILEVERIFYFLAGS, "RPMTAG_FILEVERIFYFLAGS",	checkRpmIdxUNKNOWN,	Optional, NotSeen},
	{RPMTAG_ARCHIVESIZE, "RPMTAG_ARCHIVESIZE",	checkRpmIdxUNKNOWN,	Optional, NotSeen},
	{RPMTAG_PROVIDENAME, "RPMTAG_PROVIDENAME",	checkRpmIdxPROVIDNAME,	Optional, NotSeen},
	{RPMTAG_REQUIREFLAGS, "RPMTAG_REQUIREFLAGS",	checkRpmIdxREQUIREFLAGS,	Optional, NotSeen},
	{RPMTAG_REQUIRENAME, "RPMTAG_REQUIRENAME",	checkRpmIdxREQUIRENAME,	Optional, NotSeen},
	{RPMTAG_REQUIREVERSION, "RPMTAG_REQUIREVERSION",	checkRpmIdxREQUIREVERSION,	Optional, NotSeen},
	{RPMTAG_PAYLOADFORMAT, "RPMTAG_PAYLOADFORMAT",	checkRpmIdxPAYLOADFORMAT,	Optional, NotSeen},
	{RPMTAG_PAYLOADCOMPRESSOR, "RPMTAG_PAYLOADCOMPRESSOR",	checkRpmIdxPAYLOADCOMPRESSOR,	Optional, NotSeen},
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

for(i=0;i<nindex;i++) {
	tag=ntohl(hidx[i].tag);
	for(j=0;j<numtags;j++)
		if( Tags[j].tag == tag ) {
			Tags[j].status=Seen;
			Tags[j].func(file1, &hidx[i], journal);
			break;
			}
	if( j == numtags ) {
		fprintf(stderr,"checkRpmIdx() unexpected Index tag=%d type=%d offset=%x count=%x\n",
				ntohl(hidx[i].tag), ntohl(hidx[i].type),ntohl(hidx[i].offset),ntohl(hidx[i].count));
		/* checkRpmIdxUNKNOWN(file1, &hidx[i], journal); */
		}
	}

/* Go through the table, and make sure that the required Indices were seen */
}

/*
 * These functions correspond to the header private tag values
 */

void
checkRpmIdxHDRIMAGE(RpmFile *file1, RpmHdrIndex *hidx, struct tetj_handle *journal)
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

fprintf(stderr,"checkRpmIdxHDRIMAGE() type=%d offset=%x count=%x\n",
						htype,hoffset,hcount);
}

void
checkRpmIdxHDRSIGNATURES(RpmFile *file1, RpmHdrIndex *hidx, struct tetj_handle *journal)
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

fprintf(stderr,"checkRpmIdxHDRSIGNATURES() type=%d offset=%x count=%x\n",
						htype,hoffset,hcount);
}

void
checkRpmIdxHDRIMMUTABLE(RpmFile *file1, RpmHdrIndex *hidx, struct tetj_handle *journal)
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

fprintf(stderr,"checkRpmIdxHDRIMMUTABLE() type=%d offset=%x count=%x\n",
						htype,hoffset,hcount);
}

void
checkRpmIdxHDRREGIONS(RpmFile *file1, RpmHdrIndex *hidx, struct tetj_handle *journal)
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

fprintf(stderr,"checkRpmIdxHDRREGIONS() type=%d offset=%x count=%x\n",
						htype,hoffset,hcount);
}

void
checkRpmIdxHDRI18NTABLE(RpmFile *file1, RpmHdrIndex *hidx, struct tetj_handle *journal)
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

fprintf(stderr,"checkRpmIdxHDRI18NTABLE() type=%d offset=%x count=%x\n",
						htype,hoffset,hcount);
}

void
checkRpmIdxHDRSIGBASE(RpmFile *file1, RpmHdrIndex *hidx, struct tetj_handle *journal)
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

fprintf(stderr,"checkRpmIdxHDRSIGBASE() type=%d offset=%x count=%x\n",
						htype,hoffset,hcount);
}

void
checkRpmIdxHDRTAGBASE(RpmFile *file1, RpmHdrIndex *hidx, struct tetj_handle *journal)
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

fprintf(stderr,"checkRpmIdxHDRTAGBASE() type=%d offset=%x count=%x\n",
						htype,hoffset,hcount);
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
checkRpmIdxSIGGPG(RpmFile *file1, RpmHdrIndex *hidx, struct tetj_handle *journal)
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

fprintf(stderr,"checkRpmIdxSIGGPG() type=%d offset=%x count=%x\n",
						htype,hoffset,hcount);
}

void
checkRpmIdxSIGPGP5(RpmFile *file1, RpmHdrIndex *hidx, struct tetj_handle *journal)
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

fprintf(stderr,"checkRpmIdxSIGPGP5() type=%d offset=%x count=%x\n",
						htype,hoffset,hcount);
}

void
checkRpmIdxSIGSHA1HEADER(RpmFile *file1, RpmHdrIndex *hidx, struct tetj_handle *journal)
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

fprintf(stderr,"checkRpmIdxSIGSHA1HEADER() type=%d offset=%x count=%x\n",
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
int	htag, htype, hoffset, hcount;
/*
char	*data=(char *)hidx;
*/

htag=ntohl(hidx->tag);
htype=ntohl(hidx->type);
hoffset=ntohl(hidx->offset);
hcount=ntohl(hidx->count);
fprintf(stderr,"checkRpmIdxUNKNOWN() tag=%d (%x) type=%d offset=%x count=%x\n",
					htag,htag,htype,hoffset,hcount);
/*
fprintf(stderr,"%2.2x %2.2x %2.2x %2.2x\n",
				data[0], data[1], data[2], data[3]);
fprintf(stderr,"%2.2x %2.2x %2.2x %2.2x\n",
				data[4], data[5], data[6], data[7]);
fprintf(stderr,"%2.2x %2.2x %2.2x %2.2x\n",
				data[8], data[9], data[10], data[11]);
fprintf(stderr,"%2.2x %2.2x %2.2x %2.2x\n",
				data[12], data[13], data[14], data[15]);
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
checkRpmIdxDESCRIPTION(RpmFile *file1, RpmHdrIndex *hidx, struct tetj_handle *journal)
{
int	htag, htype, hoffset, hcount;
char	*name;

htag=ntohl(hidx->tag);
htype=ntohl(hidx->type);
hoffset=ntohl(hidx->offset);
hcount=ntohl(hidx->count);
name=file1->storeaddr+hoffset;
fprintf(stderr,"checkRpmIdxDESCRIPTION() type=%d offset=%x count=%x %s\n",
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
	fprintf(stderr,"Required Name: %s\n", name );
	name+=strlen(name)+1;
	}
}

void
checkRpmIdxPAYLOADFORMAT(RpmFile *file1, RpmHdrIndex *hidx, struct tetj_handle *journal)
{
int	htag, htype, hoffset, hcount;
char	*name;

htag=ntohl(hidx->tag);
htype=ntohl(hidx->type);
hoffset=ntohl(hidx->offset);
hcount=ntohl(hidx->count);
name=file1->storeaddr+hoffset;
if( strcmp(name,"cpio") != 0 ) {
		fprintf(stderr,"Invalid RPMTAG_PAYLOADFORMAT: expecting \"cpio\"");
		fprintf(stderr," but found %s\n", name );
		}
fprintf(stderr,"Payload format: %s\n",name);
}

void
checkRpmIdxPAYLOADCOMPRESSOR(RpmFile *file1, RpmHdrIndex *hidx, struct tetj_handle *journal)
{
int	htag, htype, hoffset, hcount;
char	*name;

htag=ntohl(hidx->tag);
htype=ntohl(hidx->type);
hoffset=ntohl(hidx->offset);
hcount=ntohl(hidx->count);
name=file1->storeaddr+hoffset;
if( strcmp(name,"gzip") != 0 ) {
		fprintf(stderr,"Invalid RPMTAG_PAYLOADCOMPRESSOR: expecting \"gzip\"");
		fprintf(stderr," but found %s\n", name );
		}
fprintf(stderr,"Payload compressor: %s\n",name);
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
	fprintf(stderr,"Required Version: %s\n", name );
	name+=strlen(name)+1;
	}
}
