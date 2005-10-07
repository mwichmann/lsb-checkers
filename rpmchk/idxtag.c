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
char tmp_string[TMP_STRING_SIZE+1];

void
checkRpmIdx(RpmFile * file1, RpmHdrIndex * hidx, RpmIdxTagFuncRec Tags[],
	    int numtags, struct tetj_handle *journal)
{
    int htag, htype, hoffset, hcount;
    int i, j, nindex, tag, type, count, offset;
    int fail, rv;
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
	tetj_tp_count++;
	fail = TETJ_PASS;
	for (j = 0; j < numtags; j++) {
	    if (Tags[j].tag == tag) {
		snprintf (tmp_string, TMP_STRING_SIZE, "Check %s", Tags[j].name);
		tetj_purpose_start(journal, tetj_activity_count, tetj_tp_count, tmp_string);
		Tags[j].status = Seen;
		/* Check the type */
		if (Tags[j].type != type) {
		    snprintf (tmp_string, TMP_STRING_SIZE,
		  "Type for Index %s does not match. Found %d but expecting %d",
			      Tags[j].name, type, Tags[j].type);
		    tetj_testcase_info(journal, tetj_activity_count,
			               tetj_tp_count, 0, 0, 0, tmp_string);
		    fprintf(stderr, "Error: %s\n", tmp_string);
		    fail = TETJ_FAIL;
		}
		/* Check the count */
		if (Tags[j].count && Tags[j].count != count) {
		    snprintf (tmp_string, TMP_STRING_SIZE,
		"Count for Index %s does not match. Found %d but expecting %d",
			      Tags[j].name, count, Tags[j].count);
		    tetj_testcase_info(journal, tetj_activity_count,
			               tetj_tp_count, 0, 0, 0, tmp_string);
		    fprintf(stderr, "Error: %s\n", tmp_string);
		    fail = TETJ_FAIL;
		}
		if (rpmchkdebug & DEBUG_TRACE_TAGS)
		    fprintf(stderr, "Found index %s offset=%d count=%d\n",
			    Tags[j].name, offset, count);
		rv = Tags[j].func(file1, &hidx[i], journal);
		if (rv != TETJ_FAIL) {
		    if (fail == TETJ_PASS) fail = rv;
		}
		tetj_result(journal, tetj_activity_count, tetj_tp_count, fail);
		tetj_purpose_end(journal, tetj_activity_count, tetj_tp_count); 
		break;
	    }
	}
	if (j == numtags) {
	    /* no match, dummy up a TP */
	    snprintf (tmp_string, TMP_STRING_SIZE, "Check %d", tag);
	    tetj_purpose_start(journal, tetj_activity_count, tetj_tp_count, tmp_string);
	    snprintf (tmp_string, TMP_STRING_SIZE,
	    "checkRpmIdx() unexpected Index tag=%d type=%d offset=%x count=%x",
		      ntohl(hidx[i].tag), ntohl(hidx[i].type),
		      ntohl(hidx[i].offset), ntohl(hidx[i].count));
	    tetj_testcase_info(journal, tetj_activity_count, tetj_tp_count,
		               0, 0, 0, tmp_string);
	    fprintf(stderr, "Error: %s\n", tmp_string);
	    tetj_result(journal, tetj_activity_count, tetj_tp_count, TETJ_FAIL);
	    tetj_purpose_end(journal, tetj_activity_count, tetj_tp_count); 
	}
    }

    /*
     * Go through the table, and make sure that the required Indices
     * were seen.
     */
    tetj_tp_count++;
    fail = TETJ_PASS;
    tetj_purpose_start(journal, tetj_activity_count, tetj_tp_count,
	               "Check required indices");
    for (j = 0; j < numtags; j++) {
	if (Tags[j].reqd == Required && Tags[j].status == NotSeen) {
	    snprintf(tmp_string, TMP_STRING_SIZE,
		    "checkRpmIdx() Required Index %s not found", Tags[j].name);
	    tetj_testcase_info(journal, tetj_activity_count, tetj_tp_count,
		               0, 0, 0, tmp_string);
	    fprintf(stderr, "Error: %s\n", tmp_string);
	    fail = TETJ_FAIL;
	}
	if (Tags[j].reqd == Deprecated && Tags[j].status == Seen) {
	    snprintf(tmp_string, TMP_STRING_SIZE,
		    "checkRpmIdx() Deprecated Index %s found", Tags[j].name);
	    tetj_testcase_info(journal, tetj_activity_count, tetj_tp_count,
		               0, 0, 0, tmp_string);
	    fprintf(stderr, "Warning: %s\n", tmp_string);
	    /* deprecated doesn't sound like a failue */
	}
	if (Tags[j].reqd == Obsoleted && Tags[j].status == Seen) {
	    snprintf(tmp_string, TMP_STRING_SIZE,
		    "checkRpmIdx() Obsoleted Index %s found", Tags[j].name);
	    tetj_testcase_info(journal, tetj_activity_count, tetj_tp_count,
		               0, 0, 0, tmp_string);
	    fprintf(stderr, "Error: %s\n", tmp_string);
	    fail = TETJ_FAIL;
	}
	if (Tags[j].reqd == Reserved && Tags[j].status == Seen) {
	    snprintf(tmp_string, TMP_STRING_SIZE,
		    "checkRpmIdx() Reserved Index %s found", Tags[j].name);
	    tetj_testcase_info(journal, tetj_activity_count, tetj_tp_count,
		               0, 0, 0, tmp_string);
	    fprintf(stderr, "Error: %s\n", tmp_string);
	    fail = TETJ_FAIL;
	}
    }
    tetj_result(journal, tetj_activity_count, tetj_tp_count, fail);
    tetj_purpose_end(journal, tetj_activity_count, tetj_tp_count); 
}

/*
 * These functions correspond to the header private tag values
 */

int
checkRpmIdxHEADERSIGNATURES(RpmFile * file1, RpmHdrIndex * hidx,
			    struct tetj_handle *journal)
{
    int hoffset;
    RpmHdrIndex *sigidx;
    int fail = TETJ_PASS;

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

    return fail;
}

int
checkRpmIdxHEADERIMMUTABLE(RpmFile * file1, RpmHdrIndex * hidx,
			   struct tetj_handle *journal)
{
    int hoffset;
    RpmHdrIndex *imuidx;
    RpmHeader *hdrdata;
    int fail = TETJ_PASS;

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

    return fail;
}

int
checkRpmIdxHDRREGIONS(RpmFile * file1, RpmHdrIndex * hidx,
		      struct tetj_handle *journal)
{
    int htag, htype, hoffset, hcount;
    int nindex;
    RpmHeader *hdr;
    int fail = TETJ_PASS;

