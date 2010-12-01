/*
 * Test of sys/sendfile.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#define __LSB_VERSION__ 41
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
char *real_macro_value, *stripped_macro_value;
int macro_ndx, stripped_value_ndx;
real_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );
stripped_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );

Msg("Checking data structures in sys/sendfile.h\n");
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
Msg("%d tests passed out of %d tests in sys/sendfile.h\n\n",pcnt,cnt);
return cnt;
#endif

}
