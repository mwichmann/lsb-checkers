#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <zlib.h>
#include <cpio.h>
#include "rpmchk.h"
#include "tagfuncs.h"
#include "../tetj/tetj.h"

void
checkRpmArchive(RpmFile *file1, struct tetj_handle *journal)
{
#define TMP_STRING_SIZE (400)
char tmp_string[TMP_STRING_SIZE+1];
gzFile	*zfile;
RpmArchiveHeader ahdr;
int	badcpiomagic=0;
int	startoffset,endoffset;

file1->archive=(caddr_t)file1->nexthdr;

fprintf(stderr,"checkRpmArchive() archive=%x\n", file1->archive );

/* Check the RpmHeader magic value */
tetj_tp_count++;
tetj_purpose_start(journal, tetj_activity_count, tetj_tp_count, "Check magic value");
if( !( file1->archive[0]==(char)0x1f
    && file1->archive[1]==(char)0x8b) ) {
        snprintf( tmp_string, TMP_STRING_SIZE,
    "checkRpmArchive: magic isn't expected value 0x1f8b, found %x%x instead\n",
	     (unsigned int)file1->archive[0], (unsigned int)file1->archive[1]); 
        fprintf(stderr, "%s\n", tmp_string);
        tetj_testcase_info(journal, tetj_activity_count, tetj_tp_count,
							0, 0, 0, tmp_string);
        tetj_result(journal, tetj_activity_count, tetj_tp_count, TETJ_FAIL);
} else {
        tetj_result(journal, tetj_activity_count, tetj_tp_count, TETJ_PASS); 
}
tetj_purpose_end(journal, tetj_activity_count, tetj_tp_count); 

/*
 * Now we need to set up zlib so that we can read/decompres the archive.
 */

if( lseek(file1->fd, (file1->archive-file1->addr), SEEK_SET) < 0 ) {
        snprintf( tmp_string, TMP_STRING_SIZE,
    "checkRpmArchive: Unable to seek to start of archive\n");
        fprintf(stderr, "%s\n", tmp_string);
        tetj_testcase_info(journal, tetj_activity_count, tetj_tp_count,
							0, 0, 0, tmp_string);
        tetj_result(journal, tetj_activity_count, tetj_tp_count, TETJ_FAIL);
	return;
	}

if( (zfile=gzdopen(file1->fd,"r")) == NULL ) {
        snprintf( tmp_string, TMP_STRING_SIZE,
    "checkRpmArchive: Unable to open compressed archive\n");
        fprintf(stderr, "%s\n", tmp_string);
        tetj_testcase_info(journal, tetj_activity_count, tetj_tp_count,
							0, 0, 0, tmp_string);
        tetj_result(journal, tetj_activity_count, tetj_tp_count, TETJ_FAIL);
	return;
	}

startoffset=gztell(zfile);
/*
 * The archive is really a cpio format file, so start reading records
 * and examining them.
 */

while( !gzeof(zfile) ) {
	char	*fptr,filename[256]; /* XXX Potential overflow!! */
	char	num[9];
	int	size;

	gzread(zfile, &ahdr, sizeof(ahdr) );
/*
	printf("***************************\n");
	printf("Magic: %6.6s\n", ahdr.c_magic );
	printf("ino: %8.8s\n", ahdr.c_ino );
	printf("Mode: %8.8s\n", ahdr.c_mode );
	printf("mtime: %8.8s\n", ahdr.c_mtime );
	printf("filesize: %8.8s\n", ahdr.c_filesize );
	printf("namesize: %8.8s\n", ahdr.c_namesize );
*/
	if( !(strncmp(ahdr.c_magic,"070707",6) == 0) && !badcpiomagic ) {
        	snprintf( tmp_string, TMP_STRING_SIZE,
    		"checkRpmArchive: Archive record has wrong magic %6.6s instead of 070707",
		ahdr.c_magic);
        	fprintf(stderr, "%s\n", tmp_string);
        	tetj_testcase_info(journal, tetj_activity_count, tetj_tp_count,
							0, 0, 0, tmp_string);
        	tetj_result(journal, tetj_activity_count, tetj_tp_count, TETJ_FAIL);
		/* For some reason, the cpio format in RPM has a magic of
			070701 instead of 070707 as is defined for cpio */
		if( !(strncmp(ahdr.c_magic,"0707",4) == 0) ) {
			return;
		}
		badcpiomagic=1;
	}
	/* Read in the filename */
	memcpy(num,ahdr.c_namesize,8);
	num[8]=0; /* NULL terminate the namesize */
	size=strtol(num,NULL,16);
	gzread(zfile, filename, size );
	/*
	 * Check/fix padding here
	 */
	size=gztell(zfile);
	size%=4;
	size=4-size;
	size%=4;
	//printf("padding %d\n", size);
	gzseek(zfile,size,SEEK_CUR);

	/* Skip the file contents */
	memcpy(num,ahdr.c_filesize,8);
	num[8]=0;
	size=strtol(num,NULL,16);
	gzseek(zfile,size,SEEK_CUR);

	size=gztell(zfile);
	//printf("offset %x\n", size);
	size%=4;
	size=4-size;
	size%=4;
	//printf("padding %d\n", size);
	gzseek(zfile,size,SEEK_CUR);

	if( strcmp(filename,"TRAILER!!!") == 0 ) {
		/* End of archive */
		break;
		}

	/* Now, check the filename */
	if( filename[0] == '.' && filename[1] == '/' )
		fptr=&filename[1];
	else
		fptr=&filename[0];
	checkRpmArchiveFilename(fptr, journal);
	}

endoffset=gztell(zfile);

fprintf(stderr,"%d bytes in uncompressed archive\n", endoffset-startoffset);
}
