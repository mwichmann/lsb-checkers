#include <stdio.h>
#include <string.h>
#include <time.h>
#include "rpmchk.h"
#include "md5.h"
#include "tagfuncs.h"
#include "../tetj/tetj.h"

MD5_CTX md5ctx;

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

#if 0
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
#endif

void
checkRpmIdxHEADERSIGNATURES(RpmFile *file1, RpmHdrIndex *hidx, struct tetj_handle *journal)
{
int		hoffset;
RpmHdrIndex	*sigidx;

hoffset=ntohl(hidx->offset);
sigidx=(RpmHdrIndex *)(file1->storeaddr+hoffset);

if( ntohl(sigidx->tag) != RPMTAG_HEADERSIGNATURES ) {
	fprintf(stderr,
	"Tag value in RPMTAG_HEADERSIGNATURES data is not RPMTAG_HEADERSIGNATURES\n");
	}
if( ntohl(sigidx->type) != BIN ) {
	fprintf(stderr, "Type value in RPMTAG_HEADERSIGNATURES data is not BIN\n");
	}
if( ntohl(sigidx->count) != sizeof(RpmHdrIndex) ) {
	fprintf(stderr,
     "Count value in RPMTAG_HEADERSIGNATURES data is not sizeof(RpmHdrIndex)\n");
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
checkRpmIdxHEADERIMMUTABLE(RpmFile *file1, RpmHdrIndex *hidx, struct tetj_handle *journal)
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

fprintf(stderr,"checkRpmIdxHEADERIMMUTABLE() type=%d offset=%x count=%x\n",
						htype,hoffset,hcount);
*/
hoffset=ntohl(hidx->offset);
imuidx=(RpmHdrIndex *)(file1->storeaddr+hoffset);
hdrdata=(RpmHeader *)(((char *)imuidx)+ntohl(imuidx->offset));
if( ntohl(imuidx->tag) != RPMTAG_HEADERIMMUTABLE ) {
	fprintf(stderr,
	"Tag value in RPMTAG_HEADERIMMUTABLE data is not RPMTAG_HEADERIMMUTABLE\n");
	}
if( ntohl(imuidx->type) != BIN ) {
	fprintf(stderr, "Type value in RPMTAG_HEADERIMMUTABLE data is not BIN\n");
	}
if( ntohl(imuidx->count) != sizeof(RpmHdrIndex) ) {
	fprintf(stderr,
     "Count value in RPMTAG_HEADERIMMUTABLE data is not sizeof(RpmHdrIndex)\n");
	}
fprintf(stderr,"checkRpmIdxHEADERIMMUTABLE() Not yet checking contents\n");

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
checkRpmIdxHEADERI18NTABLE(RpmFile *file1, RpmHdrIndex *hidx, struct tetj_handle *journal)
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
	"checkRpmIdxHEADERI18NTABLE() type=%d offset=%x count=%x string=%s\n",
						htype,hoffset,hcount,string);
*/
for(i=0;i<ntohl(hidx->count);i++) {
	fprintf(stderr,"Locales found: %s\n",string);
	string+=strlen(string);
	string++; /*skip over the NULL to get to the next string */
	}
}

/*
 * These calues don't really show up as Indicies.
 */
void
checkRpmIdxHEADERSIGBASE(RpmFile *file1, RpmHdrIndex *hidx, struct tetj_handle *journal)
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

fprintf(stderr,"checkRpmIdxHEADERSIGBASE() type=%d offset=%x count=%x\n",
						htype,hoffset,hcount);
}

#if 0
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
unsigned int	*value,size;

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
sigsize=htonl(*value);
size=file1->size-((char *)file1->header-file1->addr);

/*
fprintf(stderr,"checkRpmIdxSIGSIZE() type=%d offset=%x count=%x size=%x\n",
						htype,hoffset,hcount,htonl(*value));
*/
if( sigsize != size ) {
	fprintf(stderr,"SIGTAG_SIZE value %d doesn't match expected value %d\n",
				sigsize,	size );
	}

}

