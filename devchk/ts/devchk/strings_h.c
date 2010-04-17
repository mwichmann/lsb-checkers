/*
 * Test of strings.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#define __LSB_VERSION__ 41
#include "strings.h"



#ifdef TET_TEST
void strings_h()
{
#else
int strings_h()
{
#endif

int cnt=0;

int pcnt=0;
char *real_macro_value, *stripped_macro_value;
int macro_ndx, stripped_value_ndx;
real_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );
stripped_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );

#ifdef TET_TEST
Msg("Checking data structures in strings.h\n");
#endif

printf("Checking data structures in strings.h\n");
extern void bcopy_db(const void *, void *, size_t);
CheckInterfacedef(bcopy,bcopy_db);
extern int bcmp_db(const void *, const void *, size_t);
CheckInterfacedef(bcmp,bcmp_db);
extern void bzero_db(void *, size_t);
CheckInterfacedef(bzero,bzero_db);
extern int ffs_db(int);
CheckInterfacedef(ffs,ffs_db);
extern char * index_db(const char *, int);
CheckInterfacedef(index,index_db);
extern char * rindex_db(const char *, int);
CheckInterfacedef(rindex,rindex_db);
extern int strcasecmp_db(const char *, const char *);
CheckInterfacedef(strcasecmp,strcasecmp_db);
extern int strncasecmp_db(const char *, const char *, size_t);
CheckInterfacedef(strncasecmp,strncasecmp_db);
#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests passed out of %d tests in strings.h\n\n",pcnt,cnt);
return cnt;
#endif

}
