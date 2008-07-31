/*
 * Test of search.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#define __LSB_VERSION__ 40
#include <wchar.h>
#include <stdlib.h>

struct _ENTRY { };
#include "search.h"



#ifdef TET_TEST
void search_h()
{
#else
int search_h()
{
#endif

int cnt=0;

int pcnt=0;
#ifdef TET_TEST
Msg("Checking data structures in search.h\n");
#endif

printf("Checking data structures in search.h\n");
#if defined __s390x__
CheckTypeSize(ENTRY,16, 6953, 12, 1.3, NULL, 6952, NULL)
#elif defined __x86_64__
CheckTypeSize(ENTRY,16, 6953, 11, 2.0, NULL, 6952, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(ENTRY,8, 6953, 10, 1.3, NULL, 6952, NULL)
#elif defined __powerpc64__
CheckTypeSize(ENTRY,16, 6953, 9, 2.0, NULL, 6952, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(ENTRY,8, 6953, 6, 1.2, NULL, 6952, NULL)
#elif defined __ia64__
CheckTypeSize(ENTRY,16, 6953, 3, 1.3, NULL, 6952, NULL)
#elif defined __i386__
CheckTypeSize(ENTRY,8, 6953, 2, 1.2, NULL, 6952, NULL)
#else
Msg("Find size of ENTRY (6953)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,6952,NULL);\n",architecture,6953,0);
#endif

#if defined __s390x__
CheckTypeSize(ACTION,4, 9081, 12, 1.3, NULL, 9080, NULL)
#elif defined __x86_64__
CheckTypeSize(ACTION,4, 9081, 11, 2.0, NULL, 9080, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(ACTION,4, 9081, 10, 1.3, NULL, 9080, NULL)
#elif defined __powerpc64__
CheckTypeSize(ACTION,4, 9081, 9, 2.0, NULL, 9080, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(ACTION,4, 9081, 6, 1.2, NULL, 9080, NULL)
#elif defined __ia64__
CheckTypeSize(ACTION,4, 9081, 3, 1.3, NULL, 9080, NULL)
#elif defined __i386__
CheckTypeSize(ACTION,4, 9081, 2, 1.0, NULL, 9080, NULL)
#else
Msg("Find size of ACTION (9081)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.0""',NULL,9080,NULL);\n",architecture,9081,0);
#endif

#if 1
CheckTypeSize(struct _ENTRY,0, 9082, 1, 4.0, NULL, 0, NULL)
Msg("Missing member data for _ENTRY on All\n");
#endif

#if defined __s390x__
CheckTypeSize(VISIT,4, 9085, 12, 1.3, NULL, 9084, NULL)
#elif defined __x86_64__
CheckTypeSize(VISIT,4, 9085, 11, 2.0, NULL, 9084, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(VISIT,4, 9085, 10, 1.3, NULL, 9084, NULL)
#elif defined __powerpc64__
CheckTypeSize(VISIT,4, 9085, 9, 2.0, NULL, 9084, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(VISIT,4, 9085, 6, 1.2, NULL, 9084, NULL)
#elif defined __ia64__
CheckTypeSize(VISIT,4, 9085, 3, 1.3, NULL, 9084, NULL)
#elif defined __i386__
CheckTypeSize(VISIT,4, 9085, 2, 1.2, NULL, 9084, NULL)
#else
Msg("Find size of VISIT (9085)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,9084,NULL);\n",architecture,9085,0);
#endif

#if defined __s390x__
CheckTypeSize(struct hsearch_data,16, 1000101, 12, 4.0, NULL, 0, NULL)
CheckMemberSize(struct hsearch_data,size,4,12,78882)
CheckOffset(struct hsearch_data,size,8,12,78882)
CheckMemberSize(struct hsearch_data,filled,4,12,78883)
CheckOffset(struct hsearch_data,filled,12,12,78883)
#elif defined __x86_64__
CheckTypeSize(struct hsearch_data,16, 1000101, 11, 4.0, NULL, 0, NULL)
CheckMemberSize(struct hsearch_data,size,4,11,78882)
CheckOffset(struct hsearch_data,size,8,11,78882)
CheckMemberSize(struct hsearch_data,filled,4,11,78883)
CheckOffset(struct hsearch_data,filled,12,11,78883)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(struct hsearch_data,12, 1000101, 10, 4.0, NULL, 0, NULL)
CheckMemberSize(struct hsearch_data,size,4,10,78882)
CheckOffset(struct hsearch_data,size,4,10,78882)
CheckMemberSize(struct hsearch_data,filled,4,10,78883)
CheckOffset(struct hsearch_data,filled,8,10,78883)
#elif defined __powerpc64__
CheckTypeSize(struct hsearch_data,16, 1000101, 9, 4.0, NULL, 0, NULL)
CheckMemberSize(struct hsearch_data,size,4,9,78882)
CheckOffset(struct hsearch_data,size,8,9,78882)
CheckMemberSize(struct hsearch_data,filled,4,9,78883)
CheckOffset(struct hsearch_data,filled,12,9,78883)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(struct hsearch_data,12, 1000101, 6, 4.0, NULL, 0, NULL)
CheckMemberSize(struct hsearch_data,size,4,6,78882)
CheckOffset(struct hsearch_data,size,4,6,78882)
CheckMemberSize(struct hsearch_data,filled,4,6,78883)
CheckOffset(struct hsearch_data,filled,8,6,78883)
#elif defined __ia64__
CheckTypeSize(struct hsearch_data,16, 1000101, 3, 4.0, NULL, 0, NULL)
CheckMemberSize(struct hsearch_data,size,4,3,78882)
CheckOffset(struct hsearch_data,size,8,3,78882)
CheckMemberSize(struct hsearch_data,filled,4,3,78883)
CheckOffset(struct hsearch_data,filled,12,3,78883)
#elif defined __i386__
CheckTypeSize(struct hsearch_data,12, 1000101, 2, 4.0, NULL, 0, NULL)
CheckMemberSize(struct hsearch_data,size,4,2,78882)
CheckOffset(struct hsearch_data,size,4,2,78882)
CheckMemberSize(struct hsearch_data,filled,4,2,78883)
CheckOffset(struct hsearch_data,filled,8,2,78883)
#else
Msg("Find size of hsearch_data (1000101)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""4.0""',NULL,0,NULL);\n",architecture,1000101,0);
#endif

#if defined __s390x__
CheckTypeSize(__action_fn_t,8, 6956, 12, 1.3, NULL, 9086, NULL)
#elif defined __x86_64__
CheckTypeSize(__action_fn_t,8, 6956, 11, 2.0, NULL, 9086, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(__action_fn_t,4, 6956, 10, 1.3, NULL, 9086, NULL)
#elif defined __powerpc64__
CheckTypeSize(__action_fn_t,8, 6956, 9, 2.0, NULL, 9086, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(__action_fn_t,4, 6956, 6, 1.2, NULL, 9086, NULL)
#elif defined __ia64__
CheckTypeSize(__action_fn_t,8, 6956, 3, 1.3, NULL, 9086, NULL)
#elif defined __i386__
CheckTypeSize(__action_fn_t,4, 6956, 2, 1.0, NULL, 9086, NULL)
#else
Msg("Find size of __action_fn_t (6956)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.0""',NULL,9086, NULL);\n",architecture,6956,0);
#endif

#if defined __s390x__
/* S390X */
typedef void (*__action_fn_t_db)(const void *, VISIT, int);
CheckFunctionTypedef(__action_fn_t,__action_fn_t_db);
#elif defined __x86_64__
/* x86-64 */
typedef void (*__action_fn_t_db)(const void *, VISIT, int);
CheckFunctionTypedef(__action_fn_t,__action_fn_t_db);
#elif defined __s390__ && !defined __s390x__
/* S390 */
typedef void (*__action_fn_t_db)(const void *, VISIT, int);
CheckFunctionTypedef(__action_fn_t,__action_fn_t_db);
#elif defined __powerpc64__
/* PPC64 */
typedef void (*__action_fn_t_db)(const void *, VISIT, int);
CheckFunctionTypedef(__action_fn_t,__action_fn_t_db);
#elif defined __powerpc__ && !defined __powerpc64__
/* PPC32 */
typedef void (*__action_fn_t_db)(const void *, VISIT, int);
CheckFunctionTypedef(__action_fn_t,__action_fn_t_db);
#elif defined __ia64__
/* IA64 */
typedef void (*__action_fn_t_db)(const void *, VISIT, int);
CheckFunctionTypedef(__action_fn_t,__action_fn_t_db);
#elif defined __i386__
/* IA32 */
typedef void (*__action_fn_t_db)(const void *, VISIT, int);
CheckFunctionTypedef(__action_fn_t,__action_fn_t_db);
#endif

