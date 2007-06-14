/*
 * Test of libxml2/libxml/globals.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#include <libxml/xmlregexp.h>
#undef  docbDefaultSAXHandler
#undef  htmlDefaultSAXHandler
#undef  oldXMLWDcompatibility
#undef  xmlBufferAllocScheme
#undef  xmlDefaultBufferSize 
#undef  xmlDefaultSAXHandler
#undef  xmlDefaultSAXLocator 
#undef  xmlDoValidityCheckingDefaultValue
#undef  xmlFree
#undef  xmlGenericError 
#undef  xmlStructuredError
#undef  xmlGenericErrorContext
#undef  xmlGetWarningsDefaultValue 
#undef  xmlIndentTreeOutput
#undef  xmlTreeIndentString
#undef  xmlKeepBlanksDefaultValue
#undef  xmlLineNumbersDefaultValue
#undef  xmlLoadExtDtdDefaultValue
#undef  xmlMalloc
#undef  xmlMallocAtomic
#undef  xmlMemStrdup
#undef  xmlParserDebugEntities
#undef  xmlParserVersion
#undef  xmlPedanticParserDefaultValue
#undef  xmlRealloc
#undef  xmlSaveNoEmptyTags
#undef  xmlSubstituteEntitiesDefaultValue
#undef  xmlRegisterNodeDefaultValue
#undef  xmlDeregisterNodeDefaultValue
#undef  xmlLastError
#undef  xmlParserInputBufferCreateFilenameValue
#undef  xmlOutputBufferCreateFilenameValue
#ifdef LSBCC_MODE
struct _xmlGlobalState {};
#endif
#include "libxml2/libxml/globals.h"



#ifdef TET_TEST
void libxml2_libxml_globals_h()
{
#else
int libxml2_libxml_globals_h()
{
#endif

int cnt=0;

int pcnt=0;
#ifdef TET_TEST
Msg("Checking data structures in libxml2/libxml/globals.h\n");
#endif

printf("Checking data structures in libxml2/libxml/globals.h\n");
#if _LSB_DEFAULT_ARCH
/* No test for docbDefaultSAXHandler */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for htmlDefaultSAXHandler */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for xmlLastError */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for oldXMLWDcompatibility */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for xmlBufferAllocScheme */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for xmlDefaultBufferSize */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for xmlDefaultSAXHandler */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for xmlDefaultSAXLocator */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for xmlDoValidityCheckingDefaultValue */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for xmlGenericError */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for xmlStructuredError */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for xmlGenericErrorContext */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for xmlGetWarningsDefaultValue */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for xmlIndentTreeOutput */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for xmlTreeIndentString */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for xmlKeepBlanksDefaultValue */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for xmlLineNumbersDefaultValue */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for xmlLoadExtDtdDefaultValue */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for xmlParserDebugEntities */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for xmlParserVersion */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for xmlPedanticParserDefaultValue */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for xmlSaveNoEmptyTags */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for xmlSubstituteEntitiesDefaultValue */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for xmlRegisterNodeDefaultValue */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for xmlDeregisterNodeDefaultValue */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for xmlParserInputBufferCreateFilenameValue */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for xmlOutputBufferCreateFilenameValue */
#endif

#if __i386__
CheckTypeSize(xmlOutputBufferCreateFilenameFunc,4, 14917, 2, 3.1, NULL, 14916, NULL)
#elif __x86_64__
CheckTypeSize(xmlOutputBufferCreateFilenameFunc,8, 14917, 11, 3.1, NULL, 14916, NULL)
#elif __ia64__
CheckTypeSize(xmlOutputBufferCreateFilenameFunc,8, 14917, 3, 3.1, NULL, 14916, NULL)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(xmlOutputBufferCreateFilenameFunc,4, 14917, 6, 3.1, NULL, 14916, NULL)
#elif __powerpc64__
CheckTypeSize(xmlOutputBufferCreateFilenameFunc,8, 14917, 9, 3.1, NULL, 14916, NULL)
#elif __s390__ && !__s390x__
CheckTypeSize(xmlOutputBufferCreateFilenameFunc,4, 14917, 10, 3.1, NULL, 14916, NULL)
#elif __s390x__
CheckTypeSize(xmlOutputBufferCreateFilenameFunc,8, 14917, 12, 3.1, NULL, 14916, NULL)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14916,NULL);\n",architecture,14917,0);
Msg("Find size of xmlOutputBufferCreateFilenameFunc (14917)\n");
#endif

