/*
 * Test of libxml2/libxml/list.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#define __LSB_VERSION__ 40
struct _xmlList {};
struct _xmlLink {};
#include "libxml2/libxml/list.h"



#ifdef TET_TEST
void libxml2_libxml_list_h()
{
#else
int libxml2_libxml_list_h()
{
#endif

int cnt=0;

int pcnt=0;
#ifdef TET_TEST
Msg("Checking data structures in libxml2/libxml/list.h\n");
#endif

printf("Checking data structures in libxml2/libxml/list.h\n");
#if defined __s390x__
CheckTypeSize(xmlListPtr,8, 14554, 12, 3.1, NULL, 14553, NULL)
#elif defined __x86_64__
CheckTypeSize(xmlListPtr,8, 14554, 11, 3.1, NULL, 14553, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(xmlListPtr,4, 14554, 10, 3.1, NULL, 14553, NULL)
#elif defined __powerpc64__
CheckTypeSize(xmlListPtr,8, 14554, 9, 3.1, NULL, 14553, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(xmlListPtr,4, 14554, 6, 3.1, NULL, 14553, NULL)
#elif defined __ia64__
CheckTypeSize(xmlListPtr,8, 14554, 3, 3.1, NULL, 14553, NULL)
#elif defined __i386__
CheckTypeSize(xmlListPtr,4, 14554, 2, 3.1, NULL, 14553, NULL)
#else
Msg("Find size of xmlListPtr (14554)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14553,NULL);\n",architecture,14554,0);
#endif

#if defined __s390x__
CheckTypeSize(xmlLinkPtr,8, 14558, 12, 3.1, NULL, 14557, NULL)
#elif defined __x86_64__
CheckTypeSize(xmlLinkPtr,8, 14558, 11, 3.1, NULL, 14557, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(xmlLinkPtr,4, 14558, 10, 3.1, NULL, 14557, NULL)
#elif defined __powerpc64__
CheckTypeSize(xmlLinkPtr,8, 14558, 9, 3.1, NULL, 14557, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(xmlLinkPtr,4, 14558, 6, 3.1, NULL, 14557, NULL)
#elif defined __ia64__
CheckTypeSize(xmlLinkPtr,8, 14558, 3, 3.1, NULL, 14557, NULL)
#elif defined __i386__
CheckTypeSize(xmlLinkPtr,4, 14558, 2, 3.1, NULL, 14557, NULL)
#else
Msg("Find size of xmlLinkPtr (14558)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14557,NULL);\n",architecture,14558,0);
#endif

#if defined __s390x__
CheckTypeSize(xmlListWalker,8, 14561, 12, 3.1, NULL, 14560, NULL)
#elif defined __x86_64__
CheckTypeSize(xmlListWalker,8, 14561, 11, 3.1, NULL, 14560, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(xmlListWalker,4, 14561, 10, 3.1, NULL, 14560, NULL)
#elif defined __powerpc64__
CheckTypeSize(xmlListWalker,8, 14561, 9, 3.1, NULL, 14560, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(xmlListWalker,4, 14561, 6, 3.1, NULL, 14560, NULL)
#elif defined __ia64__
CheckTypeSize(xmlListWalker,8, 14561, 3, 3.1, NULL, 14560, NULL)
#elif defined __i386__
CheckTypeSize(xmlListWalker,4, 14561, 2, 3.1, NULL, 14560, NULL)
#else
Msg("Find size of xmlListWalker (14561)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14560,NULL);\n",architecture,14561,0);
#endif

#if defined __s390x__
CheckTypeSize(xmlListDeallocator,8, 14563, 12, 3.1, NULL, 14562, NULL)
#elif defined __x86_64__
CheckTypeSize(xmlListDeallocator,8, 14563, 11, 3.1, NULL, 14562, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(xmlListDeallocator,4, 14563, 10, 3.1, NULL, 14562, NULL)
#elif defined __powerpc64__
CheckTypeSize(xmlListDeallocator,8, 14563, 9, 3.1, NULL, 14562, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(xmlListDeallocator,4, 14563, 6, 3.1, NULL, 14562, NULL)
#elif defined __ia64__
CheckTypeSize(xmlListDeallocator,8, 14563, 3, 3.1, NULL, 14562, NULL)
#elif defined __i386__
CheckTypeSize(xmlListDeallocator,4, 14563, 2, 3.1, NULL, 14562, NULL)
#else
Msg("Find size of xmlListDeallocator (14563)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14562,NULL);\n",architecture,14563,0);
#endif

#if defined __s390x__
CheckTypeSize(xmlListDataCompare,8, 14564, 12, 3.1, NULL, 14560, NULL)
#elif defined __x86_64__
CheckTypeSize(xmlListDataCompare,8, 14564, 11, 3.1, NULL, 14560, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(xmlListDataCompare,4, 14564, 10, 3.1, NULL, 14560, NULL)
#elif defined __powerpc64__
CheckTypeSize(xmlListDataCompare,8, 14564, 9, 3.1, NULL, 14560, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(xmlListDataCompare,4, 14564, 6, 3.1, NULL, 14560, NULL)
#elif defined __ia64__
CheckTypeSize(xmlListDataCompare,8, 14564, 3, 3.1, NULL, 14560, NULL)
#elif defined __i386__
CheckTypeSize(xmlListDataCompare,4, 14564, 2, 3.1, NULL, 14560, NULL)
#else
Msg("Find size of xmlListDataCompare (14564)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14560, NULL);\n",architecture,14564,0);
#endif

#if defined __s390x__
/* S390X */
typedef int (*xmlListWalker_db)(const void *, const void *);
CheckFunctionTypedef(xmlListWalker,xmlListWalker_db);
#elif defined __x86_64__
/* x86-64 */
typedef int (*xmlListWalker_db)(const void *, const void *);
CheckFunctionTypedef(xmlListWalker,xmlListWalker_db);
#elif defined __s390__ && !defined __s390x__
/* S390 */
typedef int (*xmlListWalker_db)(const void *, const void *);
CheckFunctionTypedef(xmlListWalker,xmlListWalker_db);
#elif defined __powerpc64__
/* PPC64 */
typedef int (*xmlListWalker_db)(const void *, const void *);
CheckFunctionTypedef(xmlListWalker,xmlListWalker_db);
#elif defined __powerpc__ && !defined __powerpc64__
/* PPC32 */
typedef int (*xmlListWalker_db)(const void *, const void *);
CheckFunctionTypedef(xmlListWalker,xmlListWalker_db);
#elif defined __ia64__
/* IA64 */
typedef int (*xmlListWalker_db)(const void *, const void *);
CheckFunctionTypedef(xmlListWalker,xmlListWalker_db);
#elif defined __i386__
/* IA32 */
typedef int (*xmlListWalker_db)(const void *, const void *);
CheckFunctionTypedef(xmlListWalker,xmlListWalker_db);
#endif

