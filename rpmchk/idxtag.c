#include <stdio.h>
#include <string.h>
#include <time.h>
#include "rpmchk.h"
#include "tagfuncs.h"
#include "../tetj/tetj.h"


void
checkRpmIdx(RpmFile *file1, RpmHdrIndex *hidx, RpmIdxTagFuncRec Tags[],
				int numtags, struct tetj_handle *journal)
{
int		htag, htype, hoffset, hcount;
int		i,j,nindex,tag,type,count;
RpmHeader	*hdr;

hdr=(RpmHeader *)file1->nexthdr;
nindex=ntohl(hdr->nindex);
htag=ntohl(hidx->tag);
htype=ntohl(hidx->type);
hoffset=ntohl(hidx->offset);
hcount=ntohl(hidx->count);

for(i=0;i<nindex;i++) {
	tag=ntohl(hidx[i].tag);
	type=ntohl(hidx[i].type);
	count=ntohl(hidx[i].count);
	for(j=0;j<numtags;j++)
		if( Tags[j].tag == tag ) {
			Tags[j].status=Seen;
			/* Check the type */
			if( Tags[j].type != type ) {
				fprintf(stderr, "Type for Index %s does not match. ", Tags[j].name );
				fprintf(stderr, "Found %d but expecting %d.\n", type, Tags[j].type );
			}
			/* Check the count */
			if( Tags[j].count && Tags[j].count != count ) {
				fprintf(stderr, "Count for Index %s does not match. ", Tags[j].name );
				fprintf(stderr, "Found %d but expecting %d.\n", count, Tags[j].count );
			}
			fprintf(stderr,"Found index %s\n",Tags[j].name);
			Tags[j].func(file1, &hidx[i], journal);
			break;
			}
	if( j == numtags ) {
		fprintf(stderr,"checkRpmIdx() unexpected Index tag=%d type=%d offset=%x count=%x\n",
				ntohl(hidx[i].tag), ntohl(hidx[i].type),
				ntohl(hidx[i].offset),ntohl(hidx[i].count));
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
int		hoffset;
RpmHdrIndex	*sigidx;

hoffset=ntohl(hidx->offset);
sigidx=(RpmHdrIndex *)(file1->storeaddr+hoffset);

if( ntohl(sigidx->tag) != HDRTAG_HDRSIGNATURES ) {
	fprintf(stderr,
	"Tag value in HDRTAG_HDRSIGNATURES data is not HDRTAG_HDRSIGNATURES\n");
	}
if( ntohl(sigidx->type) != BIN ) {
	fprintf(stderr, "Type value in HDRTAG_HDRSIGNATURES data is not BIN\n");
	}
if( ntohl(sigidx->count) != sizeof(RpmHdrIndex) ) {
	fprintf(stderr,
     "Count value in HDRTAG_HDRSIGNATURES data is not sizeof(RpmHdrIndex)\n");
	}
sigdata=(char *)(((char *)sigidx)+ntohl(sigidx->offset));


/*
RpmHeader	*hdr;
int		htag, htype, hcount;
hdr=(RpmHeader *)file1->nexthdr;
htag=ntohl(hidx->tag);
htype=ntohl(hidx->type);
hcount=ntohl(hidx->count);

fprintf(stderr,"checkRpmIdxHDRSIGNATURES() type=%d offset=%x count=%x\n",
						htype,hoffset,hcount);
*/

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
checkRpmIdxHDRIMMUTABLE(RpmFile *file1, RpmHdrIndex *hidx, struct tetj_handle *journal)
{
int		hoffset;
RpmHdrIndex	*imuidx;
RpmHeader	*hdrdata;
/*
unsigned char	*data;
int		htag, htype, hoffset, hcount;
int		nindex;
RpmHeader	*hdr;

hdr=(RpmHeader *)file1->nexthdr;
nindex=ntohl(hdr->nindex);
htag=ntohl(hidx->tag);
htype=ntohl(hidx->type);
hcount=ntohl(hidx->count);

fprintf(stderr,"checkRpmIdxHDRIMMUTABLE() type=%d offset=%x count=%x\n",
						htype,hoffset,hcount);
*/
hoffset=ntohl(hidx->offset);
imuidx=(RpmHdrIndex *)(file1->storeaddr+hoffset);
hdrdata=(RpmHeader *)(((char *)imuidx)+ntohl(imuidx->offset));
if( ntohl(imuidx->tag) != HDRTAG_HDRIMMUTABLE ) {
	fprintf(stderr,
	"Tag value in HDRTAG_HDRIMMUTABLE data is not HDRTAG_HDRIMMUTABLE\n");
	}
if( ntohl(imuidx->type) != BIN ) {
	fprintf(stderr, "Type value in HDRTAG_HDRIMMUTABLE data is not BIN\n");
	}
if( ntohl(imuidx->count) != sizeof(RpmHdrIndex) ) {
	fprintf(stderr,
     "Count value in HDRTAG_HDRIMMUTABLE data is not sizeof(RpmHdrIndex)\n");
	}
fprintf(stderr,"checkRpmIdxHDRIMMUTABLE() Not yet checking contents\n");

/*
data=hdrdata;
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
int		hoffset,i;
char		*string;
/*
int		htag, htype, hcount;
int		nindex;
RpmHeader	*hdr;

hdr=(RpmHeader *)file1->nexthdr;
nindex=ntohl(hdr->nindex);
htag=ntohl(hidx->tag);
htype=ntohl(hidx->type);
hcount=ntohl(hidx->count);
*/
hoffset=ntohl(hidx->offset);
string=file1->storeaddr+hoffset;

/*
fprintf(stderr,
	"checkRpmIdxHDRI18NTABLE() type=%d offset=%x count=%x string=%s\n",
						htype,hoffset,hcount,string);
*/
for(i=0;i<ntohl(hidx->count);i++) {
	fprintf(stderr,"Locales found: %s\n",string);
	string+=strlen(string);
	string++; /*skip over the NULL to get to the next string */
	}
}

#if 0
/*
 * These calues don't really show up as Indicies.
 */
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

fprintf(stderr,"checkRpmIdxHDRTAGBASE() type=%d offset=%x count=%x value: %s\n",
						htype,hoffset,hcount, value);
}
#endif

/*
 * These functions correspond to the tag values for a Signature
 */

void
checkRpmIdxSIGSIZE(RpmFile *file1, RpmHdrIndex *hidx, struct tetj_handle *journal)
{
int		hoffset;
unsigned int	*value,size,tagsize;

/*
RpmHeader	*hdr;
int		htag, htype, nindex, hcount;
hdr=(RpmHeader *)file1->nexthdr;
nindex=ntohl(hdr->nindex);
htag=ntohl(hidx->tag);
htype=ntohl(hidx->type);
hcount=ntohl(hidx->count);
*/
hoffset=ntohl(hidx->offset);
value=(int *)(file1->storeaddr+hoffset);
tagsize=htonl(*value);
size=file1->size-((char *)file1->header-file1->addr);

/*
fprintf(stderr,"checkRpmIdxSIGSIZE() type=%d offset=%x count=%x size=%x\n",
						htype,hoffset,hcount,htonl(*value));
*/
if( tagsize != size ) {
	fprintf(stderr,"SIGTAG_SIZE value %d doesn't match expected value %d\n",
				tagsize,	size );
	}

}

void
checkRpmIdxMD5(RpmFile *file1, RpmHdrIndex *hidx, struct tetj_handle *journal)
{
/*
int		htag, htype, hoffset, hcount;
int		nindex;
RpmHeader	*hdr;

hdr=(RpmHeader *)file1->nexthdr;
nindex=ntohl(hdr->nindex);
htag=ntohl(hidx->tag);
htype=ntohl(hidx->type);
hoffset=ntohl(hidx->offset);
hcount=ntohl(hidx->count);

fprintf(stderr,"checkRpmIdxMD5() type=%d offset=%x count=%x\n",
						htype,hoffset,hcount);
*/
fprintf(stderr,"checkRpmIdxMD5() Not yet checking MD5 contents\n");
}

void
checkRpmIdxGPG(RpmFile *file1, RpmHdrIndex *hidx, struct tetj_handle *journal)
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

fprintf(stderr,"checkRpmIdxGPG() type=%d offset=%x count=%x\n",
						htype,hoffset,hcount);
}

void
checkRpmIdxPGP5(RpmFile *file1, RpmHdrIndex *hidx, struct tetj_handle *journal)
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

fprintf(stderr,"checkRpmIdxPGP5() type=%d offset=%x count=%x\n",
						htype,hoffset,hcount);
}

