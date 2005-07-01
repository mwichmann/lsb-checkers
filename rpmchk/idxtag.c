/* 
 *
 * Copyright (c) 2002-2005 The Free Standards Group Inc
 * Copyright (c) 2002-2005 Stuart Anderson (anderson@freestandards.org)
 *
 */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include "rpmchk.h"
#include "md5.h"
#include "tagfuncs.h"
#include "../tetj/tetj.h"
#include "../fhschk/fhschk.h"

MD5_CTX md5ctx;

#define TMP_STRING_SIZE (400)

void
checkRpmIdx(RpmFile * file1, RpmHdrIndex * hidx, RpmIdxTagFuncRec Tags[],
	    int numtags, struct tetj_handle *journal)
{
    int htag, htype, hoffset, hcount;
    int i, j, nindex, tag, type, count, offset;
    RpmHeader *hdr;

    hdr = (RpmHeader *) file1->nexthdr;
    nindex = ntohl(hdr->nindex);
    htag = ntohl(hidx->tag);
    htype = ntohl(hidx->type);
    hoffset = ntohl(hidx->offset);
    hcount = ntohl(hidx->count);

    for (i = 0; i < nindex; i++) {
	tag = ntohl(hidx[i].tag);
	type = ntohl(hidx[i].type);
	count = ntohl(hidx[i].count);
	offset = ntohl(hidx[i].offset);
	for (j = 0; j < numtags; j++)
	    if (Tags[j].tag == tag) {
		Tags[j].status = Seen;
		/* Check the type */
		if (Tags[j].type != type) {
		    fprintf(stderr, "Type for Index %s does not match. ",
			    Tags[j].name);
		    fprintf(stderr, "Found %d but expecting %d.\n", type,
			    Tags[j].type);
		}
		/* Check the count */
		if (Tags[j].count && Tags[j].count != count) {
		    fprintf(stderr, "Count for Index %s does not match. ",
			    Tags[j].name);
		    fprintf(stderr, "Found %d but expecting %d.\n", count,
			    Tags[j].count);
		}
		if (rpmchkdebug & DEBUG_TRACE_TAGS)
		    fprintf(stderr, "Found index %s offset=%d count=%d\n",
			    Tags[j].name, offset, count);
		Tags[j].func(file1, &hidx[i], journal);
		break;
	    }
	if (j == numtags) {
	    fprintf(stderr,
		    "checkRpmIdx() unexpected Index tag=%d type=%d offset=%x count=%x\n",
		    ntohl(hidx[i].tag), ntohl(hidx[i].type),
		    ntohl(hidx[i].offset), ntohl(hidx[i].count));
	    /* checkRpmIdxUNKNOWN(file1, &hidx[i], journal); */
	}
    }

    /*
     * Go through the table, and make sure that the required Indices
     * were seen.
     */
    for (j = 0; j < numtags; j++) {
	if (Tags[j].reqd == Required && Tags[j].status == NotSeen) {
	    fprintf(stderr,
		    "checkRpmIdx() Required Index %s not found\n",
		    Tags[j].name);
	}
	if (Tags[j].reqd == Deprecated && Tags[j].status == Seen) {
	    fprintf(stderr,
		    "checkRpmIdx() Deprecated Index %s found\n",
		    Tags[j].name);
	}
	if (Tags[j].reqd == Obsoleted && Tags[j].status == Seen) {
	    fprintf(stderr,
		    "checkRpmIdx() Obsoleted Index %s found\n",
		    Tags[j].name);
	}
	if (Tags[j].reqd == Reserved && Tags[j].status == Seen) {
	    fprintf(stderr,
		    "checkRpmIdx() Reserved Index %s found\n",
		    Tags[j].name);
	}
    }

}

/*
 * These functions correspond to the header private tag values
 */

void
checkRpmIdxHEADERSIGNATURES(RpmFile * file1, RpmHdrIndex * hidx,
			    struct tetj_handle *journal)
{
    int hoffset;
    RpmHdrIndex *sigidx;

/* This Index contains a copy of the Header. Just check out the first entry */

    hoffset = ntohl(hidx->offset);
    sigidx = (RpmHdrIndex *) (file1->storeaddr + hoffset);

    if (ntohl(sigidx->tag) != RPMTAG_HEADERSIGNATURES) {
	fprintf(stderr,
		"Tag value in RPMTAG_HEADERSIGNATURES data is not RPMTAG_HEADERSIGNATURES\n");
    }
    if (ntohl(sigidx->type) != BIN) {
	fprintf(stderr,
		"Type value in RPMTAG_HEADERSIGNATURES data is not BIN\n");
    }
    if (ntohl(sigidx->count) != sizeof(RpmHdrIndex)) {
	fprintf(stderr,
		"Count value in RPMTAG_HEADERSIGNATURES data is not sizeof(RpmHdrIndex)\n");
    }

    fprintf(stderr,
	    "checkRpmIdxHEADERSIGNATURES() Not yet checking contents\n");
    fprintf(stderr, "checkRpmIdxHEADERSIGNATURES() offset %x\n",
	    ntohl(sigidx->offset));

    sigdata = (char *) (((char *) sigidx) + ntohl(sigidx->offset));

    fprintf(stderr, "checkRpmIdxHEADERSIGNATURES() data at %lx\n",
	    (long) sigdata);

}

void
checkRpmIdxHEADERIMMUTABLE(RpmFile * file1, RpmHdrIndex * hidx,
			   struct tetj_handle *journal)
{
    int hoffset;
    RpmHdrIndex *imuidx;
    RpmHeader *hdrdata;

    hoffset = ntohl(hidx->offset);
    imuidx = (RpmHdrIndex *) (file1->storeaddr + hoffset);
    hdrdata = (RpmHeader *) (((char *) imuidx) + ntohl(imuidx->offset));

    if (ntohl(imuidx->tag) != RPMTAG_HEADERIMMUTABLE) {
	fprintf(stderr,
		"Tag value in RPMTAG_HEADERIMMUTABLE data is not RPMTAG_HEADERIMMUTABLE\n");
    }

    if (ntohl(imuidx->type) != BIN) {
	fprintf(stderr,
		"Type value in RPMTAG_HEADERIMMUTABLE data is not BIN\n");
    }

    if (ntohl(imuidx->count) != sizeof(RpmHdrIndex)) {
	fprintf(stderr,
		"Count value in RPMTAG_HEADERIMMUTABLE data is not sizeof(RpmHdrIndex)\n");
    }

    fprintf(stderr,
	    "checkRpmIdxHEADERIMMUTABLE() Not yet checking contents\n");

}

void
checkRpmIdxHDRREGIONS(RpmFile * file1, RpmHdrIndex * hidx,
		      struct tetj_handle *journal)
{
    int htag, htype, hoffset, hcount;
    int nindex;
    RpmHeader *hdr;

    hdr = (RpmHeader *) file1->nexthdr;
    nindex = ntohl(hdr->nindex);
    htag = ntohl(hidx->tag);
    htype = ntohl(hidx->type);
    hoffset = ntohl(hidx->offset);
    hcount = ntohl(hidx->count);

    fprintf(stderr, "checkRpmIdxHDRREGIONS() type=%d offset=%x count=%x\n",
	    htype, hoffset, hcount);
}

