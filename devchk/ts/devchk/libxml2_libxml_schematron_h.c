/*
 * Test of libxml2/libxml/schematron.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#include <libxml/xmlregexp.h>
struct _xmlSchematronValidCtxt {} ;
struct _xmlSchematron {} ;
struct _xmlSchematronParserCtxt {} ;
#include "libxml2/libxml/schematron.h"



#ifdef TET_TEST
void libxml2_libxml_schematron_h()
{
#else
int libxml2_libxml_schematron_h()
{
#endif

int cnt=0;

int pcnt=0;
#ifdef TET_TEST
Msg("Checking data structures in libxml2/libxml/schematron.h\n");
#endif

printf("Checking data structures in libxml2/libxml/schematron.h\n");
#if defined __i386__
CheckTypeSize(xmlSchematronValidCtxtPtr,4, 14677, 2, 3.1, NULL, 14676, NULL)
#elif defined __x86_64__
CheckTypeSize(xmlSchematronValidCtxtPtr,8, 14677, 11, 3.1, NULL, 14676, NULL)
#elif defined __ia64__
CheckTypeSize(xmlSchematronValidCtxtPtr,8, 14677, 3, 3.1, NULL, 14676, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(xmlSchematronValidCtxtPtr,4, 14677, 6, 3.1, NULL, 14676, NULL)
#elif defined __powerpc64__
CheckTypeSize(xmlSchematronValidCtxtPtr,8, 14677, 9, 3.1, NULL, 14676, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(xmlSchematronValidCtxtPtr,4, 14677, 10, 3.1, NULL, 14676, NULL)
#elif defined __s390x__
CheckTypeSize(xmlSchematronValidCtxtPtr,8, 14677, 12, 3.1, NULL, 14676, NULL)
#else
Msg("Find size of xmlSchematronValidCtxtPtr (14677)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14676,NULL);\n",architecture,14677,0);
#endif

#if defined __i386__
CheckTypeSize(xmlSchematronPtr,4, 14681, 2, 3.1, NULL, 14680, NULL)
#elif defined __x86_64__
CheckTypeSize(xmlSchematronPtr,8, 14681, 11, 3.1, NULL, 14680, NULL)
#elif defined __ia64__
CheckTypeSize(xmlSchematronPtr,8, 14681, 3, 3.1, NULL, 14680, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(xmlSchematronPtr,4, 14681, 6, 3.1, NULL, 14680, NULL)
#elif defined __powerpc64__
CheckTypeSize(xmlSchematronPtr,8, 14681, 9, 3.1, NULL, 14680, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(xmlSchematronPtr,4, 14681, 10, 3.1, NULL, 14680, NULL)
#elif defined __s390x__
CheckTypeSize(xmlSchematronPtr,8, 14681, 12, 3.1, NULL, 14680, NULL)
#else
Msg("Find size of xmlSchematronPtr (14681)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14680,NULL);\n",architecture,14681,0);
#endif

#if defined __i386__
CheckTypeSize(xmlSchematronParserCtxtPtr,4, 14685, 2, 3.1, NULL, 14684, NULL)
#elif defined __x86_64__
CheckTypeSize(xmlSchematronParserCtxtPtr,8, 14685, 11, 3.1, NULL, 14684, NULL)
#elif defined __ia64__
CheckTypeSize(xmlSchematronParserCtxtPtr,8, 14685, 3, 3.1, NULL, 14684, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(xmlSchematronParserCtxtPtr,4, 14685, 6, 3.1, NULL, 14684, NULL)
#elif defined __powerpc64__
CheckTypeSize(xmlSchematronParserCtxtPtr,8, 14685, 9, 3.1, NULL, 14684, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(xmlSchematronParserCtxtPtr,4, 14685, 10, 3.1, NULL, 14684, NULL)
#elif defined __s390x__
CheckTypeSize(xmlSchematronParserCtxtPtr,8, 14685, 12, 3.1, NULL, 14684, NULL)
#else
Msg("Find size of xmlSchematronParserCtxtPtr (14685)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14684,NULL);\n",architecture,14685,0);
#endif

#if defined __i386__
CheckTypeSize(xmlSchematronValidOptions,4, 15084, 2, 3.1, NULL, 15083, NULL)
#elif defined __x86_64__
CheckTypeSize(xmlSchematronValidOptions,4, 15084, 11, 3.1, NULL, 15083, NULL)
#elif defined __ia64__
CheckTypeSize(xmlSchematronValidOptions,4, 15084, 3, 3.1, NULL, 15083, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(xmlSchematronValidOptions,4, 15084, 6, 3.1, NULL, 15083, NULL)
#elif defined __powerpc64__
CheckTypeSize(xmlSchematronValidOptions,4, 15084, 9, 3.1, NULL, 15083, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(xmlSchematronValidOptions,4, 15084, 10, 3.1, NULL, 15083, NULL)
#elif defined __s390x__
CheckTypeSize(xmlSchematronValidOptions,4, 15084, 12, 3.1, NULL, 15083, NULL)
#else
Msg("Find size of xmlSchematronValidOptions (15084)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,15083, NULL);\n",architecture,15084,0);
#endif

extern xmlSchematronValidCtxtPtr xmlSchematronNewValidCtxt_db(xmlSchematronPtr, int);
CheckInterfacedef(xmlSchematronNewValidCtxt,xmlSchematronNewValidCtxt_db);
extern void xmlSchematronFreeValidCtxt_db(xmlSchematronValidCtxtPtr);
CheckInterfacedef(xmlSchematronFreeValidCtxt,xmlSchematronFreeValidCtxt_db);
extern int xmlSchematronValidateDoc_db(xmlSchematronValidCtxtPtr, xmlDocPtr);
CheckInterfacedef(xmlSchematronValidateDoc,xmlSchematronValidateDoc_db);
extern xmlSchematronParserCtxtPtr xmlSchematronNewMemParserCtxt_db(const char *, int);
CheckInterfacedef(xmlSchematronNewMemParserCtxt,xmlSchematronNewMemParserCtxt_db);
extern xmlSchematronParserCtxtPtr xmlSchematronNewParserCtxt_db(const char *);
CheckInterfacedef(xmlSchematronNewParserCtxt,xmlSchematronNewParserCtxt_db);
extern xmlSchematronPtr xmlSchematronParse_db(xmlSchematronParserCtxtPtr);
CheckInterfacedef(xmlSchematronParse,xmlSchematronParse_db);
extern void xmlSchematronFree_db(xmlSchematronPtr);
CheckInterfacedef(xmlSchematronFree,xmlSchematronFree_db);
extern void xmlSchematronFreeParserCtxt_db(xmlSchematronParserCtxtPtr);
CheckInterfacedef(xmlSchematronFreeParserCtxt,xmlSchematronFreeParserCtxt_db);
extern xmlSchematronParserCtxtPtr xmlSchematronNewDocParserCtxt_db(xmlDocPtr);
CheckInterfacedef(xmlSchematronNewDocParserCtxt,xmlSchematronNewDocParserCtxt_db);
#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests passed out of %d tests in libxml2/libxml/schematron.h\n\n",pcnt,cnt);
return cnt;
#endif

}
