/*
 * Test of getopt.h
 */
#include "hdrchk.h"
#include "sys/types.h"
#define _LSB_DEFAULT_ARCH 1
#include "getopt.h"



#ifdef TET_TEST
void getopt_h()
{
#else
int getopt_h()
{
#endif

int cnt=0;

#ifdef TET_TEST
int pcnt=0;
Msg("Checking data structures in getopt.h\n");
#endif

#if _LSB_DEFAULT_ARCH
#ifdef no_argument
	CompareConstant(no_argument,0,4378,architecture)
#else
Msg( "Error: Constant not found: no_argument\n");
cnt++;
#endif

#endif

#if __i386__
CheckTypeSize(struct option,16, 10000, 2)
CheckMemberSize(struct option,name,4,2,32258)
CheckOffset(struct option,name,0,2,32258)
CheckMemberSize(struct option,has_arg,4,2,32259)
CheckOffset(struct option,has_arg,4,2,32259)
CheckMemberSize(struct option,flag,4,2,32260)
CheckOffset(struct option,flag,8,2,32260)
CheckMemberSize(struct option,val,4,2,32261)
CheckOffset(struct option,val,12,2,32261)
#elif __ia64__
CheckTypeSize(struct option,32, 10000, 3)
CheckMemberSize(struct option,has_arg,4,3,32259)
CheckOffset(struct option,has_arg,8,3,32259)
CheckMemberSize(struct option,flag,8,3,32260)
CheckOffset(struct option,flag,16,3,32260)
CheckMemberSize(struct option,val,4,3,32261)
CheckOffset(struct option,val,24,3,32261)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(struct option,16, 10000, 6)
CheckMemberSize(struct option,has_arg,4,6,32259)
CheckOffset(struct option,has_arg,4,6,32259)
CheckMemberSize(struct option,flag,4,6,32260)
CheckOffset(struct option,flag,8,6,32260)
CheckMemberSize(struct option,val,4,6,32261)
CheckOffset(struct option,val,12,6,32261)
#elif __s390__ && !__s390x__
CheckTypeSize(struct option,16, 10000, 10)
CheckMemberSize(struct option,has_arg,4,10,32259)
CheckOffset(struct option,has_arg,4,10,32259)
CheckMemberSize(struct option,flag,4,10,32260)
CheckOffset(struct option,flag,8,10,32260)
CheckMemberSize(struct option,val,4,10,32261)
CheckOffset(struct option,val,12,10,32261)
#elif __powerpc64__
CheckTypeSize(struct option,32, 10000, 9)
CheckMemberSize(struct option,has_arg,4,9,32259)
CheckOffset(struct option,has_arg,8,9,32259)
CheckMemberSize(struct option,flag,8,9,32260)
CheckOffset(struct option,flag,16,9,32260)
CheckMemberSize(struct option,val,4,9,32261)
CheckOffset(struct option,val,24,9,32261)
#elif __s390x__
CheckTypeSize(struct option,32, 10000, 12)
CheckMemberSize(struct option,has_arg,4,12,32259)
CheckOffset(struct option,has_arg,8,12,32259)
CheckMemberSize(struct option,flag,8,12,32260)
CheckOffset(struct option,flag,16,12,32260)
CheckMemberSize(struct option,val,4,12,32261)
CheckOffset(struct option,val,24,12,32261)
#elif __x86_64__
CheckTypeSize(struct option,32, 10000, 11)
CheckMemberSize(struct option,has_arg,4,11,32259)
CheckOffset(struct option,has_arg,8,11,32259)
CheckMemberSize(struct option,flag,8,11,32260)
CheckOffset(struct option,flag,16,11,32260)
CheckMemberSize(struct option,val,4,11,32261)
CheckOffset(struct option,val,24,11,32261)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10000,0);
Msg("Find size of option (10000)\n");
#endif

#if __no_sym__
CheckTypeSize(const option,, 10591, )
#endif

#if __no_sym__
#endif

#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests in getopt.h\n",cnt);
return cnt;
#endif

}
