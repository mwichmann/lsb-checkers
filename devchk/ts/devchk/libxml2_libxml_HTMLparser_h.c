/*
 * Test of libxml2/libxml/HTMLparser.h
 */
#include "hdrchk.h"
#include "sys/types.h"
#define _LSB_DEFAULT_ARCH 1
#include <libxml/xmlregexp.h>
#include "libxml2/libxml/HTMLparser.h"



#ifdef TET_TEST
void libxml2_libxml_HTMLparser_h()
{
#else
int libxml2_libxml_HTMLparser_h()
{
#endif

int cnt=0;

int pcnt=0;
#ifdef TET_TEST
Msg("Checking data structures in libxml2/libxml/HTMLparser.h\n");
#endif

printf("Checking data structures in libxml2/libxml/HTMLparser.h\n");
#if _LSB_DEFAULT_ARCH
/* No test for htmlDefaultSubelement(elt) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for htmlElementAllowedHereDesc(parent,elt) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for htmlRequiredAttrs(elt) */
#endif

#if __i386__
CheckEnum("HTML_NA",HTML_NA,0);
CheckEnum("HTML_INVALID",HTML_INVALID,1);
CheckEnum("HTML_DEPRECATED",HTML_DEPRECATED,2);
CheckEnum("HTML_VALID",HTML_VALID,4);
CheckEnum("HTML_REQUIRED",HTML_REQUIRED,12);
#elif __x86_64__
CheckEnum("HTML_NA",HTML_NA,0);
CheckEnum("HTML_INVALID",HTML_INVALID,1);
CheckEnum("HTML_DEPRECATED",HTML_DEPRECATED,2);
CheckEnum("HTML_VALID",HTML_VALID,4);
CheckEnum("HTML_REQUIRED",HTML_REQUIRED,12);
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,15002,0);
Msg("Find size of anon-libxml2/libxml/HTMLparser.h-103 (15002)\n");
#endif

#if __i386__
CheckTypeSize(htmlStatus,4, 15003, 2)
#elif __x86_64__
CheckTypeSize(htmlStatus,4, 15003, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,15003,0);
Msg("Find size of htmlStatus (15003)\n");
#endif

#if __i386__
CheckTypeSize(struct _htmlElemDesc,36, 15004, 2)
CheckMemberSize(struct _htmlElemDesc,startTag,1,2,49930)
CheckOffset(struct _htmlElemDesc,startTag,4,2,49930)
CheckMemberSize(struct _htmlElemDesc,endTag,1,2,49931)
CheckOffset(struct _htmlElemDesc,endTag,5,2,49931)
CheckMemberSize(struct _htmlElemDesc,saveEndTag,1,2,49932)
CheckOffset(struct _htmlElemDesc,saveEndTag,6,2,49932)
CheckMemberSize(struct _htmlElemDesc,empty,1,2,49933)
CheckOffset(struct _htmlElemDesc,empty,7,2,49933)
CheckMemberSize(struct _htmlElemDesc,depr,1,2,49934)
CheckOffset(struct _htmlElemDesc,depr,8,2,49934)
CheckMemberSize(struct _htmlElemDesc,dtd,1,2,49935)
CheckOffset(struct _htmlElemDesc,dtd,9,2,49935)
CheckMemberSize(struct _htmlElemDesc,isinline,1,2,49936)
CheckOffset(struct _htmlElemDesc,isinline,10,2,49936)
CheckMemberSize(struct _htmlElemDesc,desc,4,2,49937)
CheckOffset(struct _htmlElemDesc,desc,12,2,49937)
CheckMemberSize(struct _htmlElemDesc,subelts,4,2,49938)
CheckOffset(struct _htmlElemDesc,subelts,16,2,49938)
CheckMemberSize(struct _htmlElemDesc,defaultsubelt,4,2,49939)
CheckOffset(struct _htmlElemDesc,defaultsubelt,20,2,49939)
CheckMemberSize(struct _htmlElemDesc,attrs_opt,4,2,49940)
CheckOffset(struct _htmlElemDesc,attrs_opt,24,2,49940)
CheckMemberSize(struct _htmlElemDesc,attrs_depr,4,2,49941)
CheckOffset(struct _htmlElemDesc,attrs_depr,28,2,49941)
CheckMemberSize(struct _htmlElemDesc,attrs_req,4,2,49942)
CheckOffset(struct _htmlElemDesc,attrs_req,32,2,49942)
#elif __x86_64__
CheckTypeSize(struct _htmlElemDesc,64, 15004, 11)
CheckMemberSize(struct _htmlElemDesc,startTag,1,11,49930)
CheckOffset(struct _htmlElemDesc,startTag,8,11,49930)
CheckMemberSize(struct _htmlElemDesc,endTag,1,11,49931)
CheckOffset(struct _htmlElemDesc,endTag,9,11,49931)
CheckMemberSize(struct _htmlElemDesc,saveEndTag,1,11,49932)
CheckOffset(struct _htmlElemDesc,saveEndTag,10,11,49932)
CheckMemberSize(struct _htmlElemDesc,empty,1,11,49933)
CheckOffset(struct _htmlElemDesc,empty,11,11,49933)
CheckMemberSize(struct _htmlElemDesc,depr,1,11,49934)
CheckOffset(struct _htmlElemDesc,depr,12,11,49934)
CheckMemberSize(struct _htmlElemDesc,dtd,1,11,49935)
CheckOffset(struct _htmlElemDesc,dtd,13,11,49935)
CheckMemberSize(struct _htmlElemDesc,isinline,1,11,49936)
CheckOffset(struct _htmlElemDesc,isinline,14,11,49936)
CheckMemberSize(struct _htmlElemDesc,desc,8,11,49937)
CheckOffset(struct _htmlElemDesc,desc,16,11,49937)
CheckMemberSize(struct _htmlElemDesc,subelts,8,11,49938)
CheckOffset(struct _htmlElemDesc,subelts,24,11,49938)
CheckMemberSize(struct _htmlElemDesc,defaultsubelt,8,11,49939)
CheckOffset(struct _htmlElemDesc,defaultsubelt,32,11,49939)
CheckMemberSize(struct _htmlElemDesc,attrs_opt,8,11,49940)
CheckOffset(struct _htmlElemDesc,attrs_opt,40,11,49940)
CheckMemberSize(struct _htmlElemDesc,attrs_depr,8,11,49941)
CheckOffset(struct _htmlElemDesc,attrs_depr,48,11,49941)
CheckMemberSize(struct _htmlElemDesc,attrs_req,8,11,49942)
CheckOffset(struct _htmlElemDesc,attrs_req,56,11,49942)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,15004,0);
Msg("Find size of _htmlElemDesc (15004)\n");
#endif

