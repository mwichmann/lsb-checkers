#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include "rpmchk.h"
#include "md5.h"
#include "tagfuncs.h"
#include "../tetj/tetj.h"

/*
 * Additional checks for specific conditions called out in the spec.
 */

void
checkRpmMetaData(RpmFile *file1, struct tetj_handle *journal)
{
/* Make sure the payload filenames are specified somehow */
if( !hasOldFilenames && hasNewFilenames!=3 ) {
	fprintf(stderr,
	    "checkRpmIdx() One of RPMTAG_OLDFILENAMES or (RPMTAG_DIRINDEXES,RPMTAG_BASENAMES,RPMTAG_DIRNAMES) must be present\n");
	}
if( hasOldFilenames && hasNewFilenames!=0 ) {
	fprintf(stderr,
	    "checkRpmIdx() Both RPMTAG_OLDFILENAMES and (RPMTAG_DIRINDEXES,RPMTAG_BASENAMES,RPMTAG_DIRNAMES) must not be present\n");
	}

/* Make sure one of SIGTAG_PAYLOADSIZE or RPMTAG_ARCHIVESIZE was seen */
if( !archivesize ) {
	fprintf(stderr,
	    "checkRpmIdx() One of SIGTAG_PAYLOADSIZE or RPMTAG_ARCHIVESIZE must be present\n");
	}
}
