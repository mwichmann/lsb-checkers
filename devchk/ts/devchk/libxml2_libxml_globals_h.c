/*
 * Test of libxml2/libxml/globals.h
 */
#include "hdrchk.h"
#include "sys/types.h"
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
#elif __x86_64__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,14916,0);
Msg("Find size of fptr_globals_393 (14916)\n");
#endif

#if __i386__
CheckTypeSize(xmlOutputBufferCreateFilenameFunc,4, 14917, 2)
#elif __x86_64__
CheckTypeSize(xmlOutputBufferCreateFilenameFunc,8, 14917, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,14917,0);
Msg("Find size of xmlOutputBufferCreateFilenameFunc (14917)\n");
#endif

#if __i386__
CheckTypeSize(xmlOutputBufferCreateFilenameFunc *,4, 14918, 2)
#elif __x86_64__
CheckTypeSize(xmlOutputBufferCreateFilenameFunc *,8, 14918, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,14918,0);
Msg("Find size of xmlOutputBufferCreateFilenameFunc * (14918)\n");
#endif

#if __i386__
#elif __x86_64__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,14919,0);
Msg("Find size of fptr_globals_411 (14919)\n");
#endif

#if __i386__
CheckTypeSize(xmlRegisterNodeFunc,4, 14920, 2)
#elif __x86_64__
CheckTypeSize(xmlRegisterNodeFunc,8, 14920, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,14920,0);
Msg("Find size of xmlRegisterNodeFunc (14920)\n");
#endif

#if __i386__
#elif __x86_64__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,14921,0);
Msg("Find size of fptr_globals_491 (14921)\n");
#endif

#if __i386__
CheckTypeSize(xmlParserInputBufferCreateFilenameFunc,4, 14922, 2)
#elif __x86_64__
CheckTypeSize(xmlParserInputBufferCreateFilenameFunc,8, 14922, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,14922,0);
Msg("Find size of xmlParserInputBufferCreateFilenameFunc (14922)\n");
#endif

#if __i386__
CheckTypeSize(xmlParserInputBufferCreateFilenameFunc *,4, 14923, 2)
#elif __x86_64__
CheckTypeSize(xmlParserInputBufferCreateFilenameFunc *,8, 14923, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,14923,0);
Msg("Find size of xmlParserInputBufferCreateFilenameFunc * (14923)\n");
#endif