void
checkRpmIdxSHA1HEADER(RpmFile *file1, RpmHdrIndex *hidx, struct tetj_handle *journal)
{
int		htag, htype, hoffset, hcount;
int		nindex;
RpmHeader	*hdr;
unsigned char		*shadata;

hdr=(RpmHeader *)file1->nexthdr;
nindex=ntohl(hdr->nindex);
htag=ntohl(hidx->tag);
htype=ntohl(hidx->type);
hoffset=ntohl(hidx->offset);
hcount=ntohl(hidx->count);
shadata=file1->storeaddr+hoffset;

/*
fprintf(stderr,"checkRpmIdxSHA1HEADER() type=%d offset=%x count=%x\n",
						htype,hoffset,hcount);
*/

if( shadata != sigdata ) {
	fprintf(stderr,"Location of SHA1 signature (%x) ", (long)shadata );
	fprintf(stderr,"doesn't match location set in HDRSIGNATURES(%x)\n",
							(long)sigdata);
	}
fprintf(stderr,"checkRpmIdxSHA1HEADER() Not yet checking SHA1 contents\n");
}

void
checkRpmIdxPGP(RpmFile *file1, RpmHdrIndex *hidx, struct tetj_handle *journal)
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

fprintf(stderr,"checkRpmIdxPGP() type=%d offset=%x count=%x\n",
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
int	hoffset;
/*
int	htag, htype, hcount;

htag=ntohl(hidx->tag);
htype=ntohl(hidx->type);
hoffset=ntohl(hidx->offset);
hcount=ntohl(hidx->count);
*/
hoffset=ntohl(hidx->offset);
pkgname=file1->storeaddr+hoffset;

/*
fprintf(stderr,"checkRpmIdxNAME() type=%d offset=%x count=%x %s\n",
						htype,hoffset,hcount,pkgname);
*/
fprintf(stderr,"Package name: %s\n",pkgname);
}

