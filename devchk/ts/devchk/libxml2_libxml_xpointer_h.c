/*
 * Test of libxml2/libxml/xpointer.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#define __LSB_VERSION__ 40
#include <libxml/xmlregexp.h>
#include "libxml2/libxml/xpointer.h"



#ifdef TET_TEST
void libxml2_libxml_xpointer_h()
{
#else
int libxml2_libxml_xpointer_h()
{
#endif

int cnt=0;

int pcnt=0;
#ifdef TET_TEST
Msg("Checking data structures in libxml2/libxml/xpointer.h\n");
#endif

printf("Checking data structures in libxml2/libxml/xpointer.h\n");
#if defined __s390x__
CheckTypeSize(xmlLocationSet,16, 14911, 12, 3.1, NULL, 14910, NULL)
#elif defined __x86_64__
CheckTypeSize(xmlLocationSet,16, 14911, 11, 3.1, NULL, 14910, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(xmlLocationSet,12, 14911, 10, 3.1, NULL, 14910, NULL)
#elif defined __powerpc64__
CheckTypeSize(xmlLocationSet,16, 14911, 9, 3.1, NULL, 14910, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(xmlLocationSet,12, 14911, 6, 3.1, NULL, 14910, NULL)
#elif defined __ia64__
CheckTypeSize(xmlLocationSet,16, 14911, 3, 3.1, NULL, 14910, NULL)
#elif defined __i386__
CheckTypeSize(xmlLocationSet,12, 14911, 2, 3.1, NULL, 14910, NULL)
#else
Msg("Find size of xmlLocationSet (14911)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14910,NULL);\n",architecture,14911,0);
#endif

#if defined __s390x__
CheckTypeSize(xmlLocationSetPtr,8, 14913, 12, 3.1, NULL, 14912, NULL)
#elif defined __x86_64__
CheckTypeSize(xmlLocationSetPtr,8, 14913, 11, 3.1, NULL, 14912, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(xmlLocationSetPtr,4, 14913, 10, 3.1, NULL, 14912, NULL)
#elif defined __powerpc64__
CheckTypeSize(xmlLocationSetPtr,8, 14913, 9, 3.1, NULL, 14912, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(xmlLocationSetPtr,4, 14913, 6, 3.1, NULL, 14912, NULL)
#elif defined __ia64__
CheckTypeSize(xmlLocationSetPtr,8, 14913, 3, 3.1, NULL, 14912, NULL)
#elif defined __i386__
CheckTypeSize(xmlLocationSetPtr,4, 14913, 2, 3.1, NULL, 14912, NULL)
#else
Msg("Find size of xmlLocationSetPtr (14913)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14912, NULL);\n",architecture,14913,0);
#endif

extern xmlLocationSetPtr xmlXPtrLocationSetCreate_db(xmlXPathObjectPtr);
CheckInterfacedef(xmlXPtrLocationSetCreate,xmlXPtrLocationSetCreate_db);
extern xmlXPathObjectPtr xmlXPtrNewRange_db(xmlNodePtr, int, xmlNodePtr, int);
CheckInterfacedef(xmlXPtrNewRange,xmlXPtrNewRange_db);
extern xmlXPathObjectPtr xmlXPtrNewRangeNodeObject_db(xmlNodePtr, xmlXPathObjectPtr);
CheckInterfacedef(xmlXPtrNewRangeNodeObject,xmlXPtrNewRangeNodeObject_db);
extern xmlXPathObjectPtr xmlXPtrEval_db(const xmlChar *, xmlXPathContextPtr);
CheckInterfacedef(xmlXPtrEval,xmlXPtrEval_db);
extern void xmlXPtrEvalRangePredicate_db(xmlXPathParserContextPtr);
CheckInterfacedef(xmlXPtrEvalRangePredicate,xmlXPtrEvalRangePredicate_db);
extern xmlXPathContextPtr xmlXPtrNewContext_db(xmlDocPtr, xmlNodePtr, xmlNodePtr);
CheckInterfacedef(xmlXPtrNewContext,xmlXPtrNewContext_db);
extern xmlXPathObjectPtr xmlXPtrNewRangePoints_db(xmlXPathObjectPtr, xmlXPathObjectPtr);
CheckInterfacedef(xmlXPtrNewRangePoints,xmlXPtrNewRangePoints_db);
extern void xmlXPtrRangeToFunction_db(xmlXPathParserContextPtr, int);
CheckInterfacedef(xmlXPtrRangeToFunction,xmlXPtrRangeToFunction_db);
extern xmlXPathObjectPtr xmlXPtrNewRangeNodePoint_db(xmlNodePtr, xmlXPathObjectPtr);
CheckInterfacedef(xmlXPtrNewRangeNodePoint,xmlXPtrNewRangeNodePoint_db);
extern xmlLocationSetPtr xmlXPtrLocationSetMerge_db(xmlLocationSetPtr, xmlLocationSetPtr);
CheckInterfacedef(xmlXPtrLocationSetMerge,xmlXPtrLocationSetMerge_db);
extern xmlXPathObjectPtr xmlXPtrNewRangeNodes_db(xmlNodePtr, xmlNodePtr);
CheckInterfacedef(xmlXPtrNewRangeNodes,xmlXPtrNewRangeNodes_db);
extern xmlNodePtr xmlXPtrBuildNodeList_db(xmlXPathObjectPtr);
CheckInterfacedef(xmlXPtrBuildNodeList,xmlXPtrBuildNodeList_db);
extern xmlXPathObjectPtr xmlXPtrWrapLocationSet_db(xmlLocationSetPtr);
CheckInterfacedef(xmlXPtrWrapLocationSet,xmlXPtrWrapLocationSet_db);
extern xmlXPathObjectPtr xmlXPtrNewLocationSetNodes_db(xmlNodePtr, xmlNodePtr);
CheckInterfacedef(xmlXPtrNewLocationSetNodes,xmlXPtrNewLocationSetNodes_db);
extern xmlXPathObjectPtr xmlXPtrNewLocationSetNodeSet_db(xmlNodeSetPtr);
CheckInterfacedef(xmlXPtrNewLocationSetNodeSet,xmlXPtrNewLocationSetNodeSet_db);
extern void xmlXPtrLocationSetDel_db(xmlLocationSetPtr, xmlXPathObjectPtr);
CheckInterfacedef(xmlXPtrLocationSetDel,xmlXPtrLocationSetDel_db);
extern void xmlXPtrLocationSetRemove_db(xmlLocationSetPtr, int);
CheckInterfacedef(xmlXPtrLocationSetRemove,xmlXPtrLocationSetRemove_db);
extern xmlXPathObjectPtr xmlXPtrNewCollapsedRange_db(xmlNodePtr);
CheckInterfacedef(xmlXPtrNewCollapsedRange,xmlXPtrNewCollapsedRange_db);
extern xmlXPathObjectPtr xmlXPtrNewRangePointNode_db(xmlXPathObjectPtr, xmlNodePtr);
CheckInterfacedef(xmlXPtrNewRangePointNode,xmlXPtrNewRangePointNode_db);
extern void xmlXPtrLocationSetAdd_db(xmlLocationSetPtr, xmlXPathObjectPtr);
CheckInterfacedef(xmlXPtrLocationSetAdd,xmlXPtrLocationSetAdd_db);
extern void xmlXPtrFreeLocationSet_db(xmlLocationSetPtr);
CheckInterfacedef(xmlXPtrFreeLocationSet,xmlXPtrFreeLocationSet_db);
#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests passed out of %d tests in libxml2/libxml/xpointer.h\n\n",pcnt,cnt);
return cnt;
#endif

}
