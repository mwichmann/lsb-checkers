#include "elfchk.h"

checkElf(ElfFile *file1)
{
int	i;

checkElfhdr(file1);
for(i=0;i<file1->numph;i++)
	{
	checkElfproghdr(i, file1);
	}

for(i=0;i<file1->numsh;i++)
	{
	checkElfsection(i, file1);
	}
}
