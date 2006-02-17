/*
 * Test of libxml2/libxml/schematron.h
 */
#include "hdrchk.h"
#include "sys/types.h"
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
CheckTypeSize(xmlSchematronValidCtxt,0, 14675, 2)
#elif __x86_64__
CheckTypeSize(xmlSchematronValidCtxt,0, 14675, 11)
#elif __ia64__
CheckTypeSize(xmlSchematronValidCtxt,0, 14675, 3)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,14675,0);
Msg("Find size of xmlSchematronValidCtxt (14675)\n");
#endif

#if __i386__
CheckTypeSize(xmlSchematronValidCtxt *,4, 14676, 2)
#elif __x86_64__
CheckTypeSize(xmlSchematronValidCtxt *,8, 14676, 11)
#elif __ia64__
CheckTypeSize(xmlSchematronValidCtxt *,8, 14676, 3)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,14676,0);
Msg("Find size of xmlSchematronValidCtxt * (14676)\n");
#endif

#if __i386__
CheckTypeSize(xmlSchematronValidCtxtPtr,4, 14677, 2)
#elif __x86_64__
CheckTypeSize(xmlSchematronValidCtxtPtr,8, 14677, 11)
#elif __ia64__
CheckTypeSize(xmlSchematronValidCtxtPtr,8, 14677, 3)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,14677,0);
Msg("Find size of xmlSchematronValidCtxtPtr (14677)\n");
#endif

#if __i386__
CheckTypeSize(xmlSchematron,0, 14679, 2)
#elif __x86_64__
CheckTypeSize(xmlSchematron,0, 14679, 11)
#elif __ia64__
CheckTypeSize(xmlSchematron,0, 14679, 3)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,14679,0);
Msg("Find size of xmlSchematron (14679)\n");
#endif

#if __i386__
CheckTypeSize(xmlSchematron *,4, 14680, 2)
#elif __x86_64__
CheckTypeSize(xmlSchematron *,8, 14680, 11)
#elif __ia64__
CheckTypeSize(xmlSchematron *,8, 14680, 3)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,14680,0);
Msg("Find size of xmlSchematron * (14680)\n");
#endif

#if __i386__
CheckTypeSize(xmlSchematronPtr,4, 14681, 2)
#elif __x86_64__
CheckTypeSize(xmlSchematronPtr,8, 14681, 11)
#elif __ia64__
CheckTypeSize(xmlSchematronPtr,8, 14681, 3)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,14681,0);
Msg("Find size of xmlSchematronPtr (14681)\n");
#endif

#if __i386__
CheckTypeSize(xmlSchematronParserCtxt,0, 14683, 2)
#elif __x86_64__
CheckTypeSize(xmlSchematronParserCtxt,0, 14683, 11)
#elif __ia64__
CheckTypeSize(xmlSchematronParserCtxt,0, 14683, 3)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,14683,0);
Msg("Find size of xmlSchematronParserCtxt (14683)\n");
#endif

#if __i386__
CheckTypeSize(xmlSchematronParserCtxt *,4, 14684, 2)
#elif __x86_64__
CheckTypeSize(xmlSchematronParserCtxt *,8, 14684, 11)
#elif __ia64__
CheckTypeSize(xmlSchematronParserCtxt *,8, 14684, 3)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,14684,0);
Msg("Find size of xmlSchematronParserCtxt * (14684)\n");
#endif

#if __i386__
CheckTypeSize(xmlSchematronParserCtxtPtr,4, 14685, 2)
#elif __x86_64__
CheckTypeSize(xmlSchematronParserCtxtPtr,8, 14685, 11)
#elif __ia64__
CheckTypeSize(xmlSchematronParserCtxtPtr,8, 14685, 3)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,14685,0);
Msg("Find size of xmlSchematronParserCtxtPtr (14685)\n");
#endif

#if __i386__
CheckEnum("XML_SCHEMATRON_OUT_QUIET",XML_SCHEMATRON_OUT_QUIET,1 << 0);
CheckEnum("XML_SCHEMATRON_OUT_TEXT",XML_SCHEMATRON_OUT_TEXT,1 << 1);
CheckEnum("XML_SCHEMATRON_OUT_XML",XML_SCHEMATRON_OUT_XML,1 << 2);
CheckEnum("XML_SCHEMATRON_OUT_FILE",XML_SCHEMATRON_OUT_FILE,1 << 8);
CheckEnum("XML_SCHEMATRON_OUT_BUFFER",XML_SCHEMATRON_OUT_BUFFER,1 << 9);
CheckEnum("XML_SCHEMATRON_OUT_IO",XML_SCHEMATRON_OUT_IO,1 << 10);
#elif __x86_64__
CheckEnum("XML_SCHEMATRON_OUT_QUIET",XML_SCHEMATRON_OUT_QUIET,1 << 0);
CheckEnum("XML_SCHEMATRON_OUT_TEXT",XML_SCHEMATRON_OUT_TEXT,1 << 1);
CheckEnum("XML_SCHEMATRON_OUT_XML",XML_SCHEMATRON_OUT_XML,1 << 2);
CheckEnum("XML_SCHEMATRON_OUT_FILE",XML_SCHEMATRON_OUT_FILE,1 << 8);
CheckEnum("XML_SCHEMATRON_OUT_BUFFER",XML_SCHEMATRON_OUT_BUFFER,1 << 9);
CheckEnum("XML_SCHEMATRON_OUT_IO",XML_SCHEMATRON_OUT_IO,1 << 10);
#elif __ia64__
CheckEnum("XML_SCHEMATRON_OUT_QUIET",XML_SCHEMATRON_OUT_QUIET,1 << 0);
CheckEnum("XML_SCHEMATRON_OUT_TEXT",XML_SCHEMATRON_OUT_TEXT,1 << 1);
CheckEnum("XML_SCHEMATRON_OUT_XML",XML_SCHEMATRON_OUT_XML,1 << 2);
CheckEnum("XML_SCHEMATRON_OUT_FILE",XML_SCHEMATRON_OUT_FILE,1 << 8);
CheckEnum("XML_SCHEMATRON_OUT_BUFFER",XML_SCHEMATRON_OUT_BUFFER,1 << 9);
CheckEnum("XML_SCHEMATRON_OUT_IO",XML_SCHEMATRON_OUT_IO,1 << 10);
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,15083,0);
Msg("Find size of anonymous-schematron.h.types-0 (15083)\n");
#endif

#if __i386__
CheckTypeSize(xmlSchematronValidOptions,4, 15084, 2)
#elif __x86_64__
CheckTypeSize(xmlSchematronValidOptions,4, 15084, 11)
#elif __ia64__
CheckTypeSize(xmlSchematronValidOptions,4, 15084, 3)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,15084,0);
Msg("Find size of xmlSchematronValidOptions (15084)\n");
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