void
checkRpmIdxHEADERI18NTABLE(RpmFile * file1, RpmHdrIndex * hidx,
			   struct tetj_handle *journal)
{
    int hoffset, i;
    char *string;
    hoffset = ntohl(hidx->offset);
    string = file1->storeaddr + hoffset;

    for (i = 0; i < ntohl(hidx->count); i++) {
	if (rpmchkdebug & DEBUG_TRACE_CONTENTS)
	    fprintf(stderr, "Locales found: %s\n", string);
	string += strlen(string);
	string++;		/*skip over the NULL to get to the next string */
    }
}

/*
 * These values don't really show up as Indicies.
 */
void
checkRpmIdxHEADERSIGBASE(RpmFile * file1, RpmHdrIndex * hidx,
			 struct tetj_handle *journal)
{
    int htag, htype, hoffset, hcount;
    int nindex;
    RpmHeader *hdr;

    hdr = (RpmHeader *) file1->nexthdr;
    nindex = ntohl(hdr->nindex);
    htag = ntohl(hidx->tag);
    htype = ntohl(hidx->type);
    hoffset = ntohl(hidx->offset);
    hcount = ntohl(hidx->count);

    fprintf(stderr,
	    "checkRpmIdxHEADERSIGBASE() type=%d offset=%x count=%x\n",
	    htype, hoffset, hcount);
}

/*
 * These functions correspond to the tag values for a Signature
 */

void
checkRpmIdxSIGSIZE(RpmFile * file1, RpmHdrIndex * hidx,
		   struct tetj_handle *journal)
{
    int hoffset;
    unsigned int size;
    unsigned int *value;

    hoffset = ntohl(hidx->offset);
    value = (unsigned int *) (file1->storeaddr + hoffset);
    sigsize = htonl(*value);
    size = file1->size - ((char *) file1->header - file1->addr);

    if (sigsize != size) {
	fprintf(stderr,
		"SIGTAG_SIZE value %d doesn't match expected value %d\n",
		sigsize, size);
    }

}

void
checkRpmIdxMD5(RpmFile * file1, RpmHdrIndex * hidx,
	       struct tetj_handle *journal)
{
    int i, hoffset;
    unsigned char *md5hdr, md5sum[16];

    hoffset = ntohl(hidx->offset);
    md5hdr = (char *) (file1->storeaddr + hoffset);

    MD5Init(&md5ctx);
    MD5Update(&md5ctx, file1->header, sigsize);
    MD5Final(md5sum, &md5ctx);

    if (memcmp(md5hdr, md5sum, 16) != 0) {
	fprintf(stderr,
		"SIGTAG_MD5 calculated value doesn't match expected value\n");
	if (rpmchkdebug & DEBUG_TRACE_CONTENTS) {
	    fprintf(stderr, "Calculated value: ");
	    for (i = 0; i < 16; i++) {
		fprintf(stderr, "%2.2x", md5sum[i]);
	    }
	    fprintf(stderr, "\n");
	    fprintf(stderr, "Found value: ");
	    for (i = 0; i < 16; i++) {
		fprintf(stderr, "%2.2x", md5hdr[i]);
	    }
	    fprintf(stderr, "\n");
	}
    }
}

void
checkRpmIdxGPG(RpmFile * file1, RpmHdrIndex * hidx,
	       struct tetj_handle *journal)
{
    int htag, htype, hoffset, hcount;
    int nindex;
    RpmHeader *hdr;

    hdr = (RpmHeader *) file1->nexthdr;
    nindex = ntohl(hdr->nindex);
    htag = ntohl(hidx->tag);
    htype = ntohl(hidx->type);
    hoffset = ntohl(hidx->offset);
    hcount = ntohl(hidx->count);

    fprintf(stderr, "checkRpmIdxGPG() type=%d offset=%x count=%x\n",
	    htype, hoffset, hcount);
}

void
checkRpmIdxPGP5(RpmFile * file1, RpmHdrIndex * hidx,
		struct tetj_handle *journal)
{
    int htag, htype, hoffset, hcount;
    int nindex;
    RpmHeader *hdr;

    hdr = (RpmHeader *) file1->nexthdr;
    nindex = ntohl(hdr->nindex);
    htag = ntohl(hidx->tag);
    htype = ntohl(hidx->type);
    hoffset = ntohl(hidx->offset);
    hcount = ntohl(hidx->count);

    fprintf(stderr, "checkRpmIdxPGP5() type=%d offset=%x count=%x\n",
	    htype, hoffset, hcount);
}

void
checkRpmIdxPGP(RpmFile * file1, RpmHdrIndex * hidx,
	       struct tetj_handle *journal)
{
    int htag, htype, hoffset, hcount;
    int nindex;
    RpmHeader *hdr;

    hdr = (RpmHeader *) file1->nexthdr;
    nindex = ntohl(hdr->nindex);
    htag = ntohl(hidx->tag);
    htype = ntohl(hidx->type);
    hoffset = ntohl(hidx->offset);
    hcount = ntohl(hidx->count);

    fprintf(stderr, "checkRpmIdxPGP() type=%d offset=%x count=%x\n",
	    htype, hoffset, hcount);
}

void
checkRpmIdxSHA1HEADER(RpmFile * file1, RpmHdrIndex * hidx,
		      struct tetj_handle *journal)
{
    int hoffset;
    unsigned char *shadata;

    hoffset = ntohl(hidx->offset);
    shadata = file1->storeaddr + hoffset;

    fprintf(stderr,
	    "checkRpmIdxSHA1HEADER() Not yet checking SHA1 contents\n");
}

void
checkRpmIdxDSAHEADER(RpmFile * file1, RpmHdrIndex * hidx,
		     struct tetj_handle *journal)
{
    int hoffset;
    unsigned char *dsadata;

    hoffset = ntohl(hidx->offset);
    dsadata = file1->storeaddr + hoffset;

    fprintf(stderr,
	    "checkRpmIdxDSAHEADER() Not yet checking DSA contents\n");
}

void
checkRpmIdxRSAHEADER(RpmFile * file1, RpmHdrIndex * hidx,
		     struct tetj_handle *journal)
{
    int hoffset;
    unsigned char *rsadata;

    hoffset = ntohl(hidx->offset);
    rsadata = file1->storeaddr + hoffset;

    fprintf(stderr,
	    "checkRpmIdxRSAHEADER() Not yet checking RSA contents\n");
}

/*
 * These functions are for the normal RPM tags.
 */

#if 0
/* Don't seem to need these either */
void
checkRpmIdxSIGNATURES(RpmFile * file1, RpmHdrIndex * hidx,
		      struct tetj_handle *journal)
{
    int htag, htype, hoffset, hcount;
    int nindex;
    RpmHeader *hdr;

    hdr = (RpmHeader *) file1->nexthdr;
    nindex = ntohl(hdr->nindex);
    htag = ntohl(hidx->tag);
    htype = ntohl(hidx->type);
    hoffset = ntohl(hidx->offset);
    hcount = ntohl(hidx->count);

    fprintf(stderr, "checkRpmIdxSIGNATURES() type=%d offset=%x count=%x\n",
	    htype, hoffset, hcount);
}

void
checkRpmIdxIMMUTABLE(RpmFile * file1, RpmHdrIndex * hidx,
		     struct tetj_handle *journal)
{
    int htag, htype, hoffset, hcount;
    int nindex;
    RpmHeader *hdr;

