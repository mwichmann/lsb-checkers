#include "rpmchk.h"

void
checkRpm(RpmFile *file1, struct tetj_handle *journal)
{
int	i;

checkRpmLead(file1, journal);

file1->signature=(RpmHeader *)(file1->addr+sizeof(RpmLead));
file1->nexthdr=file1->signature;

checkRpmHeader(file1, journal);
/*
for(i=0;i<file1->numph;i++)
	{
	checkRpmproghdr(i, file1, journal);
	}

for(i=0;i<file1->numsh;i++)
	{
	checkRpmsection(i, file1, journal);
	}
*/
}