#if __i386__
CheckTypeSize(htmlElemDesc,36, 15005, 2)
#elif __x86_64__
CheckTypeSize(htmlElemDesc,64, 15005, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,15005,0);
Msg("Find size of htmlElemDesc (15005)\n");
#endif

#if __i386__
CheckTypeSize(const htmlElemDesc,36, 15006, 2)
#elif __x86_64__
CheckTypeSize(const htmlElemDesc,64, 15006, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,15006,0);
Msg("Find size of const htmlElemDesc (15006)\n");
#endif

#if __i386__
#elif __x86_64__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,15007,0);
Msg("Find size of const htmlElemDesc * (15007)\n");
#endif

#if __i386__
CheckTypeSize(htmlDocPtr,4, 15008, 2)
#elif __x86_64__
CheckTypeSize(htmlDocPtr,8, 15008, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,15008,0);
Msg("Find size of htmlDocPtr (15008)\n");
#endif

#if __i386__
CheckTypeSize(htmlSAXHandlerPtr,4, 15009, 2)
#elif __x86_64__
CheckTypeSize(htmlSAXHandlerPtr,8, 15009, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,15009,0);
Msg("Find size of htmlSAXHandlerPtr (15009)\n");
#endif

#if __i386__
CheckTypeSize(htmlParserCtxtPtr,4, 15010, 2)
#elif __x86_64__
CheckTypeSize(htmlParserCtxtPtr,8, 15010, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,15010,0);
Msg("Find size of htmlParserCtxtPtr (15010)\n");
#endif

