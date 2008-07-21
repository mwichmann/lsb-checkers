/* 
 * Copyright (c) 2007-2008 The Linux Foundation
 * Copyright (c) 2002 The Free Standards Group Inc
 * Copyright (c) 2002 Stuart Anderson (anderson@freestandards.org)
 *
 */
#include "rpmchk.h"

void
checkRpm(RpmFile * file1, struct tetj_handle *journal, int check_app,
	 int modules)
{

    checkRpmLead(file1, journal);

    file1->signature = (RpmHeader *) (file1->addr + sizeof(RpmLead));
    file1->nexthdr = file1->signature;

/* RPM packages should have 2 Headers, the Signature, and the Header */
    checkRpmSignature(file1, journal);
    checkRpmHeader(file1, journal);
    checkRpmMetaData(file1, journal);
    checkRpmArchive(file1, journal, check_app, modules);
}