extern int hcreate_r_db(size_t, struct hsearch_data *);
CheckInterfacedef(hcreate_r,hcreate_r_db);
extern void hdestroy_r_db(struct hsearch_data *);
CheckInterfacedef(hdestroy_r,hdestroy_r_db);
extern int hsearch_r_db(ENTRY, ACTION, ENTRY * *, struct hsearch_data *);
CheckInterfacedef(hsearch_r,hsearch_r_db);
extern int hcreate_db(size_t);
CheckInterfacedef(hcreate,hcreate_db);
extern ENTRY * hsearch_db(ENTRY, ACTION);
CheckInterfacedef(hsearch,hsearch_db);
extern void insque_db(void *, void *);
CheckInterfacedef(insque,insque_db);
extern void * lfind_db(const void *, const void *, size_t *, size_t, __compar_fn_t);
CheckInterfacedef(lfind,lfind_db);
extern void * lsearch_db(const void *, void *, size_t *, size_t, __compar_fn_t);
CheckInterfacedef(lsearch,lsearch_db);
extern void remque_db(void *);
CheckInterfacedef(remque,remque_db);
extern void hdestroy_db(void);
CheckInterfacedef(hdestroy,hdestroy_db);
extern void * tdelete_db(const void *, void * *, __compar_fn_t);
CheckInterfacedef(tdelete,tdelete_db);
extern void * tfind_db(const void *, void *const  *, __compar_fn_t);
CheckInterfacedef(tfind,tfind_db);
extern void * tsearch_db(const void *, void * *, __compar_fn_t);
CheckInterfacedef(tsearch,tsearch_db);
extern void twalk_db(const void *, __action_fn_t);
CheckInterfacedef(twalk,twalk_db);
#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests passed out of %d tests in search.h\n\n",pcnt,cnt);
return cnt;
#endif

}
