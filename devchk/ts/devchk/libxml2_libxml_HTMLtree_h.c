/*
 * Test of libxml2/libxml/HTMLtree.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#define __LSB_VERSION__ 41
#include <libxml/xmlregexp.h>
#include "libxml2/libxml/HTMLtree.h"



#ifdef TET_TEST
void libxml2_libxml_HTMLtree_h()
{
#else
int libxml2_libxml_HTMLtree_h()
{
#endif

int cnt=0;

int pcnt=0;
char *real_macro_value, *stripped_macro_value;
int macro_ndx, stripped_value_ndx;
real_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );
stripped_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );

#ifdef TET_TEST
Msg("Checking data structures in libxml2/libxml/HTMLtree.h\n");
#endif

printf("Checking data structures in libxml2/libxml/HTMLtree.h\n");
#if _LSB_DEFAULT_ARCH
#ifdef HTML_TEXT_NODE
	CompareConstant(HTML_TEXT_NODE,XML_TEXT_NODE,9476,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: HTML_TEXT_NODE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef HTML_ENTITY_REF_NODE
	CompareConstant(HTML_ENTITY_REF_NODE,XML_ENTITY_REF_NODE,9477,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: HTML_ENTITY_REF_NODE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef HTML_COMMENT_NODE
	CompareConstant(HTML_COMMENT_NODE,XML_COMMENT_NODE,9478,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: HTML_COMMENT_NODE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef HTML_PRESERVE_NODE
	CompareConstant(HTML_PRESERVE_NODE,XML_CDATA_SECTION_NODE,9479,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: HTML_PRESERVE_NODE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef HTML_PI_NODE
	CompareConstant(HTML_PI_NODE,XML_PI_NODE,9480,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: HTML_PI_NODE\n");
cnt++;
#endif

#endif

extern void htmlNodeDumpOutput_db(xmlOutputBufferPtr, xmlDocPtr, xmlNodePtr, const char *);
CheckInterfacedef(htmlNodeDumpOutput,htmlNodeDumpOutput_db);
extern int htmlSaveFileFormat_db(const char *, xmlDocPtr, const char *, int);
CheckInterfacedef(htmlSaveFileFormat,htmlSaveFileFormat_db);
extern int htmlSaveFile_db(const char *, xmlDocPtr);
CheckInterfacedef(htmlSaveFile,htmlSaveFile_db);
extern htmlDocPtr htmlNewDoc_db(const xmlChar *, const xmlChar *);
CheckInterfacedef(htmlNewDoc,htmlNewDoc_db);
extern const xmlChar * htmlGetMetaEncoding_db(htmlDocPtr);
CheckInterfacedef(htmlGetMetaEncoding,htmlGetMetaEncoding_db);
extern void htmlNodeDumpFile_db(FILE *, xmlDocPtr, xmlNodePtr);
CheckInterfacedef(htmlNodeDumpFile,htmlNodeDumpFile_db);
extern int htmlNodeDump_db(xmlBufferPtr, xmlDocPtr, xmlNodePtr);
CheckInterfacedef(htmlNodeDump,htmlNodeDump_db);
extern void htmlDocContentDumpFormatOutput_db(xmlOutputBufferPtr, xmlDocPtr, const char *, int);
CheckInterfacedef(htmlDocContentDumpFormatOutput,htmlDocContentDumpFormatOutput_db);
extern int htmlIsBooleanAttr_db(const xmlChar *);
CheckInterfacedef(htmlIsBooleanAttr,htmlIsBooleanAttr_db);
extern int htmlSaveFileEnc_db(const char *, xmlDocPtr, const char *);
CheckInterfacedef(htmlSaveFileEnc,htmlSaveFileEnc_db);
extern htmlDocPtr htmlNewDocNoDtD_db(const xmlChar *, const xmlChar *);
CheckInterfacedef(htmlNewDocNoDtD,htmlNewDocNoDtD_db);
extern int htmlSetMetaEncoding_db(htmlDocPtr, const xmlChar *);
CheckInterfacedef(htmlSetMetaEncoding,htmlSetMetaEncoding_db);
extern void htmlDocContentDumpOutput_db(xmlOutputBufferPtr, xmlDocPtr, const char *);
CheckInterfacedef(htmlDocContentDumpOutput,htmlDocContentDumpOutput_db);
extern int htmlNodeDumpFileFormat_db(FILE *, xmlDocPtr, xmlNodePtr, const char *, int);
CheckInterfacedef(htmlNodeDumpFileFormat,htmlNodeDumpFileFormat_db);
extern int htmlDocDump_db(FILE *, xmlDocPtr);
CheckInterfacedef(htmlDocDump,htmlDocDump_db);
extern void htmlNodeDumpFormatOutput_db(xmlOutputBufferPtr, xmlDocPtr, xmlNodePtr, const char *, int);
CheckInterfacedef(htmlNodeDumpFormatOutput,htmlNodeDumpFormatOutput_db);
extern void htmlDocDumpMemory_db(xmlDocPtr, xmlChar * *, int *);
CheckInterfacedef(htmlDocDumpMemory,htmlDocDumpMemory_db);
#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests passed out of %d tests in libxml2/libxml/HTMLtree.h\n\n",pcnt,cnt);
return cnt;
#endif

}
