/*
 * Test of sys/uio.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#define __LSB_VERSION__ 40
#include "sys/uio.h"



#ifdef TET_TEST
void sys_uio_h()
{
#else
int sys_uio_h()
{
#endif

int cnt=0;

int pcnt=0;
char *real_macro_value, *stripped_macro_value;
int macro_ndx, stripped_value_ndx;
real_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );
stripped_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );

#ifdef TET_TEST
Msg("Checking data structures in sys/uio.h\n");
#endif

printf("Checking data structures in sys/uio.h\n");
extern ssize_t readv_db(int, const struct iovec *, int);
CheckInterfacedef(readv,readv_db);
extern ssize_t writev_db(int, const struct iovec *, int);
CheckInterfacedef(writev,writev_db);
#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests passed out of %d tests in sys/uio.h\n\n",pcnt,cnt);
return cnt;
#endif

}
