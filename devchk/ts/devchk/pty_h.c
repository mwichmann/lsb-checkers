/*
 * Test of pty.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
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
char *real_macro_value, *stripped_macro_value;
int macro_ndx, stripped_value_ndx;
real_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );
stripped_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );

#ifdef TET_TEST
Msg("Checking data structures in pty.h\n");
#endif

printf("Checking data structures in pty.h\n");
extern int openpty_db(int *, int *, char *, const struct termios *, const struct winsize *);
CheckInterfacedef(openpty,openpty_db);
extern int forkpty_db(int *, char *, const struct termios *, const struct winsize *);
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