    hdr = (RpmHeader *) file1->nexthdr;
    nindex = ntohl(hdr->nindex);
    htag = ntohl(hidx->tag);
    htype = ntohl(hidx->type);
    hoffset = ntohl(hidx->offset);
    hcount = ntohl(hidx->count);

    fprintf(stderr, "checkRpmIdxHDRREGIONS() type=%d offset=%x count=%x\n",
	    htype, hoffset, hcount);
    return fail;
}

int
checkRpmIdxHEADERI18NTABLE(RpmFile * file1, RpmHdrIndex * hidx,
			   struct tetj_handle *journal)
{
    int hoffset, i;
    char *string;
    hoffset = ntohl(hidx->offset);
    int fail = TETJ_PASS;
    string = file1->storeaddr + hoffset;

    for (i = 0; i < ntohl(hidx->count); i++) {
	if (rpmchkdebug & DEBUG_TRACE_CONTENTS)
	    fprintf(stderr, "Locales found: %s\n", string);
	string += strlen(string);
	string++;		/*skip over the NULL to get to the next string */
    }
    return fail;
}

/*
 * These values don't really show up as Indicies.
 */
int
checkRpmIdxHEADERSIGBASE(RpmFile * file1, RpmHdrIndex * hidx,
			 struct tetj_handle *journal)
{
    int htag, htype, hoffset, hcount;
    int nindex;
    RpmHeader *hdr;
    int fail = TETJ_PASS;

    hdr = (RpmHeader *) file1->nexthdr;
    nindex = ntohl(hdr->nindex);
    htag = ntohl(hidx->tag);
    htype = ntohl(hidx->type);
    hoffset = ntohl(hidx->offset);
    hcount = ntohl(hidx->count);

    fprintf(stderr,
	    "checkRpmIdxHEADERSIGBASE() type=%d offset=%x count=%x\n",
	    htype, hoffset, hcount);
    return fail;
}

/*
 * These functions correspond to the tag values for a Signature
 */

int
checkRpmIdxSIGSIZE(RpmFile * file1, RpmHdrIndex * hidx,
		   struct tetj_handle *journal)
{
    int hoffset;
    unsigned int size;
    unsigned int *value;
    int fail = TETJ_PASS;

    hoffset = ntohl(hidx->offset);
    value = (unsigned int *) (file1->storeaddr + hoffset);
    sigsize = htonl(*value);
    size = file1->size - ((char *) file1->header - file1->addr);

    if (sigsize != size) {
	fprintf(stderr,
		"SIGTAG_SIZE value %d doesn't match expected value %d\n",
		sigsize, size);
    }

    return fail;
}

int
checkRpmIdxMD5(RpmFile * file1, RpmHdrIndex * hidx,
	       struct tetj_handle *journal)
{
    int i, hoffset;
    unsigned char *md5hdr, md5sum[16];
    int fail = TETJ_PASS;

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
    return fail;
}

int
checkRpmIdxGPG(RpmFile * file1, RpmHdrIndex * hidx,
	       struct tetj_handle *journal)
{
    int htag, htype, hoffset, hcount;
    int nindex;
    RpmHeader *hdr;
    int fail = TETJ_PASS;

    hdr = (RpmHeader *) file1->nexthdr;
    nindex = ntohl(hdr->nindex);
    htag = ntohl(hidx->tag);
    htype = ntohl(hidx->type);
    hoffset = ntohl(hidx->offset);
    hcount = ntohl(hidx->count);

    fprintf(stderr, "checkRpmIdxGPG() type=%d offset=%x count=%x\n",
	    htype, hoffset, hcount);
    return fail;
}

int
checkRpmIdxPGP5(RpmFile * file1, RpmHdrIndex * hidx,
		struct tetj_handle *journal)
{
    int htag, htype, hoffset, hcount;
    int nindex;
    RpmHeader *hdr;
    int fail = TETJ_PASS;

    hdr = (RpmHeader *) file1->nexthdr;
    nindex = ntohl(hdr->nindex);
    htag = ntohl(hidx->tag);
    htype = ntohl(hidx->type);
    hoffset = ntohl(hidx->offset);
    hcount = ntohl(hidx->count);

    fprintf(stderr, "checkRpmIdxPGP5() type=%d offset=%x count=%x\n",
	    htype, hoffset, hcount);
    return fail;
}

int
checkRpmIdxPGP(RpmFile * file1, RpmHdrIndex * hidx,
	       struct tetj_handle *journal)
{
    int htag, htype, hoffset, hcount;
    int nindex;
    RpmHeader *hdr;
    int fail = TETJ_PASS;

    hdr = (RpmHeader *) file1->nexthdr;
    nindex = ntohl(hdr->nindex);
    htag = ntohl(hidx->tag);
    htype = ntohl(hidx->type);
    hoffset = ntohl(hidx->offset);
    hcount = ntohl(hidx->count);

    fprintf(stderr, "checkRpmIdxPGP() type=%d offset=%x count=%x\n",
	    htype, hoffset, hcount);
    return fail;
}

int
checkRpmIdxSHA1(RpmFile * file1, RpmHdrIndex * hidx,
		      struct tetj_handle *journal)
{
    int hoffset;
    unsigned char *shadata;
    int fail = TETJ_PASS;

    hoffset = ntohl(hidx->offset);
    shadata = file1->storeaddr + hoffset;

    fprintf(stderr,
	    "checkRpmIdxSHA1() Not yet checking SHA1 contents\n");
    return fail;
}

int
checkRpmIdxDSA(RpmFile * file1, RpmHdrIndex * hidx,
		     struct tetj_handle *journal)
{
    int hoffset;
    unsigned char *dsadata;
    int fail = TETJ_PASS;

    hoffset = ntohl(hidx->offset);
    dsadata = file1->storeaddr + hoffset;

    fprintf(stderr,
	    "checkRpmIdxDSA() Not yet checking DSA contents\n");
    return fail;
}

int
checkRpmIdxRSA(RpmFile * file1, RpmHdrIndex * hidx,
		     struct tetj_handle *journal)
{
    int hoffset;
    unsigned char *rsadata;
    int fail = TETJ_PASS;

    hoffset = ntohl(hidx->offset);
    rsadata = file1->storeaddr + hoffset;

    fprintf(stderr,
	    "checkRpmIdxRSA() Not yet checking RSA contents\n");
    return fail;
}

/*
 * These functions are for the normal RPM tags.
 */

#if 0
/* Don't seem to need these either */
int
checkRpmIdxSIGNATURES(RpmFile * file1, RpmHdrIndex * hidx,
		      struct tetj_handle *journal)
{
    int htag, htype, hoffset, hcount;
    int nindex;
    RpmHeader *hdr;
    int fail = TETJ_PASS;