#if __i386__
CheckTypeSize(struct _htmlEntityDesc,12, 15011, 2)
CheckMemberSize(struct _htmlEntityDesc,name,4,2,49944)
CheckOffset(struct _htmlEntityDesc,name,4,2,49944)
CheckMemberSize(struct _htmlEntityDesc,desc,4,2,49945)
CheckOffset(struct _htmlEntityDesc,desc,8,2,49945)
#elif __x86_64__
CheckTypeSize(struct _htmlEntityDesc,24, 15011, 11)
CheckMemberSize(struct _htmlEntityDesc,name,8,11,49944)
CheckOffset(struct _htmlEntityDesc,name,8,11,49944)
CheckMemberSize(struct _htmlEntityDesc,desc,8,11,49945)
CheckOffset(struct _htmlEntityDesc,desc,16,11,49945)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,15011,0);
Msg("Find size of _htmlEntityDesc (15011)\n");
#endif

#if __i386__
CheckTypeSize(htmlEntityDesc,12, 15012, 2)
#elif __x86_64__
CheckTypeSize(htmlEntityDesc,24, 15012, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,15012,0);
Msg("Find size of htmlEntityDesc (15012)\n");
#endif

#if __i386__
CheckTypeSize(const htmlEntityDesc,12, 15013, 2)
#elif __x86_64__
CheckTypeSize(const htmlEntityDesc,24, 15013, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,15013,0);
Msg("Find size of const htmlEntityDesc (15013)\n");
#endif

#if __i386__
#elif __x86_64__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,15014,0);
Msg("Find size of const htmlEntityDesc * (15014)\n");
#endif

#if __i386__
CheckTypeSize(htmlNodePtr,4, 15015, 2)
#elif __x86_64__
CheckTypeSize(htmlNodePtr,8, 15015, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,15015,0);
Msg("Find size of htmlNodePtr (15015)\n");
#endif

#if __i386__
CheckEnum("HTML_PARSE_RECOVER",HTML_PARSE_RECOVER,1<<0);
CheckEnum("HTML_PARSE_NOERROR",HTML_PARSE_NOERROR,1<<5);
CheckEnum("HTML_PARSE_NOWARNING",HTML_PARSE_NOWARNING,1<<6);
CheckEnum("HTML_PARSE_PEDANTIC",HTML_PARSE_PEDANTIC,1<<7);
CheckEnum("HTML_PARSE_NOBLANKS",HTML_PARSE_NOBLANKS,1<<8);
CheckEnum("HTML_PARSE_NONET",HTML_PARSE_NONET,1<<11);
CheckEnum("HTML_PARSE_COMPACT",HTML_PARSE_COMPACT,1<<16);
#elif __x86_64__
CheckEnum("HTML_PARSE_RECOVER",HTML_PARSE_RECOVER,1<<0);
CheckEnum("HTML_PARSE_NOERROR",HTML_PARSE_NOERROR,1<<5);
CheckEnum("HTML_PARSE_NOWARNING",HTML_PARSE_NOWARNING,1<<6);
CheckEnum("HTML_PARSE_PEDANTIC",HTML_PARSE_PEDANTIC,1<<7);
CheckEnum("HTML_PARSE_NOBLANKS",HTML_PARSE_NOBLANKS,1<<8);
CheckEnum("HTML_PARSE_NONET",HTML_PARSE_NONET,1<<11);
CheckEnum("HTML_PARSE_COMPACT",HTML_PARSE_COMPACT,1<<16);
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,15109,0);
Msg("Find size of anonymous-HTMLparser.h.types-0 (15109)\n");
#endif

#if __i386__
CheckTypeSize(htmlParserOption,4, 15110, 2)
#elif __x86_64__
CheckTypeSize(htmlParserOption,4, 15110, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,15110,0);
Msg("Find size of htmlParserOption (15110)\n");
#endif