#if __i386__
CheckTypeSize(xmlRegisterNodeFunc,4, 14920, 2, 3.1, NULL, 14919, NULL)
#elif __x86_64__
CheckTypeSize(xmlRegisterNodeFunc,8, 14920, 11, 3.1, NULL, 14919, NULL)
#elif __ia64__
CheckTypeSize(xmlRegisterNodeFunc,8, 14920, 3, 3.1, NULL, 14919, NULL)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(xmlRegisterNodeFunc,4, 14920, 6, 3.1, NULL, 14919, NULL)
#elif __powerpc64__
CheckTypeSize(xmlRegisterNodeFunc,8, 14920, 9, 3.1, NULL, 14919, NULL)
#elif __s390__ && !__s390x__
CheckTypeSize(xmlRegisterNodeFunc,4, 14920, 10, 3.1, NULL, 14919, NULL)
#elif __s390x__
CheckTypeSize(xmlRegisterNodeFunc,8, 14920, 12, 3.1, NULL, 14919, NULL)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14919,NULL);\n",architecture,14920,0);
Msg("Find size of xmlRegisterNodeFunc (14920)\n");
#endif

#if __i386__
CheckTypeSize(xmlParserInputBufferCreateFilenameFunc,4, 14922, 2, 3.1, NULL, 14921, NULL)
#elif __x86_64__
CheckTypeSize(xmlParserInputBufferCreateFilenameFunc,8, 14922, 11, 3.1, NULL, 14921, NULL)
#elif __ia64__
CheckTypeSize(xmlParserInputBufferCreateFilenameFunc,8, 14922, 3, 3.1, NULL, 14921, NULL)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(xmlParserInputBufferCreateFilenameFunc,4, 14922, 6, 3.1, NULL, 14921, NULL)
#elif __powerpc64__
CheckTypeSize(xmlParserInputBufferCreateFilenameFunc,8, 14922, 9, 3.1, NULL, 14921, NULL)
#elif __s390__ && !__s390x__
CheckTypeSize(xmlParserInputBufferCreateFilenameFunc,4, 14922, 10, 3.1, NULL, 14921, NULL)
#elif __s390x__
CheckTypeSize(xmlParserInputBufferCreateFilenameFunc,8, 14922, 12, 3.1, NULL, 14921, NULL)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14921,NULL);\n",architecture,14922,0);
Msg("Find size of xmlParserInputBufferCreateFilenameFunc (14922)\n");
#endif

#if __i386__
CheckTypeSize(xmlSAXHandlerV1,112, 14925, 2, 3.1, NULL, 14924, NULL)
#elif __x86_64__
CheckTypeSize(xmlSAXHandlerV1,224, 14925, 11, 3.1, NULL, 14924, NULL)
#elif __ia64__
CheckTypeSize(xmlSAXHandlerV1,224, 14925, 3, 3.1, NULL, 14924, NULL)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(xmlSAXHandlerV1,112, 14925, 6, 3.1, NULL, 14924, NULL)
#elif __powerpc64__
CheckTypeSize(xmlSAXHandlerV1,224, 14925, 9, 3.1, NULL, 14924, NULL)
#elif __s390__ && !__s390x__
CheckTypeSize(xmlSAXHandlerV1,112, 14925, 10, 3.1, NULL, 14924, NULL)
#elif __s390x__
CheckTypeSize(xmlSAXHandlerV1,224, 14925, 12, 3.1, NULL, 14924, NULL)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14924,NULL);\n",architecture,14925,0);
Msg("Find size of xmlSAXHandlerV1 (14925)\n");
#endif

#if __i386__
CheckTypeSize(xmlDeregisterNodeFunc,4, 14927, 2, 3.1, NULL, 14919, NULL)
#elif __x86_64__
CheckTypeSize(xmlDeregisterNodeFunc,8, 14927, 11, 3.1, NULL, 14919, NULL)
#elif __ia64__
CheckTypeSize(xmlDeregisterNodeFunc,8, 14927, 3, 3.1, NULL, 14919, NULL)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(xmlDeregisterNodeFunc,4, 14927, 6, 3.1, NULL, 14919, NULL)
#elif __powerpc64__
CheckTypeSize(xmlDeregisterNodeFunc,8, 14927, 9, 3.1, NULL, 14919, NULL)
#elif __s390__ && !__s390x__
CheckTypeSize(xmlDeregisterNodeFunc,4, 14927, 10, 3.1, NULL, 14919, NULL)
#elif __s390x__
CheckTypeSize(xmlDeregisterNodeFunc,8, 14927, 12, 3.1, NULL, 14919, NULL)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14919,NULL);\n",architecture,14927,0);
Msg("Find size of xmlDeregisterNodeFunc (14927)\n");
#endif