void
checkRpmIdxVERSION(RpmFile *file1, RpmHdrIndex *hidx, struct tetj_handle *journal)
{
int	hoffset;
char	*name;
/*
int	htag, htype, hcount;

htag=ntohl(hidx->tag);
htype=ntohl(hidx->type);
hcount=ntohl(hidx->count);
*/
hoffset=ntohl(hidx->offset);
name=file1->storeaddr+hoffset;
/*
fprintf(stderr,"checkRpmIdxVERSION() type=%d offset=%x count=%x %s\n",
						htype,hoffset,hcount,name);
*/
fprintf(stderr,"Package Version: %s\n",name);
}

void
checkRpmIdxRELEASE(RpmFile *file1, RpmHdrIndex *hidx, struct tetj_handle *journal)
{
int	hoffset;
char	*name;
/*
int	htag, htype, hcount;

htag=ntohl(hidx->tag);
htype=ntohl(hidx->type);
hcount=ntohl(hidx->count);
*/
hoffset=ntohl(hidx->offset);
name=file1->storeaddr+hoffset;
/*
fprintf(stderr,"checkRpmIdxRELEASE() type=%d offset=%x count=%x %s\n",
						htype,hoffset,hcount,name);
*/
/* Check that the string is a number */
fprintf(stderr,"Package Release: %s\n",name);
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
int	hoffset,i;
char	*name;
/*
int	htag, htype, hcount;

htag=ntohl(hidx->tag);
htype=ntohl(hidx->type);
hcount=ntohl(hidx->count);
*/
hoffset=ntohl(hidx->offset);
name=file1->storeaddr+hoffset;
/*
fprintf(stderr,"checkRpmIdxSUMMARY() type=%d offset=%x count=%x %s\n",
						htype,hoffset,hcount,name);
*/

for(i=0;i<ntohl(hidx->count);i++) {
	fprintf(stderr,"Package Summary: %s\n",name);
	name+=strlen(name);
	name++; /*skip over the NULL to get to the next string */
	}
}

void
checkRpmIdxDESCRIPTION(RpmFile *file1, RpmHdrIndex *hidx, struct tetj_handle *journal)
{
int	hoffset,i;
char	*name;
/*
int	htag, htype, hcount;

htag=ntohl(hidx->tag);
htype=ntohl(hidx->type);
hcount=ntohl(hidx->count);
*/
hoffset=ntohl(hidx->offset);
name=file1->storeaddr+hoffset;
/*
fprintf(stderr,"checkRpmIdxSUMMARY() type=%d offset=%x count=%x %s\n",
						htype,hoffset,hcount,name);
*/

for(i=0;i<ntohl(hidx->count);i++) {
	fprintf(stderr,"Package Description: %s\n",name);
	name+=strlen(name);
	name++; /*skip over the NULL to get to the next string */
	}
}

