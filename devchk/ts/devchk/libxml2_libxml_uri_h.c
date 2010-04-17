/*
 * Test of libxml2/libxml/uri.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#define __LSB_VERSION__ 41
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
char *real_macro_value, *stripped_macro_value;
int macro_ndx, stripped_value_ndx;
real_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );
stripped_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );

#ifdef TET_TEST
Msg("Checking data structures in libxml2/libxml/uri.h\n");
#endif

printf("Checking data structures in libxml2/libxml/uri.h\n");
#if defined __s390x__
CheckTypeSize(struct _xmlURI,80, 14565, 12, , NULL, 0, NULL)
CheckMemberSize(struct _xmlURI,opaque,8,12,47741)
CheckOffset(struct _xmlURI,opaque,8,12,47741)
CheckMemberSize(struct _xmlURI,authority,8,12,47742)
CheckOffset(struct _xmlURI,authority,16,12,47742)
CheckMemberSize(struct _xmlURI,server,8,12,47743)
CheckOffset(struct _xmlURI,server,24,12,47743)
CheckMemberSize(struct _xmlURI,user,8,12,47744)
CheckOffset(struct _xmlURI,user,32,12,47744)
CheckMemberSize(struct _xmlURI,port,4,12,47745)
CheckOffset(struct _xmlURI,port,40,12,47745)
CheckMemberSize(struct _xmlURI,path,8,12,47746)
CheckOffset(struct _xmlURI,path,48,12,47746)
CheckMemberSize(struct _xmlURI,query,8,12,47747)
CheckOffset(struct _xmlURI,query,56,12,47747)
CheckMemberSize(struct _xmlURI,fragment,8,12,47748)
CheckOffset(struct _xmlURI,fragment,64,12,47748)
CheckMemberSize(struct _xmlURI,cleanup,4,12,47749)
CheckOffset(struct _xmlURI,cleanup,72,12,47749)
#elif defined __x86_64__
CheckTypeSize(struct _xmlURI,80, 14565, 11, , NULL, 0, NULL)
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
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(struct _xmlURI,40, 14565, 10, , NULL, 0, NULL)
CheckMemberSize(struct _xmlURI,opaque,4,10,47741)
CheckOffset(struct _xmlURI,opaque,4,10,47741)
CheckMemberSize(struct _xmlURI,authority,4,10,47742)
CheckOffset(struct _xmlURI,authority,8,10,47742)
CheckMemberSize(struct _xmlURI,server,4,10,47743)
CheckOffset(struct _xmlURI,server,12,10,47743)
CheckMemberSize(struct _xmlURI,user,4,10,47744)
CheckOffset(struct _xmlURI,user,16,10,47744)
CheckMemberSize(struct _xmlURI,port,4,10,47745)
CheckOffset(struct _xmlURI,port,20,10,47745)
CheckMemberSize(struct _xmlURI,path,4,10,47746)
CheckOffset(struct _xmlURI,path,24,10,47746)
CheckMemberSize(struct _xmlURI,query,4,10,47747)
CheckOffset(struct _xmlURI,query,28,10,47747)
CheckMemberSize(struct _xmlURI,fragment,4,10,47748)
CheckOffset(struct _xmlURI,fragment,32,10,47748)
CheckMemberSize(struct _xmlURI,cleanup,4,10,47749)
CheckOffset(struct _xmlURI,cleanup,36,10,47749)
#elif defined __powerpc64__
CheckTypeSize(struct _xmlURI,80, 14565, 9, , NULL, 0, NULL)
CheckMemberSize(struct _xmlURI,opaque,8,9,47741)
CheckOffset(struct _xmlURI,opaque,8,9,47741)
CheckMemberSize(struct _xmlURI,authority,8,9,47742)
CheckOffset(struct _xmlURI,authority,16,9,47742)
CheckMemberSize(struct _xmlURI,server,8,9,47743)
CheckOffset(struct _xmlURI,server,24,9,47743)
CheckMemberSize(struct _xmlURI,user,8,9,47744)
CheckOffset(struct _xmlURI,user,32,9,47744)
CheckMemberSize(struct _xmlURI,port,4,9,47745)
CheckOffset(struct _xmlURI,port,40,9,47745)
CheckMemberSize(struct _xmlURI,path,8,9,47746)
CheckOffset(struct _xmlURI,path,48,9,47746)
CheckMemberSize(struct _xmlURI,query,8,9,47747)
CheckOffset(struct _xmlURI,query,56,9,47747)
CheckMemberSize(struct _xmlURI,fragment,8,9,47748)
CheckOffset(struct _xmlURI,fragment,64,9,47748)
CheckMemberSize(struct _xmlURI,cleanup,4,9,47749)
CheckOffset(struct _xmlURI,cleanup,72,9,47749)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(struct _xmlURI,40, 14565, 6, , NULL, 0, NULL)
CheckMemberSize(struct _xmlURI,opaque,4,6,47741)
CheckOffset(struct _xmlURI,opaque,4,6,47741)
CheckMemberSize(struct _xmlURI,authority,4,6,47742)
CheckOffset(struct _xmlURI,authority,8,6,47742)
CheckMemberSize(struct _xmlURI,server,4,6,47743)
CheckOffset(struct _xmlURI,server,12,6,47743)
CheckMemberSize(struct _xmlURI,user,4,6,47744)
CheckOffset(struct _xmlURI,user,16,6,47744)
CheckMemberSize(struct _xmlURI,port,4,6,47745)
CheckOffset(struct _xmlURI,port,20,6,47745)
CheckMemberSize(struct _xmlURI,path,4,6,47746)
CheckOffset(struct _xmlURI,path,24,6,47746)
CheckMemberSize(struct _xmlURI,query,4,6,47747)
CheckOffset(struct _xmlURI,query,28,6,47747)
CheckMemberSize(struct _xmlURI,fragment,4,6,47748)
CheckOffset(struct _xmlURI,fragment,32,6,47748)
CheckMemberSize(struct _xmlURI,cleanup,4,6,47749)
CheckOffset(struct _xmlURI,cleanup,36,6,47749)
#elif defined __ia64__
CheckTypeSize(struct _xmlURI,80, 14565, 3, , NULL, 0, NULL)
CheckMemberSize(struct _xmlURI,opaque,8,3,47741)
CheckOffset(struct _xmlURI,opaque,8,3,47741)
CheckMemberSize(struct _xmlURI,authority,8,3,47742)
CheckOffset(struct _xmlURI,authority,16,3,47742)
CheckMemberSize(struct _xmlURI,server,8,3,47743)
CheckOffset(struct _xmlURI,server,24,3,47743)
CheckMemberSize(struct _xmlURI,user,8,3,47744)
CheckOffset(struct _xmlURI,user,32,3,47744)
CheckMemberSize(struct _xmlURI,port,4,3,47745)
CheckOffset(struct _xmlURI,port,40,3,47745)
CheckMemberSize(struct _xmlURI,path,8,3,47746)
CheckOffset(struct _xmlURI,path,48,3,47746)
CheckMemberSize(struct _xmlURI,query,8,3,47747)
CheckOffset(struct _xmlURI,query,56,3,47747)
CheckMemberSize(struct _xmlURI,fragment,8,3,47748)
CheckOffset(struct _xmlURI,fragment,64,3,47748)
CheckMemberSize(struct _xmlURI,cleanup,4,3,47749)
CheckOffset(struct _xmlURI,cleanup,72,3,47749)
#elif defined __i386__
CheckTypeSize(struct _xmlURI,40, 14565, 2, , NULL, 0, NULL)
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
#elif 1
CheckTypeSize(struct _xmlURI,0, 14565, 1, , NULL, 0, NULL)
Msg("Missing member data for _xmlURI on All\n");
CheckOffset(struct _xmlURI,scheme,0,1,47740)
#endif

#if defined __s390x__
CheckTypeSize(xmlURI,80, 14566, 12, 3.1, NULL, 14565, NULL)
#elif defined __x86_64__
CheckTypeSize(xmlURI,80, 14566, 11, 3.1, NULL, 14565, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(xmlURI,40, 14566, 10, 3.1, NULL, 14565, NULL)
#elif defined __powerpc64__
CheckTypeSize(xmlURI,80, 14566, 9, 3.1, NULL, 14565, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(xmlURI,40, 14566, 6, 3.1, NULL, 14565, NULL)
#elif defined __ia64__
CheckTypeSize(xmlURI,80, 14566, 3, 3.1, NULL, 14565, NULL)
#elif defined __i386__
CheckTypeSize(xmlURI,40, 14566, 2, 3.1, NULL, 14565, NULL)
#else
Msg("Find size of xmlURI (14566)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14565,NULL);\n",architecture,14566,0);
#endif

#if defined __s390x__
CheckTypeSize(xmlURIPtr,8, 14568, 12, 3.1, NULL, 14567, NULL)
#elif defined __x86_64__
CheckTypeSize(xmlURIPtr,8, 14568, 11, 3.1, NULL, 14567, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(xmlURIPtr,4, 14568, 10, 3.1, NULL, 14567, NULL)
#elif defined __powerpc64__
CheckTypeSize(xmlURIPtr,8, 14568, 9, 3.1, NULL, 14567, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(xmlURIPtr,4, 14568, 6, 3.1, NULL, 14567, NULL)
#elif defined __ia64__
CheckTypeSize(xmlURIPtr,8, 14568, 3, 3.1, NULL, 14567, NULL)
#elif defined __i386__
CheckTypeSize(xmlURIPtr,4, 14568, 2, 3.1, NULL, 14567, NULL)
#else
Msg("Find size of xmlURIPtr (14568)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14567, NULL);\n",architecture,14568,0);
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