#if __i386__
CheckTypeSize(xmlGlobalState,512, 14933, 2, 3.1, NULL, 14932, NULL)
#elif __x86_64__
CheckTypeSize(xmlGlobalState,960, 14933, 11, 3.1, NULL, 14932, NULL)
#elif __ia64__
CheckTypeSize(xmlGlobalState,960, 14933, 3, 3.1, NULL, 14932, NULL)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(xmlGlobalState,512, 14933, 6, 3.1, NULL, 14932, NULL)
#elif __powerpc64__
CheckTypeSize(xmlGlobalState,960, 14933, 9, 3.1, NULL, 14932, NULL)
#elif __s390__ && !__s390x__
CheckTypeSize(xmlGlobalState,512, 14933, 10, 3.1, NULL, 14932, NULL)
#elif __s390x__
CheckTypeSize(xmlGlobalState,960, 14933, 12, 3.1, NULL, 14932, NULL)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14932,NULL);\n",architecture,14933,0);
Msg("Find size of xmlGlobalState (14933)\n");
#endif

#if __i386__
CheckTypeSize(xmlGlobalStatePtr,4, 14935, 2, 3.1, NULL, 14934, NULL)
#elif __x86_64__
CheckTypeSize(xmlGlobalStatePtr,8, 14935, 11, 3.1, NULL, 14934, NULL)
#elif __ia64__
CheckTypeSize(xmlGlobalStatePtr,8, 14935, 3, 3.1, NULL, 14934, NULL)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(xmlGlobalStatePtr,4, 14935, 6, 3.1, NULL, 14934, NULL)
#elif __powerpc64__
CheckTypeSize(xmlGlobalStatePtr,8, 14935, 9, 3.1, NULL, 14934, NULL)
#elif __s390__ && !__s390x__
CheckTypeSize(xmlGlobalStatePtr,4, 14935, 10, 3.1, NULL, 14934, NULL)
#elif __s390x__
CheckTypeSize(xmlGlobalStatePtr,8, 14935, 12, 3.1, NULL, 14934, NULL)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14934, NULL);\n",architecture,14935,0);
Msg("Find size of xmlGlobalStatePtr (14935)\n");
#endif