void
checkRpmIdxMD5(RpmFile *file1, RpmHdrIndex *hidx, struct tetj_handle *journal)
{
int		hoffset;
unsigned char	*md5hdr,md5sum[16];
/*
*/
int		htag, htype, hcount;
int		nindex;
RpmHeader	*hdr;

hdr=(RpmHeader *)file1->nexthdr;
nindex=ntohl(hdr->nindex);
htag=ntohl(hidx->tag);
htype=ntohl(hidx->type);
hcount=ntohl(hidx->count);
hoffset=ntohl(hidx->offset);
md5hdr=(int *)(file1->storeaddr+hoffset);

/*
fprintf(stderr,"%2.2x%2.2x%2.2x%2.2x%2.2x%2.2x%2.2x%2.2x%2.2x%2.2x%2.2x%2.2x%2.2x%2.2x%2.2x%2.2x\n",
                        md5hdr[0], md5hdr[1], md5hdr[2], md5hdr[3],
                        md5hdr[4], md5hdr[5], md5hdr[6], md5hdr[7],
                        md5hdr[8], md5hdr[9], md5hdr[10], md5hdr[11],
                        md5hdr[12], md5hdr[13], md5hdr[14], md5hdr[15] );
*/

MD5Init(&md5ctx);
MD5Update(&md5ctx,file1->header,sigsize);
MD5Final(md5sum,&md5ctx);

/*
fprintf(stderr,"%2.2x%2.2x%2.2x%2.2x%2.2x%2.2x%2.2x%2.2x%2.2x%2.2x%2.2x%2.2x%2.2x%2.2x%2.2x%2.2x\n",
                        md5sum[0], md5sum[1], md5sum[2], md5sum[3],
                        md5sum[4], md5sum[5], md5sum[6], md5sum[7],
                        md5sum[8], md5sum[9], md5sum[10], md5sum[11],
                        md5sum[12], md5sum[13], md5sum[14], md5sum[15] );
*/

if( memcmp(md5hdr,md5sum,16) != 0 ) {
	fprintf(stderr,
		"SIGTAG_MD5 calculated value doesn't match expected value\n");
	}
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
unsigned char	*shadata;

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
	fprintf(stderr,"Location of SHA1 signature (%x) ",
						(unsigned int)shadata );
	fprintf(stderr,"doesn't match location set in HDRSIGNATURES(%x)\n",
						(unsigned int)sigdata);
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

fprintf(stderr,"Package Size: %d.\n",size);
rpmtagsize=size;
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
	filesizes[i]=htonl(filesizes[i]);
	fprintf(stderr,"Filesize: %d\n",filesizes[i]);
	}
}

void
checkRpmIdxFILEMODES(RpmFile *file1, RpmHdrIndex *hidx, struct tetj_handle *journal)
{
int	htag, htype, hoffset, hcount,i;

htag=ntohl(hidx->tag);
htype=ntohl(hidx->type);
hoffset=ntohl(hidx->offset);
hcount=ntohl(hidx->count);
filemodes=(short *)(file1->storeaddr+hoffset);
for(i=0;i<hcount;i++) {
	filemodes[i]=htons(filemodes[i]);
	fprintf(stderr,"Filemodes: %x\n",filemodes[i]);
	}
}

void
checkRpmIdxFILERDEVS(RpmFile *file1, RpmHdrIndex *hidx, struct tetj_handle *journal)
{
int	htag, htype, hoffset, hcount,i;

htag=ntohl(hidx->tag);
htype=ntohl(hidx->type);
hoffset=ntohl(hidx->offset);
hcount=ntohl(hidx->count);
filedevs=(short *)(file1->storeaddr+hoffset);
for(i=0;i<hcount;i++) {
	filedevs[i]=htons(filedevs[i]);
	fprintf(stderr,"Filedevs: %o\n",filedevs[i]);
	}
}

void
checkRpmIdxFILEMTIMES(RpmFile *file1, RpmHdrIndex *hidx, struct tetj_handle *journal)
{
int	htag, htype, hoffset, hcount,i;

htag=ntohl(hidx->tag);
htype=ntohl(hidx->type);
hoffset=ntohl(hidx->offset);
hcount=ntohl(hidx->count);
filetimes=(int *)(file1->storeaddr+hoffset);
for(i=0;i<hcount;i++) {
	filetimes[i]=htonl(filetimes[i]);
	fprintf(stderr,"Filetime: %d\n",filetimes[i]);
	}
}

void
checkRpmIdxFILEMD5S(RpmFile *file1, RpmHdrIndex *hidx, struct tetj_handle *journal)
{
int	htag, htype, hoffset, hcount, i;
char	*name;

htag=ntohl(hidx->tag);
htype=ntohl(hidx->type);
hoffset=ntohl(hidx->offset);
hcount=ntohl(hidx->count);
filemd5s=(char *)(file1->storeaddr+hoffset);
name=filemd5s;
for(i=0;i<hcount;i++) {
	fprintf(stderr,"File MD5: %s\n",name);
	name+=strlen(name)+1;
	}
}

