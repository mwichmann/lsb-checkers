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
fprintf(stderr,"checkRpmIdxUNKNOWN() type=%d offset=%x count=%x\n",
						htype,hoffset,hcount);
*/
}

void
checkRpmIdxNAME(RpmFile *file1, RpmHdrIndex *hidx, struct tetj_handle *journal)
{
int		htag, htype, hoffset, hcount;

htag=ntohl(hidx->tag);
htype=ntohl(hidx->type);
hoffset=ntohl(hidx->offset);
hcount=ntohl(hidx->count);
fprintf(stderr,"checkRpmIdxNAME() type=%d offset=%x count=%x\n",
						htype,hoffset,hcount);
}

void
checkRpmIdxVERSION(RpmFile *file1, RpmHdrIndex *hidx, struct tetj_handle *journal)
{
int		htag, htype, hoffset, hcount;

htag=ntohl(hidx->tag);
htype=ntohl(hidx->type);
hoffset=ntohl(hidx->offset);
hcount=ntohl(hidx->count);
fprintf(stderr,"checkRpmIdxVERSION() type=%d offset=%x count=%x\n",
						htype,hoffset,hcount);
}

void
checkRpmIdxRELEASE(RpmFile *file1, RpmHdrIndex *hidx, struct tetj_handle *journal)
{
int		htag, htype, hoffset, hcount;

htag=ntohl(hidx->tag);
htype=ntohl(hidx->type);
hoffset=ntohl(hidx->offset);
hcount=ntohl(hidx->count);
fprintf(stderr,"checkRpmIdxRELEASE() type=%d offset=%x count=%x\n",
						htype,hoffset,hcount);
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
int		htag, htype, hoffset, hcount;

htag=ntohl(hidx->tag);
htype=ntohl(hidx->type);
hoffset=ntohl(hidx->offset);
hcount=ntohl(hidx->count);
fprintf(stderr,"checkRpmIdxSUMMARY() type=%d offset=%x count=%x\n",
						htype,hoffset,hcount);
}
