#include <stdio.h>
#include <string.h>
#include "rpmchk.h"
#include "tagfuncs.h"
#include "../tetj/tetj.h"

void
checkRpmArchive(RpmFile *file1, struct tetj_handle *journal)
{
#define TMP_STRING_SIZE (400)
char tmp_string[TMP_STRING_SIZE+1];

file1->archive=(caddr_t)file1->nexthdr;

fprintf(stderr,"checkRpmArchive() archive=%x\n", file1->archive );

/* Check the RpmHeader magic value */
tetj_tp_count++;
tetj_purpose_start(journal, tetj_activity_count, tetj_tp_count, "Check magic value");
if( !( file1->archive[0]==(char)0x1f
    && file1->archive[1]==(char)0x8b) ) {
        snprintf( tmp_string, TMP_STRING_SIZE,
    "compareRpmHeader: magic isn't expected value 0x1f8b, found %x%x instead\n",
	     (unsigned int)file1->archive[0], (unsigned int)file1->archive[1]); 
        fprintf(stderr, "%s\n", tmp_string);
        tetj_testcase_info(journal, tetj_activity_count, tetj_tp_count,
							0, 0, 0, tmp_string);
        tetj_result(journal, tetj_activity_count, tetj_tp_count, TETJ_FAIL);
} else {
        tetj_result(journal, tetj_activity_count, tetj_tp_count, TETJ_PASS); 
}
tetj_purpose_end(journal, tetj_activity_count, tetj_tp_count); 

#if 0
/* Check the RpmHeader version */
tetj_tp_count++;
tetj_purpose_start(journal, tetj_activity_count, tetj_tp_count, "Check magic value");
if(hdr->version != RPMHDRVER ) {
        snprintf( tmp_string, TMP_STRING_SIZE, "compareRpmHeader: magic isn't expected value RPMHDRMAG, found %x %x %x instead\n", hdr->magic[0], hdr->magic[1], hdr->magic[2]); 
        fprintf(stderr, "%s\n", tmp_string);
        tetj_testcase_info(journal, tetj_activity_count, tetj_tp_count, 0, 0, 0, tmp_string);
        tetj_result(journal, tetj_activity_count, tetj_tp_count, TETJ_FAIL);
} else {
        tetj_result(journal, tetj_activity_count, tetj_tp_count, TETJ_PASS); 
}
tetj_purpose_end(journal, tetj_activity_count, tetj_tp_count); 
#endif

}
