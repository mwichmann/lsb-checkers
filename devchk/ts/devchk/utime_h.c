/*
 * Test of utime.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#define __LSB_VERSION__ 40
#include "utime.h"



#ifdef TET_TEST
void utime_h()
{
#else
int utime_h()
{
#endif

int cnt=0;

int pcnt=0;
char *real_macro_value, *stripped_macro_value;
int macro_ndx, stripped_value_ndx;
real_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );
stripped_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );

#ifdef TET_TEST
Msg("Checking data structures in utime.h\n");
#endif

printf("Checking data structures in utime.h\n");
#if defined __s390x__
CheckTypeSize(struct utimbuf,16, 7023, 12, 1.3, NULL, 0, NULL)
CheckMemberSize(struct utimbuf,modtime,8,12,30206)
CheckOffset(struct utimbuf,modtime,8,12,30206)
#elif defined __x86_64__
CheckTypeSize(struct utimbuf,16, 7023, 11, 2.0, NULL, 0, NULL)
CheckMemberSize(struct utimbuf,modtime,8,11,30206)
CheckOffset(struct utimbuf,modtime,8,11,30206)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(struct utimbuf,8, 7023, 10, 1.3, NULL, 0, NULL)
CheckMemberSize(struct utimbuf,modtime,4,10,30206)
CheckOffset(struct utimbuf,modtime,4,10,30206)
#elif defined __powerpc64__
CheckTypeSize(struct utimbuf,16, 7023, 9, 2.0, NULL, 0, NULL)
CheckMemberSize(struct utimbuf,modtime,8,9,30206)
CheckOffset(struct utimbuf,modtime,8,9,30206)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(struct utimbuf,8, 7023, 6, 1.2, NULL, 0, NULL)
CheckMemberSize(struct utimbuf,modtime,4,6,30206)
CheckOffset(struct utimbuf,modtime,4,6,30206)
#elif defined __ia64__
CheckTypeSize(struct utimbuf,16, 7023, 3, 1.3, NULL, 0, NULL)
CheckMemberSize(struct utimbuf,modtime,8,3,30206)
CheckOffset(struct utimbuf,modtime,8,3,30206)
#elif defined __i386__
CheckTypeSize(struct utimbuf,8, 7023, 2, 1.2, NULL, 0, NULL)
CheckMemberSize(struct utimbuf,actime,4,2,30205)
CheckOffset(struct utimbuf,actime,0,2,30205)
CheckMemberSize(struct utimbuf,modtime,4,2,30206)
CheckOffset(struct utimbuf,modtime,4,2,30206)
#else
Msg("Find size of utimbuf (7023)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,0, NULL);\n",architecture,7023,0);
#endif

extern int utime_db(const char *, const struct utimbuf *);
CheckInterfacedef(utime,utime_db);
#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests passed out of %d tests in utime.h\n\n",pcnt,cnt);
return cnt;
#endif

}