    hdr = (RpmHeader *) file1->nexthdr;
    nindex = ntohl(hdr->nindex);
    htag = ntohl(hidx->tag);
    htype = ntohl(hidx->type);
    hoffset = ntohl(hidx->offset);
    hcount = ntohl(hidx->count);

    fprintf(stderr, "checkRpmIdxSIGNATURES() type=%d offset=%x count=%x\n",
	    htype, hoffset, hcount);
    return fail;
}

int
checkRpmIdxIMMUTABLE(RpmFile * file1, RpmHdrIndex * hidx,
		     struct tetj_handle *journal)
{
    int htag, htype, hoffset, hcount;
    int nindex;
    RpmHeader *hdr;
    int fail = TETJ_PASS;

    hdr = (RpmHeader *) file1->nexthdr;
    nindex = ntohl(hdr->nindex);
    htag = ntohl(hidx->tag);
    htype = ntohl(hidx->type);
    hoffset = ntohl(hidx->offset);
    hcount = ntohl(hidx->count);
    fprintf(stderr, "checkRpmIdxIMMUTABLE() type=%d offset=%x count=%x\n",
	    htype, hoffset, hcount);
    return fail;
}

int
checkRpmIdxUNKNOWN(RpmFile * file1, RpmHdrIndex * hidx,
		   struct tetj_handle *journal)
{
    int htag, htype, hoffset, hcount;
    int fail = TETJ_PASS;
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
    return fail;
}

int
checkRpmIdxSERIAL(RpmFile * file1, RpmHdrIndex * hidx,
		  struct tetj_handle *journal)
{
    int htag, htype, hoffset, hcount;
    int fail = TETJ_PASS;

    htag = ntohl(hidx->tag);
    htype = ntohl(hidx->type);
    hoffset = ntohl(hidx->offset);
    hcount = ntohl(hidx->count);
    fprintf(stderr, "checkRpmIdxSERIAL() type=%d offset=%x count=%x\n",
	    htype, hoffset, hcount);
    return fail;
}

#endif

int
checkRpmIdxNAME(RpmFile * file1, RpmHdrIndex * hidx,
		struct tetj_handle *journal)
{
    int hoffset;
    int fail = TETJ_PASS;

    hoffset = ntohl(hidx->offset);
    pkgname = file1->storeaddr + hoffset;

    if (rpmchkdebug & DEBUG_TRACE_CONTENTS)
	fprintf(stderr, "Package name: %s\n", pkgname);

    if( !lanananame )
    	set_myappname(pkgname);
    return fail;
}

int
checkRpmIdxVERSION(RpmFile * file1, RpmHdrIndex * hidx,
		   struct tetj_handle *journal)
{
    int hoffset;
    char *name;
    int fail = TETJ_PASS;

    hoffset = ntohl(hidx->offset);
    name = file1->storeaddr + hoffset;

    if (rpmchkdebug & DEBUG_TRACE_CONTENTS)
	fprintf(stderr, "Package Version: %s\n", name);
    return fail;
}

int
checkRpmIdxRELEASE(RpmFile * file1, RpmHdrIndex * hidx,
		   struct tetj_handle *journal)
{
    int hoffset;
    char *name;
    int fail = TETJ_PASS;

    hoffset = ntohl(hidx->offset);
    name = file1->storeaddr + hoffset;

    if (rpmchkdebug & DEBUG_TRACE_CONTENTS)
	fprintf(stderr, "Package Release: %s\n", name);
    return fail;
}

int
checkRpmIdxSUMMARY(RpmFile * file1, RpmHdrIndex * hidx,
		   struct tetj_handle *journal)
{
    int hoffset, i;
    char *name;
    int fail = TETJ_PASS;

    hoffset = ntohl(hidx->offset);
    name = file1->storeaddr + hoffset;

    for (i = 0; i < ntohl(hidx->count); i++) {
	if (rpmchkdebug & DEBUG_TRACE_CONTENTS)
	    fprintf(stderr, "Package Summary: %s\n", name);
	name += strlen(name);
	name++;			/*skip over the NULL to get to the next string */
    }
    return fail;
}

int
checkRpmIdxDESCRIPTION(RpmFile * file1, RpmHdrIndex * hidx,
		       struct tetj_handle *journal)
{
    int hoffset, i;
    char *name;
    int fail = TETJ_PASS;

    hoffset = ntohl(hidx->offset);
    name = file1->storeaddr + hoffset;

    for (i = 0; i < ntohl(hidx->count); i++) {
	if (rpmchkdebug & DEBUG_TRACE_CONTENTS)
	    fprintf(stderr, "Package Description: %s\n", name);
	name += strlen(name);
	name++;			/*skip over the NULL to get to the next string */
    }
    return fail;
}

int
checkRpmIdxBUILDTIME(RpmFile * file1, RpmHdrIndex * hidx,
		     struct tetj_handle *journal)
{
    int hoffset;
    unsigned int *name;
    time_t btime;
    int fail = TETJ_PASS;

    hoffset = ntohl(hidx->offset);
    name = (unsigned int *) (file1->storeaddr + hoffset);
    btime = htonl(*name);

    if (rpmchkdebug & DEBUG_TRACE_CONTENTS)
	fprintf(stderr, "Package Buildtime: %s", ctime(&btime));
    return fail;
}

int
checkRpmIdxBUILDHOST(RpmFile * file1, RpmHdrIndex * hidx,
		     struct tetj_handle *journal)
{
    int hoffset;
    char *name;
    int fail = TETJ_PASS;

    hoffset = ntohl(hidx->offset);
    name = file1->storeaddr + hoffset;

    if (rpmchkdebug & DEBUG_TRACE_CONTENTS)
	fprintf(stderr, "Package Buildhost: %s\n", name);
    return fail;
}

int
checkRpmIdxSIZE(RpmFile * file1, RpmHdrIndex * hidx,
		struct tetj_handle *journal)
{
    int hoffset;
    int *sizep;
    int fail = TETJ_PASS;

    hoffset = ntohl(hidx->offset);
    sizep = (int *) (file1->storeaddr + hoffset);
    rpmtagsize = htonl(*sizep);

    if (rpmchkdebug & DEBUG_TRACE_CONTENTS)
	fprintf(stderr, "Package Size: %d.\n", rpmtagsize);
    return fail;
}

int
checkRpmIdxDISTRIBUTION(RpmFile * file1, RpmHdrIndex * hidx,
		struct tetj_handle *journal)
{
    int hoffset;
    char *name;
    int fail = TETJ_PASS;

    hoffset = ntohl(hidx->offset);
    name = file1->storeaddr + hoffset;