    hdr = (RpmHeader *) file1->nexthdr;
    nindex = ntohl(hdr->nindex);
    htag = ntohl(hidx->tag);
    htype = ntohl(hidx->type);
    hoffset = ntohl(hidx->offset);
    hcount = ntohl(hidx->count);
    fprintf(stderr, "checkRpmIdxIMMUTABLE() type=%d offset=%x count=%x\n",
	    htype, hoffset, hcount);
}

void
checkRpmIdxUNKNOWN(RpmFile * file1, RpmHdrIndex * hidx,
		   struct tetj_handle *journal)
{
    int htag, htype, hoffset, hcount;
/*
char	*data=(char *)hidx;
*/

    htag = ntohl(hidx->tag);
    htype = ntohl(hidx->type);
    hoffset = ntohl(hidx->offset);
    hcount = ntohl(hidx->count);
    fprintf(stderr,
	    "checkRpmIdxUNKNOWN() tag=%d (%x) type=%d offset=%x count=%x\n",
	    htag, htag, htype, hoffset, hcount);
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
checkRpmIdxSERIAL(RpmFile * file1, RpmHdrIndex * hidx,
		  struct tetj_handle *journal)
{
    int htag, htype, hoffset, hcount;

    htag = ntohl(hidx->tag);
    htype = ntohl(hidx->type);
    hoffset = ntohl(hidx->offset);
    hcount = ntohl(hidx->count);
    fprintf(stderr, "checkRpmIdxSERIAL() type=%d offset=%x count=%x\n",
	    htype, hoffset, hcount);
}

#endif

void
checkRpmIdxNAME(RpmFile * file1, RpmHdrIndex * hidx,
		struct tetj_handle *journal)
{
    int hoffset;

    hoffset = ntohl(hidx->offset);
    pkgname = file1->storeaddr + hoffset;

    if (rpmchkdebug & DEBUG_TRACE_CONTENTS)
	fprintf(stderr, "Package name: %s\n", pkgname);

    if( !lanananame )
    	set_myappname(pkgname);
}

void
checkRpmIdxVERSION(RpmFile * file1, RpmHdrIndex * hidx,
		   struct tetj_handle *journal)
{
    int hoffset;
    char *name;

    hoffset = ntohl(hidx->offset);
    name = file1->storeaddr + hoffset;

    if (rpmchkdebug & DEBUG_TRACE_CONTENTS)
	fprintf(stderr, "Package Version: %s\n", name);
}

void
checkRpmIdxRELEASE(RpmFile * file1, RpmHdrIndex * hidx,
		   struct tetj_handle *journal)
{
    int hoffset;
    char *name;

    hoffset = ntohl(hidx->offset);
    name = file1->storeaddr + hoffset;

    if (rpmchkdebug & DEBUG_TRACE_CONTENTS)
	fprintf(stderr, "Package Release: %s\n", name);
}

void
checkRpmIdxSUMMARY(RpmFile * file1, RpmHdrIndex * hidx,
		   struct tetj_handle *journal)
{
    int hoffset, i;
    char *name;

    hoffset = ntohl(hidx->offset);
    name = file1->storeaddr + hoffset;

    for (i = 0; i < ntohl(hidx->count); i++) {
	if (rpmchkdebug & DEBUG_TRACE_CONTENTS)
	    fprintf(stderr, "Package Summary: %s\n", name);
	name += strlen(name);
	name++;			/*skip over the NULL to get to the next string */
    }
}

void
checkRpmIdxDESCRIPTION(RpmFile * file1, RpmHdrIndex * hidx,
		       struct tetj_handle *journal)
{
    int hoffset, i;
    char *name;

    hoffset = ntohl(hidx->offset);
    name = file1->storeaddr + hoffset;

    for (i = 0; i < ntohl(hidx->count); i++) {
	if (rpmchkdebug & DEBUG_TRACE_CONTENTS)
	    fprintf(stderr, "Package Description: %s\n", name);
	name += strlen(name);
	name++;			/*skip over the NULL to get to the next string */
    }
}

void
checkRpmIdxBUILDTIME(RpmFile * file1, RpmHdrIndex * hidx,
		     struct tetj_handle *journal)
{
    int hoffset;
    unsigned int *name;
    time_t btime;

    hoffset = ntohl(hidx->offset);
    name = (unsigned int *) (file1->storeaddr + hoffset);
    btime = htonl(*name);

    if (rpmchkdebug & DEBUG_TRACE_CONTENTS)
	fprintf(stderr, "Package Buildtime: %s", ctime(&btime));
}

void
checkRpmIdxBUILDHOST(RpmFile * file1, RpmHdrIndex * hidx,
		     struct tetj_handle *journal)
{
    int hoffset;
    char *name;

    hoffset = ntohl(hidx->offset);
    name = file1->storeaddr + hoffset;

    if (rpmchkdebug & DEBUG_TRACE_CONTENTS)
	fprintf(stderr, "Package Buildhost: %s\n", name);
}

void
checkRpmIdxSIZE(RpmFile * file1, RpmHdrIndex * hidx,
		struct tetj_handle *journal)
{
    int hoffset;
    int *sizep;

    hoffset = ntohl(hidx->offset);
    sizep = (int *) (file1->storeaddr + hoffset);
    rpmtagsize = htonl(*sizep);

    if (rpmchkdebug & DEBUG_TRACE_CONTENTS)
	fprintf(stderr, "Package Size: %d.\n", rpmtagsize);
}

void
checkRpmIdxDISTRIBUTION(RpmFile * file1, RpmHdrIndex * hidx,
		struct tetj_handle *journal)
{
    int hoffset;
    char *name;

    hoffset = ntohl(hidx->offset);
    name = file1->storeaddr + hoffset;

    if (rpmchkdebug & DEBUG_TRACE_CONTENTS)
	fprintf(stderr, "Package Distribution: %s.\n", name);
}

void
checkRpmIdxVENDOR(RpmFile * file1, RpmHdrIndex * hidx,
		struct tetj_handle *journal)
{
    int hoffset;
    char *name;

    hoffset = ntohl(hidx->offset);
    name = file1->storeaddr + hoffset;

    if (rpmchkdebug & DEBUG_TRACE_CONTENTS)
	fprintf(stderr, "Package Vendor: %s.\n", name);
}

void
checkRpmIdxLICENSE(RpmFile * file1, RpmHdrIndex * hidx,
		   struct tetj_handle *journal)
{
    int hoffset;
    char *name;

    hoffset = ntohl(hidx->offset);
    name = file1->storeaddr + hoffset;

