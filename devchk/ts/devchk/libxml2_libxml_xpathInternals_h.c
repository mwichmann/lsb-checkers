/*
 * Test of libxml2/libxml/xpathInternals.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#define __LSB_VERSION__ 40
#include <libxml/xmlregexp.h>
#include "libxml2/libxml/xpathInternals.h"



#ifdef TET_TEST
void libxml2_libxml_xpathInternals_h()
{
#else
int libxml2_libxml_xpathInternals_h()
{
#endif

int cnt=0;

int pcnt=0;
#ifdef TET_TEST
Msg("Checking data structures in libxml2/libxml/xpathInternals.h\n");
#endif

printf("Checking data structures in libxml2/libxml/xpathInternals.h\n");
#if _LSB_DEFAULT_ARCH
/* No test for xmlXPathSetError(ctxt,err) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for xmlXPathSetArityError(ctxt) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for xmlXPathSetTypeError(ctxt) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for xmlXPathGetError(ctxt) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for xmlXPathCheckError(ctxt) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for xmlXPathGetDocument(ctxt) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for xmlXPathGetContextNode(ctxt) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for xmlXPathReturnBoolean(ctxt,val) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for xmlXPathReturnTrue(ctxt) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for xmlXPathReturnFalse(ctxt) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for xmlXPathReturnNumber(ctxt,val) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for xmlXPathReturnString(ctxt,str) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for xmlXPathReturnEmptyString(ctxt) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for xmlXPathReturnNodeSet(ctxt,ns) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for xmlXPathReturnEmptyNodeSet(ctxt) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for xmlXPathReturnExternal(ctxt,val) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for xmlXPathStackIsNodeSet(ctxt) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for xmlXPathStackIsExternal(ctxt) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for xmlXPathEmptyNodeSet(ns) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for CHECK_ERROR */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for CHECK_ERROR0 */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for XP_ERROR(X) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for XP_ERROR0(X) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for CHECK_TYPE(typeval) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for CHECK_TYPE0(typeval) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for CHECK_ARITY(x) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for CAST_TO_STRING */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for CAST_TO_NUMBER */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for CAST_TO_BOOLEAN */
#endif

