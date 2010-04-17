/*
 * Test of iconv.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#define __LSB_VERSION__ 41
#include "iconv.h"



#ifdef TET_TEST
void iconv_h()
{
#else
int iconv_h()
{
#endif

int cnt=0;

int pcnt=0;
char *real_macro_value, *stripped_macro_value;
int macro_ndx, stripped_value_ndx;
real_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );
stripped_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );

#ifdef TET_TEST
Msg("Checking data structures in iconv.h\n");
#endif

printf("Checking data structures in iconv.h\n");
#if defined __s390x__
CheckTypeSize(iconv_t,8, 6895, 12, 1.3, NULL, 40, NULL)
#elif defined __x86_64__
CheckTypeSize(iconv_t,8, 6895, 11, 2.0, NULL, 40, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(iconv_t,4, 6895, 10, 1.3, NULL, 40, NULL)
#elif defined __powerpc64__
CheckTypeSize(iconv_t,8, 6895, 9, 2.0, NULL, 40, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(iconv_t,4, 6895, 6, 1.2, NULL, 40, NULL)
#elif defined __ia64__
CheckTypeSize(iconv_t,8, 6895, 3, 1.3, NULL, 40, NULL)
#elif defined __i386__
CheckTypeSize(iconv_t,4, 6895, 2, 1.0, NULL, 40, NULL)
#else
Msg("Find size of iconv_t (6895)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.0""',NULL,40, NULL);\n",architecture,6895,0);
#endif

extern size_t iconv_db(iconv_t, char * *, size_t *, char * *, size_t *);
CheckInterfacedef(iconv,iconv_db);
extern int iconv_close_db(iconv_t);
CheckInterfacedef(iconv_close,iconv_close_db);
extern iconv_t iconv_open_db(const char *, const char *);
CheckInterfacedef(iconv_open,iconv_open_db);
#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests passed out of %d tests in iconv.h\n\n",pcnt,cnt);
return cnt;
#endif

}