extern int * __xmlParserDebugEntities_db(void);
CheckInterfacedef(__xmlParserDebugEntities,__xmlParserDebugEntities_db);
extern int xmlThrDefDoValidityCheckingDefaultValue_db(int);
CheckInterfacedef(xmlThrDefDoValidityCheckingDefaultValue,xmlThrDefDoValidityCheckingDefaultValue_db);
extern xmlOutputBufferCreateFilenameFunc * __xmlOutputBufferCreateFilenameValue_db(void);
CheckInterfacedef(__xmlOutputBufferCreateFilenameValue,__xmlOutputBufferCreateFilenameValue_db);
extern xmlRegisterNodeFunc xmlThrDefRegisterNodeDefault_db(xmlRegisterNodeFunc);
CheckInterfacedef(xmlThrDefRegisterNodeDefault,xmlThrDefRegisterNodeDefault_db);
extern const char * * __xmlTreeIndentString_db(void);
CheckInterfacedef(__xmlTreeIndentString,__xmlTreeIndentString_db);
extern xmlParserInputBufferCreateFilenameFunc xmlThrDefParserInputBufferCreateFilenameDefault_db(xmlParserInputBufferCreateFilenameFunc);
CheckInterfacedef(xmlThrDefParserInputBufferCreateFilenameDefault,xmlThrDefParserInputBufferCreateFilenameDefault_db);
extern xmlSAXLocator * __xmlDefaultSAXLocator_db(void);
CheckInterfacedef(__xmlDefaultSAXLocator,__xmlDefaultSAXLocator_db);
extern xmlParserInputBufferCreateFilenameFunc * __xmlParserInputBufferCreateFilenameValue_db(void);
CheckInterfacedef(__xmlParserInputBufferCreateFilenameValue,__xmlParserInputBufferCreateFilenameValue_db);
extern xmlSAXHandlerV1 * __htmlDefaultSAXHandler_db(void);
CheckInterfacedef(__htmlDefaultSAXHandler,__htmlDefaultSAXHandler_db);
extern int * __xmlPedanticParserDefaultValue_db(void);
CheckInterfacedef(__xmlPedanticParserDefaultValue,__xmlPedanticParserDefaultValue_db);
extern int xmlThrDefLineNumbersDefaultValue_db(int);
CheckInterfacedef(xmlThrDefLineNumbersDefaultValue,xmlThrDefLineNumbersDefaultValue_db);
extern int xmlThrDefIndentTreeOutput_db(int);
CheckInterfacedef(xmlThrDefIndentTreeOutput,xmlThrDefIndentTreeOutput_db);
extern xmlBufferAllocationScheme xmlThrDefBufferAllocScheme_db(xmlBufferAllocationScheme);
CheckInterfacedef(xmlThrDefBufferAllocScheme,xmlThrDefBufferAllocScheme_db);
extern xmlDeregisterNodeFunc * __xmlDeregisterNodeDefaultValue_db(void);
CheckInterfacedef(__xmlDeregisterNodeDefaultValue,__xmlDeregisterNodeDefaultValue_db);
extern int xmlThrDefDefaultBufferSize_db(int);
CheckInterfacedef(xmlThrDefDefaultBufferSize,xmlThrDefDefaultBufferSize_db);
extern int xmlThrDefKeepBlanksDefaultValue_db(int);
CheckInterfacedef(xmlThrDefKeepBlanksDefaultValue,xmlThrDefKeepBlanksDefaultValue_db);
extern int * __xmlKeepBlanksDefaultValue_db(void);
CheckInterfacedef(__xmlKeepBlanksDefaultValue,__xmlKeepBlanksDefaultValue_db);
extern void xmlThrDefSetStructuredErrorFunc_db(void *, xmlStructuredErrorFunc);
CheckInterfacedef(xmlThrDefSetStructuredErrorFunc,xmlThrDefSetStructuredErrorFunc_db);
extern xmlRegisterNodeFunc * __xmlRegisterNodeDefaultValue_db(void);
CheckInterfacedef(__xmlRegisterNodeDefaultValue,__xmlRegisterNodeDefaultValue_db);
extern int * __xmlDefaultBufferSize_db(void);
CheckInterfacedef(__xmlDefaultBufferSize,__xmlDefaultBufferSize_db);
extern xmlRegisterNodeFunc xmlRegisterNodeDefault_db(xmlRegisterNodeFunc);
CheckInterfacedef(xmlRegisterNodeDefault,xmlRegisterNodeDefault_db);
extern void xmlInitGlobals_db(void);
CheckInterfacedef(xmlInitGlobals,xmlInitGlobals_db);
extern xmlSAXHandlerV1 * __docbDefaultSAXHandler_db(void);
CheckInterfacedef(__docbDefaultSAXHandler,__docbDefaultSAXHandler_db);
extern xmlBufferAllocationScheme * __xmlBufferAllocScheme_db(void);
CheckInterfacedef(__xmlBufferAllocScheme,__xmlBufferAllocScheme_db);
extern int xmlThrDefPedanticParserDefaultValue_db(int);
CheckInterfacedef(xmlThrDefPedanticParserDefaultValue,xmlThrDefPedanticParserDefaultValue_db);
extern xmlStructuredErrorFunc * __xmlStructuredError_db(void);
CheckInterfacedef(__xmlStructuredError,__xmlStructuredError_db);
extern void xmlThrDefSetGenericErrorFunc_db(void *, xmlGenericErrorFunc);
CheckInterfacedef(xmlThrDefSetGenericErrorFunc,xmlThrDefSetGenericErrorFunc_db);
extern xmlOutputBufferCreateFilenameFunc xmlOutputBufferCreateFilenameDefault_db(xmlOutputBufferCreateFilenameFunc);
CheckInterfacedef(xmlOutputBufferCreateFilenameDefault,xmlOutputBufferCreateFilenameDefault_db);
extern int * __xmlGetWarningsDefaultValue_db(void);
CheckInterfacedef(__xmlGetWarningsDefaultValue,__xmlGetWarningsDefaultValue_db);
extern xmlOutputBufferCreateFilenameFunc xmlThrDefOutputBufferCreateFilenameDefault_db(xmlOutputBufferCreateFilenameFunc);
CheckInterfacedef(xmlThrDefOutputBufferCreateFilenameDefault,xmlThrDefOutputBufferCreateFilenameDefault_db);
extern int xmlThrDefGetWarningsDefaultValue_db(int);
CheckInterfacedef(xmlThrDefGetWarningsDefaultValue,xmlThrDefGetWarningsDefaultValue_db);
extern xmlParserInputBufferCreateFilenameFunc xmlParserInputBufferCreateFilenameDefault_db(xmlParserInputBufferCreateFilenameFunc);
CheckInterfacedef(xmlParserInputBufferCreateFilenameDefault,xmlParserInputBufferCreateFilenameDefault_db);
extern xmlParserInputBufferPtr xmlParserInputBufferCreateFilename_db(const char *, xmlCharEncoding);
CheckInterfacedef(xmlParserInputBufferCreateFilename,xmlParserInputBufferCreateFilename_db);
extern int * __xmlIndentTreeOutput_db(void);
CheckInterfacedef(__xmlIndentTreeOutput,__xmlIndentTreeOutput_db);
extern int xmlThrDefSaveNoEmptyTags_db(int);
CheckInterfacedef(xmlThrDefSaveNoEmptyTags,xmlThrDefSaveNoEmptyTags_db);
extern int * __xmlSaveNoEmptyTags_db(void);
CheckInterfacedef(__xmlSaveNoEmptyTags,__xmlSaveNoEmptyTags_db);
extern int * __xmlSubstituteEntitiesDefaultValue_db(void);
CheckInterfacedef(__xmlSubstituteEntitiesDefaultValue,__xmlSubstituteEntitiesDefaultValue_db);
extern int xmlThrDefParserDebugEntities_db(int);
CheckInterfacedef(xmlThrDefParserDebugEntities,xmlThrDefParserDebugEntities_db);
extern int * __xmlDoValidityCheckingDefaultValue_db(void);
CheckInterfacedef(__xmlDoValidityCheckingDefaultValue,__xmlDoValidityCheckingDefaultValue_db);
extern void xmlInitializeGlobalState_db(xmlGlobalStatePtr);
CheckInterfacedef(xmlInitializeGlobalState,xmlInitializeGlobalState_db);
extern const char * * __xmlParserVersion_db(void);
CheckInterfacedef(__xmlParserVersion,__xmlParserVersion_db);
extern int xmlThrDefLoadExtDtdDefaultValue_db(int);
CheckInterfacedef(xmlThrDefLoadExtDtdDefaultValue,xmlThrDefLoadExtDtdDefaultValue_db);
extern const char * xmlThrDefTreeIndentString_db(const char *);
CheckInterfacedef(xmlThrDefTreeIndentString,xmlThrDefTreeIndentString_db);
extern int * __oldXMLWDcompatibility_db(void);
CheckInterfacedef(__oldXMLWDcompatibility,__oldXMLWDcompatibility_db);
extern int xmlThrDefSubstituteEntitiesDefaultValue_db(int);
CheckInterfacedef(xmlThrDefSubstituteEntitiesDefaultValue,xmlThrDefSubstituteEntitiesDefaultValue_db);
extern xmlDeregisterNodeFunc xmlThrDefDeregisterNodeDefault_db(xmlDeregisterNodeFunc);
CheckInterfacedef(xmlThrDefDeregisterNodeDefault,xmlThrDefDeregisterNodeDefault_db);
extern void * * __xmlGenericErrorContext_db(void);
CheckInterfacedef(__xmlGenericErrorContext,__xmlGenericErrorContext_db);
extern void xmlCleanupGlobals_db(void);
CheckInterfacedef(xmlCleanupGlobals,xmlCleanupGlobals_db);
extern xmlError * __xmlLastError_db(void);
CheckInterfacedef(__xmlLastError,__xmlLastError_db);
extern int * __xmlLoadExtDtdDefaultValue_db(void);
CheckInterfacedef(__xmlLoadExtDtdDefaultValue,__xmlLoadExtDtdDefaultValue_db);
extern int * __xmlLineNumbersDefaultValue_db(void);
CheckInterfacedef(__xmlLineNumbersDefaultValue,__xmlLineNumbersDefaultValue_db);
extern xmlDeregisterNodeFunc xmlDeregisterNodeDefault_db(xmlDeregisterNodeFunc);
CheckInterfacedef(xmlDeregisterNodeDefault,xmlDeregisterNodeDefault_db);
extern xmlSAXHandlerV1 * __xmlDefaultSAXHandler_db(void);
CheckInterfacedef(__xmlDefaultSAXHandler,__xmlDefaultSAXHandler_db);
extern xmlGenericErrorFunc * __xmlGenericError_db(void);
CheckInterfacedef(__xmlGenericError,__xmlGenericError_db);
#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests passed out of %d tests in libxml2/libxml/globals.h\n\n",pcnt,cnt);
return cnt;
#endif

}