    if (rpmchkdebug & DEBUG_TRACE_CONTENTS)
	fprintf(stderr, "Package License: %s\n", name);
}

void
checkRpmIdxGROUP(RpmFile *file1, RpmHdrIndex *hidx, struct tetj_handle *journal)
{
    int hoffset;
    char *name;

    hoffset = ntohl(hidx->offset);
    name = file1->storeaddr + hoffset;

    if (rpmchkdebug & DEBUG_TRACE_CONTENTS)
	fprintf(stderr, "Package Group: %s\n", name);
}

void
checkRpmIdxURL(RpmFile *file1, RpmHdrIndex *hidx, struct tetj_handle *journal)
{
    int hoffset;
    char *name;

    hoffset = ntohl(hidx->offset);
    name = file1->storeaddr + hoffset;

    if (rpmchkdebug & DEBUG_TRACE_CONTENTS)
	fprintf(stderr, "Package Url: %s.\n", name);
}

void
checkRpmIdxOS(RpmFile *file1, RpmHdrIndex *hidx, struct tetj_handle *journal)
{
    int hoffset;
    char *name;
    char tmp_string[TMP_STRING_SIZE+1];

    tetj_tp_count++;
    tetj_purpose_start(journal, tetj_activity_count, tetj_tp_count, "Check OS");
    hoffset = ntohl(hidx->offset);
    name = file1->storeaddr + hoffset;
    if (strcasecmp(name, validos) != 0) {
        snprintf (tmp_string, TMP_STRING_SIZE,
	          "Incorrect RPMTAG_OS: expecting %s but found %s",
		  validos, name);
	tetj_testcase_info(journal, tetj_activity_count, tetj_tp_count,
	       	0, 0, 0, tmp_string);
        fprintf(stderr, "%s\n", tmp_string);
	tetj_result(journal, tetj_activity_count, tetj_tp_count, TETJ_FAIL);
    } else {
	tetj_result(journal, tetj_activity_count, tetj_tp_count, TETJ_PASS); 
    }
    tetj_purpose_end(journal, tetj_activity_count, tetj_tp_count); 
}

void
checkRpmIdxARCH(RpmFile *file1, RpmHdrIndex *hidx, struct tetj_handle *journal)
{
    int hoffset;
    char *name;
    char tmp_string[TMP_STRING_SIZE+1];

    tetj_tp_count++;
    tetj_purpose_start(journal, tetj_activity_count, tetj_tp_count, "Check architecture");
    hoffset = ntohl(hidx->offset);
    name = file1->storeaddr + hoffset;
    if (strcmp(name, architecture) != 0 && strcmp(name, "noarch") != 0) {
        snprintf (tmp_string, TMP_STRING_SIZE,
	          "Incorrect RPMTAG_ARCH: expecting %s or noarch but found %s",
		  architecture, name);
	tetj_testcase_info(journal, tetj_activity_count, tetj_tp_count,
	       	0, 0, 0, tmp_string);
        fprintf(stderr, "%s\n", tmp_string);
	tetj_result(journal, tetj_activity_count, tetj_tp_count, TETJ_FAIL);
    } else {
	tetj_result(journal, tetj_activity_count, tetj_tp_count, TETJ_PASS); 
    }
    tetj_purpose_end(journal, tetj_activity_count, tetj_tp_count); 
}

void
checkRpmIdxOLDFILENAMES(RpmFile * file1, RpmHdrIndex * hidx,
			struct tetj_handle *journal)
{
    int hoffset, hcount, i;
    char *name;

    hoffset = ntohl(hidx->offset);
    hcount = ntohl(hidx->count);
    oldfilenames = (char *) (file1->storeaddr + hoffset);
    name = oldfilenames;
    hasOldFilenames = 1;
    for (i = 0; i < hcount; i++) {
	if (rpmchkdebug & DEBUG_TRACE_CONTENTS)
	    fprintf(stderr, "Old filename: %s\n", name);
	name += strlen(name) + 1;
    }
}

void
checkRpmIdxFILESIZES(RpmFile * file1, RpmHdrIndex * hidx,
		     struct tetj_handle *journal)
{
    int hcount, hoffset, i;

    hcount = ntohl(hidx->count);
    hoffset = ntohl(hidx->offset);
    filesizes = (int *) (file1->storeaddr + hoffset);
    for (i = 0; i < hcount; i++) {
	filesizes[i] = htonl(filesizes[i]);
	if (rpmchkdebug & DEBUG_TRACE_CONTENTS)
	    fprintf(stderr, "Filesize: %d\n", filesizes[i]);
    }
}

void
checkRpmIdxFILEMODES(RpmFile * file1, RpmHdrIndex * hidx,
		     struct tetj_handle *journal)
{
    int hoffset, hcount, i;

    hoffset = ntohl(hidx->offset);
    hcount = ntohl(hidx->count);
    filemodes = (short *) (file1->storeaddr + hoffset);
    for (i = 0; i < hcount; i++) {
	filemodes[i] = htons(filemodes[i]);
	if (rpmchkdebug & DEBUG_TRACE_CONTENTS)
	    fprintf(stderr, "Filemodes: %x\n", filemodes[i]);
    }
}

void
checkRpmIdxFILERDEVS(RpmFile * file1, RpmHdrIndex * hidx,
		     struct tetj_handle *journal)
{
    int hoffset, hcount, i;

    hoffset = ntohl(hidx->offset);
    hcount = ntohl(hidx->count);
    filerdevs = (short *) (file1->storeaddr + hoffset);
    for (i = 0; i < hcount; i++) {
	filerdevs[i] = htons(filerdevs[i]);
	if (rpmchkdebug & DEBUG_TRACE_CONTENTS)
	    fprintf(stderr, "Filerdevs: %x\n", filerdevs[i]);
    }
}

void
checkRpmIdxFILEMTIMES(RpmFile * file1, RpmHdrIndex * hidx,
		      struct tetj_handle *journal)
{
    int hoffset, hcount, i;

    hoffset = ntohl(hidx->offset);
    hcount = ntohl(hidx->count);
    filetimes = (int *) (file1->storeaddr + hoffset);
    for (i = 0; i < hcount; i++) {
	filetimes[i] = htonl(filetimes[i]);
	if (rpmchkdebug & DEBUG_TRACE_CONTENTS)
	    fprintf(stderr, "Filetime: %d\n", filetimes[i]);
    }
}

void
checkRpmIdxFILEMD5S(RpmFile * file1, RpmHdrIndex * hidx,
		    struct tetj_handle *journal)
{
    int hoffset, hcount, i;
    char *name;

    hoffset = ntohl(hidx->offset);
    hcount = ntohl(hidx->count);
    filemd5s = (char *) (file1->storeaddr + hoffset);
    name = filemd5s;
    for (i = 0; i < hcount; i++) {
	if (rpmchkdebug & DEBUG_TRACE_CONTENTS)
	    fprintf(stderr, "File MD5[%3.3d]: %s\n", i, name);
	name += strlen(name) + 1;
    }
}

void
checkRpmIdxFILELINKTOS(RpmFile * file1, RpmHdrIndex * hidx,
		       struct tetj_handle *journal)
{
    int hoffset, hcount, i;
    char *name;

    hoffset = ntohl(hidx->offset);
    hcount = ntohl(hidx->count);
    filelinktos = (char *) (file1->storeaddr + hoffset);
    name = filelinktos;
    for (i = 0; i < hcount; i++) {
	if (rpmchkdebug & DEBUG_TRACE_CONTENTS)
	    fprintf(stderr, "File linkto[%3.3d]: %s\n", i, name);
	name += strlen(name) + 1;
    }
}

void
checkRpmIdxFILEFLAGS(RpmFile * file1, RpmHdrIndex * hidx,
		     struct tetj_handle *journal)
{
    int hoffset, hcount, i;
    unsigned int *fflags;

    hoffset = ntohl(hidx->offset);
    hcount = ntohl(hidx->count);
    fflags = (int *) (file1->storeaddr + hoffset);
    for (i = 0; i < hcount; i++) {
	fflags[i] = htonl(fflags[i]);
	if (rpmchkdebug & DEBUG_TRACE_CONTENTS)
	    fprintf(stderr, "File flags: %x\n", fflags[i]);
    /*** Add verification logic */
/*	fprintf(stderr,"File flags not checked: %x\n",fflags[i]); */
    }
}

void
checkRpmIdxFILEUSERNAME(RpmFile * file1, RpmHdrIndex * hidx,
			struct tetj_handle *journal)
{
    int hoffset, hcount, i;
    char *name;

