/*
 * Test of libxml2/libxml/xmlsave.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#define __LSB_VERSION__ 40
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
#if defined __i386__
CheckTypeSize(xmlSaveCtxtPtr,4, 14838, 2, 3.1, NULL, 14837, NULL)
#elif defined __x86_64__
CheckTypeSize(xmlSaveCtxtPtr,8, 14838, 11, 3.1, NULL, 14837, NULL)
#elif defined __ia64__
CheckTypeSize(xmlSaveCtxtPtr,8, 14838, 3, 3.1, NULL, 14837, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(xmlSaveCtxtPtr,4, 14838, 6, 3.1, NULL, 14837, NULL)
#elif defined __powerpc64__
CheckTypeSize(xmlSaveCtxtPtr,8, 14838, 9, 3.1, NULL, 14837, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(xmlSaveCtxtPtr,4, 14838, 10, 3.1, NULL, 14837, NULL)
#elif defined __s390x__
CheckTypeSize(xmlSaveCtxtPtr,8, 14838, 12, 3.1, NULL, 14837, NULL)
#else
Msg("Find size of xmlSaveCtxtPtr (14838)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14837,NULL);\n",architecture,14838,0);
#endif

#if defined __i386__
CheckTypeSize(xmlSaveOption,4, 15088, 2, 3.1, NULL, 15087, NULL)
#elif defined __x86_64__
CheckTypeSize(xmlSaveOption,4, 15088, 11, 3.1, NULL, 15087, NULL)
#elif defined __ia64__
CheckTypeSize(xmlSaveOption,4, 15088, 3, 3.1, NULL, 15087, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(xmlSaveOption,4, 15088, 6, 3.1, NULL, 15087, NULL)
#elif defined __powerpc64__
CheckTypeSize(xmlSaveOption,4, 15088, 9, 3.1, NULL, 15087, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(xmlSaveOption,4, 15088, 10, 3.1, NULL, 15087, NULL)
#elif defined __s390x__
CheckTypeSize(xmlSaveOption,4, 15088, 12, 3.1, NULL, 15087, NULL)
#else
Msg("Find size of xmlSaveOption (15088)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,15087, NULL);\n",architecture,15088,0);
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
