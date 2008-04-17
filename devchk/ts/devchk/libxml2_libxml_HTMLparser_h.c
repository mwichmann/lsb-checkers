/*
 * Test of libxml2/libxml/HTMLparser.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#define __LSB_VERSION__ 40
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

#if defined __i386__
CheckTypeSize(htmlStatus,4, 15003, 2, 3.1, NULL, 15002, NULL)
#elif defined __x86_64__
CheckTypeSize(htmlStatus,4, 15003, 11, 3.1, NULL, 15002, NULL)
#elif defined __ia64__
CheckTypeSize(htmlStatus,4, 15003, 3, 3.1, NULL, 15002, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(htmlStatus,4, 15003, 6, 3.1, NULL, 15002, NULL)
#elif defined __powerpc64__
CheckTypeSize(htmlStatus,4, 15003, 9, 3.1, NULL, 15002, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(htmlStatus,4, 15003, 10, 3.1, NULL, 15002, NULL)
#elif defined __s390x__
CheckTypeSize(htmlStatus,4, 15003, 12, 3.1, NULL, 15002, NULL)
#else
Msg("Find size of htmlStatus (15003)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,15002,NULL);\n",architecture,15003,0);
#endif

#if defined __i386__
CheckTypeSize(htmlElemDesc,36, 15005, 2, 3.1, NULL, 15004, NULL)
#elif defined __x86_64__
CheckTypeSize(htmlElemDesc,64, 15005, 11, 3.1, NULL, 15004, NULL)
#elif defined __ia64__
CheckTypeSize(htmlElemDesc,64, 15005, 3, 3.1, NULL, 15004, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(htmlElemDesc,36, 15005, 6, 3.1, NULL, 15004, NULL)
#elif defined __powerpc64__
CheckTypeSize(htmlElemDesc,64, 15005, 9, 3.1, NULL, 15004, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(htmlElemDesc,36, 15005, 10, 3.1, NULL, 15004, NULL)
#elif defined __s390x__
CheckTypeSize(htmlElemDesc,64, 15005, 12, 3.1, NULL, 15004, NULL)
#else
Msg("Find size of htmlElemDesc (15005)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,15004,NULL);\n",architecture,15005,0);
#endif

#if defined __i386__
CheckTypeSize(htmlDocPtr,4, 15008, 2, 3.1, NULL, 14612, NULL)
#elif defined __x86_64__
CheckTypeSize(htmlDocPtr,8, 15008, 11, 3.1, NULL, 14612, NULL)
#elif defined __ia64__
CheckTypeSize(htmlDocPtr,8, 15008, 3, 3.1, NULL, 14612, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(htmlDocPtr,4, 15008, 6, 3.1, NULL, 14612, NULL)
#elif defined __powerpc64__
CheckTypeSize(htmlDocPtr,8, 15008, 9, 3.1, NULL, 14612, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(htmlDocPtr,4, 15008, 10, 3.1, NULL, 14612, NULL)
#elif defined __s390x__
CheckTypeSize(htmlDocPtr,8, 15008, 12, 3.1, NULL, 14612, NULL)
#else
Msg("Find size of htmlDocPtr (15008)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14612,NULL);\n",architecture,15008,0);
#endif

#if defined __i386__
CheckTypeSize(htmlSAXHandlerPtr,4, 15009, 2, 3.1, NULL, 14980, NULL)
#elif defined __x86_64__
CheckTypeSize(htmlSAXHandlerPtr,8, 15009, 11, 3.1, NULL, 14980, NULL)
#elif defined __ia64__
CheckTypeSize(htmlSAXHandlerPtr,8, 15009, 3, 3.1, NULL, 14980, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(htmlSAXHandlerPtr,4, 15009, 6, 3.1, NULL, 14980, NULL)
#elif defined __powerpc64__
CheckTypeSize(htmlSAXHandlerPtr,8, 15009, 9, 3.1, NULL, 14980, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(htmlSAXHandlerPtr,4, 15009, 10, 3.1, NULL, 14980, NULL)
#elif defined __s390x__
CheckTypeSize(htmlSAXHandlerPtr,8, 15009, 12, 3.1, NULL, 14980, NULL)
#else
Msg("Find size of htmlSAXHandlerPtr (15009)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14980,NULL);\n",architecture,15009,0);
#endif

#if defined __i386__
CheckTypeSize(htmlParserCtxtPtr,4, 15010, 2, 3.1, NULL, 14832, NULL)
#elif defined __x86_64__
CheckTypeSize(htmlParserCtxtPtr,8, 15010, 11, 3.1, NULL, 14832, NULL)
#elif defined __ia64__
CheckTypeSize(htmlParserCtxtPtr,8, 15010, 3, 3.1, NULL, 14832, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(htmlParserCtxtPtr,4, 15010, 6, 3.1, NULL, 14832, NULL)
#elif defined __powerpc64__
CheckTypeSize(htmlParserCtxtPtr,8, 15010, 9, 3.1, NULL, 14832, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(htmlParserCtxtPtr,4, 15010, 10, 3.1, NULL, 14832, NULL)
#elif defined __s390x__
CheckTypeSize(htmlParserCtxtPtr,8, 15010, 12, 3.1, NULL, 14832, NULL)
#else
Msg("Find size of htmlParserCtxtPtr (15010)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14832,NULL);\n",architecture,15010,0);
#endif

#if defined __i386__
CheckTypeSize(htmlEntityDesc,12, 15012, 2, 3.1, NULL, 15011, NULL)
#elif defined __x86_64__
CheckTypeSize(htmlEntityDesc,24, 15012, 11, 3.1, NULL, 15011, NULL)
#elif defined __ia64__
CheckTypeSize(htmlEntityDesc,24, 15012, 3, 3.1, NULL, 15011, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(htmlEntityDesc,12, 15012, 6, 3.1, NULL, 15011, NULL)
#elif defined __powerpc64__
CheckTypeSize(htmlEntityDesc,24, 15012, 9, 3.1, NULL, 15011, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(htmlEntityDesc,12, 15012, 10, 3.1, NULL, 15011, NULL)
#elif defined __s390x__
CheckTypeSize(htmlEntityDesc,24, 15012, 12, 3.1, NULL, 15011, NULL)
#else
Msg("Find size of htmlEntityDesc (15012)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,15011,NULL);\n",architecture,15012,0);
#endif

#if defined __i386__
CheckTypeSize(htmlNodePtr,4, 15015, 2, 3.1, NULL, 14609, NULL)
#elif defined __x86_64__
CheckTypeSize(htmlNodePtr,8, 15015, 11, 3.1, NULL, 14609, NULL)
#elif defined __ia64__
CheckTypeSize(htmlNodePtr,8, 15015, 3, 3.1, NULL, 14609, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(htmlNodePtr,4, 15015, 6, 3.1, NULL, 14609, NULL)
#elif defined __powerpc64__
CheckTypeSize(htmlNodePtr,8, 15015, 9, 3.1, NULL, 14609, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(htmlNodePtr,4, 15015, 10, 3.1, NULL, 14609, NULL)
#elif defined __s390x__
CheckTypeSize(htmlNodePtr,8, 15015, 12, 3.1, NULL, 14609, NULL)
#else
Msg("Find size of htmlNodePtr (15015)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14609,NULL);\n",architecture,15015,0);
#endif

#if defined __i386__
CheckTypeSize(htmlParserOption,4, 15110, 2, 3.1, NULL, 15109, NULL)
#elif defined __x86_64__
CheckTypeSize(htmlParserOption,4, 15110, 11, 3.1, NULL, 15109, NULL)
#elif defined __ia64__
CheckTypeSize(htmlParserOption,4, 15110, 3, 3.1, NULL, 15109, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(htmlParserOption,4, 15110, 6, 3.1, NULL, 15109, NULL)
#elif defined __powerpc64__
CheckTypeSize(htmlParserOption,4, 15110, 9, 3.1, NULL, 15109, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(htmlParserOption,4, 15110, 10, 3.1, NULL, 15109, NULL)
#elif defined __s390x__
CheckTypeSize(htmlParserOption,4, 15110, 12, 3.1, NULL, 15109, NULL)
#else
Msg("Find size of htmlParserOption (15110)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,15109,NULL);\n",architecture,15110,0);
#endif

#if defined __i386__
CheckTypeSize(htmlParserInputPtr,4, 15111, 2, 3.1, NULL, 14654, NULL)
#elif defined __ia64__
CheckTypeSize(htmlParserInputPtr,8, 15111, 3, 3.1, NULL, 14654, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(htmlParserInputPtr,4, 15111, 6, 3.1, NULL, 14654, NULL)
#elif defined __powerpc64__
CheckTypeSize(htmlParserInputPtr,8, 15111, 9, 3.1, NULL, 14654, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(htmlParserInputPtr,4, 15111, 10, 3.1, NULL, 14654, NULL)
#elif defined __s390x__
CheckTypeSize(htmlParserInputPtr,8, 15111, 12, 3.1, NULL, 14654, NULL)
#elif defined __x86_64__
CheckTypeSize(htmlParserInputPtr,8, 15111, 11, 3.1, NULL, 14654, NULL)
#else
Msg("Find size of htmlParserInputPtr (15111)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14654,NULL);\n",architecture,15111,0);
#endif

#if defined __i386__
CheckTypeSize(htmlElemDescPtr,4, 15113, 2, 3.1, NULL, 15112, NULL)
#elif defined __ia64__
CheckTypeSize(htmlElemDescPtr,8, 15113, 3, 3.1, NULL, 15112, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(htmlElemDescPtr,4, 15113, 6, 3.1, NULL, 15112, NULL)
#elif defined __powerpc64__
CheckTypeSize(htmlElemDescPtr,8, 15113, 9, 3.1, NULL, 15112, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(htmlElemDescPtr,4, 15113, 10, 3.1, NULL, 15112, NULL)
#elif defined __s390x__
CheckTypeSize(htmlElemDescPtr,8, 15113, 12, 3.1, NULL, 15112, NULL)
#elif defined __x86_64__
CheckTypeSize(htmlElemDescPtr,8, 15113, 11, 3.1, NULL, 15112, NULL)
#else
Msg("Find size of htmlElemDescPtr (15113)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,15112,NULL);\n",architecture,15113,0);
#endif

#if defined __i386__
CheckTypeSize(htmlEntityDescPtr,4, 15115, 2, 3.1, NULL, 15114, NULL)
#elif defined __ia64__
CheckTypeSize(htmlEntityDescPtr,8, 15115, 3, 3.1, NULL, 15114, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(htmlEntityDescPtr,4, 15115, 6, 3.1, NULL, 15114, NULL)
#elif defined __powerpc64__
CheckTypeSize(htmlEntityDescPtr,8, 15115, 9, 3.1, NULL, 15114, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(htmlEntityDescPtr,4, 15115, 10, 3.1, NULL, 15114, NULL)
#elif defined __s390x__
CheckTypeSize(htmlEntityDescPtr,8, 15115, 12, 3.1, NULL, 15114, NULL)
#elif defined __x86_64__
CheckTypeSize(htmlEntityDescPtr,8, 15115, 11, 3.1, NULL, 15114, NULL)
#else
Msg("Find size of htmlEntityDescPtr (15115)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,15114,NULL);\n",architecture,15115,0);
#endif

#if defined __i386__
CheckTypeSize(htmlParserInput,60, 15116, 2, 3.1, NULL, 14652, NULL)
#elif defined __ia64__
CheckTypeSize(htmlParserInput,104, 15116, 3, 3.1, NULL, 14652, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(htmlParserInput,60, 15116, 6, 3.1, NULL, 14652, NULL)
#elif defined __powerpc64__
CheckTypeSize(htmlParserInput,104, 15116, 9, 3.1, NULL, 14652, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(htmlParserInput,60, 15116, 10, 3.1, NULL, 14652, NULL)
#elif defined __s390x__
CheckTypeSize(htmlParserInput,104, 15116, 12, 3.1, NULL, 14652, NULL)
#elif defined __x86_64__
CheckTypeSize(htmlParserInput,104, 15116, 11, 3.1, NULL, 14652, NULL)
#else
Msg("Find size of htmlParserInput (15116)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14652, NULL);\n",architecture,15116,0);
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
