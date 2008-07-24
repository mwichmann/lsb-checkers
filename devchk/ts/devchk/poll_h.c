/*
 * Test of poll.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#define __LSB_VERSION__ 40
#include "poll.h"



#ifdef TET_TEST
void poll_h()
{
#else
int poll_h()
{
#endif

int cnt=0;

int pcnt=0;
#ifdef TET_TEST
Msg("Checking data structures in poll.h\n");
#endif

printf("Checking data structures in poll.h\n");
extern int poll_db(struct pollfd *, nfds_t, int);
CheckInterfacedef(poll,poll_db);
#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests passed out of %d tests in poll.h\n\n",pcnt,cnt);
return cnt;
#endif

}