    if (rpmchkdebug & DEBUG_TRACE_CONTENTS)
	fprintf(stderr, "Package Distribution: %s.\n", name);
    return fail;
}

int
checkRpmIdxVENDOR(RpmFile * file1, RpmHdrIndex * hidx,
		struct tetj_handle *journal)
{
    int hoffset;
    char *name;
    int fail = TETJ_PASS;

    hoffset = ntohl(hidx->offset);
    name = file1->storeaddr + hoffset;

    if (rpmchkdebug & DEBUG_TRACE_CONTENTS)
	fprintf(stderr, "Package Vendor: %s.\n", name);
    return fail;
}

int
checkRpmIdxPACKAGER(RpmFile * file1, RpmHdrIndex * hidx,
		struct tetj_handle *journal)
{
    int hoffset;
    char *name;
    int fail = TETJ_PASS;

    hoffset = ntohl(hidx->offset);
    name = file1->storeaddr + hoffset;

    if (rpmchkdebug & DEBUG_TRACE_CONTENTS)
	fprintf(stderr, "Packager: %s.\n", name);
    return fail;
}

int
checkRpmIdxLICENSE(RpmFile * file1, RpmHdrIndex * hidx,
		   struct tetj_handle *journal)
{
    int hoffset;
    char *name;
    int fail = TETJ_PASS;

    hoffset = ntohl(hidx->offset);
    name = file1->storeaddr + hoffset;

    if (rpmchkdebug & DEBUG_TRACE_CONTENTS)
	fprintf(stderr, "Package License: %s\n", name);
    return fail;
}

int
checkRpmIdxGROUP(RpmFile *file1, RpmHdrIndex *hidx, struct tetj_handle *journal)
{
    int hoffset;
    char *name;
    int fail = TETJ_PASS;

    hoffset = ntohl(hidx->offset);
    name = file1->storeaddr + hoffset;

    if (rpmchkdebug & DEBUG_TRACE_CONTENTS)
	fprintf(stderr, "Package Group: %s\n", name);
    return fail;
}

int
checkRpmIdxURL(RpmFile *file1, RpmHdrIndex *hidx, struct tetj_handle *journal)
{
    int hoffset;
    char *name;
    int fail = TETJ_PASS;

    hoffset = ntohl(hidx->offset);
    name = file1->storeaddr + hoffset;

    if (rpmchkdebug & DEBUG_TRACE_CONTENTS)
	fprintf(stderr, "Package Url: %s.\n", name);
    return fail;
}

int
checkRpmIdxOS(RpmFile *file1, RpmHdrIndex *hidx, struct tetj_handle *journal)
{
    int hoffset;
    char *name;
    int fail = TETJ_PASS;

    hoffset = ntohl(hidx->offset);
    name = file1->storeaddr + hoffset;
    if (strcasecmp(name, validos) != 0) {
        snprintf (tmp_string, TMP_STRING_SIZE,
	          "Incorrect RPMTAG_OS: expecting %s but found %s",
		  validos, name);
	tetj_testcase_info(journal, tetj_activity_count, tetj_tp_count,
	       	0, 0, 0, tmp_string);
        fprintf(stderr, "Error: %s\n", tmp_string);
	fail = TETJ_FAIL;
	tetj_result(journal, tetj_activity_count, tetj_tp_count, TETJ_FAIL);
    } else {
	tetj_testcase_info(journal, tetj_activity_count, tetj_tp_count,
	       	0, 0, 0, name);
    }
    return fail;
}

int
checkRpmIdxARCH(RpmFile *file1, RpmHdrIndex *hidx, struct tetj_handle *journal)
{
    int hoffset;
    char *name;
    int fail = TETJ_PASS;

    hoffset = ntohl(hidx->offset);
    name = file1->storeaddr + hoffset;
    if (strcmp(name, architecture) != 0 && strcmp(name, "noarch") != 0) {
        snprintf (tmp_string, TMP_STRING_SIZE,
	          "Incorrect RPMTAG_ARCH: expecting %s or noarch but found %s",
		  architecture, name);
	tetj_testcase_info(journal, tetj_activity_count, tetj_tp_count,
	       	0, 0, 0, tmp_string);
        fprintf(stderr, "Error: %s\n", tmp_string);
	fail = TETJ_FAIL;
    } else {
	if (strcmp(name, "noarch") == 0)
	    is_noarch = 1;
	tetj_testcase_info(journal, tetj_activity_count, tetj_tp_count,
	       	0, 0, 0, name);
    }
    return fail;
}

int
checkRpmIdxOLDFILENAMES(RpmFile * file1, RpmHdrIndex * hidx,
			struct tetj_handle *journal)
{
    int hoffset, hcount, i;
    char *name;
    int fail = TETJ_PASS;

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
    return fail;
}

int
checkRpmIdxFILESIZES(RpmFile * file1, RpmHdrIndex * hidx,
		     struct tetj_handle *journal)
{
    int hcount, hoffset, i;
    int fail = TETJ_PASS;

    hcount = ntohl(hidx->count);
    hoffset = ntohl(hidx->offset);
    filesizes = (int *) (file1->storeaddr + hoffset);
    for (i = 0; i < hcount; i++) {
	filesizes[i] = htonl(filesizes[i]);
	if (rpmchkdebug & DEBUG_TRACE_CONTENTS)
	    fprintf(stderr, "Filesize: %d\n", filesizes[i]);
    }
    return fail;
}

int
checkRpmIdxFILEMODES(RpmFile * file1, RpmHdrIndex * hidx,
		     struct tetj_handle *journal)
{
    int hoffset, hcount, i;
    int fail = TETJ_PASS;

    hoffset = ntohl(hidx->offset);
    hcount = ntohl(hidx->count);
    filemodes = (short *) (file1->storeaddr + hoffset);
    for (i = 0; i < hcount; i++) {
	filemodes[i] = htons(filemodes[i]);
	if (rpmchkdebug & DEBUG_TRACE_CONTENTS)
	    fprintf(stderr, "Filemodes: %x\n", filemodes[i]);
    }
    return fail;
}

int
checkRpmIdxFILERDEVS(RpmFile * file1, RpmHdrIndex * hidx,
		     struct tetj_handle *journal)
{
    int hoffset, hcount, i;
    int fail = TETJ_PASS;

    hoffset = ntohl(hidx->offset);
    hcount = ntohl(hidx->count);
    filerdevs = (short *) (file1->storeaddr + hoffset);
    for (i = 0; i < hcount; i++) {
	filerdevs[i] = htons(filerdevs[i]);
	if (rpmchkdebug & DEBUG_TRACE_CONTENTS)
	    fprintf(stderr, "Filerdevs: %x\n", filerdevs[i]);
    }
    return fail;
}