#if __i386__
CheckTypeSize(struct _xmlSAXHandlerV1,112, 14924, 2)
CheckMemberSize(struct _xmlSAXHandlerV1,isStandalone,4,2,49092)
CheckOffset(struct _xmlSAXHandlerV1,isStandalone,4,2,49092)
CheckMemberSize(struct _xmlSAXHandlerV1,hasInternalSubset,4,2,49093)
CheckOffset(struct _xmlSAXHandlerV1,hasInternalSubset,8,2,49093)
CheckMemberSize(struct _xmlSAXHandlerV1,hasExternalSubset,4,2,49094)
CheckOffset(struct _xmlSAXHandlerV1,hasExternalSubset,12,2,49094)
CheckMemberSize(struct _xmlSAXHandlerV1,resolveEntity,4,2,49095)
CheckOffset(struct _xmlSAXHandlerV1,resolveEntity,16,2,49095)
CheckMemberSize(struct _xmlSAXHandlerV1,getEntity,4,2,49096)
CheckOffset(struct _xmlSAXHandlerV1,getEntity,20,2,49096)
CheckMemberSize(struct _xmlSAXHandlerV1,entityDecl,4,2,49097)
CheckOffset(struct _xmlSAXHandlerV1,entityDecl,24,2,49097)
CheckMemberSize(struct _xmlSAXHandlerV1,notationDecl,4,2,49098)
CheckOffset(struct _xmlSAXHandlerV1,notationDecl,28,2,49098)
CheckMemberSize(struct _xmlSAXHandlerV1,attributeDecl,4,2,49099)
CheckOffset(struct _xmlSAXHandlerV1,attributeDecl,32,2,49099)
CheckMemberSize(struct _xmlSAXHandlerV1,elementDecl,4,2,49100)
CheckOffset(struct _xmlSAXHandlerV1,elementDecl,36,2,49100)
CheckMemberSize(struct _xmlSAXHandlerV1,unparsedEntityDecl,4,2,49101)
CheckOffset(struct _xmlSAXHandlerV1,unparsedEntityDecl,40,2,49101)
CheckMemberSize(struct _xmlSAXHandlerV1,setDocumentLocator,4,2,49102)
CheckOffset(struct _xmlSAXHandlerV1,setDocumentLocator,44,2,49102)
CheckMemberSize(struct _xmlSAXHandlerV1,startDocument,4,2,49103)
CheckOffset(struct _xmlSAXHandlerV1,startDocument,48,2,49103)
CheckMemberSize(struct _xmlSAXHandlerV1,endDocument,4,2,49104)
CheckOffset(struct _xmlSAXHandlerV1,endDocument,52,2,49104)
CheckMemberSize(struct _xmlSAXHandlerV1,startElement,4,2,49105)
CheckOffset(struct _xmlSAXHandlerV1,startElement,56,2,49105)
CheckMemberSize(struct _xmlSAXHandlerV1,endElement,4,2,49106)
CheckOffset(struct _xmlSAXHandlerV1,endElement,60,2,49106)
CheckMemberSize(struct _xmlSAXHandlerV1,reference,4,2,49107)
CheckOffset(struct _xmlSAXHandlerV1,reference,64,2,49107)
CheckMemberSize(struct _xmlSAXHandlerV1,characters,4,2,49108)
CheckOffset(struct _xmlSAXHandlerV1,characters,68,2,49108)
CheckMemberSize(struct _xmlSAXHandlerV1,ignorableWhitespace,4,2,49109)
CheckOffset(struct _xmlSAXHandlerV1,ignorableWhitespace,72,2,49109)
CheckMemberSize(struct _xmlSAXHandlerV1,processingInstruction,4,2,49110)
CheckOffset(struct _xmlSAXHandlerV1,processingInstruction,76,2,49110)
CheckMemberSize(struct _xmlSAXHandlerV1,comment,4,2,49111)
CheckOffset(struct _xmlSAXHandlerV1,comment,80,2,49111)
CheckMemberSize(struct _xmlSAXHandlerV1,warning,4,2,49112)
CheckOffset(struct _xmlSAXHandlerV1,warning,84,2,49112)
CheckMemberSize(struct _xmlSAXHandlerV1,error,4,2,49113)
CheckOffset(struct _xmlSAXHandlerV1,error,88,2,49113)
CheckMemberSize(struct _xmlSAXHandlerV1,fatalError,4,2,49114)
CheckOffset(struct _xmlSAXHandlerV1,fatalError,92,2,49114)
CheckMemberSize(struct _xmlSAXHandlerV1,getParameterEntity,4,2,49115)
CheckOffset(struct _xmlSAXHandlerV1,getParameterEntity,96,2,49115)
CheckMemberSize(struct _xmlSAXHandlerV1,cdataBlock,4,2,49116)
CheckOffset(struct _xmlSAXHandlerV1,cdataBlock,100,2,49116)
CheckMemberSize(struct _xmlSAXHandlerV1,externalSubset,4,2,49117)
CheckOffset(struct _xmlSAXHandlerV1,externalSubset,104,2,49117)
CheckMemberSize(struct _xmlSAXHandlerV1,initialized,4,2,49118)
CheckOffset(struct _xmlSAXHandlerV1,initialized,108,2,49118)
#elif __x86_64__
CheckTypeSize(struct _xmlSAXHandlerV1,224, 14924, 11)
CheckMemberSize(struct _xmlSAXHandlerV1,isStandalone,8,11,49092)
CheckOffset(struct _xmlSAXHandlerV1,isStandalone,8,11,49092)
CheckMemberSize(struct _xmlSAXHandlerV1,hasInternalSubset,8,11,49093)
CheckOffset(struct _xmlSAXHandlerV1,hasInternalSubset,16,11,49093)
CheckMemberSize(struct _xmlSAXHandlerV1,hasExternalSubset,8,11,49094)
CheckOffset(struct _xmlSAXHandlerV1,hasExternalSubset,24,11,49094)
CheckMemberSize(struct _xmlSAXHandlerV1,resolveEntity,8,11,49095)
CheckOffset(struct _xmlSAXHandlerV1,resolveEntity,32,11,49095)
CheckMemberSize(struct _xmlSAXHandlerV1,getEntity,8,11,49096)
CheckOffset(struct _xmlSAXHandlerV1,getEntity,40,11,49096)
CheckMemberSize(struct _xmlSAXHandlerV1,entityDecl,8,11,49097)
CheckOffset(struct _xmlSAXHandlerV1,entityDecl,48,11,49097)
CheckMemberSize(struct _xmlSAXHandlerV1,notationDecl,8,11,49098)
CheckOffset(struct _xmlSAXHandlerV1,notationDecl,56,11,49098)
CheckMemberSize(struct _xmlSAXHandlerV1,attributeDecl,8,11,49099)
CheckOffset(struct _xmlSAXHandlerV1,attributeDecl,64,11,49099)
CheckMemberSize(struct _xmlSAXHandlerV1,elementDecl,8,11,49100)
CheckOffset(struct _xmlSAXHandlerV1,elementDecl,72,11,49100)
CheckMemberSize(struct _xmlSAXHandlerV1,unparsedEntityDecl,8,11,49101)
CheckOffset(struct _xmlSAXHandlerV1,unparsedEntityDecl,80,11,49101)
CheckMemberSize(struct _xmlSAXHandlerV1,setDocumentLocator,8,11,49102)
CheckOffset(struct _xmlSAXHandlerV1,setDocumentLocator,88,11,49102)
CheckMemberSize(struct _xmlSAXHandlerV1,startDocument,8,11,49103)
CheckOffset(struct _xmlSAXHandlerV1,startDocument,96,11,49103)
CheckMemberSize(struct _xmlSAXHandlerV1,endDocument,8,11,49104)
CheckOffset(struct _xmlSAXHandlerV1,endDocument,104,11,49104)
CheckMemberSize(struct _xmlSAXHandlerV1,startElement,8,11,49105)
CheckOffset(struct _xmlSAXHandlerV1,startElement,112,11,49105)
CheckMemberSize(struct _xmlSAXHandlerV1,endElement,8,11,49106)
CheckOffset(struct _xmlSAXHandlerV1,endElement,120,11,49106)
CheckMemberSize(struct _xmlSAXHandlerV1,reference,8,11,49107)
CheckOffset(struct _xmlSAXHandlerV1,reference,128,11,49107)
CheckMemberSize(struct _xmlSAXHandlerV1,characters,8,11,49108)
CheckOffset(struct _xmlSAXHandlerV1,characters,136,11,49108)
CheckMemberSize(struct _xmlSAXHandlerV1,ignorableWhitespace,8,11,49109)
CheckOffset(struct _xmlSAXHandlerV1,ignorableWhitespace,144,11,49109)
CheckMemberSize(struct _xmlSAXHandlerV1,processingInstruction,8,11,49110)
CheckOffset(struct _xmlSAXHandlerV1,processingInstruction,152,11,49110)
CheckMemberSize(struct _xmlSAXHandlerV1,comment,8,11,49111)
CheckOffset(struct _xmlSAXHandlerV1,comment,160,11,49111)
CheckMemberSize(struct _xmlSAXHandlerV1,warning,8,11,49112)
CheckOffset(struct _xmlSAXHandlerV1,warning,168,11,49112)
CheckMemberSize(struct _xmlSAXHandlerV1,error,8,11,49113)
CheckOffset(struct _xmlSAXHandlerV1,error,176,11,49113)
CheckMemberSize(struct _xmlSAXHandlerV1,fatalError,8,11,49114)
CheckOffset(struct _xmlSAXHandlerV1,fatalError,184,11,49114)
CheckMemberSize(struct _xmlSAXHandlerV1,getParameterEntity,8,11,49115)
CheckOffset(struct _xmlSAXHandlerV1,getParameterEntity,192,11,49115)
CheckMemberSize(struct _xmlSAXHandlerV1,cdataBlock,8,11,49116)
CheckOffset(struct _xmlSAXHandlerV1,cdataBlock,200,11,49116)
CheckMemberSize(struct _xmlSAXHandlerV1,externalSubset,8,11,49117)
CheckOffset(struct _xmlSAXHandlerV1,externalSubset,208,11,49117)
CheckMemberSize(struct _xmlSAXHandlerV1,initialized,4,11,49118)
CheckOffset(struct _xmlSAXHandlerV1,initialized,216,11,49118)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,14924,0);
Msg("Find size of _xmlSAXHandlerV1 (14924)\n");
#endif

