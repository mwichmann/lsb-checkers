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
#if __i386__
CheckTypeSize(xmlSchematronValidCtxt,0, 14675, 2);
#elif __x86_64__
CheckTypeSize(xmlSchematronValidCtxt,0, 14675, 11);
#elif __ia64__
CheckTypeSize(xmlSchematronValidCtxt,0, 14675, 3);
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(xmlSchematronValidCtxt,0, 14675, 6);
#elif __powerpc64__
CheckTypeSize(xmlSchematronValidCtxt,0, 14675, 9);
#elif __s390__ && !__s390x__
CheckTypeSize(xmlSchematronValidCtxt,0, 14675, 10);
#elif __s390x__
CheckTypeSize(xmlSchematronValidCtxt,0, 14675, 12);
#elif 1
CheckTypeSize(xmlSchematronValidCtxt,0, 14675, 1);
#endif

#if __i386__
CheckTypeSize(xmlSchematronValidCtxt *,4, 14676, 2);
#elif __x86_64__
CheckTypeSize(xmlSchematronValidCtxt *,8, 14676, 11);
#elif __ia64__
CheckTypeSize(xmlSchematronValidCtxt *,8, 14676, 3);
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(xmlSchematronValidCtxt *,4, 14676, 6);
#elif __powerpc64__
CheckTypeSize(xmlSchematronValidCtxt *,8, 14676, 9);
#elif __s390__ && !__s390x__
CheckTypeSize(xmlSchematronValidCtxt *,4, 14676, 10);
#elif __s390x__
CheckTypeSize(xmlSchematronValidCtxt *,8, 14676, 12);
#elif 1
CheckTypeSize(xmlSchematronValidCtxt *,0, 14676, 1);
#endif

#if __i386__
CheckTypeSize(xmlSchematronValidCtxtPtr,4, 14677, 2);
#elif __x86_64__
CheckTypeSize(xmlSchematronValidCtxtPtr,8, 14677, 11);
#elif __ia64__
CheckTypeSize(xmlSchematronValidCtxtPtr,8, 14677, 3);
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(xmlSchematronValidCtxtPtr,4, 14677, 6);
#elif __powerpc64__
CheckTypeSize(xmlSchematronValidCtxtPtr,8, 14677, 9);
#elif __s390__ && !__s390x__
CheckTypeSize(xmlSchematronValidCtxtPtr,4, 14677, 10);
#elif __s390x__
CheckTypeSize(xmlSchematronValidCtxtPtr,8, 14677, 12);
#elif 1
CheckTypeSize(xmlSchematronValidCtxtPtr,0, 14677, 1);
#endif

#if __i386__
CheckTypeSize(xmlSchematron,0, 14679, 2);
#elif __x86_64__
CheckTypeSize(xmlSchematron,0, 14679, 11);
#elif __ia64__
CheckTypeSize(xmlSchematron,0, 14679, 3);
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(xmlSchematron,0, 14679, 6);
#elif __powerpc64__
CheckTypeSize(xmlSchematron,0, 14679, 9);
#elif __s390__ && !__s390x__
CheckTypeSize(xmlSchematron,0, 14679, 10);
#elif __s390x__
CheckTypeSize(xmlSchematron,0, 14679, 12);
#elif 1
CheckTypeSize(xmlSchematron,0, 14679, 1);
#endif

#if __i386__
CheckTypeSize(xmlSchematron *,4, 14680, 2);
#elif __x86_64__
CheckTypeSize(xmlSchematron *,8, 14680, 11);
#elif __ia64__
CheckTypeSize(xmlSchematron *,8, 14680, 3);
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(xmlSchematron *,4, 14680, 6);
#elif __powerpc64__
CheckTypeSize(xmlSchematron *,8, 14680, 9);
#elif __s390__ && !__s390x__
CheckTypeSize(xmlSchematron *,4, 14680, 10);
#elif __s390x__
CheckTypeSize(xmlSchematron *,8, 14680, 12);
#elif 1
CheckTypeSize(xmlSchematron *,0, 14680, 1);
#endif

#if __i386__
CheckTypeSize(xmlSchematronPtr,4, 14681, 2);
#elif __x86_64__
CheckTypeSize(xmlSchematronPtr,8, 14681, 11);
#elif __ia64__
CheckTypeSize(xmlSchematronPtr,8, 14681, 3);
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(xmlSchematronPtr,4, 14681, 6);
#elif __powerpc64__
CheckTypeSize(xmlSchematronPtr,8, 14681, 9);
#elif __s390__ && !__s390x__
CheckTypeSize(xmlSchematronPtr,4, 14681, 10);
#elif __s390x__
CheckTypeSize(xmlSchematronPtr,8, 14681, 12);
#elif 1
CheckTypeSize(xmlSchematronPtr,0, 14681, 1);
#endif

