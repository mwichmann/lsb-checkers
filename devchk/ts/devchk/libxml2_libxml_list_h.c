/*
 * Test of libxml2/libxml/list.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
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
#if __i386__
CheckTypeSize(xmlList,0, 14552, 2)
#elif __x86_64__
CheckTypeSize(xmlList,0, 14552, 11)
#elif __ia64__
CheckTypeSize(xmlList,0, 14552, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(xmlList,0, 14552, 6)
#elif __powerpc64__
CheckTypeSize(xmlList,0, 14552, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(xmlList,0, 14552, 10)
#elif __s390x__
CheckTypeSize(xmlList,0, 14552, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,14552,0);
Msg("Find size of xmlList (14552)\n");
#endif

#if __i386__
CheckTypeSize(xmlList *,4, 14553, 2)
#elif __x86_64__
CheckTypeSize(xmlList *,8, 14553, 11)
#elif __ia64__
CheckTypeSize(xmlList *,8, 14553, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(xmlList *,4, 14553, 6)
#elif __powerpc64__
CheckTypeSize(xmlList *,8, 14553, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(xmlList *,4, 14553, 10)
#elif __s390x__
CheckTypeSize(xmlList *,8, 14553, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,14553,0);
Msg("Find size of xmlList * (14553)\n");
#endif

#if __i386__
CheckTypeSize(xmlListPtr,4, 14554, 2)
#elif __x86_64__
CheckTypeSize(xmlListPtr,8, 14554, 11)
#elif __ia64__
CheckTypeSize(xmlListPtr,8, 14554, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(xmlListPtr,4, 14554, 6)
#elif __powerpc64__
CheckTypeSize(xmlListPtr,8, 14554, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(xmlListPtr,4, 14554, 10)
#elif __s390x__
CheckTypeSize(xmlListPtr,8, 14554, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,14554,0);
Msg("Find size of xmlListPtr (14554)\n");
#endif

#if __i386__
CheckTypeSize(xmlLink,0, 14556, 2)
#elif __x86_64__
CheckTypeSize(xmlLink,0, 14556, 11)
#elif __ia64__
CheckTypeSize(xmlLink,0, 14556, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(xmlLink,0, 14556, 6)
#elif __powerpc64__
CheckTypeSize(xmlLink,0, 14556, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(xmlLink,0, 14556, 10)
#elif __s390x__
CheckTypeSize(xmlLink,0, 14556, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,14556,0);
Msg("Find size of xmlLink (14556)\n");
#endif

#if __i386__
CheckTypeSize(xmlLink *,4, 14557, 2)
#elif __x86_64__
CheckTypeSize(xmlLink *,8, 14557, 11)
#elif __ia64__
CheckTypeSize(xmlLink *,8, 14557, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(xmlLink *,4, 14557, 6)
#elif __powerpc64__
CheckTypeSize(xmlLink *,8, 14557, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(xmlLink *,4, 14557, 10)
#elif __s390x__
CheckTypeSize(xmlLink *,8, 14557, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,14557,0);
Msg("Find size of xmlLink * (14557)\n");
#endif

#if __i386__
CheckTypeSize(xmlLinkPtr,4, 14558, 2)
#elif __x86_64__
CheckTypeSize(xmlLinkPtr,8, 14558, 11)
#elif __ia64__
CheckTypeSize(xmlLinkPtr,8, 14558, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(xmlLinkPtr,4, 14558, 6)
#elif __powerpc64__
CheckTypeSize(xmlLinkPtr,8, 14558, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(xmlLinkPtr,4, 14558, 10)
#elif __s390x__
CheckTypeSize(xmlLinkPtr,8, 14558, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,14558,0);
Msg("Find size of xmlLinkPtr (14558)\n");
#endif

#if __i386__
CheckTypeSize(const xmlListPtr,4, 14559, 2)
#elif __x86_64__
CheckTypeSize(const xmlListPtr,8, 14559, 11)
#elif __ia64__
CheckTypeSize(const xmlListPtr,8, 14559, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(const xmlListPtr,4, 14559, 6)
#elif __powerpc64__
CheckTypeSize(const xmlListPtr,8, 14559, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(const xmlListPtr,4, 14559, 10)
#elif __s390x__
CheckTypeSize(const xmlListPtr,8, 14559, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,14559,0);
Msg("Find size of const xmlListPtr (14559)\n");
#endif

#if __i386__
#elif __x86_64__
#elif __ia64__
#elif __powerpc__ && !__powerpc64__
#elif __powerpc64__
#elif __s390__ && !__s390x__
#elif __s390x__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,14560,0);
Msg("Find size of fptr_list_459 (14560)\n");
#endif

#if __i386__
CheckTypeSize(xmlListWalker,4, 14561, 2)
#elif __x86_64__
CheckTypeSize(xmlListWalker,8, 14561, 11)
#elif __ia64__
CheckTypeSize(xmlListWalker,8, 14561, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(xmlListWalker,4, 14561, 6)
#elif __powerpc64__
CheckTypeSize(xmlListWalker,8, 14561, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(xmlListWalker,4, 14561, 10)
#elif __s390x__
CheckTypeSize(xmlListWalker,8, 14561, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,14561,0);
Msg("Find size of xmlListWalker (14561)\n");
#endif

#if __i386__
#elif __x86_64__
#elif __ia64__
#elif __powerpc__ && !__powerpc64__
#elif __powerpc64__
#elif __s390__ && !__s390x__
#elif __s390x__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,14562,0);
Msg("Find size of fptr_list_305 (14562)\n");
#endif

#if __i386__
CheckTypeSize(xmlListDeallocator,4, 14563, 2)
#elif __x86_64__
CheckTypeSize(xmlListDeallocator,8, 14563, 11)
#elif __ia64__
CheckTypeSize(xmlListDeallocator,8, 14563, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(xmlListDeallocator,4, 14563, 6)
#elif __powerpc64__
CheckTypeSize(xmlListDeallocator,8, 14563, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(xmlListDeallocator,4, 14563, 10)
#elif __s390x__
CheckTypeSize(xmlListDeallocator,8, 14563, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,14563,0);
Msg("Find size of xmlListDeallocator (14563)\n");
#endif

#if __i386__
CheckTypeSize(xmlListDataCompare,4, 14564, 2)
#elif __x86_64__
CheckTypeSize(xmlListDataCompare,8, 14564, 11)
#elif __ia64__
CheckTypeSize(xmlListDataCompare,8, 14564, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(xmlListDataCompare,4, 14564, 6)
#elif __powerpc64__
CheckTypeSize(xmlListDataCompare,8, 14564, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(xmlListDataCompare,4, 14564, 10)
#elif __s390x__
CheckTypeSize(xmlListDataCompare,8, 14564, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,14564,0);
Msg("Find size of xmlListDataCompare (14564)\n");
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