#if __i386__
CheckTypeSize(xmlSAXHandlerV1,112, 14925, 2)
#elif __x86_64__
CheckTypeSize(xmlSAXHandlerV1,224, 14925, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,14925,0);
Msg("Find size of xmlSAXHandlerV1 (14925)\n");
#endif

#if __i386__
CheckTypeSize(xmlSAXHandlerV1 *,4, 14926, 2)
#elif __x86_64__
CheckTypeSize(xmlSAXHandlerV1 *,8, 14926, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,14926,0);
Msg("Find size of xmlSAXHandlerV1 * (14926)\n");
#endif

#if __i386__
CheckTypeSize(xmlDeregisterNodeFunc,4, 14927, 2)
#elif __x86_64__
CheckTypeSize(xmlDeregisterNodeFunc,8, 14927, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,14927,0);
Msg("Find size of xmlDeregisterNodeFunc (14927)\n");
#endif

#if __i386__
CheckTypeSize(xmlDeregisterNodeFunc *,4, 14928, 2)
#elif __x86_64__
CheckTypeSize(xmlDeregisterNodeFunc *,8, 14928, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,14928,0);
Msg("Find size of xmlDeregisterNodeFunc * (14928)\n");
#endif

#if __i386__
CheckTypeSize(xmlRegisterNodeFunc *,4, 14929, 2)
#elif __x86_64__
CheckTypeSize(xmlRegisterNodeFunc *,8, 14929, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,14929,0);
Msg("Find size of xmlRegisterNodeFunc * (14929)\n");
#endif