#if defined __s390x__
/* S390X */
typedef void (*xmlListDeallocator_db)(xmlLinkPtr);
CheckFunctionTypedef(xmlListDeallocator,xmlListDeallocator_db);
#elif defined __x86_64__
/* x86-64 */
typedef void (*xmlListDeallocator_db)(xmlLinkPtr);
CheckFunctionTypedef(xmlListDeallocator,xmlListDeallocator_db);
#elif defined __s390__ && !defined __s390x__
/* S390 */
typedef void (*xmlListDeallocator_db)(xmlLinkPtr);
CheckFunctionTypedef(xmlListDeallocator,xmlListDeallocator_db);
#elif defined __powerpc64__
/* PPC64 */
typedef void (*xmlListDeallocator_db)(xmlLinkPtr);
CheckFunctionTypedef(xmlListDeallocator,xmlListDeallocator_db);
#elif defined __powerpc__ && !defined __powerpc64__
/* PPC32 */
typedef void (*xmlListDeallocator_db)(xmlLinkPtr);
CheckFunctionTypedef(xmlListDeallocator,xmlListDeallocator_db);
#elif defined __ia64__
/* IA64 */
typedef void (*xmlListDeallocator_db)(xmlLinkPtr);
CheckFunctionTypedef(xmlListDeallocator,xmlListDeallocator_db);
#elif defined __i386__
/* IA32 */
typedef void (*xmlListDeallocator_db)(xmlLinkPtr);
CheckFunctionTypedef(xmlListDeallocator,xmlListDeallocator_db);
#endif

#if defined __s390x__
/* S390X */
typedef int (*xmlListDataCompare_db)(const void *, const void *);
CheckFunctionTypedef(xmlListDataCompare,xmlListDataCompare_db);
#elif defined __x86_64__
/* x86-64 */
typedef int (*xmlListDataCompare_db)(const void *, const void *);
CheckFunctionTypedef(xmlListDataCompare,xmlListDataCompare_db);
#elif defined __s390__ && !defined __s390x__
/* S390 */
typedef int (*xmlListDataCompare_db)(const void *, const void *);
CheckFunctionTypedef(xmlListDataCompare,xmlListDataCompare_db);
#elif defined __powerpc64__
/* PPC64 */
typedef int (*xmlListDataCompare_db)(const void *, const void *);
CheckFunctionTypedef(xmlListDataCompare,xmlListDataCompare_db);
#elif defined __powerpc__ && !defined __powerpc64__
/* PPC32 */
typedef int (*xmlListDataCompare_db)(const void *, const void *);
CheckFunctionTypedef(xmlListDataCompare,xmlListDataCompare_db);
#elif defined __ia64__
/* IA64 */
typedef int (*xmlListDataCompare_db)(const void *, const void *);
CheckFunctionTypedef(xmlListDataCompare,xmlListDataCompare_db);
#elif defined __i386__
/* IA32 */
typedef int (*xmlListDataCompare_db)(const void *, const void *);
CheckFunctionTypedef(xmlListDataCompare,xmlListDataCompare_db);
#endif

