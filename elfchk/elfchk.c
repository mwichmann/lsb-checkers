#include "elfchk.h"
#include "hdr.h"
#include "proghdr.h"
#include "sections.h"

void
checkElf(ElfFile *file1, int isProgram)
{
int	i;

checkElfhdr(file1, isProgram);
for(i=0;i<file1->numph;i++)
	{
	checkElfproghdr(i, file1);
	}

for(i=0;i<file1->numsh;i++)
	{
	checkElfsection(i, file1);
	}
}