#if __i386__
CheckTypeSize(htmlParserInputPtr,4, 15111, 2)
#elif 1
CheckTypeSize(htmlParserInputPtr,8, 15111, 1)
#endif

#if __i386__
CheckTypeSize(htmlElemDesc *,4, 15112, 2)
#elif 1
CheckTypeSize(htmlElemDesc *,8, 15112, 1)
#endif

#if __i386__
CheckTypeSize(htmlElemDescPtr,4, 15113, 2)
#elif 1
CheckTypeSize(htmlElemDescPtr,8, 15113, 1)
#endif

#if __i386__
CheckTypeSize(htmlEntityDesc *,4, 15114, 2)
#elif 1
CheckTypeSize(htmlEntityDesc *,8, 15114, 1)
#endif

#if __i386__
CheckTypeSize(htmlEntityDescPtr,4, 15115, 2)
#elif 1
CheckTypeSize(htmlEntityDescPtr,8, 15115, 1)
#endif

#if __i386__
CheckTypeSize(htmlParserInput,60, 15116, 2)
#elif 1
CheckTypeSize(htmlParserInput,104, 15116, 1)
#endif

extern htmlStatus htmlElementStatusHere_db(const htmlElemDesc *, const htmlElemDesc *);
CheckInterfacedef(htmlElementStatusHere,htmlElementStatusHere_db);
extern htmlDocPtr htmlParseDoc_db(xmlChar *, const char *);
CheckInterfacedef(htmlParseDoc,htmlParseDoc_db);
extern htmlDocPtr htmlSAXParseDoc_db(xmlChar *, const char *, htmlSAXHandlerPtr, void *);
CheckInterfacedef(htmlSAXParseDoc,htmlSAXParseDoc_db);
extern htmlDocPtr htmlCtxtReadDoc_db(htmlParserCtxtPtr, const xmlChar *, const char *, const char *, int);
CheckInterfacedef(htmlCtxtReadDoc,htmlCtxtReadDoc_db);
extern htmlDocPtr htmlReadIO_db(xmlInputReadCallback, xmlInputCloseCallback, void *, const char *, const char *, int);
CheckInterfacedef(htmlReadIO,htmlReadIO_db);
extern htmlDocPtr htmlCtxtReadIO_db(htmlParserCtxtPtr, xmlInputReadCallback, xmlInputCloseCallback, void *, const char *, const char *, int);
CheckInterfacedef(htmlCtxtReadIO,htmlCtxtReadIO_db);
extern int htmlHandleOmittedElem_db(int);
CheckInterfacedef(htmlHandleOmittedElem,htmlHandleOmittedElem_db);
extern htmlDocPtr htmlReadMemory_db(const char *, int, const char *, const char *, int);
CheckInterfacedef(htmlReadMemory,htmlReadMemory_db);
extern htmlDocPtr htmlCtxtReadMemory_db(htmlParserCtxtPtr, const char *, int, const char *, const char *, int);
CheckInterfacedef(htmlCtxtReadMemory,htmlCtxtReadMemory_db);
extern void htmlParseElement_db(htmlParserCtxtPtr);
CheckInterfacedef(htmlParseElement,htmlParseElement_db);
extern const htmlEntityDesc * htmlEntityValueLookup_db(unsigned int);
CheckInterfacedef(htmlEntityValueLookup,htmlEntityValueLookup_db);
extern int htmlEncodeEntities_db(unsigned char *, int *, const unsigned char *, int *, int);
CheckInterfacedef(htmlEncodeEntities,htmlEncodeEntities_db);
extern htmlDocPtr htmlParseFile_db(const char *, const char *);
CheckInterfacedef(htmlParseFile,htmlParseFile_db);
extern htmlDocPtr htmlSAXParseFile_db(const char *, const char *, htmlSAXHandlerPtr, void *);
CheckInterfacedef(htmlSAXParseFile,htmlSAXParseFile_db);
extern int htmlIsAutoClosed_db(htmlDocPtr, htmlNodePtr);
CheckInterfacedef(htmlIsAutoClosed,htmlIsAutoClosed_db);
extern htmlParserCtxtPtr htmlCreatePushParserCtxt_db(htmlSAXHandlerPtr, void *, const char *, int, const char *, xmlCharEncoding);
CheckInterfacedef(htmlCreatePushParserCtxt,htmlCreatePushParserCtxt_db);
extern int htmlIsScriptAttribute_db(const xmlChar *);
CheckInterfacedef(htmlIsScriptAttribute,htmlIsScriptAttribute_db);
extern int UTF8ToHtml_db(unsigned char *, int *, const unsigned char *, int *);
CheckInterfacedef(UTF8ToHtml,UTF8ToHtml_db);
extern int htmlElementAllowedHere_db(const htmlElemDesc *, const xmlChar *);
CheckInterfacedef(htmlElementAllowedHere,htmlElementAllowedHere_db);
extern int htmlParseCharRef_db(htmlParserCtxtPtr);
CheckInterfacedef(htmlParseCharRef,htmlParseCharRef_db);
extern int htmlCtxtUseOptions_db(htmlParserCtxtPtr, int);
CheckInterfacedef(htmlCtxtUseOptions,htmlCtxtUseOptions_db);
extern int htmlParseChunk_db(htmlParserCtxtPtr, const char *, int, int);
CheckInterfacedef(htmlParseChunk,htmlParseChunk_db);
extern htmlDocPtr htmlReadFd_db(int, const char *, const char *, int);
CheckInterfacedef(htmlReadFd,htmlReadFd_db);
extern void htmlCtxtReset_db(htmlParserCtxtPtr);
CheckInterfacedef(htmlCtxtReset,htmlCtxtReset_db);
extern htmlDocPtr htmlCtxtReadFile_db(htmlParserCtxtPtr, const char *, const char *, int);
CheckInterfacedef(htmlCtxtReadFile,htmlCtxtReadFile_db);
extern const htmlEntityDesc * htmlEntityLookup_db(const xmlChar *);
CheckInterfacedef(htmlEntityLookup,htmlEntityLookup_db);
extern htmlDocPtr htmlCtxtReadFd_db(htmlParserCtxtPtr, int, const char *, const char *, int);
CheckInterfacedef(htmlCtxtReadFd,htmlCtxtReadFd_db);
extern const htmlElemDesc * htmlTagLookup_db(const xmlChar *);
CheckInterfacedef(htmlTagLookup,htmlTagLookup_db);
extern void htmlFreeParserCtxt_db(htmlParserCtxtPtr);
CheckInterfacedef(htmlFreeParserCtxt,htmlFreeParserCtxt_db);
extern int htmlAutoCloseTag_db(htmlDocPtr, const xmlChar *, htmlNodePtr);
CheckInterfacedef(htmlAutoCloseTag,htmlAutoCloseTag_db);
extern htmlParserCtxtPtr htmlCreateMemoryParserCtxt_db(const char *, int);
CheckInterfacedef(htmlCreateMemoryParserCtxt,htmlCreateMemoryParserCtxt_db);
extern htmlDocPtr htmlReadFile_db(const char *, const char *, int);
CheckInterfacedef(htmlReadFile,htmlReadFile_db);
extern htmlDocPtr htmlReadDoc_db(const xmlChar *, const char *, const char *, int);
CheckInterfacedef(htmlReadDoc,htmlReadDoc_db);
extern const htmlEntityDesc * htmlParseEntityRef_db(htmlParserCtxtPtr, const xmlChar * *);
CheckInterfacedef(htmlParseEntityRef,htmlParseEntityRef_db);
extern int htmlParseDocument_db(htmlParserCtxtPtr);
CheckInterfacedef(htmlParseDocument,htmlParseDocument_db);
extern htmlStatus htmlAttrAllowed_db(const htmlElemDesc *, const xmlChar *, int);
CheckInterfacedef(htmlAttrAllowed,htmlAttrAllowed_db);
#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests passed out of %d tests in libxml2/libxml/HTMLparser.h\n\n",pcnt,cnt);
return cnt;
#endif

}
