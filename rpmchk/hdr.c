#include <stdio.h>
#include <string.h>
#include "rpmchk.h"
#include "../tetj/tetj.h"

void
checkRpmHeader(RpmFile *file1, struct tetj_handle *journal)
{
#define TMP_STRING_SIZE (400)
char tmp_string[TMP_STRING_SIZE+1];
RpmHeader	*hdr;

hdr=(RpmHeader *)file1->nexthdr;

/* Check the RpmHeader magic value */
tetj_tp_count++;
tetj_purpose_start(journal, tetj_activity_count, tetj_tp_count, "Check magic value");
if(strncmp(hdr->magic,RPMHDRMAG,SRPMHDRMAG)) {
        snprintf( tmp_string, TMP_STRING_SIZE, "compareRpmHeader: magic isn't expected value RPMHDRMAG, found %x %x %x instead\n", hdr->magic[0], hdr->magic[1], hdr->magic[2]); 
        fprintf(stderr, "%s\n", tmp_string);
        tetj_testcase_info(journal, tetj_activity_count, tetj_tp_count, 0, 0, 0, tmp_string);
        tetj_result(journal, tetj_activity_count, tetj_tp_count, TETJ_FAIL);
} else {
        tetj_result(journal, tetj_activity_count, tetj_tp_count, TETJ_PASS); 
}
tetj_purpose_end(journal, tetj_activity_count, tetj_tp_count); 

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

/*
 * Get the index, and then for(i=0;i<numindex;) checkRpmHdrIndex()
 */
}
