/*
 * Test of stdlib.h
 */
#include "hdrchk.h"
#include "sys/types.h"
#define _LSB_DEFAULT_ARCH 1
#include <wchar.h>
#include "stdlib.h"



#ifdef TET_TEST
void stdlib_h()
{
#else
int stdlib_h()
{
#endif

int cnt=0;

#ifdef TET_TEST
int pcnt=0;
Msg("Checking data structures in stdlib.h\n");
#endif

#if _LSB_DEFAULT_ARCH
#ifdef RAND_MAX
	CompareConstant(RAND_MAX,2147483647,1647,architecture)
#else
Msg( "Error: Constant not found: RAND_MAX\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef EXIT_FAILURE
	CompareConstant(EXIT_FAILURE,1,1648,architecture)
#else
Msg( "Error: Constant not found: EXIT_FAILURE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef EXIT_SUCCESS
	CompareConstant(EXIT_SUCCESS,0,1649,architecture)
#else
Msg( "Error: Constant not found: EXIT_SUCCESS\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef MB_CUR_MAX
	CompareConstant(MB_CUR_MAX,(__ctype_get_mb_cur_max()),1650,architecture)
#else
Msg( "Error: Constant not found: MB_CUR_MAX\n");
cnt++;
#endif

#endif

#if __i386__
CheckTypeSize(__compar_fn_t,4, 9231, 2)
#elif __ia64__
CheckTypeSize(__compar_fn_t,8, 9231, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(__compar_fn_t,4, 9231, 6)
#elif __s390__ && !__s390x__
CheckTypeSize(__compar_fn_t,4, 9231, 10)
#elif __powerpc64__
CheckTypeSize(__compar_fn_t,8, 9231, 9)
#elif __s390x__
CheckTypeSize(__compar_fn_t,0, 9231, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9231,0);
Msg("Find size of __compar_fn_t (9231)\n");
#endif

#if __i386__
CheckTypeSize(struct random_data,28, 10483, 2)
CheckMemberSize(struct random_data,fptr,4,2,40027)
CheckOffset(struct random_data,fptr,0,2,40027)
CheckMemberSize(struct random_data,rptr,4,2,40028)
CheckOffset(struct random_data,rptr,4,2,40028)
CheckMemberSize(struct random_data,state,4,2,40029)
CheckOffset(struct random_data,state,8,2,40029)
CheckMemberSize(struct random_data,rand_type,4,2,40030)
CheckOffset(struct random_data,rand_type,12,2,40030)
CheckMemberSize(struct random_data,rand_deg,4,2,40031)
CheckOffset(struct random_data,rand_deg,16,2,40031)
CheckMemberSize(struct random_data,rand_sep,4,2,40032)
CheckOffset(struct random_data,rand_sep,20,2,40032)
CheckMemberSize(struct random_data,end_ptr,4,2,40033)
CheckOffset(struct random_data,end_ptr,24,2,40033)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(struct random_data,28, 10483, 6)
CheckMemberSize(struct random_data,rptr,4,6,40028)
CheckOffset(struct random_data,rptr,4,6,40028)
CheckMemberSize(struct random_data,state,4,6,40029)
CheckOffset(struct random_data,state,8,6,40029)
CheckMemberSize(struct random_data,rand_type,4,6,40030)
CheckOffset(struct random_data,rand_type,12,6,40030)
CheckMemberSize(struct random_data,rand_deg,4,6,40031)
CheckOffset(struct random_data,rand_deg,16,6,40031)
CheckMemberSize(struct random_data,rand_sep,4,6,40032)
CheckOffset(struct random_data,rand_sep,20,6,40032)
CheckMemberSize(struct random_data,end_ptr,4,6,40033)
CheckOffset(struct random_data,end_ptr,24,6,40033)
#elif __ia64__
CheckTypeSize(struct random_data,48, 10483, 3)
CheckMemberSize(struct random_data,rptr,8,3,40028)
CheckOffset(struct random_data,rptr,8,3,40028)
CheckMemberSize(struct random_data,state,8,3,40029)
CheckOffset(struct random_data,state,16,3,40029)
CheckMemberSize(struct random_data,rand_type,4,3,40030)
CheckOffset(struct random_data,rand_type,24,3,40030)
CheckMemberSize(struct random_data,rand_deg,4,3,40031)
CheckOffset(struct random_data,rand_deg,28,3,40031)
CheckMemberSize(struct random_data,rand_sep,4,3,40032)
CheckOffset(struct random_data,rand_sep,32,3,40032)
CheckMemberSize(struct random_data,end_ptr,8,3,40033)
CheckOffset(struct random_data,end_ptr,40,3,40033)
#elif __s390x__
CheckTypeSize(struct random_data,0, 10483, 12)
Msg("Missing member data for random_data on S390X\n");
CheckOffset(struct random_data,fptr,0,12,40027)
CheckOffset(struct random_data,rptr,0,12,40028)
CheckOffset(struct random_data,state,0,12,40029)
CheckOffset(struct random_data,rand_type,0,12,40030)
CheckOffset(struct random_data,rand_deg,0,12,40031)
CheckOffset(struct random_data,rand_sep,0,12,40032)
CheckOffset(struct random_data,end_ptr,0,12,40033)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10483,0);
Msg("Find size of random_data (10483)\n");
#endif

#if __i386__
CheckTypeSize(div_t,8, 6973, 2)
#elif __ia64__
CheckTypeSize(div_t,8, 6973, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(div_t,8, 6973, 6)
#elif __s390__ && !__s390x__
CheckTypeSize(div_t,8, 6973, 10)
#elif __powerpc64__
CheckTypeSize(div_t,8, 6973, 9)
#elif __s390x__
CheckTypeSize(div_t,0, 6973, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,6973,0);
Msg("Find size of div_t (6973)\n");
#endif

#if __i386__
CheckTypeSize(ldiv_t,8, 6975, 2)
#elif __ia64__
CheckTypeSize(ldiv_t,16, 6975, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(ldiv_t,8, 6975, 6)
#elif __s390__ && !__s390x__
CheckTypeSize(ldiv_t,8, 6975, 10)
#elif __powerpc64__
CheckTypeSize(ldiv_t,16, 6975, 9)
#elif __s390x__
CheckTypeSize(ldiv_t,0, 6975, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,6975,0);
Msg("Find size of ldiv_t (6975)\n");
#endif

#if __i386__
CheckTypeSize(lldiv_t,16, 6897, 2)
#elif __ia64__
CheckTypeSize(lldiv_t,16, 6897, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(lldiv_t,16, 6897, 6)
#elif __s390__ && !__s390x__
CheckTypeSize(lldiv_t,16, 6897, 10)
#elif __powerpc64__
CheckTypeSize(lldiv_t,16, 6897, 9)
#elif __s390x__
CheckTypeSize(lldiv_t,0, 6897, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,6897,0);
Msg("Find size of lldiv_t (6897)\n");
#endif

#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests in stdlib.h\n",cnt);
return cnt;
#endif

}