int
checkRpmIdxFILEMTIMES(RpmFile * file1, RpmHdrIndex * hidx,
		      struct tetj_handle *journal)
{
    int hoffset, hcount, i;
    int fail = TETJ_PASS;

    hoffset = ntohl(hidx->offset);
    hcount = ntohl(hidx->count);
    filetimes = (int *) (file1->storeaddr + hoffset);
    for (i = 0; i < hcount; i++) {
	filetimes[i] = htonl(filetimes[i]);
	if (rpmchkdebug & DEBUG_TRACE_CONTENTS)
	    fprintf(stderr, "Filetime: %d\n", filetimes[i]);
    }
    return fail;
}

int
checkRpmIdxFILEMD5S(RpmFile * file1, RpmHdrIndex * hidx,
		    struct tetj_handle *journal)
{
    int hoffset, hcount, i;
    char *name;
    int fail = TETJ_PASS;

    hoffset = ntohl(hidx->offset);
    hcount = ntohl(hidx->count);
    filemd5s = (char *) (file1->storeaddr + hoffset);
    name = filemd5s;
    for (i = 0; i < hcount; i++) {
	if (rpmchkdebug & DEBUG_TRACE_CONTENTS)
	    fprintf(stderr, "File MD5[%3.3d]: %s\n", i, name);
	name += strlen(name) + 1;
    }
    return fail;
}

int
checkRpmIdxFILELINKTOS(RpmFile * file1, RpmHdrIndex * hidx,
		       struct tetj_handle *journal)
{
    int hoffset, hcount, i;
    char *name;
    int fail = TETJ_PASS;

    hoffset = ntohl(hidx->offset);
    hcount = ntohl(hidx->count);
    filelinktos = (char *) (file1->storeaddr + hoffset);
    name = filelinktos;
    for (i = 0; i < hcount; i++) {
	if (rpmchkdebug & DEBUG_TRACE_CONTENTS)
	    fprintf(stderr, "File linkto[%3.3d]: %s\n", i, name);
	name += strlen(name) + 1;
    }
    return fail;
}

int
checkRpmIdxFILEFLAGS(RpmFile * file1, RpmHdrIndex * hidx,
		     struct tetj_handle *journal)
{
    int hoffset, hcount, i;
    unsigned int *fflags;
    int fail = TETJ_PASS;

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
    return fail;
}

int
checkRpmIdxFILEUSERNAME(RpmFile * file1, RpmHdrIndex * hidx,
			struct tetj_handle *journal)
{
    int hoffset, hcount, i;
    char *name;
    int fail = TETJ_PASS;

    hoffset = ntohl(hidx->offset);
    hcount = ntohl(hidx->count);
    fileusernames = (char *) (file1->storeaddr + hoffset);
    name = fileusernames;
    for (i = 0; i < hcount; i++) {
	if (rpmchkdebug & DEBUG_TRACE_CONTENTS)
	    fprintf(stderr, "File username: %s\n", name);
	name += strlen(name) + 1;
    }
    return fail;
}

int
checkRpmIdxFILEGROUPNAME(RpmFile * file1, RpmHdrIndex * hidx,
			 struct tetj_handle *journal)
{
    int hoffset, hcount, i;
    char *name;
    int fail = TETJ_PASS;

    hoffset = ntohl(hidx->offset);
    hcount = ntohl(hidx->count);
    filegroupnames = (char *) (file1->storeaddr + hoffset);
    name = filegroupnames;
    for (i = 0; i < hcount; i++) {
	if (rpmchkdebug & DEBUG_TRACE_CONTENTS)
	    fprintf(stderr, "File groupname: %s\n", name);
	name += strlen(name) + 1;
    }
    return fail;
}

int
checkRpmIdxSOURCERPM(RpmFile * file1, RpmHdrIndex * hidx,
		     struct tetj_handle *journal)
{
    int hoffset;
    char *name;
    int fail = TETJ_PASS;

    hoffset = ntohl(hidx->offset);
    name = file1->storeaddr + hoffset;
    if (rpmchkdebug & DEBUG_TRACE_CONTENTS)
	fprintf(stderr, "RPMTAG_SOURCERPM: %s\n", name);
    return fail;
}

int
checkRpmIdxFILEVERIFYFLAGS(RpmFile * file1, RpmHdrIndex * hidx,
			   struct tetj_handle *journal)
{
    int hoffset, hcount, i;
    unsigned int *flagp;
    int fail = TETJ_PASS;

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
    return fail;
}

int
checkRpmIdxARCHIVESIZE(RpmFile * file1, RpmHdrIndex * hidx,
		       struct tetj_handle *journal)
{
    int hoffset;
    uint32_t *sizep;
    int fail = TETJ_PASS;

    hoffset = ntohl(hidx->offset);
    sizep = (uint32_t *) (file1->storeaddr + hoffset);
    archivesize = htonl(*sizep);

    if (rpmchkdebug & DEBUG_TRACE_CONTENTS)
	fprintf(stderr, "Archive Size: %d.\n", archivesize);
    return fail;
}

int
checkRpmIdxPAYLOADSIZE(RpmFile * file1, RpmHdrIndex * hidx,
		       struct tetj_handle *journal)
{
    int hoffset;
    uint32_t *sizep;
    int fail = TETJ_PASS;

    hoffset = ntohl(hidx->offset);
    sizep = (uint32_t *) (file1->storeaddr + hoffset);
    archivesize = htonl(*sizep);

    if (rpmchkdebug & DEBUG_TRACE_CONTENTS)
	fprintf(stderr, "Payload Size: %d.\n", archivesize);
    return fail;
}

int
checkRpmIdxPROVIDENAME(RpmFile * file1, RpmHdrIndex * hidx,
		       struct tetj_handle *journal)
{
    int htag, htype, hoffset, hcount;
    char *name;
    int fail = TETJ_PASS;

    htag = ntohl(hidx->tag);
    htype = ntohl(hidx->type);
    hoffset = ntohl(hidx->offset);
    hcount = ntohl(hidx->count);
    name = file1->storeaddr + hoffset;
    fprintf(stderr,
	    "checkRpmIdxPROVIDENAME() type=%d offset=%x count=%x %s\n",
	    htype, hoffset, hcount, name);
    return fail;
}

int
checkRpmIdxOBSOLETENAME(RpmFile * file1, RpmHdrIndex * hidx,
			struct tetj_handle *journal)
{
    int htag, htype, hoffset, hcount;
    char *name;
    int fail = TETJ_PASS;

