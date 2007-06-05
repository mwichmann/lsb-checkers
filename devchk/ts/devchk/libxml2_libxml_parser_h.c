/*
 * Test of libxml2/libxml/parser.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#include <libxml/xmlregexp.h>
#include <libxml/tree.h>
#include "libxml2/libxml/parser.h"



#ifdef TET_TEST
void libxml2_libxml_parser_h()
{
#else
int libxml2_libxml_parser_h()
{
#endif

int cnt=0;

int pcnt=0;
#ifdef TET_TEST
Msg("Checking data structures in libxml2/libxml/parser.h\n");
#endif

printf("Checking data structures in libxml2/libxml/parser.h\n");
#if _LSB_DEFAULT_ARCH
#ifdef XML_DEFAULT_VERSION
	CompareConstant(XML_DEFAULT_VERSION,"1.0",9440,architecture)
#else
Msg( "Error: Constant not found: XML_DEFAULT_VERSION\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XML_DETECT_IDS
	CompareConstant(XML_DETECT_IDS,2,9441,architecture)
#else
Msg( "Error: Constant not found: XML_DETECT_IDS\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XML_COMPLETE_ATTRS
	CompareConstant(XML_COMPLETE_ATTRS,4,9442,architecture)
#else
Msg( "Error: Constant not found: XML_COMPLETE_ATTRS\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XML_SKIP_IDS
	CompareConstant(XML_SKIP_IDS,8,9443,architecture)
#else
Msg( "Error: Constant not found: XML_SKIP_IDS\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XML_SAX2_MAGIC
	CompareConstant(XML_SAX2_MAGIC,0xDEEDBEAF,9444,architecture)
#else
Msg( "Error: Constant not found: XML_SAX2_MAGIC\n");
cnt++;
#endif

#endif

#if __i386__
CheckTypeSize(xmlSAXHandlerPtr,4, 14980, 2)
#elif __x86_64__
CheckTypeSize(xmlSAXHandlerPtr,8, 14980, 11)
#elif __ia64__
CheckTypeSize(xmlSAXHandlerPtr,8, 14980, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(xmlSAXHandlerPtr,4, 14980, 6)
#elif __powerpc64__
CheckTypeSize(xmlSAXHandlerPtr,8, 14980, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(xmlSAXHandlerPtr,4, 14980, 10)
#elif __s390x__
CheckTypeSize(xmlSAXHandlerPtr,8, 14980, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,14980,0);
Msg("Find size of xmlSAXHandlerPtr (14980)\n");
#endif

#if __i386__
CheckTypeSize(xmlParserNodeInfoSeqPtr,4, 14982, 2)
#elif __x86_64__
CheckTypeSize(xmlParserNodeInfoSeqPtr,8, 14982, 11)
#elif __ia64__
CheckTypeSize(xmlParserNodeInfoSeqPtr,8, 14982, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(xmlParserNodeInfoSeqPtr,4, 14982, 6)
#elif __powerpc64__
CheckTypeSize(xmlParserNodeInfoSeqPtr,8, 14982, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(xmlParserNodeInfoSeqPtr,4, 14982, 10)
#elif __s390x__
CheckTypeSize(xmlParserNodeInfoSeqPtr,8, 14982, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,14982,0);
Msg("Find size of xmlParserNodeInfoSeqPtr (14982)\n");
#endif

#if __i386__
CheckTypeSize(xmlExternalEntityLoader,4, 14989, 2)
#elif __x86_64__
CheckTypeSize(xmlExternalEntityLoader,8, 14989, 11)
#elif __ia64__
CheckTypeSize(xmlExternalEntityLoader,8, 14989, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(xmlExternalEntityLoader,4, 14989, 6)
#elif __powerpc64__
CheckTypeSize(xmlExternalEntityLoader,8, 14989, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(xmlExternalEntityLoader,4, 14989, 10)
#elif __s390x__
CheckTypeSize(xmlExternalEntityLoader,8, 14989, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,14989,0);
Msg("Find size of xmlExternalEntityLoader (14989)\n");
#endif

#if __i386__
CheckTypeSize(xmlParserNodeInfoPtr,4, 14990, 2)
#elif __x86_64__
CheckTypeSize(xmlParserNodeInfoPtr,8, 14990, 11)
#elif __ia64__
CheckTypeSize(xmlParserNodeInfoPtr,8, 14990, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(xmlParserNodeInfoPtr,4, 14990, 6)
#elif __powerpc64__
CheckTypeSize(xmlParserNodeInfoPtr,8, 14990, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(xmlParserNodeInfoPtr,4, 14990, 10)
#elif __s390x__
CheckTypeSize(xmlParserNodeInfoPtr,8, 14990, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,14990,0);
Msg("Find size of xmlParserNodeInfoPtr (14990)\n");
#endif

#if __i386__
CheckTypeSize(xmlFeature,4, 14993, 2)
#elif __x86_64__
CheckTypeSize(xmlFeature,4, 14993, 11)
#elif __ia64__
CheckTypeSize(xmlFeature,4, 14993, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(xmlFeature,4, 14993, 6)
#elif __powerpc64__
CheckTypeSize(xmlFeature,4, 14993, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(xmlFeature,4, 14993, 10)
#elif __s390x__
CheckTypeSize(xmlFeature,4, 14993, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,14993,0);
Msg("Find size of xmlFeature (14993)\n");
#endif

#if __i386__
CheckTypeSize(xmlParserOption,4, 15108, 2)
#elif __x86_64__
CheckTypeSize(xmlParserOption,4, 15108, 11)
#elif __ia64__
CheckTypeSize(xmlParserOption,4, 15108, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(xmlParserOption,4, 15108, 6)
#elif __powerpc64__
CheckTypeSize(xmlParserOption,4, 15108, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(xmlParserOption,4, 15108, 10)
#elif __s390x__
CheckTypeSize(xmlParserOption,4, 15108, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,15108,0);
Msg("Find size of xmlParserOption (15108)\n");
#endif

extern xmlDocPtr xmlSAXParseMemory_db(xmlSAXHandlerPtr, const char *, int, int);
CheckInterfacedef(xmlSAXParseMemory,xmlSAXParseMemory_db);
extern void xmlStopParser_db(xmlParserCtxtPtr);
CheckInterfacedef(xmlStopParser,xmlStopParser_db);
extern int xmlInitParserCtxt_db(xmlParserCtxtPtr);
CheckInterfacedef(xmlInitParserCtxt,xmlInitParserCtxt_db);
extern void xmlFreeParserCtxt_db(xmlParserCtxtPtr);
CheckInterfacedef(xmlFreeParserCtxt,xmlFreeParserCtxt_db);
extern void xmlInitNodeInfoSeq_db(xmlParserNodeInfoSeqPtr);
CheckInterfacedef(xmlInitNodeInfoSeq,xmlInitNodeInfoSeq_db);
extern const xmlParserNodeInfo * xmlParserFindNodeInfo_db(const xmlParserCtxtPtr, const xmlNodePtr);
CheckInterfacedef(xmlParserFindNodeInfo,xmlParserFindNodeInfo_db);
extern xmlDocPtr xmlRecoverFile_db(const char *);
CheckInterfacedef(xmlRecoverFile,xmlRecoverFile_db);
extern xmlDocPtr xmlParseDoc_db(const xmlChar *);
CheckInterfacedef(xmlParseDoc,xmlParseDoc_db);
extern int xmlParseCtxtExternalEntity_db(xmlParserCtxtPtr, const xmlChar *, const xmlChar *, xmlNodePtr *);
CheckInterfacedef(xmlParseCtxtExternalEntity,xmlParseCtxtExternalEntity_db);
extern xmlParserCtxtPtr xmlCreatePushParserCtxt_db(xmlSAXHandlerPtr, void *, const char *, int, const char *);
CheckInterfacedef(xmlCreatePushParserCtxt,xmlCreatePushParserCtxt_db);
extern int xmlSubstituteEntitiesDefault_db(int);
CheckInterfacedef(xmlSubstituteEntitiesDefault,xmlSubstituteEntitiesDefault_db);
extern int xmlLineNumbersDefault_db(int);
CheckInterfacedef(xmlLineNumbersDefault,xmlLineNumbersDefault_db);
extern xmlParserErrors xmlParseInNodeContext_db(xmlNodePtr, const char *, int, int, xmlNodePtr *);
CheckInterfacedef(xmlParseInNodeContext,xmlParseInNodeContext_db);
extern void xmlCleanupParser_db(void);
CheckInterfacedef(xmlCleanupParser,xmlCleanupParser_db);
extern long unsigned int xmlParserFindNodeInfoIndex_db(const xmlParserNodeInfoSeqPtr, const xmlNodePtr);
CheckInterfacedef(xmlParserFindNodeInfoIndex,xmlParserFindNodeInfoIndex_db);
extern xmlDocPtr xmlReadFd_db(int, const char *, const char *, int);
CheckInterfacedef(xmlReadFd,xmlReadFd_db);
extern xmlDocPtr xmlCtxtReadFile_db(xmlParserCtxtPtr, const char *, const char *, int);
CheckInterfacedef(xmlCtxtReadFile,xmlCtxtReadFile_db);
extern int xmlCtxtResetPush_db(xmlParserCtxtPtr, const char *, int, const char *, const char *);
CheckInterfacedef(xmlCtxtResetPush,xmlCtxtResetPush_db);
extern void xmlClearNodeInfoSeq_db(xmlParserNodeInfoSeqPtr);
CheckInterfacedef(xmlClearNodeInfoSeq,xmlClearNodeInfoSeq_db);
extern int xmlParserInputRead_db(xmlParserInputPtr, int);
CheckInterfacedef(xmlParserInputRead,xmlParserInputRead_db);
extern xmlExternalEntityLoader xmlGetExternalEntityLoader_db(void);
CheckInterfacedef(xmlGetExternalEntityLoader,xmlGetExternalEntityLoader_db);
extern void xmlCtxtReset_db(xmlParserCtxtPtr);
CheckInterfacedef(xmlCtxtReset,xmlCtxtReset_db);
extern int xmlSAXUserParseMemory_db(xmlSAXHandlerPtr, void *, const char *, int);
CheckInterfacedef(xmlSAXUserParseMemory,xmlSAXUserParseMemory_db);
extern xmlDocPtr xmlReadIO_db(xmlInputReadCallback, xmlInputCloseCallback, void *, const char *, const char *, int);
CheckInterfacedef(xmlReadIO,xmlReadIO_db);
extern int xmlParserInputGrow_db(xmlParserInputPtr, int);
CheckInterfacedef(xmlParserInputGrow,xmlParserInputGrow_db);
extern xmlDtdPtr xmlSAXParseDTD_db(xmlSAXHandlerPtr, const xmlChar *, const xmlChar *);
CheckInterfacedef(xmlSAXParseDTD,xmlSAXParseDTD_db);
extern int xmlParseChunk_db(xmlParserCtxtPtr, const char *, int, int);
CheckInterfacedef(xmlParseChunk,xmlParseChunk_db);
extern int xmlParseExternalEntity_db(xmlDocPtr, xmlSAXHandlerPtr, void *, int, const xmlChar *, const xmlChar *, xmlNodePtr *);
CheckInterfacedef(xmlParseExternalEntity,xmlParseExternalEntity_db);
extern xmlParserCtxtPtr xmlCreateDocParserCtxt_db(const xmlChar *);
CheckInterfacedef(xmlCreateDocParserCtxt,xmlCreateDocParserCtxt_db);
extern xmlDocPtr xmlRecoverDoc_db(xmlChar *);
CheckInterfacedef(xmlRecoverDoc,xmlRecoverDoc_db);
extern xmlDocPtr xmlRecoverMemory_db(const char *, int);
CheckInterfacedef(xmlRecoverMemory,xmlRecoverMemory_db);
extern int xmlParseBalancedChunkMemory_db(xmlDocPtr, xmlSAXHandlerPtr, void *, int, const xmlChar *, xmlNodePtr *);
CheckInterfacedef(xmlParseBalancedChunkMemory,xmlParseBalancedChunkMemory_db);
extern xmlDocPtr xmlSAXParseMemoryWithData_db(xmlSAXHandlerPtr, const char *, int, int, void *);
CheckInterfacedef(xmlSAXParseMemoryWithData,xmlSAXParseMemoryWithData_db);
extern xmlDocPtr xmlCtxtReadDoc_db(xmlParserCtxtPtr, const xmlChar *, const char *, const char *, int);
CheckInterfacedef(xmlCtxtReadDoc,xmlCtxtReadDoc_db);
extern int xmlParseDocument_db(xmlParserCtxtPtr);
CheckInterfacedef(xmlParseDocument,xmlParseDocument_db);
extern xmlDocPtr xmlReadMemory_db(const char *, int, const char *, const char *, int);
CheckInterfacedef(xmlReadMemory,xmlReadMemory_db);
extern xmlDocPtr xmlReadDoc_db(const xmlChar *, const char *, const char *, int);
CheckInterfacedef(xmlReadDoc,xmlReadDoc_db);
extern xmlParserInputPtr xmlNewIOInputStream_db(xmlParserCtxtPtr, xmlParserInputBufferPtr, xmlCharEncoding);
CheckInterfacedef(xmlNewIOInputStream,xmlNewIOInputStream_db);
extern xmlDocPtr xmlSAXParseFile_db(xmlSAXHandlerPtr, const char *, int);
CheckInterfacedef(xmlSAXParseFile,xmlSAXParseFile_db);
extern xmlDocPtr xmlParseFile_db(const char *);
CheckInterfacedef(xmlParseFile,xmlParseFile_db);
extern int xmlParseExtParsedEnt_db(xmlParserCtxtPtr);
CheckInterfacedef(xmlParseExtParsedEnt,xmlParseExtParsedEnt_db);
extern xmlDtdPtr xmlIOParseDTD_db(xmlSAXHandlerPtr, xmlParserInputBufferPtr, xmlCharEncoding);
CheckInterfacedef(xmlIOParseDTD,xmlIOParseDTD_db);
extern int xmlPedanticParserDefault_db(int);
CheckInterfacedef(xmlPedanticParserDefault,xmlPedanticParserDefault_db);
extern void xmlClearParserCtxt_db(xmlParserCtxtPtr);
CheckInterfacedef(xmlClearParserCtxt,xmlClearParserCtxt_db);
extern xmlDocPtr xmlSAXParseEntity_db(xmlSAXHandlerPtr, const char *);
CheckInterfacedef(xmlSAXParseEntity,xmlSAXParseEntity_db);
extern xmlDocPtr xmlSAXParseDoc_db(xmlSAXHandlerPtr, const xmlChar *, int);
CheckInterfacedef(xmlSAXParseDoc,xmlSAXParseDoc_db);
extern xmlDocPtr xmlSAXParseFileWithData_db(xmlSAXHandlerPtr, const char *, int, void *);
CheckInterfacedef(xmlSAXParseFileWithData,xmlSAXParseFileWithData_db);
extern xmlParserCtxtPtr xmlCreateIOParserCtxt_db(xmlSAXHandlerPtr, void *, xmlInputReadCallback, xmlInputCloseCallback, void *, xmlCharEncoding);
CheckInterfacedef(xmlCreateIOParserCtxt,xmlCreateIOParserCtxt_db);
extern xmlParserInputPtr xmlLoadExternalEntity_db(const char *, const char *, xmlParserCtxtPtr);
CheckInterfacedef(xmlLoadExternalEntity,xmlLoadExternalEntity_db);
extern int xmlSAXUserParseFile_db(xmlSAXHandlerPtr, void *, const char *);
CheckInterfacedef(xmlSAXUserParseFile,xmlSAXUserParseFile_db);
extern xmlDocPtr xmlParseMemory_db(const char *, int);
CheckInterfacedef(xmlParseMemory,xmlParseMemory_db);
extern xmlDocPtr xmlReadFile_db(const char *, const char *, int);
CheckInterfacedef(xmlReadFile,xmlReadFile_db);
extern xmlDocPtr xmlCtxtReadFd_db(xmlParserCtxtPtr, int, const char *, const char *, int);
CheckInterfacedef(xmlCtxtReadFd,xmlCtxtReadFd_db);
extern void xmlInitParser_db(void);
CheckInterfacedef(xmlInitParser,xmlInitParser_db);
extern int xmlCtxtUseOptions_db(xmlParserCtxtPtr, int);
CheckInterfacedef(xmlCtxtUseOptions,xmlCtxtUseOptions_db);
extern xmlDocPtr xmlParseEntity_db(const char *);
CheckInterfacedef(xmlParseEntity,xmlParseEntity_db);
extern xmlDocPtr xmlCtxtReadMemory_db(xmlParserCtxtPtr, const char *, int, const char *, const char *, int);
CheckInterfacedef(xmlCtxtReadMemory,xmlCtxtReadMemory_db);
extern long int xmlByteConsumed_db(xmlParserCtxtPtr);
CheckInterfacedef(xmlByteConsumed,xmlByteConsumed_db);
extern void xmlParserAddNodeInfo_db(xmlParserCtxtPtr, const xmlParserNodeInfoPtr);
CheckInterfacedef(xmlParserAddNodeInfo,xmlParserAddNodeInfo_db);
extern int xmlParseBalancedChunkMemoryRecover_db(xmlDocPtr, xmlSAXHandlerPtr, void *, int, const xmlChar *, xmlNodePtr *, int);
CheckInterfacedef(xmlParseBalancedChunkMemoryRecover,xmlParseBalancedChunkMemoryRecover_db);
extern void xmlSetupParserForBuffer_db(xmlParserCtxtPtr, const xmlChar *, const char *);
CheckInterfacedef(xmlSetupParserForBuffer,xmlSetupParserForBuffer_db);
extern xmlParserCtxtPtr xmlNewParserCtxt_db(void);
CheckInterfacedef(xmlNewParserCtxt,xmlNewParserCtxt_db);
extern xmlDtdPtr xmlParseDTD_db(const xmlChar *, const xmlChar *);
CheckInterfacedef(xmlParseDTD,xmlParseDTD_db);
extern int xmlHasFeature_db(xmlFeature);
CheckInterfacedef(xmlHasFeature,xmlHasFeature_db);
extern xmlDocPtr xmlCtxtReadIO_db(xmlParserCtxtPtr, xmlInputReadCallback, xmlInputCloseCallback, void *, const char *, const char *, int);
CheckInterfacedef(xmlCtxtReadIO,xmlCtxtReadIO_db);
extern void xmlSetExternalEntityLoader_db(xmlExternalEntityLoader);
CheckInterfacedef(xmlSetExternalEntityLoader,xmlSetExternalEntityLoader_db);
extern int xmlKeepBlanksDefault_db(int);
CheckInterfacedef(xmlKeepBlanksDefault,xmlKeepBlanksDefault_db);
#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests passed out of %d tests in libxml2/libxml/parser.h\n\n",pcnt,cnt);
return cnt;
#endif

}
