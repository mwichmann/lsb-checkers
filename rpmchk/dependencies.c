/*
 *
 * Copyright (c) 2005 The Free Standards Group Inc
 * Copyright (c) 2005 Stuart Anderson (anderson@freestandards.org)
 *
 */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include "rpmchk.h"
#include "../tetj/tetj.h"

void
check_dependencies(struct tetj_handle *journal)
{
	int i,d;
	char *name,*vername;

	if (numrequirename != numrequireversion ) {
		fprintf(stderr, "check_dependencies() different number of REQUIRENAME %d & REQUIREVERSION %d\n",
				numrequirename, numrequireversion );
	}

	name = requirename;
	vername = requireversion;
	for(i = 0; i < numrequirename; i++ ) {
	       if (1 && (rpmchkdebug & DEBUG_TRACE_CONTENTS) )
	                   fprintf(stderr, "Required Name: %s\n", name);
               if (strcmp(name, "rpmlib(PayloadFilesHavePrefix)") == 0)
	                   hasPayloadFilesHavePrefix = 1;
               if (strcmp(name, "rpmlib(CompressedFileNames)") == 0)
	                   hasCompressedFileNames = 1;

	       for(d = 0; d < numdeps; d++ ) {
		       if(strcmp(name,validdeps[d].reqname) == 0 ) {
			       /* found a match */
			       if( strcmp(vername,validdeps[d].reqversion) == 0 ) {
				       /* the version matches */
				       validdeps[d].seenit = 1;
					if (1 && (rpmchkdebug & DEBUG_TRACE_CONTENTS) )
	                   			fprintf(stderr, "matched Name: %s\n", name);
				       break;
			       } else {
				       fprintf(stderr,"Version for %s: %s doesn't match expected %s\n",
						       name, vername, validdeps[d].reqversion );
			       }
		       } 
	       }
	       if( d == numdeps ) {
			fprintf(stderr, "Unexpected dependency %s\n", name );
	       }
	       name += strlen(name) + 1;
	       vername += strlen(vername) + 1;
	}
	for( d = 0 ; d < numdeps; d++ ) {
		if( validdeps[d].isrequired && !validdeps[d].seenit )
			fprintf(stderr,"Didn't see expected dependency %s: %s\n",
					validdeps[d].reqname,validdeps[d].reqversion);
	}

	return;
}