    htag = ntohl(hidx->tag);
    htype = ntohl(hidx->type);
    hoffset = ntohl(hidx->offset);
    hcount = ntohl(hidx->count);
    name = file1->storeaddr + hoffset;
    fprintf(stderr,
	    "checkRpmIdxOBSOLETENAME() type=%d offset=%x count=%x %s\n",
	    htype, hoffset, hcount, name);
    return fail;
}

int
checkRpmIdxCONFLICTNAME(RpmFile * file1, RpmHdrIndex * hidx,
			struct tetj_handle *journal)
{
    int htag, htype, hoffset, hcount;
    char *name;
    int fail = TETJ_PASS;

    htag = ntohl(hidx->tag);
    htype = ntohl(hidx->type);
    hoffset = ntohl(hidx->offset);
    hcount = ntohl(hidx->count);
    name = file1->storeaddr + hoffset;
    fprintf(stderr,
	    "checkRpmIdxCONFLICTNAME() type=%d offset=%x count=%x %s\n",
	    htype, hoffset, hcount, name);
    return fail;
}

int
checkRpmIdxREQUIREFLAGS(RpmFile * file1, RpmHdrIndex * hidx,
			struct tetj_handle *journal)
{
    int hoffset, hcount, i;
    uint32_t *flagp, flag;
    char buf[128];
    int fail = TETJ_PASS;

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
    return fail;
}

int
checkRpmIdxREQUIRENAME(RpmFile * file1, RpmHdrIndex * hidx,
		       struct tetj_handle *journal)
{
    int hoffset, hcount;
    char *name;
    int fail = TETJ_PASS;

    hoffset = ntohl(hidx->offset);
    hcount = ntohl(hidx->count);
    name = file1->storeaddr + hoffset;
    numrequirename = hcount;
    requirename = name;
    if( requirename && requireversion )
	    fail = check_dependencies(journal);
    return fail;
}

int
checkRpmIdxRPMVERSION(RpmFile * file1, RpmHdrIndex * hidx,
		      struct tetj_handle *journal)
{
    int hoffset;
    char *name;
    int fail = TETJ_PASS;

    hoffset = ntohl(hidx->offset);
    name = file1->storeaddr + hoffset;
    if (rpmchkdebug & DEBUG_TRACE_CONTENTS)
	fprintf(stderr, "RPM version: %s\n", name);
    return fail;
}

int
checkRpmIdxCHANGELOGTIME(RpmFile * file1, RpmHdrIndex * hidx,
			 struct tetj_handle *journal)
{
    int hcount, hoffset, i;
    uint32_t *timep;
    time_t chtime;
    int fail = TETJ_PASS;

    hoffset = ntohl(hidx->offset);
    hcount = ntohl(hidx->count);
    timep = (uint32_t *) (file1->storeaddr + hoffset);

    for (i = 0; i < hcount; i++) {
	chtime = htonl(timep[i]);
	if (rpmchkdebug & DEBUG_TRACE_CONTENTS)
	    fprintf(stderr, "Changelog time: %s", ctime(&chtime));
    }
    return fail;
}

int
checkRpmIdxCHANGELOGNAME(RpmFile * file1, RpmHdrIndex * hidx,
			 struct tetj_handle *journal)
{
    int hoffset, hcount, i;
    char *name;
    int fail = TETJ_PASS;

    hoffset = ntohl(hidx->offset);
    hcount = ntohl(hidx->count);
    name = (char *) (file1->storeaddr + hoffset);
    for (i = 0; i < hcount; i++) {
	if (rpmchkdebug & DEBUG_TRACE_CONTENTS)
	    fprintf(stderr, "Changelog name: %s\n", name);
	name += strlen(name) + 1;
    }
    return fail;
}

int
checkRpmIdxCHANGELOGTEXT(RpmFile * file1, RpmHdrIndex * hidx,
			 struct tetj_handle *journal)
{
    int hoffset, hcount, i;
    char *text;
    int fail = TETJ_PASS;

    hoffset = ntohl(hidx->offset);
    hcount = ntohl(hidx->count);
    text = (char *) (file1->storeaddr + hoffset);
    for (i = 0; i < hcount; i++) {
	if (rpmchkdebug & DEBUG_TRACE_CONTENTS)
	    fprintf(stderr, "Changelog text: %s\n", text);
	text += strlen(text) + 1;
    }
    return fail;
}

int
checkRpmIdxPREINPROG(RpmFile * file1, RpmHdrIndex * hidx,
		     struct tetj_handle *journal)
{
    int htag, htype, hoffset, hcount;
    char *name;
    int fail = TETJ_PASS;

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
    return fail;
}

int
checkRpmIdxPOSTINPROG(RpmFile * file1, RpmHdrIndex * hidx,
		      struct tetj_handle *journal)
{
    int htag, htype, hoffset, hcount;
    char *name;
    int fail = TETJ_PASS;

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
    return fail;
}

int
checkRpmIdxPREUNPROG(RpmFile * file1, RpmHdrIndex * hidx,
		     struct tetj_handle *journal)
{
    int htag, htype, hoffset, hcount;
    char *name;
    int fail = TETJ_PASS;

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
    return fail;
}

int
checkRpmIdxPOSTUNPROG(RpmFile * file1, RpmHdrIndex * hidx,
		      struct tetj_handle *journal)
{
    int htag, htype, hoffset, hcount;
    char *name;
    int fail = TETJ_PASS;

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
    return fail;
}

int
checkRpmIdxCOOKIE(RpmFile * file1, RpmHdrIndex * hidx,
		  struct tetj_handle *journal)
{
    int hoffset;
    unsigned char *name;
    int fail = TETJ_PASS;

    hoffset = ntohl(hidx->offset);
    name = (char *) (file1->storeaddr + hoffset);

    if (rpmchkdebug & DEBUG_TRACE_CONTENTS)
	fprintf(stderr, "Cookie: %s\n", name);
    return fail;
}

int
checkRpmIdxFILEDEVICES(RpmFile * file1, RpmHdrIndex * hidx,
		       struct tetj_handle *journal)
{
    int hoffset, hcount, i;
    int fail = TETJ_PASS;

    hoffset = ntohl(hidx->offset);
    hcount = ntohl(hidx->count);
    filedevs = (uint32_t *) (file1->storeaddr + hoffset);
    for (i = 0; i < hcount; i++) {
	filedevs[i] = htonl(filedevs[i]);
	if (rpmchkdebug & DEBUG_TRACE_CONTENTS)
	    fprintf(stderr, "Filedevs: %x\n", filedevs[i]);
    }
    return fail;
}

int
checkRpmIdxFILEINODES(RpmFile * file1, RpmHdrIndex * hidx,
		      struct tetj_handle *journal)
{
    int hoffset, hcount, i;
    int fail = TETJ_PASS;