extern void xmlXPathStartsWithFunction_db(xmlXPathParserContextPtr, int);
CheckInterfacedef(xmlXPathStartsWithFunction,xmlXPathStartsWithFunction_db);
extern const xmlChar * xmlXPathNsLookup_db(xmlXPathContextPtr, const xmlChar *);
CheckInterfacedef(xmlXPathNsLookup,xmlXPathNsLookup_db);
extern xmlNodeSetPtr xmlXPathNodeTrailing_db(xmlNodeSetPtr, xmlNodePtr);
CheckInterfacedef(xmlXPathNodeTrailing,xmlXPathNodeTrailing_db);
extern xmlNodeSetPtr xmlXPathNodeLeadingSorted_db(xmlNodeSetPtr, xmlNodePtr);
CheckInterfacedef(xmlXPathNodeLeadingSorted,xmlXPathNodeLeadingSorted_db);
extern xmlXPathObjectPtr xmlXPathNewBoolean_db(int);
CheckInterfacedef(xmlXPathNewBoolean,xmlXPathNewBoolean_db);
extern double xmlXPathStringEvalNumber_db(const xmlChar *);
CheckInterfacedef(xmlXPathStringEvalNumber,xmlXPathStringEvalNumber_db);
extern void xmlXPathNodeSetDel_db(xmlNodeSetPtr, xmlNodePtr);
CheckInterfacedef(xmlXPathNodeSetDel,xmlXPathNodeSetDel_db);
extern void xmlXPathBooleanFunction_db(xmlXPathParserContextPtr, int);
CheckInterfacedef(xmlXPathBooleanFunction,xmlXPathBooleanFunction_db);
extern xmlXPathObjectPtr xmlXPathNewCString_db(const char *);
CheckInterfacedef(xmlXPathNewCString,xmlXPathNewCString_db);
extern void xmlXPathNodeSetAddNs_db(xmlNodeSetPtr, xmlNodePtr, xmlNsPtr);
CheckInterfacedef(xmlXPathNodeSetAddNs,xmlXPathNodeSetAddNs_db);
extern xmlNodeSetPtr xmlXPathLeading_db(xmlNodeSetPtr, xmlNodeSetPtr);
CheckInterfacedef(xmlXPathLeading,xmlXPathLeading_db);
extern void xmlXPathSumFunction_db(xmlXPathParserContextPtr, int);
CheckInterfacedef(xmlXPathSumFunction,xmlXPathSumFunction_db);
extern void xmlXPathSubstringAfterFunction_db(xmlXPathParserContextPtr, int);
CheckInterfacedef(xmlXPathSubstringAfterFunction,xmlXPathSubstringAfterFunction_db);
extern void xmlXPathNodeSetAdd_db(xmlNodeSetPtr, xmlNodePtr);
CheckInterfacedef(xmlXPathNodeSetAdd,xmlXPathNodeSetAdd_db);
extern void xmlXPathCeilingFunction_db(xmlXPathParserContextPtr, int);
CheckInterfacedef(xmlXPathCeilingFunction,xmlXPathCeilingFunction_db);
extern void xmlXPathLastFunction_db(xmlXPathParserContextPtr, int);
CheckInterfacedef(xmlXPathLastFunction,xmlXPathLastFunction_db);
extern xmlNodePtr xmlXPathNextPreceding_db(xmlXPathParserContextPtr, xmlNodePtr);
CheckInterfacedef(xmlXPathNextPreceding,xmlXPathNextPreceding_db);
extern void xmlXPathDebugDumpCompExpr_db(FILE *, xmlXPathCompExprPtr, int);
CheckInterfacedef(xmlXPathDebugDumpCompExpr,xmlXPathDebugDumpCompExpr_db);
extern void xmlXPathFreeParserContext_db(xmlXPathParserContextPtr);
CheckInterfacedef(xmlXPathFreeParserContext,xmlXPathFreeParserContext_db);
extern xmlNodeSetPtr xmlXPathNodeLeading_db(xmlNodeSetPtr, xmlNodePtr);
CheckInterfacedef(xmlXPathNodeLeading,xmlXPathNodeLeading_db);
extern void xmlXPathDivValues_db(xmlXPathParserContextPtr);
CheckInterfacedef(xmlXPathDivValues,xmlXPathDivValues_db);
extern xmlNodePtr xmlXPathNextAttribute_db(xmlXPathParserContextPtr, xmlNodePtr);
CheckInterfacedef(xmlXPathNextAttribute,xmlXPathNextAttribute_db);
extern void xmlXPathNodeSetRemove_db(xmlNodeSetPtr, int);
CheckInterfacedef(xmlXPathNodeSetRemove,xmlXPathNodeSetRemove_db);
extern xmlNodeSetPtr xmlXPathDistinct_db(xmlNodeSetPtr);
CheckInterfacedef(xmlXPathDistinct,xmlXPathDistinct_db);
extern int xmlXPathEvaluatePredicateResult_db(xmlXPathParserContextPtr, xmlXPathObjectPtr);
CheckInterfacedef(xmlXPathEvaluatePredicateResult,xmlXPathEvaluatePredicateResult_db);
extern xmlXPathObjectPtr xmlXPathNewFloat_db(double);
CheckInterfacedef(xmlXPathNewFloat,xmlXPathNewFloat_db);
extern xmlXPathObjectPtr xmlXPathWrapExternal_db(void *);
CheckInterfacedef(xmlXPathWrapExternal,xmlXPathWrapExternal_db);
extern xmlNodePtr xmlXPathNextFollowing_db(xmlXPathParserContextPtr, xmlNodePtr);
CheckInterfacedef(xmlXPathNextFollowing,xmlXPathNextFollowing_db);
extern void xmlXPathRegisterFuncLookup_db(xmlXPathContextPtr, xmlXPathFuncLookupFunc, void *);
CheckInterfacedef(xmlXPathRegisterFuncLookup,xmlXPathRegisterFuncLookup_db);
extern void xmlXPathFloorFunction_db(xmlXPathParserContextPtr, int);
CheckInterfacedef(xmlXPathFloorFunction,xmlXPathFloorFunction_db);
extern void xmlXPathNotFunction_db(xmlXPathParserContextPtr, int);
CheckInterfacedef(xmlXPathNotFunction,xmlXPathNotFunction_db);
extern xmlXPathObjectPtr xmlXPathNewNodeSet_db(xmlNodePtr);
CheckInterfacedef(xmlXPathNewNodeSet,xmlXPathNewNodeSet_db);
extern xmlXPathObjectPtr xmlXPathVariableLookup_db(xmlXPathContextPtr, const xmlChar *);
CheckInterfacedef(xmlXPathVariableLookup,xmlXPathVariableLookup_db);
extern xmlNodeSetPtr xmlXPathLeadingSorted_db(xmlNodeSetPtr, xmlNodeSetPtr);
CheckInterfacedef(xmlXPathLeadingSorted,xmlXPathLeadingSorted_db);
extern void xmlXPathPositionFunction_db(xmlXPathParserContextPtr, int);
CheckInterfacedef(xmlXPathPositionFunction,xmlXPathPositionFunction_db);
extern void xmlXPathRegisterAllFunctions_db(xmlXPathContextPtr);
CheckInterfacedef(xmlXPathRegisterAllFunctions,xmlXPathRegisterAllFunctions_db);
extern void xmlXPathRegisteredFuncsCleanup_db(xmlXPathContextPtr);
CheckInterfacedef(xmlXPathRegisteredFuncsCleanup,xmlXPathRegisteredFuncsCleanup_db);
extern xmlNodePtr xmlXPathNextDescendantOrSelf_db(xmlXPathParserContextPtr, xmlNodePtr);
CheckInterfacedef(xmlXPathNextDescendantOrSelf,xmlXPathNextDescendantOrSelf_db);
extern int xmlXPathPopBoolean_db(xmlXPathParserContextPtr);
CheckInterfacedef(xmlXPathPopBoolean,xmlXPathPopBoolean_db);
extern xmlNodePtr xmlXPathNextParent_db(xmlXPathParserContextPtr, xmlNodePtr);
CheckInterfacedef(xmlXPathNextParent,xmlXPathNextParent_db);
extern xmlXPathParserContextPtr xmlXPathNewParserContext_db(const xmlChar *, xmlXPathContextPtr);
CheckInterfacedef(xmlXPathNewParserContext,xmlXPathNewParserContext_db);
extern void xmlXPathRoundFunction_db(xmlXPathParserContextPtr, int);
CheckInterfacedef(xmlXPathRoundFunction,xmlXPathRoundFunction_db);
extern void xmlXPathLangFunction_db(xmlXPathParserContextPtr, int);
CheckInterfacedef(xmlXPathLangFunction,xmlXPathLangFunction_db);
extern void xmlXPathStringLengthFunction_db(xmlXPathParserContextPtr, int);
CheckInterfacedef(xmlXPathStringLengthFunction,xmlXPathStringLengthFunction_db);
extern void xmlXPathLocalNameFunction_db(xmlXPathParserContextPtr, int);
CheckInterfacedef(xmlXPathLocalNameFunction,xmlXPathLocalNameFunction_db);
extern int xmlXPathIsNodeType_db(const xmlChar *);
CheckInterfacedef(xmlXPathIsNodeType,xmlXPathIsNodeType_db);
extern int valuePush_db(xmlXPathParserContextPtr, xmlXPathObjectPtr);
CheckInterfacedef(valuePush,valuePush_db);
extern void xmlXPathNodeSetAddUnique_db(xmlNodeSetPtr, xmlNodePtr);
CheckInterfacedef(xmlXPathNodeSetAddUnique,xmlXPathNodeSetAddUnique_db);
extern void xmlXPathModValues_db(xmlXPathParserContextPtr);
CheckInterfacedef(xmlXPathModValues,xmlXPathModValues_db);
extern int xmlXPathRegisterVariable_db(xmlXPathContextPtr, const xmlChar *, xmlXPathObjectPtr);
CheckInterfacedef(xmlXPathRegisterVariable,xmlXPathRegisterVariable_db);
extern xmlXPathObjectPtr valuePop_db(xmlXPathParserContextPtr);
CheckInterfacedef(valuePop,valuePop_db);
extern void xmlXPathNodeSetSort_db(xmlNodeSetPtr);
CheckInterfacedef(xmlXPathNodeSetSort,xmlXPathNodeSetSort_db);
extern xmlNodeSetPtr xmlXPathNodeSetMerge_db(xmlNodeSetPtr, xmlNodeSetPtr);
CheckInterfacedef(xmlXPathNodeSetMerge,xmlXPathNodeSetMerge_db);
extern void xmlXPathNormalizeFunction_db(xmlXPathParserContextPtr, int);
CheckInterfacedef(xmlXPathNormalizeFunction,xmlXPathNormalizeFunction_db);
extern void xmlXPathRoot_db(xmlXPathParserContextPtr);
CheckInterfacedef(xmlXPathRoot,xmlXPathRoot_db);
extern void xmlXPathNodeSetFreeNs_db(xmlNsPtr);
CheckInterfacedef(xmlXPathNodeSetFreeNs,xmlXPathNodeSetFreeNs_db);
extern void xmlXPathAddValues_db(xmlXPathParserContextPtr);
CheckInterfacedef(xmlXPathAddValues,xmlXPathAddValues_db);
extern void xmlXPathIdFunction_db(xmlXPathParserContextPtr, int);
CheckInterfacedef(xmlXPathIdFunction,xmlXPathIdFunction_db);
extern int xmlXPathRegisterVariableNS_db(xmlXPathContextPtr, const xmlChar *, const xmlChar *, xmlXPathObjectPtr);
CheckInterfacedef(xmlXPathRegisterVariableNS,xmlXPathRegisterVariableNS_db);
extern void xmlXPathContainsFunction_db(xmlXPathParserContextPtr, int);
CheckInterfacedef(xmlXPathContainsFunction,xmlXPathContainsFunction_db);
extern void xmlXPathStringFunction_db(xmlXPathParserContextPtr, int);
CheckInterfacedef(xmlXPathStringFunction,xmlXPathStringFunction_db);
extern xmlNodePtr xmlXPathNextDescendant_db(xmlXPathParserContextPtr, xmlNodePtr);
CheckInterfacedef(xmlXPathNextDescendant,xmlXPathNextDescendant_db);
extern xmlNodePtr xmlXPathNextAncestor_db(xmlXPathParserContextPtr, xmlNodePtr);
CheckInterfacedef(xmlXPathNextAncestor,xmlXPathNextAncestor_db);
extern xmlXPathObjectPtr xmlXPathWrapNodeSet_db(xmlNodeSetPtr);
CheckInterfacedef(xmlXPathWrapNodeSet,xmlXPathWrapNodeSet_db);
extern xmlXPathObjectPtr xmlXPathNewNodeSetList_db(xmlNodeSetPtr);
CheckInterfacedef(xmlXPathNewNodeSetList,xmlXPathNewNodeSetList_db);
extern void xmlXPathTranslateFunction_db(xmlXPathParserContextPtr, int);
CheckInterfacedef(xmlXPathTranslateFunction,xmlXPathTranslateFunction_db);
extern xmlNodeSetPtr xmlXPathPopNodeSet_db(xmlXPathParserContextPtr);
CheckInterfacedef(xmlXPathPopNodeSet,xmlXPathPopNodeSet_db);
extern xmlNodePtr xmlXPathNextAncestorOrSelf_db(xmlXPathParserContextPtr, xmlNodePtr);
CheckInterfacedef(xmlXPathNextAncestorOrSelf,xmlXPathNextAncestorOrSelf_db);
extern xmlNodeSetPtr xmlXPathTrailing_db(xmlNodeSetPtr, xmlNodeSetPtr);
CheckInterfacedef(xmlXPathTrailing,xmlXPathTrailing_db);
extern void xmlXPathEvalExpr_db(xmlXPathParserContextPtr);
CheckInterfacedef(xmlXPathEvalExpr,xmlXPathEvalExpr_db);
extern void xmlXPathSubValues_db(xmlXPathParserContextPtr);
CheckInterfacedef(xmlXPathSubValues,xmlXPathSubValues_db);
extern xmlNodePtr xmlXPathNextPrecedingSibling_db(xmlXPathParserContextPtr, xmlNodePtr);
CheckInterfacedef(xmlXPathNextPrecedingSibling,xmlXPathNextPrecedingSibling_db);
extern xmlXPathObjectPtr xmlXPathNewString_db(const xmlChar *);
CheckInterfacedef(xmlXPathNewString,xmlXPathNewString_db);
extern xmlNodeSetPtr xmlXPathDistinctSorted_db(xmlNodeSetPtr);
CheckInterfacedef(xmlXPathDistinctSorted,xmlXPathDistinctSorted_db);
extern int xmlXPathNotEqualValues_db(xmlXPathParserContextPtr);
CheckInterfacedef(xmlXPathNotEqualValues,xmlXPathNotEqualValues_db);
extern xmlNodePtr xmlXPathNextChild_db(xmlXPathParserContextPtr, xmlNodePtr);
CheckInterfacedef(xmlXPathNextChild,xmlXPathNextChild_db);
extern void xmlXPathRegisterVariableLookup_db(xmlXPathContextPtr, xmlXPathVariableLookupFunc, void *);
CheckInterfacedef(xmlXPathRegisterVariableLookup,xmlXPathRegisterVariableLookup_db);
extern xmlChar * xmlXPathParseNCName_db(xmlXPathParserContextPtr);
CheckInterfacedef(xmlXPathParseNCName,xmlXPathParseNCName_db);
extern xmlChar * xmlXPathParseName_db(xmlXPathParserContextPtr);
CheckInterfacedef(xmlXPathParseName,xmlXPathParseName_db);
extern xmlNodePtr xmlXPathNextNamespace_db(xmlXPathParserContextPtr, xmlNodePtr);
CheckInterfacedef(xmlXPathNextNamespace,xmlXPathNextNamespace_db);
extern xmlNodeSetPtr xmlXPathDifference_db(xmlNodeSetPtr, xmlNodeSetPtr);
CheckInterfacedef(xmlXPathDifference,xmlXPathDifference_db);
extern xmlNodePtr xmlXPathNextSelf_db(xmlXPathParserContextPtr, xmlNodePtr);
CheckInterfacedef(xmlXPathNextSelf,xmlXPathNextSelf_db);
extern void xmlXPathRegisteredNsCleanup_db(xmlXPathContextPtr);
CheckInterfacedef(xmlXPathRegisteredNsCleanup,xmlXPathRegisteredNsCleanup_db);
extern xmlXPathObjectPtr xmlXPathNewValueTree_db(xmlNodePtr);
CheckInterfacedef(xmlXPathNewValueTree,xmlXPathNewValueTree_db);
extern void xmlXPathSubstringBeforeFunction_db(xmlXPathParserContextPtr, int);
CheckInterfacedef(xmlXPathSubstringBeforeFunction,xmlXPathSubstringBeforeFunction_db);
extern void xmlXPathTrueFunction_db(xmlXPathParserContextPtr, int);
CheckInterfacedef(xmlXPathTrueFunction,xmlXPathTrueFunction_db);
extern void xmlXPathFalseFunction_db(xmlXPathParserContextPtr, int);
CheckInterfacedef(xmlXPathFalseFunction,xmlXPathFalseFunction_db);
extern void xmlXPathCountFunction_db(xmlXPathParserContextPtr, int);
CheckInterfacedef(xmlXPathCountFunction,xmlXPathCountFunction_db);
extern void xmlXPathErr_db(xmlXPathParserContextPtr, int);
CheckInterfacedef(xmlXPathErr,xmlXPathErr_db);
extern xmlNodeSetPtr xmlXPathIntersection_db(xmlNodeSetPtr, xmlNodeSetPtr);
CheckInterfacedef(xmlXPathIntersection,xmlXPathIntersection_db);
extern void xmlXPathDebugDumpObject_db(FILE *, xmlXPathObjectPtr, int);
CheckInterfacedef(xmlXPathDebugDumpObject,xmlXPathDebugDumpObject_db);
extern xmlXPathObjectPtr xmlXPathVariableLookupNS_db(xmlXPathContextPtr, const xmlChar *, const xmlChar *);
CheckInterfacedef(xmlXPathVariableLookupNS,xmlXPathVariableLookupNS_db);
extern int xmlXPathRegisterFunc_db(xmlXPathContextPtr, const xmlChar *, xmlXPathFunction);
CheckInterfacedef(xmlXPathRegisterFunc,xmlXPathRegisterFunc_db);
extern void xmlXPathValueFlipSign_db(xmlXPathParserContextPtr);
CheckInterfacedef(xmlXPathValueFlipSign,xmlXPathValueFlipSign_db);
extern xmlNodePtr xmlXPathNextFollowingSibling_db(xmlXPathParserContextPtr, xmlNodePtr);
CheckInterfacedef(xmlXPathNextFollowingSibling,xmlXPathNextFollowingSibling_db);
extern xmlNodeSetPtr xmlXPathNodeTrailingSorted_db(xmlNodeSetPtr, xmlNodePtr);
CheckInterfacedef(xmlXPathNodeTrailingSorted,xmlXPathNodeTrailingSorted_db);
extern void xmlXPathRegisteredVariablesCleanup_db(xmlXPathContextPtr);
CheckInterfacedef(xmlXPathRegisteredVariablesCleanup,xmlXPathRegisteredVariablesCleanup_db);
extern double xmlXPathPopNumber_db(xmlXPathParserContextPtr);
CheckInterfacedef(xmlXPathPopNumber,xmlXPathPopNumber_db);
extern void xmlXPathSubstringFunction_db(xmlXPathParserContextPtr, int);
CheckInterfacedef(xmlXPathSubstringFunction,xmlXPathSubstringFunction_db);
extern int xmlXPathEqualValues_db(xmlXPathParserContextPtr);
CheckInterfacedef(xmlXPathEqualValues,xmlXPathEqualValues_db);
extern void xmlXPathNamespaceURIFunction_db(xmlXPathParserContextPtr, int);
CheckInterfacedef(xmlXPathNamespaceURIFunction,xmlXPathNamespaceURIFunction_db);
extern xmlNodeSetPtr xmlXPathTrailingSorted_db(xmlNodeSetPtr, xmlNodeSetPtr);
CheckInterfacedef(xmlXPathTrailingSorted,xmlXPathTrailingSorted_db);
extern int xmlXPathHasSameNodes_db(xmlNodeSetPtr, xmlNodeSetPtr);
CheckInterfacedef(xmlXPathHasSameNodes,xmlXPathHasSameNodes_db);
extern xmlXPathObjectPtr xmlXPathWrapCString_db(char *);
CheckInterfacedef(xmlXPathWrapCString,xmlXPathWrapCString_db);
extern xmlChar * xmlXPathPopString_db(xmlXPathParserContextPtr);
CheckInterfacedef(xmlXPathPopString,xmlXPathPopString_db);
extern int xmlXPathCompareValues_db(xmlXPathParserContextPtr, int, int);
CheckInterfacedef(xmlXPathCompareValues,xmlXPathCompareValues_db);
extern int xmlXPathRegisterFuncNS_db(xmlXPathContextPtr, const xmlChar *, const xmlChar *, xmlXPathFunction);
CheckInterfacedef(xmlXPathRegisterFuncNS,xmlXPathRegisterFuncNS_db);
extern void xmlXPathNumberFunction_db(xmlXPathParserContextPtr, int);
CheckInterfacedef(xmlXPathNumberFunction,xmlXPathNumberFunction_db);
extern void * xmlXPathPopExternal_db(xmlXPathParserContextPtr);
CheckInterfacedef(xmlXPathPopExternal,xmlXPathPopExternal_db);
extern xmlXPathFunction xmlXPathFunctionLookupNS_db(xmlXPathContextPtr, const xmlChar *, const xmlChar *);
CheckInterfacedef(xmlXPathFunctionLookupNS,xmlXPathFunctionLookupNS_db);
extern void xmlXPathConcatFunction_db(xmlXPathParserContextPtr, int);
CheckInterfacedef(xmlXPathConcatFunction,xmlXPathConcatFunction_db);
extern int xmlXPathNodeSetContains_db(xmlNodeSetPtr, xmlNodePtr);
CheckInterfacedef(xmlXPathNodeSetContains,xmlXPathNodeSetContains_db);
extern xmlXPathFunction xmlXPathFunctionLookup_db(xmlXPathContextPtr, const xmlChar *);
CheckInterfacedef(xmlXPathFunctionLookup,xmlXPathFunctionLookup_db);
extern xmlXPathObjectPtr xmlXPathWrapString_db(xmlChar *);
CheckInterfacedef(xmlXPathWrapString,xmlXPathWrapString_db);
extern void xmlXPatherror_db(xmlXPathParserContextPtr, const char *, int, int);
CheckInterfacedef(xmlXPatherror,xmlXPatherror_db);
extern void xmlXPathMultValues_db(xmlXPathParserContextPtr);
CheckInterfacedef(xmlXPathMultValues,xmlXPathMultValues_db);
extern int xmlXPathRegisterNs_db(xmlXPathContextPtr, const xmlChar *, const xmlChar *);
CheckInterfacedef(xmlXPathRegisterNs,xmlXPathRegisterNs_db);
#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests passed out of %d tests in libxml2/libxml/xpathInternals.h\n\n",pcnt,cnt);
return cnt;
#endif

}
