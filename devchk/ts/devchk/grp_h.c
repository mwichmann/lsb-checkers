/*
 * Test of grp.h
 */
#include "hdrchk.h"
#include "sys/types.h"
#define _LSB_DEFAULT_ARCH 1
#include "grp.h"



#ifdef TET_TEST
void grp_h()
{
#else
int grp_h()
{
#endif

int cnt=0;

#ifdef TET_TEST
int pcnt=0;
Msg("Checking data structures in grp.h\n");
#endif

#if __i386__
CheckTypeSize(struct group,16, 6894, 2)
CheckMemberSize(struct group,gr_name,4,2,29792)
CheckOffset(struct group,gr_name,0,2,29792)
CheckMemberSize(struct group,gr_passwd,4,2,29793)
CheckOffset(struct group,gr_passwd,4,2,29793)
CheckMemberSize(struct group,gr_gid,4,2,29794)
CheckOffset(struct group,gr_gid,8,2,29794)
CheckMemberSize(struct group,gr_mem,4,2,29795)
CheckOffset(struct group,gr_mem,12,2,29795)
#elif __ia64__
CheckTypeSize(struct group,32, 6894, 3)
CheckMemberSize(struct group,gr_passwd,0,3,29793)
CheckOffset(struct group,gr_passwd,8,3,29793)
CheckMemberSize(struct group,gr_gid,0,3,29794)
CheckOffset(struct group,gr_gid,16,3,29794)
CheckMemberSize(struct group,gr_mem,0,3,29795)
CheckOffset(struct group,gr_mem,24,3,29795)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(struct group,16, 6894, 6)
CheckMemberSize(struct group,gr_passwd,0,6,29793)
CheckOffset(struct group,gr_passwd,4,6,29793)
CheckMemberSize(struct group,gr_gid,0,6,29794)
CheckOffset(struct group,gr_gid,8,6,29794)
CheckMemberSize(struct group,gr_mem,0,6,29795)
CheckOffset(struct group,gr_mem,12,6,29795)
#elif __s390__
CheckTypeSize(struct group,16, 6894, 10)
CheckMemberSize(struct group,gr_passwd,0,10,29793)
CheckOffset(struct group,gr_passwd,4,10,29793)
CheckMemberSize(struct group,gr_gid,0,10,29794)
CheckOffset(struct group,gr_gid,8,10,29794)
CheckMemberSize(struct group,gr_mem,0,10,29795)
CheckOffset(struct group,gr_mem,12,10,29795)
#elif __powerpc64__
CheckTypeSize(struct group,32, 6894, 9)
CheckMemberSize(struct group,gr_passwd,0,9,29793)
CheckOffset(struct group,gr_passwd,8,9,29793)
CheckMemberSize(struct group,gr_gid,0,9,29794)
CheckOffset(struct group,gr_gid,16,9,29794)
CheckMemberSize(struct group,gr_mem,0,9,29795)
CheckOffset(struct group,gr_mem,24,9,29795)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,6894,0);
Msg("Find size of group (6894)\n");
#endif

#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests in grp.h\n",cnt);
return cnt;
#endif

}