#if __i386__
CheckTypeSize(xmlBufferAllocationScheme *,4, 14930, 2)
#elif __x86_64__
CheckTypeSize(xmlBufferAllocationScheme *,8, 14930, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,14930,0);
Msg("Find size of xmlBufferAllocationScheme * (14930)\n");
#endif

#if __i386__
CheckTypeSize(xmlStructuredErrorFunc *,4, 14931, 2)
#elif __x86_64__
CheckTypeSize(xmlStructuredErrorFunc *,8, 14931, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,14931,0);
Msg("Find size of xmlStructuredErrorFunc * (14931)\n");
#endif

#if __i386__
CheckTypeSize(xmlGlobalState,512, 14933, 2)
#elif __x86_64__
CheckTypeSize(xmlGlobalState,960, 14933, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,14933,0);
Msg("Find size of xmlGlobalState (14933)\n");
#endif

#if __i386__
CheckTypeSize(xmlGlobalState *,4, 14934, 2)
#elif __x86_64__
CheckTypeSize(xmlGlobalState *,8, 14934, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,14934,0);
Msg("Find size of xmlGlobalState * (14934)\n");
#endif

#if __i386__
CheckTypeSize(xmlGlobalStatePtr,4, 14935, 2)
#elif __x86_64__
CheckTypeSize(xmlGlobalStatePtr,8, 14935, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,14935,0);
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