void
checkRpmIdxFILELINKTOS(RpmFile *file1, RpmHdrIndex *hidx, struct tetj_handle *journal)
{
int	htag, htype, hoffset, hcount, i;
char	*name;

htag=ntohl(hidx->tag);
htype=ntohl(hidx->type);
hoffset=ntohl(hidx->offset);
hcount=ntohl(hidx->count);
filelinktos=(char *)(file1->storeaddr+hoffset);
name=filelinktos;
for(i=0;i<hcount;i++) {
	fprintf(stderr,"File linkto: %s\n",name);
	name+=strlen(name)+1;
	}
}

void
checkRpmIdxFILEFLAGS(RpmFile *file1, RpmHdrIndex *hidx, struct tetj_handle *journal)
{
int	htag, htype, hoffset, hcount,i;
unsigned int	*fflags;

htag=ntohl(hidx->tag);
htype=ntohl(hidx->type);
hoffset=ntohl(hidx->offset);
hcount=ntohl(hidx->count);
fflags=(int *)(file1->storeaddr+hoffset);
for(i=0;i<hcount;i++) {
	fflags[i]=htonl(fflags[i]);
	fprintf(stderr,"File flags: %x\n",fflags[i]);
	}
}

void
checkRpmIdxFILEUSERNAME(RpmFile *file1, RpmHdrIndex *hidx, struct tetj_handle *journal)
{
int	htag, htype, hoffset, hcount, i;
char	*name;

htag=ntohl(hidx->tag);
htype=ntohl(hidx->type);
hoffset=ntohl(hidx->offset);
hcount=ntohl(hidx->count);
fileusernames=(char *)(file1->storeaddr+hoffset);
name=fileusernames;
for(i=0;i<hcount;i++) {
	fprintf(stderr,"File username: %s\n",name);
	name+=strlen(name)+1;
	}
}


void
checkRpmIdxFILEGROUPNAME(RpmFile *file1, RpmHdrIndex *hidx, struct tetj_handle *journal)
{
int	htag, htype, hoffset, hcount, i;
char	*name;

htag=ntohl(hidx->tag);
htype=ntohl(hidx->type);
hoffset=ntohl(hidx->offset);
hcount=ntohl(hidx->count);
filegroupnames=(char *)(file1->storeaddr+hoffset);
name=filegroupnames;
for(i=0;i<hcount;i++) {
	fprintf(stderr,"File groupname: %s\n",name);
	name+=strlen(name)+1;
	}
}

void
checkRpmIdxSOURCERPM(RpmFile *file1, RpmHdrIndex *hidx, struct tetj_handle *journal)
{
int	htag, htype, hoffset, hcount;
char	*name;

htag=ntohl(hidx->tag);
htype=ntohl(hidx->type);
hoffset=ntohl(hidx->offset);
hcount=ntohl(hidx->count);
name=file1->storeaddr+hoffset;
fprintf(stderr,"RPMTAG_SOURCERPM: %s\n", name);
}

void
checkRpmIdxFILEVERIFYFLAGS(RpmFile *file1, RpmHdrIndex *hidx, struct tetj_handle *journal)
{
int	htag, htype, hoffset, hcount, i;
unsigned int	*flagp;

htag=ntohl(hidx->tag);
htype=ntohl(hidx->type);
hoffset=ntohl(hidx->offset);
hcount=ntohl(hidx->count);
flagp=(int *)(file1->storeaddr+hoffset);
for(i=0;i<hcount;i++) {
	flagp[i]=htonl(flagp[i]);
	fprintf(stderr,"File Verify Flag Flag: %x\n",flagp[i]);
	}
}

void
checkRpmIdxARCHIVESIZE(RpmFile *file1, RpmHdrIndex *hidx, struct tetj_handle *journal)
{
int	hoffset;
int	*sizep,size;
/*
int	htag, htype, hcount;

htag=ntohl(hidx->tag);
htype=ntohl(hidx->type);
hcount=ntohl(hidx->count);
*/
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
int	htag, htype, hoffset, hcount, i;
int	*flagp;

htag=ntohl(hidx->tag);
htype=ntohl(hidx->type);
hoffset=ntohl(hidx->offset);
hcount=ntohl(hidx->count);
flagp=(int *)(file1->storeaddr+hoffset);
for(i=0;i<hcount;i++) {
	flagp[i]=htonl(flagp[i]);
	fprintf(stderr,"Required Flag: %x\n",flagp[i]);
	}
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
