/*
 * Test of iconv.h
 */
#include "hdrchk.h"
#include "sys/types.h"
#define _LSB_DEFAULT_ARCH 1
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
#ifdef TET_TEST
Msg("Checking data structures in iconv.h\n");
#endif

printf("Checking data structures in iconv.h\n");
#if __i386__
CheckTypeSize(iconv_t,4, 6895, 2)
#elif __ia64__
CheckTypeSize(iconv_t,8, 6895, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(iconv_t,4, 6895, 6)
#elif __s390__ && !__s390x__
CheckTypeSize(iconv_t,4, 6895, 10)
#elif __powerpc64__
CheckTypeSize(iconv_t,8, 6895, 9)
#elif __s390x__
CheckTypeSize(iconv_t,8, 6895, 12)
#elif __x86_64__
CheckTypeSize(iconv_t,8, 6895, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,6895,0);
Msg("Find size of iconv_t (6895)\n");
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
