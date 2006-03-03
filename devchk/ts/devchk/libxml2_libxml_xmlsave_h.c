/*
 * Test of libxml2/libxml/xmlsave.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#include <libxml/xmlregexp.h>

struct _xmlSaveCtxt { } ;
#include "libxml2/libxml/xmlsave.h"



#ifdef TET_TEST
void libxml2_libxml_xmlsave_h()
{
#else
int libxml2_libxml_xmlsave_h()
{
#endif

int cnt=0;

int pcnt=0;
#ifdef TET_TEST
Msg("Checking data structures in libxml2/libxml/xmlsave.h\n");
#endif

printf("Checking data structures in libxml2/libxml/xmlsave.h\n");
#if __i386__
CheckTypeSize(xmlSaveCtxt,0, 14836, 2)
#elif __x86_64__
CheckTypeSize(xmlSaveCtxt,0, 14836, 11)
#elif __ia64__
CheckTypeSize(xmlSaveCtxt,0, 14836, 3)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,14836,0);
Msg("Find size of xmlSaveCtxt (14836)\n");
#endif

#if __i386__
CheckTypeSize(xmlSaveCtxt *,4, 14837, 2)
#elif __x86_64__
CheckTypeSize(xmlSaveCtxt *,8, 14837, 11)
#elif __ia64__
CheckTypeSize(xmlSaveCtxt *,8, 14837, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(xmlSaveCtxt *,4, 14837, 6)
#elif __powerpc64__
CheckTypeSize(xmlSaveCtxt *,8, 14837, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(xmlSaveCtxt *,4, 14837, 10)
#elif __s390x__
CheckTypeSize(xmlSaveCtxt *,8, 14837, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,14837,0);
Msg("Find size of xmlSaveCtxt * (14837)\n");
#endif

#if __i386__
CheckTypeSize(xmlSaveCtxtPtr,4, 14838, 2)
#elif __x86_64__
CheckTypeSize(xmlSaveCtxtPtr,8, 14838, 11)
#elif __ia64__
CheckTypeSize(xmlSaveCtxtPtr,8, 14838, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(xmlSaveCtxtPtr,4, 14838, 6)
#elif __powerpc64__
CheckTypeSize(xmlSaveCtxtPtr,8, 14838, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(xmlSaveCtxtPtr,4, 14838, 10)
#elif __s390x__
CheckTypeSize(xmlSaveCtxtPtr,8, 14838, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,14838,0);
Msg("Find size of xmlSaveCtxtPtr (14838)\n");
#endif

#if __i386__
CheckEnum("XML_SAVE_FORMAT",XML_SAVE_FORMAT,1<<0);
CheckEnum("XML_SAVE_NO_DECL",XML_SAVE_NO_DECL,1<<1);
CheckEnum("XML_SAVE_NO_EMPTY",XML_SAVE_NO_EMPTY,1<<2);
CheckEnum("XML_SAVE_NO_XHTML",XML_SAVE_NO_XHTML,1<<3);
#elif __x86_64__
CheckEnum("XML_SAVE_FORMAT",XML_SAVE_FORMAT,1<<0);
CheckEnum("XML_SAVE_NO_DECL",XML_SAVE_NO_DECL,1<<1);
CheckEnum("XML_SAVE_NO_EMPTY",XML_SAVE_NO_EMPTY,1<<2);
CheckEnum("XML_SAVE_NO_XHTML",XML_SAVE_NO_XHTML,1<<3);
#elif __ia64__
CheckEnum("XML_SAVE_FORMAT",XML_SAVE_FORMAT,1<<0);
CheckEnum("XML_SAVE_NO_DECL",XML_SAVE_NO_DECL,1<<1);
CheckEnum("XML_SAVE_NO_EMPTY",XML_SAVE_NO_EMPTY,1<<2);
CheckEnum("XML_SAVE_NO_XHTML",XML_SAVE_NO_XHTML,1<<3);
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,15087,0);
Msg("Find size of anonymous-xmlsave.h.types-0 (15087)\n");
#endif

#if __i386__
CheckTypeSize(xmlSaveOption,4, 15088, 2)
#elif __x86_64__
CheckTypeSize(xmlSaveOption,4, 15088, 11)
#elif __ia64__
CheckTypeSize(xmlSaveOption,4, 15088, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(xmlSaveOption,4, 15088, 6)
#elif __powerpc64__
CheckTypeSize(xmlSaveOption,4, 15088, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(xmlSaveOption,4, 15088, 10)
#elif __s390x__
CheckTypeSize(xmlSaveOption,4, 15088, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,15088,0);
Msg("Find size of xmlSaveOption (15088)\n");
#endif

extern int xmlSaveSetAttrEscape_db(xmlSaveCtxtPtr, xmlCharEncodingOutputFunc);
CheckInterfacedef(xmlSaveSetAttrEscape,xmlSaveSetAttrEscape_db);
extern long int xmlSaveDoc_db(xmlSaveCtxtPtr, xmlDocPtr);
CheckInterfacedef(xmlSaveDoc,xmlSaveDoc_db);
extern xmlSaveCtxtPtr xmlSaveToFilename_db(const char *, const char *, int);
CheckInterfacedef(xmlSaveToFilename,xmlSaveToFilename_db);
extern xmlSaveCtxtPtr xmlSaveToFd_db(int, const char *, int);
CheckInterfacedef(xmlSaveToFd,xmlSaveToFd_db);
extern int xmlSaveSetEscape_db(xmlSaveCtxtPtr, xmlCharEncodingOutputFunc);
CheckInterfacedef(xmlSaveSetEscape,xmlSaveSetEscape_db);
extern xmlSaveCtxtPtr xmlSaveToIO_db(xmlOutputWriteCallback, xmlOutputCloseCallback, void *, const char *, int);
CheckInterfacedef(xmlSaveToIO,xmlSaveToIO_db);
extern int xmlSaveClose_db(xmlSaveCtxtPtr);
CheckInterfacedef(xmlSaveClose,xmlSaveClose_db);
extern long int xmlSaveTree_db(xmlSaveCtxtPtr, xmlNodePtr);
CheckInterfacedef(xmlSaveTree,xmlSaveTree_db);
extern int xmlSaveFlush_db(xmlSaveCtxtPtr);
CheckInterfacedef(xmlSaveFlush,xmlSaveFlush_db);
#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests passed out of %d tests in libxml2/libxml/xmlsave.h\n\n",pcnt,cnt);
return cnt;
#endif

}
