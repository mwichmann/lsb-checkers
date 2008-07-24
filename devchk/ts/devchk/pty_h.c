/*
 * Test of pty.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#define __LSB_VERSION__ 40
#include "pty.h"



#ifdef TET_TEST
void pty_h()
{
#else
int pty_h()
{
#endif

int cnt=0;

int pcnt=0;
#ifdef TET_TEST
Msg("Checking data structures in pty.h\n");
#endif

printf("Checking data structures in pty.h\n");
extern int openpty_db(int *, int *, char *, struct termios *, struct winsize *);
CheckInterfacedef(openpty,openpty_db);
extern int forkpty_db(int *, char *, struct termios *, struct winsize *);
CheckInterfacedef(forkpty,forkpty_db);
#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests passed out of %d tests in pty.h\n\n",pcnt,cnt);
return cnt;
#endif

}