    hoffset = ntohl(hidx->offset);
    hcount = ntohl(hidx->count);
    fileusernames = (char *) (file1->storeaddr + hoffset);
    name = fileusernames;
    for (i = 0; i < hcount; i++) {
	if (rpmchkdebug & DEBUG_TRACE_CONTENTS)
	    fprintf(stderr, "File username: %s\n", name);
	name += strlen(name) + 1;
    }
}

void
checkRpmIdxFILEGROUPNAME(RpmFile * file1, RpmHdrIndex * hidx,
			 struct tetj_handle *journal)
{
    int hoffset, hcount, i;
    char *name;

    hoffset = ntohl(hidx->offset);
    hcount = ntohl(hidx->count);
    filegroupnames = (char *) (file1->storeaddr + hoffset);
    name = filegroupnames;
    for (i = 0; i < hcount; i++) {
	if (rpmchkdebug & DEBUG_TRACE_CONTENTS)
	    fprintf(stderr, "File groupname: %s\n", name);
	name += strlen(name) + 1;
    }
}

void
checkRpmIdxSOURCERPM(RpmFile * file1, RpmHdrIndex * hidx,
		     struct tetj_handle *journal)
{
    int hoffset;
    char *name;

    hoffset = ntohl(hidx->offset);
    name = file1->storeaddr + hoffset;
    if (rpmchkdebug & DEBUG_TRACE_CONTENTS)
	fprintf(stderr, "RPMTAG_SOURCERPM: %s\n", name);
}

void
checkRpmIdxFILEVERIFYFLAGS(RpmFile * file1, RpmHdrIndex * hidx,
			   struct tetj_handle *journal)
{
    int hoffset, hcount, i;
    unsigned int *flagp;

    hoffset = ntohl(hidx->offset);
    hcount = ntohl(hidx->count);
    flagp = (int *) (file1->storeaddr + hoffset);
    for (i = 0; i < hcount; i++) {
	flagp[i] = htonl(flagp[i]);
	if (rpmchkdebug & DEBUG_TRACE_CONTENTS)
	    fprintf(stderr, "File Verify Flag: %x\n", flagp[i]);
    /*** Add verification logic */
/*	fprintf(stderr,"File Verify Flag not checked: %x\n",flagp[i]); */
    }
}

void
checkRpmIdxARCHIVESIZE(RpmFile * file1, RpmHdrIndex * hidx,
		       struct tetj_handle *journal)
{
    int hoffset;
    uint32_t *sizep;

    hoffset = ntohl(hidx->offset);
    sizep = (uint32_t *) (file1->storeaddr + hoffset);
    archivesize = htonl(*sizep);

    if (rpmchkdebug & DEBUG_TRACE_CONTENTS)
	fprintf(stderr, "Archive Size: %d.\n", archivesize);
}

void
checkRpmIdxPAYLOADSIZE(RpmFile * file1, RpmHdrIndex * hidx,
		       struct tetj_handle *journal)
{
    int hoffset;
    uint32_t *sizep;

    hoffset = ntohl(hidx->offset);
    sizep = (uint32_t *) (file1->storeaddr + hoffset);
    archivesize = htonl(*sizep);

    if (rpmchkdebug & DEBUG_TRACE_CONTENTS)
	fprintf(stderr, "Payload Size: %d.\n", archivesize);
}

void
checkRpmIdxPROVIDENAME(RpmFile * file1, RpmHdrIndex * hidx,
		       struct tetj_handle *journal)
{
    int htag, htype, hoffset, hcount;
    char *name;

    htag = ntohl(hidx->tag);
    htype = ntohl(hidx->type);
    hoffset = ntohl(hidx->offset);
    hcount = ntohl(hidx->count);
    name = file1->storeaddr + hoffset;
    fprintf(stderr,
	    "checkRpmIdxPROVIDENAME() type=%d offset=%x count=%x %s\n",
	    htype, hoffset, hcount, name);
}

void
checkRpmIdxOBSOLETENAME(RpmFile * file1, RpmHdrIndex * hidx,
			struct tetj_handle *journal)
{
    int htag, htype, hoffset, hcount;
    char *name;

    htag = ntohl(hidx->tag);
    htype = ntohl(hidx->type);
    hoffset = ntohl(hidx->offset);
    hcount = ntohl(hidx->count);
    name = file1->storeaddr + hoffset;
    fprintf(stderr,
	    "checkRpmIdxOBSOLETENAME() type=%d offset=%x count=%x %s\n",
	    htype, hoffset, hcount, name);
}

void
checkRpmIdxCONFLICTNAME(RpmFile * file1, RpmHdrIndex * hidx,
			struct tetj_handle *journal)
{
    int htag, htype, hoffset, hcount;
    char *name;

