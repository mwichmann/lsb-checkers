/*
 * Test of sys/sendfile.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#define __LSB_VERSION__ 40
#include "sys/sendfile.h"



#ifdef TET_TEST
void sys_sendfile_h()
{
#else
int sys_sendfile_h()
{
#endif

int cnt=0;

int pcnt=0;
#ifdef TET_TEST
Msg("Checking data structures in sys/sendfile.h\n");
#endif

printf("Checking data structures in sys/sendfile.h\n");
extern ssize_t sendfile_db(int, int, off_t *, size_t);
CheckInterfacedef(sendfile,sendfile_db);
extern ssize_t sendfile64_db(int, int, off64_t *, size_t);
CheckInterfacedef(sendfile64,sendfile64_db);
#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests passed out of %d tests in sys/sendfile.h\n\n",pcnt,cnt);
return cnt;
#endif

}