void
checkRpmIdxBUILDTIME(RpmFile *file1, RpmHdrIndex *hidx, struct tetj_handle *journal)
{
int	hoffset;
unsigned int	*name;
time_t	btime;
/*
int	htag, htype, hcount;

htag=ntohl(hidx->tag);
htype=ntohl(hidx->type);
hcount=ntohl(hidx->count);
*/
hoffset=ntohl(hidx->offset);
name=(unsigned int *)(file1->storeaddr+hoffset);
btime=htonl(*name);
/*
fprintf(stderr,"checkRpmIdxBUILDTIME() type=%d offset=%x count=%x %s\n",
						htype,hoffset,hcount,name);
*/
/* Check that the string is a number */
fprintf(stderr,"Package Buildtime: %s",ctime(&btime));
}

void
checkRpmIdxBUILDHOST(RpmFile *file1, RpmHdrIndex *hidx, struct tetj_handle *journal)
{
int	hoffset;
char	*name;
/*
int	htag, htype, hcount;

htag=ntohl(hidx->tag);
htype=ntohl(hidx->type);
hcount=ntohl(hidx->count);
*/
hoffset=ntohl(hidx->offset);
name=file1->storeaddr+hoffset;
/*
fprintf(stderr,"checkRpmIdxBUILDHOST() type=%d offset=%x count=%x %s\n",
						htype,hoffset,hcount,name);
*/

fprintf(stderr,"Package Buildhost: %s\n",name);
}

void
checkRpmIdxSIZE(RpmFile *file1, RpmHdrIndex *hidx, struct tetj_handle *journal)
{
int	hoffset;
int	*sizep,size;
/*
*/
int	htag, htype, hcount;

htag=ntohl(hidx->tag);
htype=ntohl(hidx->type);
hcount=ntohl(hidx->count);
hoffset=ntohl(hidx->offset);
sizep=(int *)(file1->storeaddr+hoffset);
size=htonl(*sizep);
/*
fprintf(stderr,"checkRpmIdxSIZE() type=%d offset=%x count=%x\n",
						htype,hoffset,hcount);
*/

fprintf(stderr,"Package Size: %d. Not yet validated.\n",size);
archivesize=size;
}

void
checkRpmIdxLICENSE(RpmFile *file1, RpmHdrIndex *hidx, struct tetj_handle *journal)
{
int	hoffset;
char	*name;
/*
int	htag, htype, hcount;

htag=ntohl(hidx->tag);
htype=ntohl(hidx->type);
hcount=ntohl(hidx->count);
*/
hoffset=ntohl(hidx->offset);
name=file1->storeaddr+hoffset;
/*
fprintf(stderr,"checkRpmIdxLICENSE() type=%d offset=%x count=%x %s\n",
						htype,hoffset,hcount,name);
*/

fprintf(stderr,"Package License: %s\n",name);
}

void
checkRpmIdxGROUP(RpmFile *file1, RpmHdrIndex *hidx, struct tetj_handle *journal)
{
int	hoffset;
char	*name;
/*
int	htag, htype, hcount;

htag=ntohl(hidx->tag);
htype=ntohl(hidx->type);
hcount=ntohl(hidx->count);
*/
hoffset=ntohl(hidx->offset);
name=file1->storeaddr+hoffset;
/*
fprintf(stderr,"checkRpmIdxGROUP() type=%d offset=%x count=%x %s\n",
						htype,hoffset,hcount,name);
*/
/* Check that the string is a number */
fprintf(stderr,"Package Group: %s\n",name);
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
checkRpmIdxFILESIZES(RpmFile *file1, RpmHdrIndex *hidx, struct tetj_handle *journal)
{
int	htag, htype, hoffset, hcount,i;

htag=ntohl(hidx->tag);
htype=ntohl(hidx->type);
hoffset=ntohl(hidx->offset);
hcount=ntohl(hidx->count);
filesizes=(int *)(file1->storeaddr+hoffset);
for(i=0;i<hcount;i++) {
	fprintf(stderr,"Filesize: %d\n",htonl(filesizes[i]));
	}
}

void
checkRpmIdxPROVIDENAME(RpmFile *file1, RpmHdrIndex *hidx, struct tetj_handle *journal)
{
int	htag, htype, hoffset, hcount;
char	*name;

htag=ntohl(hidx->tag);
htype=ntohl(hidx->type);
hoffset=ntohl(hidx->offset);
hcount=ntohl(hidx->count);
name=file1->storeaddr+hoffset;
fprintf(stderr,"checkRpmIdxPROVIDENAME() type=%d offset=%x count=%x %s\n",
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
