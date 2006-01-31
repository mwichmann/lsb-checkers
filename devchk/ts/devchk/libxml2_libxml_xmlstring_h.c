/*
 * Test of libxml2/libxml/xmlstring.h
 */
#include "hdrchk.h"
#include "sys/types.h"
#define _LSB_DEFAULT_ARCH 1
#include "libxml2/libxml/xmlstring.h"



#ifdef TET_TEST
void libxml2_libxml_xmlstring_h()
{
#else
int libxml2_libxml_xmlstring_h()
{
#endif

int cnt=0;

int pcnt=0;
#ifdef TET_TEST
Msg("Checking data structures in libxml2/libxml/xmlstring.h\n");
#endif

printf("Checking data structures in libxml2/libxml/xmlstring.h\n");
#if _LSB_DEFAULT_ARCH
/* No test for BAD_CAST */
#endif

#if __i386__
CheckTypeSize(xmlChar,1, 14547, 2)
#elif __x86_64__
CheckTypeSize(xmlChar,1, 14547, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,14547,0);
Msg("Find size of xmlChar (14547)\n");
#endif

#if __i386__
CheckTypeSize(const xmlChar,1, 14548, 2)
#elif __x86_64__
CheckTypeSize(const xmlChar,1, 14548, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,14548,0);
Msg("Find size of const xmlChar (14548)\n");
#endif

#if __i386__
#elif __x86_64__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,14549,0);
Msg("Find size of const xmlChar * (14549)\n");
#endif

#if __i386__
CheckTypeSize(xmlChar *,4, 14550, 2)
#elif __x86_64__
CheckTypeSize(xmlChar *,8, 14550, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,14550,0);
Msg("Find size of xmlChar * (14550)\n");
#endif

extern int xmlCheckUTF8_db(const unsigned char *);
CheckInterfacedef(xmlCheckUTF8,xmlCheckUTF8_db);
extern int xmlUTF8Strlen_db(const xmlChar *);
CheckInterfacedef(xmlUTF8Strlen,xmlUTF8Strlen_db);
extern const xmlChar * xmlStrstr_db(const xmlChar *, const xmlChar *);
CheckInterfacedef(xmlStrstr,xmlStrstr_db);
extern int xmlStrEqual_db(const xmlChar *, const xmlChar *);
CheckInterfacedef(xmlStrEqual,xmlStrEqual_db);
extern xmlChar * xmlStrdup_db(const xmlChar *);
CheckInterfacedef(xmlStrdup,xmlStrdup_db);
extern const xmlChar * xmlStrcasestr_db(const xmlChar *, xmlChar *);
CheckInterfacedef(xmlStrcasestr,xmlStrcasestr_db);
extern const xmlChar * xmlStrchr_db(const xmlChar *, xmlChar);
CheckInterfacedef(xmlStrchr,xmlStrchr_db);
extern int xmlGetUTF8Char_db(const unsigned char *, int *);
CheckInterfacedef(xmlGetUTF8Char,xmlGetUTF8Char_db);
extern const xmlChar * xmlUTF8Strpos_db(const xmlChar *, int);
CheckInterfacedef(xmlUTF8Strpos,xmlUTF8Strpos_db);
extern int xmlUTF8Size_db(const xmlChar *);
CheckInterfacedef(xmlUTF8Size,xmlUTF8Size_db);
extern int xmlStrlen_db(const xmlChar *);
CheckInterfacedef(xmlStrlen,xmlStrlen_db);
extern xmlChar * xmlUTF8Strndup_db(const xmlChar *, int);
CheckInterfacedef(xmlUTF8Strndup,xmlUTF8Strndup_db);
extern int xmlUTF8Charcmp_db(const xmlChar *, const xmlChar *);
CheckInterfacedef(xmlUTF8Charcmp,xmlUTF8Charcmp_db);
extern xmlChar * xmlStrcat_db(xmlChar *, const xmlChar *);
CheckInterfacedef(xmlStrcat,xmlStrcat_db);
extern int xmlStrncasecmp_db(const xmlChar *, const xmlChar *, int);
CheckInterfacedef(xmlStrncasecmp,xmlStrncasecmp_db);
extern int xmlStrncmp_db(const xmlChar *, const xmlChar *, int);
CheckInterfacedef(xmlStrncmp,xmlStrncmp_db);
extern xmlChar * xmlStrncatNew_db(const xmlChar *, const xmlChar *, int);
CheckInterfacedef(xmlStrncatNew,xmlStrncatNew_db);
extern xmlChar * xmlCharStrndup_db(const char *, int);
CheckInterfacedef(xmlCharStrndup,xmlCharStrndup_db);
extern xmlChar * xmlStrndup_db(const xmlChar *, int);
CheckInterfacedef(xmlStrndup,xmlStrndup_db);
extern xmlChar * xmlStrncat_db(xmlChar *, const xmlChar *, int);
CheckInterfacedef(xmlStrncat,xmlStrncat_db);
extern xmlChar * xmlStrsub_db(const xmlChar *, int, int);
CheckInterfacedef(xmlStrsub,xmlStrsub_db);
extern int xmlStrQEqual_db(const xmlChar *, const xmlChar *, const xmlChar *);
CheckInterfacedef(xmlStrQEqual,xmlStrQEqual_db);
extern int xmlStrPrintf_db(xmlChar *, int, const xmlChar *, ...);
CheckInterfacedef(xmlStrPrintf,xmlStrPrintf_db);
extern xmlChar * xmlUTF8Strsub_db(const xmlChar *, int, int);
CheckInterfacedef(xmlUTF8Strsub,xmlUTF8Strsub_db);
extern int xmlStrVPrintf_db(xmlChar *, int, const xmlChar *, va_list);
CheckInterfacedef(xmlStrVPrintf,xmlStrVPrintf_db);
extern int xmlStrcmp_db(const xmlChar *, const xmlChar *);
CheckInterfacedef(xmlStrcmp,xmlStrcmp_db);
extern int xmlUTF8Strloc_db(const xmlChar *, const xmlChar *);
CheckInterfacedef(xmlUTF8Strloc,xmlUTF8Strloc_db);
extern xmlChar * xmlCharStrdup_db(const char *);
CheckInterfacedef(xmlCharStrdup,xmlCharStrdup_db);
extern int xmlStrcasecmp_db(const xmlChar *, const xmlChar *);
CheckInterfacedef(xmlStrcasecmp,xmlStrcasecmp_db);
extern int xmlUTF8Strsize_db(const xmlChar *, int);
CheckInterfacedef(xmlUTF8Strsize,xmlUTF8Strsize_db);
#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests passed out of %d tests in libxml2/libxml/xmlstring.h\n\n",pcnt,cnt);
return cnt;
#endif

}