#if __i386__
CheckTypeSize(xmlSchematronParserCtxt,0, 14683, 2);
#elif __x86_64__
CheckTypeSize(xmlSchematronParserCtxt,0, 14683, 11);
#elif __ia64__
CheckTypeSize(xmlSchematronParserCtxt,0, 14683, 3);
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(xmlSchematronParserCtxt,0, 14683, 6);
#elif __powerpc64__
CheckTypeSize(xmlSchematronParserCtxt,0, 14683, 9);
#elif __s390__ && !__s390x__
CheckTypeSize(xmlSchematronParserCtxt,0, 14683, 10);
#elif __s390x__
CheckTypeSize(xmlSchematronParserCtxt,0, 14683, 12);
#elif 1
CheckTypeSize(xmlSchematronParserCtxt,0, 14683, 1);
#endif

#if __i386__
CheckTypeSize(xmlSchematronParserCtxt *,4, 14684, 2);
#elif __x86_64__
CheckTypeSize(xmlSchematronParserCtxt *,8, 14684, 11);
#elif __ia64__
CheckTypeSize(xmlSchematronParserCtxt *,8, 14684, 3);
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(xmlSchematronParserCtxt *,4, 14684, 6);
#elif __powerpc64__
CheckTypeSize(xmlSchematronParserCtxt *,8, 14684, 9);
#elif __s390__ && !__s390x__
CheckTypeSize(xmlSchematronParserCtxt *,4, 14684, 10);
#elif __s390x__
CheckTypeSize(xmlSchematronParserCtxt *,8, 14684, 12);
#elif 1
CheckTypeSize(xmlSchematronParserCtxt *,0, 14684, 1);
#endif

#if __i386__
CheckTypeSize(xmlSchematronParserCtxtPtr,4, 14685, 2);
#elif __x86_64__
CheckTypeSize(xmlSchematronParserCtxtPtr,8, 14685, 11);
#elif __ia64__
CheckTypeSize(xmlSchematronParserCtxtPtr,8, 14685, 3);
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(xmlSchematronParserCtxtPtr,4, 14685, 6);
#elif __powerpc64__
CheckTypeSize(xmlSchematronParserCtxtPtr,8, 14685, 9);
#elif __s390__ && !__s390x__
CheckTypeSize(xmlSchematronParserCtxtPtr,4, 14685, 10);
#elif __s390x__
CheckTypeSize(xmlSchematronParserCtxtPtr,8, 14685, 12);
#elif 1
CheckTypeSize(xmlSchematronParserCtxtPtr,0, 14685, 1);
#endif