extern int xmlListRemoveFirst_db(xmlListPtr, void *);
CheckInterfacedef(xmlListRemoveFirst,xmlListRemoveFirst_db);
extern xmlLinkPtr xmlListFront_db(xmlListPtr);
CheckInterfacedef(xmlListFront,xmlListFront_db);
extern xmlListPtr xmlListDup_db(const xmlListPtr);
CheckInterfacedef(xmlListDup,xmlListDup_db);
extern void xmlListWalk_db(xmlListPtr, xmlListWalker, const void *);
CheckInterfacedef(xmlListWalk,xmlListWalk_db);
extern void xmlListSort_db(xmlListPtr);
CheckInterfacedef(xmlListSort,xmlListSort_db);
extern void * xmlLinkGetData_db(xmlLinkPtr);
CheckInterfacedef(xmlLinkGetData,xmlLinkGetData_db);
extern int xmlListRemoveAll_db(xmlListPtr, void *);
CheckInterfacedef(xmlListRemoveAll,xmlListRemoveAll_db);
extern int xmlListAppend_db(xmlListPtr, void *);
CheckInterfacedef(xmlListAppend,xmlListAppend_db);
extern void xmlListDelete_db(xmlListPtr);
CheckInterfacedef(xmlListDelete,xmlListDelete_db);
extern void * xmlListReverseSearch_db(xmlListPtr, void *);
CheckInterfacedef(xmlListReverseSearch,xmlListReverseSearch_db);
extern void xmlListReverse_db(xmlListPtr);
CheckInterfacedef(xmlListReverse,xmlListReverse_db);
extern void * xmlListSearch_db(xmlListPtr, void *);
CheckInterfacedef(xmlListSearch,xmlListSearch_db);
extern int xmlListCopy_db(xmlListPtr, const xmlListPtr);
CheckInterfacedef(xmlListCopy,xmlListCopy_db);
extern int xmlListSize_db(xmlListPtr);
CheckInterfacedef(xmlListSize,xmlListSize_db);
extern int xmlListRemoveLast_db(xmlListPtr, void *);
CheckInterfacedef(xmlListRemoveLast,xmlListRemoveLast_db);
extern int xmlListPushFront_db(xmlListPtr, void *);
CheckInterfacedef(xmlListPushFront,xmlListPushFront_db);
extern int xmlListInsert_db(xmlListPtr, void *);
CheckInterfacedef(xmlListInsert,xmlListInsert_db);
extern int xmlListPushBack_db(xmlListPtr, void *);
CheckInterfacedef(xmlListPushBack,xmlListPushBack_db);
extern void xmlListReverseWalk_db(xmlListPtr, xmlListWalker, const void *);
CheckInterfacedef(xmlListReverseWalk,xmlListReverseWalk_db);
extern xmlLinkPtr xmlListEnd_db(xmlListPtr);
CheckInterfacedef(xmlListEnd,xmlListEnd_db);
extern xmlListPtr xmlListCreate_db(xmlListDeallocator, xmlListDataCompare);
CheckInterfacedef(xmlListCreate,xmlListCreate_db);
extern int xmlListEmpty_db(xmlListPtr);
CheckInterfacedef(xmlListEmpty,xmlListEmpty_db);
extern void xmlListPopFront_db(xmlListPtr);
CheckInterfacedef(xmlListPopFront,xmlListPopFront_db);
extern void xmlListPopBack_db(xmlListPtr);
CheckInterfacedef(xmlListPopBack,xmlListPopBack_db);
extern void xmlListClear_db(xmlListPtr);
CheckInterfacedef(xmlListClear,xmlListClear_db);
extern void xmlListMerge_db(xmlListPtr, xmlListPtr);
CheckInterfacedef(xmlListMerge,xmlListMerge_db);
#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests passed out of %d tests in libxml2/libxml/list.h\n\n",pcnt,cnt);
return cnt;
#endif

}