    hoffset = ntohl(hidx->offset);
    hcount = ntohl(hidx->count);
    fileinodes = (uint32_t *) (file1->storeaddr + hoffset);
    for (i = 0; i < hcount; i++) {
	fileinodes[i] = htonl(fileinodes[i]);
	if (rpmchkdebug & DEBUG_TRACE_CONTENTS)
	    fprintf(stderr, "File inode: %d\n", fileinodes[i]);
    }
    return fail;
}

int
checkRpmIdxFILELANGS(RpmFile * file1, RpmHdrIndex * hidx,
		     struct tetj_handle *journal)
{
    int hoffset, hcount, i;
    char *name;
    int fail = TETJ_PASS;

    hoffset = ntohl(hidx->offset);
    hcount = ntohl(hidx->count);
    filelangs = (char *) (file1->storeaddr + hoffset);
    name = filelangs;
    for (i = 0; i < hcount; i++) {
	if (rpmchkdebug & DEBUG_TRACE_CONTENTS)
	    fprintf(stderr, "File langs: %s\n", name);
	name += strlen(name) + 1;
    }
    return fail;
}

int
checkRpmIdxPROVIDEFLAGS(RpmFile * file1, RpmHdrIndex * hidx,
			struct tetj_handle *journal)
{
    int hoffset;
    uint32_t *flagp, flag;
    int fail = TETJ_PASS;

    hoffset = ntohl(hidx->offset);
    flagp = (uint32_t *) (file1->storeaddr + hoffset);
    flag = htonl(*flagp);
    if (rpmchkdebug & DEBUG_TRACE_CONTENTS)
	fprintf(stderr, "Provide Flag: %x\n", flag);
    snprintf (tmp_string, TMP_STRING_SIZE, "Provide Flag not checked: %x", flag);
    tetj_testcase_info(journal, tetj_activity_count, tetj_tp_count,
		       0, 0, 0, tmp_string);
    fprintf(stderr, "%s\n", tmp_string);
    fail = TETJ_UNTESTED;
    return fail;
}

int
checkRpmIdxPROVIDEVERSION(RpmFile * file1, RpmHdrIndex * hidx,
			  struct tetj_handle *journal)
{
    int i, hoffset, hcount;
    char *name;
    int fail = TETJ_PASS;

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
    return fail;
}

int
checkRpmIdxDIRINDEXES(RpmFile * file1, RpmHdrIndex * hidx,
		      struct tetj_handle *journal)
{
    int hoffset, hcount, i;
    int fail = TETJ_PASS;

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
    return fail;
}

int
checkRpmIdxBASENAMES(RpmFile * file1, RpmHdrIndex * hidx,
		     struct tetj_handle *journal)
{
    int i, hoffset, hcount;
    char *name;
    int fail = TETJ_PASS;

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
    return fail;
}

int
checkRpmIdxDIRNAMES(RpmFile * file1, RpmHdrIndex * hidx,
		    struct tetj_handle *journal)
{
    int i, hoffset, hcount;
    char *name;
    int fail = TETJ_PASS;

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
    return fail;
}

int
checkRpmIdxOPTFLAGS(RpmFile * file1, RpmHdrIndex * hidx,
		    struct tetj_handle *journal)
{
    int hoffset;
    char *name;
    int fail = TETJ_PASS;

    hoffset = ntohl(hidx->offset);
    name = file1->storeaddr + hoffset;
    if (rpmchkdebug & DEBUG_TRACE_CONTENTS)
	fprintf(stderr, "Optflags: %s\n", name);
    snprintf (tmp_string, TMP_STRING_SIZE, "Optflags not checked: %s", name);
    tetj_testcase_info(journal, tetj_activity_count, tetj_tp_count,
		       0, 0, 0, tmp_string);
    fprintf(stderr, "%s\n", tmp_string);
    return fail;
}

int
checkRpmIdxDISTURL(RpmFile * file1, RpmHdrIndex * hidx,
		struct tetj_handle *journal)
{
    int hoffset;
    char *name;
    int fail = TETJ_PASS;

    hoffset = ntohl(hidx->offset);
    name = file1->storeaddr + hoffset;

    if (rpmchkdebug & DEBUG_TRACE_CONTENTS)
	fprintf(stderr, "Package DistUrl: %s.\n", name);
    return fail;
}

int
checkRpmIdxPAYLOADFORMAT(RpmFile * file1, RpmHdrIndex * hidx,
			 struct tetj_handle *journal)
{
    int htag, htype, hoffset, hcount;
    char *name;
    int fail = TETJ_PASS;

    htag = ntohl(hidx->tag);
    htype = ntohl(hidx->type);
    hoffset = ntohl(hidx->offset);
    hcount = ntohl(hidx->count);
    name = file1->storeaddr + hoffset;
    if (rpmchkdebug & DEBUG_TRACE_CONTENTS)
	fprintf(stderr, "Payload format: %s\n", name);
    if (strcmp(name, "cpio") != 0) {
        snprintf (tmp_string, TMP_STRING_SIZE,
	          "Invalid RPMTAG_PAYLOADFORMAT: expecting cpio but found %s",
	          name);
	tetj_testcase_info(journal, tetj_activity_count, tetj_tp_count,
	       	           0, 0, 0, tmp_string);
        fprintf(stderr, "Error: %s\n", tmp_string);
	fail = TETJ_FAIL;
    } else {
	tetj_testcase_info(journal, tetj_activity_count, tetj_tp_count,
	       	0, 0, 0, name);
    }
    return fail;
}

int
checkRpmIdxPAYLOADCOMPRESSOR(RpmFile * file1, RpmHdrIndex * hidx,
			     struct tetj_handle *journal)
{
    int htag, htype, hoffset, hcount;
    char *name;
    int fail = TETJ_PASS;

    htag = ntohl(hidx->tag);
    htype = ntohl(hidx->type);
    hoffset = ntohl(hidx->offset);
    hcount = ntohl(hidx->count);
    name = file1->storeaddr + hoffset;
    if (rpmchkdebug & DEBUG_TRACE_CONTENTS)
	fprintf(stderr, "Payload compressor: %s\n", name);
    if (strcmp(name, "gzip") != 0) {
        snprintf (tmp_string, TMP_STRING_SIZE,
	       "Invalid RPMTAG_PAYLOADCOMPRESSOR: expecting gzip but found %s",
		  name);
	tetj_testcase_info(journal, tetj_activity_count, tetj_tp_count,
	       	           0, 0, 0, tmp_string);
        fprintf(stderr, "Error: %s\n", tmp_string);
	fail = TETJ_FAIL;
    } else {
	tetj_testcase_info(journal, tetj_activity_count, tetj_tp_count,
	       	           0, 0, 0, name);
    }
    return fail;
}

