/*
 * Test of dirent.h
 */
#include "hdrchk.h"
#include "sys/types.h"
struct __dirstream {
	};
#include "dirent.h"



int dirent_h()
{
int cnt=0;
CheckTypeSize(DIR,0)
printf("%d tests in dirent.h\n",cnt);
return cnt;
}
