/*
 * Test of libxml2/libxml/uri.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#include <libxml/xmlregexp.h>
#include "libxml2/libxml/uri.h"



#ifdef TET_TEST
void libxml2_libxml_uri_h()
{
#else
int libxml2_libxml_uri_h()
{
#endif

int cnt=0;

int pcnt=0;
#ifdef TET_TEST
Msg("Checking data structures in libxml2/libxml/uri.h\n");
#endif

printf("Checking data structures in libxml2/libxml/uri.h\n");
#if __i386__
CheckTypeSize(xmlURI,40, 14566, 2)
#elif __x86_64__
CheckTypeSize(xmlURI,80, 14566, 11)
#elif __ia64__
CheckTypeSize(xmlURI,80, 14566, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(xmlURI,40, 14566, 6)
#elif __powerpc64__
CheckTypeSize(xmlURI,80, 14566, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(xmlURI,40, 14566, 10)
#elif __s390x__
CheckTypeSize(xmlURI,80, 14566, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,14566,0);
Msg("Find size of xmlURI (14566)\n");
#endif

#if __i386__
CheckTypeSize(xmlURIPtr,4, 14568, 2)
#elif __x86_64__
CheckTypeSize(xmlURIPtr,8, 14568, 11)
#elif __ia64__
CheckTypeSize(xmlURIPtr,8, 14568, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(xmlURIPtr,4, 14568, 6)
#elif __powerpc64__
CheckTypeSize(xmlURIPtr,8, 14568, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(xmlURIPtr,4, 14568, 10)
#elif __s390x__
CheckTypeSize(xmlURIPtr,8, 14568, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,14568,0);
Msg("Find size of xmlURIPtr (14568)\n");
#endif

extern void xmlFreeURI_db(xmlURIPtr);
CheckInterfacedef(xmlFreeURI,xmlFreeURI_db);
extern xmlChar * xmlCanonicPath_db(const xmlChar *);
CheckInterfacedef(xmlCanonicPath,xmlCanonicPath_db);
extern xmlURIPtr xmlParseURI_db(const char *);
CheckInterfacedef(xmlParseURI,xmlParseURI_db);
extern int xmlParseURIReference_db(xmlURIPtr, const char *);
CheckInterfacedef(xmlParseURIReference,xmlParseURIReference_db);
extern int xmlNormalizeURIPath_db(char *);
CheckInterfacedef(xmlNormalizeURIPath,xmlNormalizeURIPath_db);
extern void xmlPrintURI_db(FILE *, xmlURIPtr);
CheckInterfacedef(xmlPrintURI,xmlPrintURI_db);
extern xmlChar * xmlBuildRelativeURI_db(const xmlChar *, const xmlChar *);
CheckInterfacedef(xmlBuildRelativeURI,xmlBuildRelativeURI_db);
extern xmlChar * xmlSaveUri_db(xmlURIPtr);
CheckInterfacedef(xmlSaveUri,xmlSaveUri_db);
extern char * xmlURIUnescapeString_db(const char *, int, char *);
CheckInterfacedef(xmlURIUnescapeString,xmlURIUnescapeString_db);
extern xmlChar * xmlBuildURI_db(const xmlChar *, const xmlChar *);
CheckInterfacedef(xmlBuildURI,xmlBuildURI_db);
extern xmlURIPtr xmlParseURIRaw_db(const char *, int);
CheckInterfacedef(xmlParseURIRaw,xmlParseURIRaw_db);
extern xmlURIPtr xmlCreateURI_db(void);
CheckInterfacedef(xmlCreateURI,xmlCreateURI_db);
extern xmlChar * xmlURIEscape_db(const xmlChar *);
CheckInterfacedef(xmlURIEscape,xmlURIEscape_db);
extern xmlChar * xmlURIEscapeStr_db(const xmlChar *, const xmlChar *);
CheckInterfacedef(xmlURIEscapeStr,xmlURIEscapeStr_db);
#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests passed out of %d tests in libxml2/libxml/uri.h\n\n",pcnt,cnt);
return cnt;
#endif

}