#if __i386__
CheckEnum("XML_SCHEMATRON_OUT_QUIET",XML_SCHEMATRON_OUT_QUIET,1 << 0,50013);
CheckEnum("XML_SCHEMATRON_OUT_TEXT",XML_SCHEMATRON_OUT_TEXT,1 << 1,50014);
CheckEnum("XML_SCHEMATRON_OUT_XML",XML_SCHEMATRON_OUT_XML,1 << 2,50015);
CheckEnum("XML_SCHEMATRON_OUT_FILE",XML_SCHEMATRON_OUT_FILE,1 << 8,50016);
CheckEnum("XML_SCHEMATRON_OUT_BUFFER",XML_SCHEMATRON_OUT_BUFFER,1 << 9,50017);
CheckEnum("XML_SCHEMATRON_OUT_IO",XML_SCHEMATRON_OUT_IO,1 << 10,50018);
#elif __x86_64__
CheckEnum("XML_SCHEMATRON_OUT_QUIET",XML_SCHEMATRON_OUT_QUIET,1 << 0,50013);
CheckEnum("XML_SCHEMATRON_OUT_TEXT",XML_SCHEMATRON_OUT_TEXT,1 << 1,50014);
CheckEnum("XML_SCHEMATRON_OUT_XML",XML_SCHEMATRON_OUT_XML,1 << 2,50015);
CheckEnum("XML_SCHEMATRON_OUT_FILE",XML_SCHEMATRON_OUT_FILE,1 << 8,50016);
CheckEnum("XML_SCHEMATRON_OUT_BUFFER",XML_SCHEMATRON_OUT_BUFFER,1 << 9,50017);
CheckEnum("XML_SCHEMATRON_OUT_IO",XML_SCHEMATRON_OUT_IO,1 << 10,50018);
#elif __ia64__
CheckEnum("XML_SCHEMATRON_OUT_QUIET",XML_SCHEMATRON_OUT_QUIET,1 << 0,50013);
CheckEnum("XML_SCHEMATRON_OUT_TEXT",XML_SCHEMATRON_OUT_TEXT,1 << 1,50014);
CheckEnum("XML_SCHEMATRON_OUT_XML",XML_SCHEMATRON_OUT_XML,1 << 2,50015);
CheckEnum("XML_SCHEMATRON_OUT_FILE",XML_SCHEMATRON_OUT_FILE,1 << 8,50016);
CheckEnum("XML_SCHEMATRON_OUT_BUFFER",XML_SCHEMATRON_OUT_BUFFER,1 << 9,50017);
CheckEnum("XML_SCHEMATRON_OUT_IO",XML_SCHEMATRON_OUT_IO,1 << 10,50018);
#elif __powerpc__ && !__powerpc64__
CheckEnum("XML_SCHEMATRON_OUT_QUIET",XML_SCHEMATRON_OUT_QUIET,1 << 0,50013);
CheckEnum("XML_SCHEMATRON_OUT_TEXT",XML_SCHEMATRON_OUT_TEXT,1 << 1,50014);
CheckEnum("XML_SCHEMATRON_OUT_XML",XML_SCHEMATRON_OUT_XML,1 << 2,50015);
CheckEnum("XML_SCHEMATRON_OUT_FILE",XML_SCHEMATRON_OUT_FILE,1 << 8,50016);
CheckEnum("XML_SCHEMATRON_OUT_BUFFER",XML_SCHEMATRON_OUT_BUFFER,1 << 9,50017);
CheckEnum("XML_SCHEMATRON_OUT_IO",XML_SCHEMATRON_OUT_IO,1 << 10,50018);
#elif __powerpc64__
CheckEnum("XML_SCHEMATRON_OUT_QUIET",XML_SCHEMATRON_OUT_QUIET,1 << 0,50013);
CheckEnum("XML_SCHEMATRON_OUT_TEXT",XML_SCHEMATRON_OUT_TEXT,1 << 1,50014);
CheckEnum("XML_SCHEMATRON_OUT_XML",XML_SCHEMATRON_OUT_XML,1 << 2,50015);
CheckEnum("XML_SCHEMATRON_OUT_FILE",XML_SCHEMATRON_OUT_FILE,1 << 8,50016);
CheckEnum("XML_SCHEMATRON_OUT_BUFFER",XML_SCHEMATRON_OUT_BUFFER,1 << 9,50017);
CheckEnum("XML_SCHEMATRON_OUT_IO",XML_SCHEMATRON_OUT_IO,1 << 10,50018);
#elif __s390__ && !__s390x__
CheckEnum("XML_SCHEMATRON_OUT_QUIET",XML_SCHEMATRON_OUT_QUIET,1 << 0,50013);
CheckEnum("XML_SCHEMATRON_OUT_TEXT",XML_SCHEMATRON_OUT_TEXT,1 << 1,50014);
CheckEnum("XML_SCHEMATRON_OUT_XML",XML_SCHEMATRON_OUT_XML,1 << 2,50015);
CheckEnum("XML_SCHEMATRON_OUT_FILE",XML_SCHEMATRON_OUT_FILE,1 << 8,50016);
CheckEnum("XML_SCHEMATRON_OUT_BUFFER",XML_SCHEMATRON_OUT_BUFFER,1 << 9,50017);
CheckEnum("XML_SCHEMATRON_OUT_IO",XML_SCHEMATRON_OUT_IO,1 << 10,50018);
#elif __s390x__
CheckEnum("XML_SCHEMATRON_OUT_QUIET",XML_SCHEMATRON_OUT_QUIET,1 << 0,50013);
CheckEnum("XML_SCHEMATRON_OUT_TEXT",XML_SCHEMATRON_OUT_TEXT,1 << 1,50014);
CheckEnum("XML_SCHEMATRON_OUT_XML",XML_SCHEMATRON_OUT_XML,1 << 2,50015);
CheckEnum("XML_SCHEMATRON_OUT_FILE",XML_SCHEMATRON_OUT_FILE,1 << 8,50016);
CheckEnum("XML_SCHEMATRON_OUT_BUFFER",XML_SCHEMATRON_OUT_BUFFER,1 << 9,50017);
CheckEnum("XML_SCHEMATRON_OUT_IO",XML_SCHEMATRON_OUT_IO,1 << 10,50018);
#elif 1
CheckEnum("XML_SCHEMATRON_OUT_QUIET",XML_SCHEMATRON_OUT_QUIET,1 << 0,50013);
CheckEnum("XML_SCHEMATRON_OUT_TEXT",XML_SCHEMATRON_OUT_TEXT,1 << 1,50014);
CheckEnum("XML_SCHEMATRON_OUT_XML",XML_SCHEMATRON_OUT_XML,1 << 2,50015);
CheckEnum("XML_SCHEMATRON_OUT_FILE",XML_SCHEMATRON_OUT_FILE,1 << 8,50016);
CheckEnum("XML_SCHEMATRON_OUT_BUFFER",XML_SCHEMATRON_OUT_BUFFER,1 << 9,50017);
CheckEnum("XML_SCHEMATRON_OUT_IO",XML_SCHEMATRON_OUT_IO,1 << 10,50018);
#endif

#if __i386__
CheckTypeSize(xmlSchematronValidOptions,4, 15084, 2);
#elif __x86_64__
CheckTypeSize(xmlSchematronValidOptions,4, 15084, 11);
#elif __ia64__
CheckTypeSize(xmlSchematronValidOptions,4, 15084, 3);
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(xmlSchematronValidOptions,4, 15084, 6);
#elif __powerpc64__
CheckTypeSize(xmlSchematronValidOptions,4, 15084, 9);
#elif __s390__ && !__s390x__
CheckTypeSize(xmlSchematronValidOptions,4, 15084, 10);
#elif __s390x__
CheckTypeSize(xmlSchematronValidOptions,4, 15084, 12);
#elif 1
CheckTypeSize(xmlSchematronValidOptions,0, 15084, 1);
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