    htag = ntohl(hidx->tag);
    htype = ntohl(hidx->type);
    hoffset = ntohl(hidx->offset);
    hcount = ntohl(hidx->count);
    name = file1->storeaddr + hoffset;
    fprintf(stderr,
	    "checkRpmIdxCONFLICTNAME() type=%d offset=%x count=%x %s\n",
	    htype, hoffset, hcount, name);
}

void
checkRpmIdxREQUIREFLAGS(RpmFile * file1, RpmHdrIndex * hidx,
			struct tetj_handle *journal)
{
    int hoffset, hcount, i;
    uint32_t *flagp, flag;
    char buf[128];

#define mapbit(bit) \
	if( flag & bit ) { flag&=~bit;strcat(buf,#bit);strcat(buf," "); }

    hoffset = ntohl(hidx->offset);
    hcount = ntohl(hidx->count);
    flagp = (uint32_t *) (file1->storeaddr + hoffset);

/* This should move to a seperate function for use by multiple tags */
    for (i = 0; i < hcount; i++) {
	buf[0] = '\000';
	flag = htonl(flagp[i]);
	/* fprintf(stderr,"Required Flag: %x ",flag); */
	mapbit(RPMSENSE_RPMLIB);
	mapbit(RPMSENSE_SCRIPT_POSTUN);
	mapbit(RPMSENSE_SCRIPT_PREUN);
	mapbit(RPMSENSE_SCRIPT_POST);
	mapbit(RPMSENSE_SCRIPT_PRE);
	mapbit(RPMSENSE_INTERP);
	mapbit(RPMSENSE_PREREQ);
	mapbit(RPMSENSE_EQUAL);
	mapbit(RPMSENSE_GREATER);
	mapbit(RPMSENSE_LESS);
	if (rpmchkdebug & DEBUG_TRACE_CONTENTS)
	    fprintf(stderr, "%s\n", buf);
	if (flag)
	    fprintf(stderr, "Unexpected REQUIREFLAGS bit: %x\n", flag);
    }
}

void
checkRpmIdxREQUIRENAME(RpmFile * file1, RpmHdrIndex * hidx,
		       struct tetj_handle *journal)
{
    int hoffset, hcount;
    char *name;

    hoffset = ntohl(hidx->offset);
    hcount = ntohl(hidx->count);
    name = file1->storeaddr + hoffset;
    numrequirename = hcount;
    requirename = name;
    if( requirename && requireversion )
	    check_dependencies(journal);
}

void
checkRpmIdxRPMVERSION(RpmFile * file1, RpmHdrIndex * hidx,
		      struct tetj_handle *journal)
{
    int hoffset;
    char *name;

    hoffset = ntohl(hidx->offset);
    name = file1->storeaddr + hoffset;
    if (rpmchkdebug & DEBUG_TRACE_CONTENTS)
	fprintf(stderr, "RPM version: %s\n", name);
}

void
checkRpmIdxCHANGELOGTIME(RpmFile * file1, RpmHdrIndex * hidx,
			 struct tetj_handle *journal)
{
    int hcount, hoffset, i;
    uint32_t *timep;
    time_t chtime;

    hoffset = ntohl(hidx->offset);
    hcount = ntohl(hidx->count);
    timep = (uint32_t *) (file1->storeaddr + hoffset);

    for (i = 0; i < hcount; i++) {
	chtime = htonl(timep[i]);
	if (rpmchkdebug & DEBUG_TRACE_CONTENTS)
	    fprintf(stderr, "Changelog time: %s", ctime(&chtime));
    }
}

void
checkRpmIdxCHANGELOGNAME(RpmFile * file1, RpmHdrIndex * hidx,
			 struct tetj_handle *journal)
{
    int hoffset, hcount, i;
    char *name;

    hoffset = ntohl(hidx->offset);
    hcount = ntohl(hidx->count);
    name = (char *) (file1->storeaddr + hoffset);
    for (i = 0; i < hcount; i++) {
	if (rpmchkdebug & DEBUG_TRACE_CONTENTS)
	    fprintf(stderr, "Changelog name: %s\n", name);
	name += strlen(name) + 1;
    }
}

void
checkRpmIdxCHANGELOGTEXT(RpmFile * file1, RpmHdrIndex * hidx,
			 struct tetj_handle *journal)
{
    int hoffset, hcount, i;
    char *text;

    hoffset = ntohl(hidx->offset);
    hcount = ntohl(hidx->count);
    text = (char *) (file1->storeaddr + hoffset);
    for (i = 0; i < hcount; i++) {
	if (rpmchkdebug & DEBUG_TRACE_CONTENTS)
	    fprintf(stderr, "Changelog text: %s\n", text);
	text += strlen(text) + 1;
    }
}

void
checkRpmIdxPREINPROG(RpmFile * file1, RpmHdrIndex * hidx,
		     struct tetj_handle *journal)
{
    int htag, htype, hoffset, hcount;
    char *name;

    htag = ntohl(hidx->tag);
    htype = ntohl(hidx->type);
    hoffset = ntohl(hidx->offset);
    hcount = ntohl(hidx->count);
    name = file1->storeaddr + hoffset;
    if (strcmp(name, "/bin/sh") != 0) {
	fprintf(stderr, "Invalid RPMTAG_PREINPROG: expecting \"/bin/sh\"");
	fprintf(stderr, " but found %s\n", name);
    }
    if (rpmchkdebug & DEBUG_TRACE_CONTENTS)
	fprintf(stderr, "Payload format: %s\n", name);
}

void
checkRpmIdxPOSTINPROG(RpmFile * file1, RpmHdrIndex * hidx,
		      struct tetj_handle *journal)
{
    int htag, htype, hoffset, hcount;
    char *name;

    htag = ntohl(hidx->tag);
    htype = ntohl(hidx->type);
    hoffset = ntohl(hidx->offset);
    hcount = ntohl(hidx->count);
    name = file1->storeaddr + hoffset;
    if (strcmp(name, "/bin/sh") != 0) {
	fprintf(stderr,
		"Invalid RPMTAG_POSTINPROG: expecting \"/bin/sh\"");
	fprintf(stderr, " but found %s\n", name);
    }
    if (rpmchkdebug & DEBUG_TRACE_CONTENTS)
	fprintf(stderr, "Payload format: %s\n", name);
}

void
checkRpmIdxPREUNPROG(RpmFile * file1, RpmHdrIndex * hidx,
		     struct tetj_handle *journal)
{
    int htag, htype, hoffset, hcount;
    char *name;

    htag = ntohl(hidx->tag);
    htype = ntohl(hidx->type);
    hoffset = ntohl(hidx->offset);
    hcount = ntohl(hidx->count);
    name = file1->storeaddr + hoffset;
    if (strcmp(name, "/bin/sh") != 0) {
	fprintf(stderr, "Invalid RPMTAG_PREUNPROG: expecting \"/bin/sh\"");
	fprintf(stderr, " but found %s\n", name);
    }
    if (rpmchkdebug & DEBUG_TRACE_CONTENTS)
	fprintf(stderr, "Payload format: %s\n", name);
}

void
checkRpmIdxPOSTUNPROG(RpmFile * file1, RpmHdrIndex * hidx,
		      struct tetj_handle *journal)
{
    int htag, htype, hoffset, hcount;
    char *name;

    htag = ntohl(hidx->tag);
    htype = ntohl(hidx->type);
    hoffset = ntohl(hidx->offset);
    hcount = ntohl(hidx->count);
    name = file1->storeaddr + hoffset;
    if (strcmp(name, "/bin/sh") != 0) {
	fprintf(stderr,
		"Invalid RPMTAG_POSTUNPROG: expecting \"/bin/sh\"");
	fprintf(stderr, " but found %s\n", name);
    }
    if (rpmchkdebug & DEBUG_TRACE_CONTENTS)
	fprintf(stderr, "Payload format: %s\n", name);
}

void
checkRpmIdxCOOKIE(RpmFile * file1, RpmHdrIndex * hidx,
		  struct tetj_handle *journal)
{
    int hoffset;
    unsigned char *name;

    hoffset = ntohl(hidx->offset);
    name = (char *) (file1->storeaddr + hoffset);

    if (rpmchkdebug & DEBUG_TRACE_CONTENTS)
	fprintf(stderr, "Cookie: %s\n", name);
}

void
checkRpmIdxFILEDEVICES(RpmFile * file1, RpmHdrIndex * hidx,
		       struct tetj_handle *journal)
{
    int hoffset, hcount, i;

    hoffset = ntohl(hidx->offset);
    hcount = ntohl(hidx->count);
    filedevs = (uint32_t *) (file1->storeaddr + hoffset);
    for (i = 0; i < hcount; i++) {
	filedevs[i] = htonl(filedevs[i]);
	if (rpmchkdebug & DEBUG_TRACE_CONTENTS)
	    fprintf(stderr, "Filedevs: %x\n", filedevs[i]);
    }
}

void
checkRpmIdxFILEINODES(RpmFile * file1, RpmHdrIndex * hidx,
		      struct tetj_handle *journal)
{
    int hoffset, hcount, i;

    hoffset = ntohl(hidx->offset);
    hcount = ntohl(hidx->count);
    fileinodes = (uint32_t *) (file1->storeaddr + hoffset);
    for (i = 0; i < hcount; i++) {
	fileinodes[i] = htonl(fileinodes[i]);
	if (rpmchkdebug & DEBUG_TRACE_CONTENTS)
	    fprintf(stderr, "File inode: %d\n", fileinodes[i]);
    }
}

void
checkRpmIdxFILELANGS(RpmFile * file1, RpmHdrIndex * hidx,
		     struct tetj_handle *journal)
{
    int hoffset, hcount, i;
    char *name;

    hoffset = ntohl(hidx->offset);
    hcount = ntohl(hidx->count);
    filelangs = (char *) (file1->storeaddr + hoffset);
    name = filelangs;
    for (i = 0; i < hcount; i++) {
	if (rpmchkdebug & DEBUG_TRACE_CONTENTS)
	    fprintf(stderr, "File langs: %s\n", name);
	name += strlen(name) + 1;
    }
}

void
checkRpmIdxPROVIDEFLAGS(RpmFile * file1, RpmHdrIndex * hidx,
			struct tetj_handle *journal)
{
    int hoffset;
    uint32_t *flagp, flag;

    hoffset = ntohl(hidx->offset);
    flagp = (uint32_t *) (file1->storeaddr + hoffset);
    flag = htonl(*flagp);
    if (rpmchkdebug & DEBUG_TRACE_CONTENTS)
	fprintf(stderr, "Provide Flag: %x\n", flag);
    fprintf(stderr, "Provide Flag not checked: %x\n", flag);
}

void
checkRpmIdxPROVIDEVERSION(RpmFile * file1, RpmHdrIndex * hidx,
			  struct tetj_handle *journal)
{
    int i, hoffset, hcount;
    char *name;

/*
 * A STRING_ARRAY because it could be providing multiple things.
 */
    hoffset = ntohl(hidx->offset);
    hcount = ntohl(hidx->count);
    name = file1->storeaddr + hoffset;
    for (i = 0; i < hcount; i++) {
	if (rpmchkdebug & DEBUG_TRACE_CONTENTS)
	    fprintf(stderr, "Provide Version: %s\n", name);
	name += strlen(name) + 1;
    }
}

void
checkRpmIdxDIRINDEXES(RpmFile * file1, RpmHdrIndex * hidx,
		      struct tetj_handle *journal)
{
    int hoffset, hcount, i;

    hoffset = ntohl(hidx->offset);
    hcount = ntohl(hidx->count);
    numdirindicies = hcount;
    dirindicies = (int *) (file1->storeaddr + hoffset);
    hasNewFilenames++;
    for (i = 0; i < hcount; i++) {
	dirindicies[i] = htonl(dirindicies[i]);
	if (rpmchkdebug & DEBUG_TRACE_CONTENTS)
	    fprintf(stderr, "Directory Index: %x\n", dirindicies[i]);
    }
}

void
checkRpmIdxBASENAMES(RpmFile * file1, RpmHdrIndex * hidx,
		     struct tetj_handle *journal)
{
    int i, hoffset, hcount;
    char *name;

    hoffset = ntohl(hidx->offset);
    hcount = ntohl(hidx->count);
    basenames = (char **) malloc(hcount * sizeof(char *));
    name = file1->storeaddr + hoffset;
    hasNewFilenames++;
    for (i = 0; i < hcount; i++) {
	basenames[i] = name;
	if (rpmchkdebug & DEBUG_TRACE_CONTENTS)
	    fprintf(stderr, "Basename[%3.3d]: %s\n", i, name);
	name += strlen(name) + 1;
    }
}

void
checkRpmIdxDIRNAMES(RpmFile * file1, RpmHdrIndex * hidx,
		    struct tetj_handle *journal)
{
    int i, hoffset, hcount;
    char *name;

    hoffset = ntohl(hidx->offset);
    hcount = ntohl(hidx->count);
    numdirnames = hcount;
    dirnames = (char **) malloc(hcount * sizeof(char *));
    name = file1->storeaddr + hoffset;
    hasNewFilenames++;
    for (i = 0; i < hcount; i++) {
	dirnames[i] = name;
	if (rpmchkdebug & DEBUG_TRACE_CONTENTS)
	    fprintf(stderr, "Dirname: %s\n", name);
	name += strlen(name) + 1;
    }
}

void
checkRpmIdxOPTFLAGS(RpmFile * file1, RpmHdrIndex * hidx,
		    struct tetj_handle *journal)
{
    int hoffset;
    char *name;

    hoffset = ntohl(hidx->offset);
    name = file1->storeaddr + hoffset;
    if (rpmchkdebug & DEBUG_TRACE_CONTENTS)
	fprintf(stderr, "Optflags: %s\n", name);
    fprintf(stderr, "Optflags not checked: %s\n", name);
}

void
checkRpmIdxDISTURL(RpmFile * file1, RpmHdrIndex * hidx,
		struct tetj_handle *journal)
{
    int hoffset;
    char *name;

    hoffset = ntohl(hidx->offset);
    name = file1->storeaddr + hoffset;

    if (rpmchkdebug & DEBUG_TRACE_CONTENTS)
	fprintf(stderr, "Package DistUrl: %s.\n", name);
}

void
checkRpmIdxPAYLOADFORMAT(RpmFile * file1, RpmHdrIndex * hidx,
			 struct tetj_handle *journal)
{
    int htag, htype, hoffset, hcount;
    char *name;

    htag = ntohl(hidx->tag);
    htype = ntohl(hidx->type);
    hoffset = ntohl(hidx->offset);
    hcount = ntohl(hidx->count);
    name = file1->storeaddr + hoffset;
    if (strcmp(name, "cpio") != 0) {
	fprintf(stderr,
		"Invalid RPMTAG_PAYLOADFORMAT: expecting \"cpio\"");
	fprintf(stderr, " but found %s\n", name);
    }
    if (rpmchkdebug & DEBUG_TRACE_CONTENTS)
	fprintf(stderr, "Payload format: %s\n", name);
}

void
checkRpmIdxPAYLOADCOMPRESSOR(RpmFile * file1, RpmHdrIndex * hidx,
			     struct tetj_handle *journal)
{
    int htag, htype, hoffset, hcount;
    char *name;

    htag = ntohl(hidx->tag);
    htype = ntohl(hidx->type);
    hoffset = ntohl(hidx->offset);
    hcount = ntohl(hidx->count);
    name = file1->storeaddr + hoffset;
    if (strcmp(name, "gzip") != 0) {
	fprintf(stderr,
		"Invalid RPMTAG_PAYLOADCOMPRESSOR: expecting \"gzip\"");
	fprintf(stderr, " but found %s\n", name);
    }
    if (rpmchkdebug & DEBUG_TRACE_CONTENTS)
	fprintf(stderr, "Payload compressor: %s\n", name);
}

void
checkRpmIdxREQUIREVERSION(RpmFile * file1, RpmHdrIndex * hidx,
			  struct tetj_handle *journal)
{
    int hoffset, hcount;
    char *name;

    hoffset = ntohl(hidx->offset);
    hcount = ntohl(hidx->count);
    name = file1->storeaddr + hoffset;
    numrequireversion = hcount;
    requireversion = name;
    if( requirename && requireversion )
	    check_dependencies(journal);
}

void
checkRpmIdxPAYLOADFLAGS(RpmFile * file1, RpmHdrIndex * hidx,
			struct tetj_handle *journal)
{
    int hoffset;
    char *name;

    hoffset = ntohl(hidx->offset);
    name = file1->storeaddr + hoffset;
    if (rpmchkdebug & DEBUG_TRACE_CONTENTS)
	fprintf(stderr, "Payload flags: %s\n", name);
    if (strcmp(name, "9") != 0) {
	fprintf(stderr, "Invalid RPMTAG_PAYLOADFLAGS: expecting \"9\"");
	fprintf(stderr, " but found %s\n", name);
    }
}

void
checkRpmIdxRHNPLATFORM(RpmFile * file1, RpmHdrIndex * hidx,
		       struct tetj_handle *journal)
{
    int hoffset;
    char *name;

    hoffset = ntohl(hidx->offset);
    name = file1->storeaddr + hoffset;
    if (rpmchkdebug & DEBUG_TRACE_CONTENTS)
	fprintf(stderr, "RHN platform: %s\n", name);
/* Opaque data, don't check */
}

void
checkRpmIdxPLATFORM(RpmFile * file1, RpmHdrIndex * hidx,
		    struct tetj_handle *journal)
{
    int hoffset;
    char *name;

    hoffset = ntohl(hidx->offset);
    name = file1->storeaddr + hoffset;
    if (rpmchkdebug & DEBUG_TRACE_CONTENTS)
	fprintf(stderr, "Platform: %s\n", name);
/* Opaque data, don't check */
}

void
checkRpmIdxOBSOLETEFLAGS(RpmFile * file1, RpmHdrIndex * hidx,
			 struct tetj_handle *journal)
{
    int hoffset, hcount, i;
    uint32_t *flagp, flag;
    char buf[128];

#define mapbit(bit) \
	if( flag & bit ) { flag&=~bit;strcat(buf,#bit);strcat(buf," "); }

    hoffset = ntohl(hidx->offset);
    hcount = ntohl(hidx->count);
    flagp = (uint32_t *) (file1->storeaddr + hoffset);

/* This should move to a seperate function for use by multiple tags */
    for (i = 0; i < hcount; i++) {
	buf[0] = '\000';
	flag = htonl(flagp[i]);
	/* fprintf(stderr,"Required Flag: %x ",flag); */
	mapbit(RPMSENSE_RPMLIB);
	mapbit(RPMSENSE_SCRIPT_POSTUN);
	mapbit(RPMSENSE_SCRIPT_PREUN);
	mapbit(RPMSENSE_SCRIPT_POST);
	mapbit(RPMSENSE_SCRIPT_PRE);
	mapbit(RPMSENSE_INTERP);
	mapbit(RPMSENSE_PREREQ);
	mapbit(RPMSENSE_EQUAL);
	mapbit(RPMSENSE_GREATER);
	mapbit(RPMSENSE_LESS);
	fprintf(stderr, "%s ", buf);
	if (flag)
	    fprintf(stderr, " %x", flag);
	fprintf(stderr, "\n");
    }
}

void
checkRpmIdxCONFLICTFLAGS(RpmFile * file1, RpmHdrIndex * hidx,
			 struct tetj_handle *journal)
{
    int hoffset, hcount, i;
    uint32_t *flagp, flag;
    char buf[128];

#define mapbit(bit) \
	if( flag & bit ) { flag&=~bit;strcat(buf,#bit);strcat(buf," "); }

    hoffset = ntohl(hidx->offset);
    hcount = ntohl(hidx->count);
    flagp = (uint32_t *) (file1->storeaddr + hoffset);

/* This should move to a seperate function for use by multiple tags */
    for (i = 0; i < hcount; i++) {
	buf[0] = '\000';
	flag = htonl(flagp[i]);
	/* fprintf(stderr,"Required Flag: %x ",flag); */
	mapbit(RPMSENSE_RPMLIB);
	mapbit(RPMSENSE_SCRIPT_POSTUN);
	mapbit(RPMSENSE_SCRIPT_PREUN);
	mapbit(RPMSENSE_SCRIPT_POST);
	mapbit(RPMSENSE_SCRIPT_PRE);
	mapbit(RPMSENSE_INTERP);
	mapbit(RPMSENSE_PREREQ);
	mapbit(RPMSENSE_EQUAL);
	mapbit(RPMSENSE_GREATER);
	mapbit(RPMSENSE_LESS);
	fprintf(stderr, "%s ", buf);
	if (flag)
	    fprintf(stderr, " %x", flag);
	fprintf(stderr, "\n");
    }
}

void
checkRpmIdxOBSOLETEVERSION(RpmFile * file1, RpmHdrIndex * hidx,
			   struct tetj_handle *journal)
{
    int i, hoffset, hcount;
    char *name;

/*
 * A STRING_ARRAY because it could be providing multiple things.
 */
    hoffset = ntohl(hidx->offset);
    hcount = ntohl(hidx->count);
    name = file1->storeaddr + hoffset;
    for (i = 0; i < hcount; i++) {
	if (rpmchkdebug & DEBUG_TRACE_CONTENTS)
	    fprintf(stderr, "Provide Version: %s\n", name);
	name += strlen(name) + 1;
    }
}

void
checkRpmIdxCONFLICTVERSION(RpmFile * file1, RpmHdrIndex * hidx,
			   struct tetj_handle *journal)
{
    int i, hoffset, hcount;
    char *name;

/*
 * A STRING_ARRAY because it could be providing multiple things.
 */
    hoffset = ntohl(hidx->offset);
    hcount = ntohl(hidx->count);
    name = file1->storeaddr + hoffset;
    for (i = 0; i < hcount; i++) {
	if (rpmchkdebug & DEBUG_TRACE_CONTENTS)
	    fprintf(stderr, "Provide Version: %s\n", name);
	name += strlen(name) + 1;
    }
}

void
checkRpmIdxPREIN(RpmFile * file1, RpmHdrIndex * hidx,
		 struct tetj_handle *journal)
{
    int hoffset;
    unsigned char *prog;

    hoffset = ntohl(hidx->offset);
    prog = (char *) (file1->storeaddr + hoffset);

    if (rpmchkdebug & DEBUG_TRACE_CONTENTS)
	fprintf(stderr, "Pre-install program: %s\n", prog);
    fprintf(stderr, "Pre-install program not checked\n");

}

void
checkRpmIdxPOSTIN(RpmFile * file1, RpmHdrIndex * hidx,
		  struct tetj_handle *journal)
{
    int hoffset;
    unsigned char *prog;

    hoffset = ntohl(hidx->offset);
    prog = (char *) (file1->storeaddr + hoffset);

    if (rpmchkdebug & DEBUG_TRACE_CONTENTS)
	fprintf(stderr, "Post-install program: %s\n", prog);
    fprintf(stderr, "Post-install program not checked\n");
}

void
checkRpmIdxPREUN(RpmFile * file1, RpmHdrIndex * hidx,
		 struct tetj_handle *journal)
{
    int hoffset;
    unsigned char *prog;

    hoffset = ntohl(hidx->offset);
    prog = (char *) (file1->storeaddr + hoffset);

    if (rpmchkdebug & DEBUG_TRACE_CONTENTS)
	fprintf(stderr, "Pre-uninstall program: %s\n", prog);
    fprintf(stderr, "Pre-uninstall program not checked\n");
}

void
checkRpmIdxPOSTUN(RpmFile * file1, RpmHdrIndex * hidx,
		  struct tetj_handle *journal)
{
    int hoffset;
    unsigned char *prog;

    hoffset = ntohl(hidx->offset);
    prog = (char *) (file1->storeaddr + hoffset);

    if (rpmchkdebug & DEBUG_TRACE_CONTENTS)
	fprintf(stderr, "Post-uninstall program: %s\n", prog);
    fprintf(stderr, "Post-uninstall program not checked\n");
}
