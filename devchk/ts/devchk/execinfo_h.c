/*
 * Test of execinfo.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#define __LSB_VERSION__ 41
#include "execinfo.h"



#ifdef TET_TEST
void execinfo_h()
{
#else
int execinfo_h()
{
#endif

int cnt=0;

int pcnt=0;
char *real_macro_value, *stripped_macro_value;
int macro_ndx, stripped_value_ndx;
real_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );
stripped_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );

Msg("Checking data structures in execinfo.h\n");
extern int backtrace_db(void * *, int);
CheckInterfacedef(backtrace,backtrace_db);
extern char * * backtrace_symbols_db(void *const  *, int);
CheckInterfacedef(backtrace_symbols,backtrace_symbols_db);
extern void backtrace_symbols_fd_db(void *const  *, int, int);
CheckInterfacedef(backtrace_symbols_fd,backtrace_symbols_fd_db);
#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
Msg("%d tests passed out of %d tests in execinfo.h\n\n",pcnt,cnt);
return cnt;
#endif

}
