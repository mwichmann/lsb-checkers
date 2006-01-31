/*
 * Test of libxml2/libxml/uri.h
 */
#include "hdrchk.h"
#include "sys/types.h"
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
CheckTypeSize(struct _xmlURI,40, 14565, 2)
CheckMemberSize(struct _xmlURI,opaque,4,2,47741)
CheckOffset(struct _xmlURI,opaque,4,2,47741)
CheckMemberSize(struct _xmlURI,authority,4,2,47742)
CheckOffset(struct _xmlURI,authority,8,2,47742)
CheckMemberSize(struct _xmlURI,server,4,2,47743)
CheckOffset(struct _xmlURI,server,12,2,47743)
CheckMemberSize(struct _xmlURI,user,4,2,47744)
CheckOffset(struct _xmlURI,user,16,2,47744)
CheckMemberSize(struct _xmlURI,port,4,2,47745)
CheckOffset(struct _xmlURI,port,20,2,47745)
CheckMemberSize(struct _xmlURI,path,4,2,47746)
CheckOffset(struct _xmlURI,path,24,2,47746)
CheckMemberSize(struct _xmlURI,query,4,2,47747)
CheckOffset(struct _xmlURI,query,28,2,47747)
CheckMemberSize(struct _xmlURI,fragment,4,2,47748)
CheckOffset(struct _xmlURI,fragment,32,2,47748)
CheckMemberSize(struct _xmlURI,cleanup,4,2,47749)
CheckOffset(struct _xmlURI,cleanup,36,2,47749)
#elif __x86_64__
CheckTypeSize(struct _xmlURI,80, 14565, 11)
CheckMemberSize(struct _xmlURI,opaque,8,11,47741)
CheckOffset(struct _xmlURI,opaque,8,11,47741)
CheckMemberSize(struct _xmlURI,authority,8,11,47742)
CheckOffset(struct _xmlURI,authority,16,11,47742)
CheckMemberSize(struct _xmlURI,server,8,11,47743)
CheckOffset(struct _xmlURI,server,24,11,47743)
CheckMemberSize(struct _xmlURI,user,8,11,47744)
CheckOffset(struct _xmlURI,user,32,11,47744)
CheckMemberSize(struct _xmlURI,port,4,11,47745)
CheckOffset(struct _xmlURI,port,40,11,47745)
CheckMemberSize(struct _xmlURI,path,8,11,47746)
CheckOffset(struct _xmlURI,path,48,11,47746)
CheckMemberSize(struct _xmlURI,query,8,11,47747)
CheckOffset(struct _xmlURI,query,56,11,47747)
CheckMemberSize(struct _xmlURI,fragment,8,11,47748)
CheckOffset(struct _xmlURI,fragment,64,11,47748)
CheckMemberSize(struct _xmlURI,cleanup,4,11,47749)
CheckOffset(struct _xmlURI,cleanup,72,11,47749)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,14565,0);
Msg("Find size of _xmlURI (14565)\n");
#endif

#if __i386__
CheckTypeSize(xmlURI,40, 14566, 2)
#elif __x86_64__
CheckTypeSize(xmlURI,80, 14566, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,14566,0);
Msg("Find size of xmlURI (14566)\n");
#endif

#if __i386__
CheckTypeSize(xmlURI *,4, 14567, 2)
#elif __x86_64__
CheckTypeSize(xmlURI *,8, 14567, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,14567,0);
Msg("Find size of xmlURI * (14567)\n");
#endif

#if __i386__
CheckTypeSize(xmlURIPtr,4, 14568, 2)
#elif __x86_64__
CheckTypeSize(xmlURIPtr,8, 14568, 11)
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