int
checkRpmIdxREQUIREVERSION(RpmFile * file1, RpmHdrIndex * hidx,
			  struct tetj_handle *journal)
{
    int hoffset, hcount;
    char *name;
    int fail = TETJ_PASS;

    hoffset = ntohl(hidx->offset);
    hcount = ntohl(hidx->count);
    name = file1->storeaddr + hoffset;
    numrequireversion = hcount;
    requireversion = name;
    if( requirename && requireversion )
	    check_dependencies(journal);
    return fail;
}

int
checkRpmIdxPAYLOADFLAGS(RpmFile * file1, RpmHdrIndex * hidx,
			struct tetj_handle *journal)
{
    int hoffset;
    char *name;
    int fail = TETJ_PASS;

    hoffset = ntohl(hidx->offset);
    name = file1->storeaddr + hoffset;
    if (rpmchkdebug & DEBUG_TRACE_CONTENTS)
	fprintf(stderr, "Payload flags: %s\n", name);
    if (strcmp(name, "9") != 0) {
        snprintf (tmp_string, TMP_STRING_SIZE,
	          "Invalid RPMTAG_PAYLOADFLAGS: expecting \"9\" but found %s",
		  name);
	tetj_testcase_info(journal, tetj_activity_count, tetj_tp_count,
	       	           0, 0, 0, tmp_string);
        fprintf(stderr, "Error: %s\n", tmp_string);
	fail = TETJ_FAIL;
    }
    return fail;
}

int
checkRpmIdxRHNPLATFORM(RpmFile * file1, RpmHdrIndex * hidx,
		       struct tetj_handle *journal)
{
    int hoffset;
    char *name;
    int fail = TETJ_PASS;

    hoffset = ntohl(hidx->offset);
    name = file1->storeaddr + hoffset;
    if (rpmchkdebug & DEBUG_TRACE_CONTENTS)
	fprintf(stderr, "RHN platform: %s\n", name);
/* Opaque data, don't check */
    return fail;
}

int
checkRpmIdxPLATFORM(RpmFile * file1, RpmHdrIndex * hidx,
		    struct tetj_handle *journal)
{
    int hoffset;
    char *name;
    int fail = TETJ_PASS;

    hoffset = ntohl(hidx->offset);
    name = file1->storeaddr + hoffset;
    if (rpmchkdebug & DEBUG_TRACE_CONTENTS)
	fprintf(stderr, "Platform: %s\n", name);
/* Opaque data, don't check */
    return fail;
}

int
checkRpmIdxOBSOLETEFLAGS(RpmFile * file1, RpmHdrIndex * hidx,
			 struct tetj_handle *journal)
{
    int hoffset, hcount, i;
    uint32_t *flagp, flag;
    char buf[128];
    int fail = TETJ_PASS;

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
    return fail;
}

int
checkRpmIdxCONFLICTFLAGS(RpmFile * file1, RpmHdrIndex * hidx,
			 struct tetj_handle *journal)
{
    int hoffset, hcount, i;
    uint32_t *flagp, flag;
    char buf[128];
    int fail = TETJ_PASS;

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
    return fail;
}

int
checkRpmIdxOBSOLETEVERSION(RpmFile * file1, RpmHdrIndex * hidx,
			   struct tetj_handle *journal)
{
    int i, hoffset, hcount;
    char *name;
    int fail = TETJ_PASS;

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
    return fail;
}

int
checkRpmIdxCONFLICTVERSION(RpmFile * file1, RpmHdrIndex * hidx,
			   struct tetj_handle *journal)
{
    int i, hoffset, hcount;
    char *name;
    int fail = TETJ_PASS;

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
    return fail;
}

int
checkRpmIdxPREIN(RpmFile * file1, RpmHdrIndex * hidx,
		 struct tetj_handle *journal)
{
    int hoffset;
    unsigned char *prog;
    int fail = TETJ_PASS;

    hoffset = ntohl(hidx->offset);
    prog = (char *) (file1->storeaddr + hoffset);

    if (rpmchkdebug & DEBUG_TRACE_CONTENTS)
	fprintf(stderr, "Pre-install program: %s\n", prog);
    tetj_testcase_info(journal, tetj_activity_count, tetj_tp_count,
		       0, 0, 0, "Pre-install program not checked");
    fprintf(stderr, "Pre-install program not checked\n");
    fail = TETJ_UNTESTED;

    return fail;
}

int
checkRpmIdxPOSTIN(RpmFile * file1, RpmHdrIndex * hidx,
		  struct tetj_handle *journal)
{
    int hoffset;
    unsigned char *prog;
    int fail = TETJ_PASS;

    hoffset = ntohl(hidx->offset);
    prog = (char *) (file1->storeaddr + hoffset);

    if (rpmchkdebug & DEBUG_TRACE_CONTENTS)
	fprintf(stderr, "Post-install program: %s\n", prog);
    tetj_testcase_info(journal, tetj_activity_count, tetj_tp_count,
		       0, 0, 0, "Post-install program not checked");
    fprintf(stderr, "Post-install program not checked\n");
    fail = TETJ_UNTESTED;
    return fail;
}

int
checkRpmIdxPREUN(RpmFile * file1, RpmHdrIndex * hidx,
		 struct tetj_handle *journal)
{
    int hoffset;
    unsigned char *prog;
    int fail = TETJ_PASS;

    hoffset = ntohl(hidx->offset);
    prog = (char *) (file1->storeaddr + hoffset);

    if (rpmchkdebug & DEBUG_TRACE_CONTENTS)
	fprintf(stderr, "Pre-uninstall program: %s\n", prog);
    tetj_testcase_info(journal, tetj_activity_count, tetj_tp_count,
		       0, 0, 0, "Pre-uninstall program not checked");
    fprintf(stderr, "Pre-uninstall program not checked\n");
    fail = TETJ_UNTESTED;
    return fail;
}

int
checkRpmIdxPOSTUN(RpmFile * file1, RpmHdrIndex * hidx,
		  struct tetj_handle *journal)
{
    int hoffset;
    unsigned char *prog;
    int fail = TETJ_PASS;

    hoffset = ntohl(hidx->offset);
    prog = (char *) (file1->storeaddr + hoffset);

    if (rpmchkdebug & DEBUG_TRACE_CONTENTS)
	fprintf(stderr, "Post-uninstall program: %s\n", prog);
    tetj_testcase_info(journal, tetj_activity_count, tetj_tp_count,
		       0, 0, 0, "Post-uninstall program not checked");
    fprintf(stderr, "Post-uninstall program not checked\n");
    fail = TETJ_UNTESTED;
    return fail;
}
