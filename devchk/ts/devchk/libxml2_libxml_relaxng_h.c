/*
 * Test of libxml2/libxml/relaxng.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#define __LSB_VERSION__ 40
#include <libxml/xmlregexp.h>
struct _xmlRelaxNGParserCtxt {} ;
struct _xmlRelaxNGValidCtxt {} ;
struct _xmlRelaxNG {} ;
#include "libxml2/libxml/relaxng.h"



#ifdef TET_TEST
void libxml2_libxml_relaxng_h()
{
#else
int libxml2_libxml_relaxng_h()
{
#endif

int cnt=0;

int pcnt=0;
#ifdef TET_TEST
Msg("Checking data structures in libxml2/libxml/relaxng.h\n");
#endif

printf("Checking data structures in libxml2/libxml/relaxng.h\n");
#if defined __s390x__
CheckTypeSize(xmlRelaxNGParserCtxtPtr,8, 14842, 12, 3.1, NULL, 14841, NULL)
#elif defined __x86_64__
CheckTypeSize(xmlRelaxNGParserCtxtPtr,8, 14842, 11, 3.1, NULL, 14841, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(xmlRelaxNGParserCtxtPtr,4, 14842, 10, 3.1, NULL, 14841, NULL)
#elif defined __powerpc64__
CheckTypeSize(xmlRelaxNGParserCtxtPtr,8, 14842, 9, 3.1, NULL, 14841, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(xmlRelaxNGParserCtxtPtr,4, 14842, 6, 3.1, NULL, 14841, NULL)
#elif defined __ia64__
CheckTypeSize(xmlRelaxNGParserCtxtPtr,8, 14842, 3, 3.1, NULL, 14841, NULL)
#elif defined __i386__
CheckTypeSize(xmlRelaxNGParserCtxtPtr,4, 14842, 2, 3.1, NULL, 14841, NULL)
#else
Msg("Find size of xmlRelaxNGParserCtxtPtr (14842)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14841,NULL);\n",architecture,14842,0);
#endif

#if defined __s390x__
CheckTypeSize(xmlRelaxNGValidCtxtPtr,8, 14846, 12, 3.1, NULL, 14845, NULL)
#elif defined __x86_64__
CheckTypeSize(xmlRelaxNGValidCtxtPtr,8, 14846, 11, 3.1, NULL, 14845, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(xmlRelaxNGValidCtxtPtr,4, 14846, 10, 3.1, NULL, 14845, NULL)
#elif defined __powerpc64__
CheckTypeSize(xmlRelaxNGValidCtxtPtr,8, 14846, 9, 3.1, NULL, 14845, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(xmlRelaxNGValidCtxtPtr,4, 14846, 6, 3.1, NULL, 14845, NULL)
#elif defined __ia64__
CheckTypeSize(xmlRelaxNGValidCtxtPtr,8, 14846, 3, 3.1, NULL, 14845, NULL)
#elif defined __i386__
CheckTypeSize(xmlRelaxNGValidCtxtPtr,4, 14846, 2, 3.1, NULL, 14845, NULL)
#else
Msg("Find size of xmlRelaxNGValidCtxtPtr (14846)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14845,NULL);\n",architecture,14846,0);
#endif

#if defined __s390x__
CheckTypeSize(xmlRelaxNGPtr,8, 14850, 12, 3.1, NULL, 14849, NULL)
#elif defined __x86_64__
CheckTypeSize(xmlRelaxNGPtr,8, 14850, 11, 3.1, NULL, 14849, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(xmlRelaxNGPtr,4, 14850, 10, 3.1, NULL, 14849, NULL)
#elif defined __powerpc64__
CheckTypeSize(xmlRelaxNGPtr,8, 14850, 9, 3.1, NULL, 14849, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(xmlRelaxNGPtr,4, 14850, 6, 3.1, NULL, 14849, NULL)
#elif defined __ia64__
CheckTypeSize(xmlRelaxNGPtr,8, 14850, 3, 3.1, NULL, 14849, NULL)
#elif defined __i386__
CheckTypeSize(xmlRelaxNGPtr,4, 14850, 2, 3.1, NULL, 14849, NULL)
#else
Msg("Find size of xmlRelaxNGPtr (14850)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14849,NULL);\n",architecture,14850,0);
#endif

#if defined __s390x__
CheckTypeSize(xmlRelaxNGValidityErrorFunc,8, 14851, 12, 3.1, NULL, 14655, NULL)
#elif defined __x86_64__
CheckTypeSize(xmlRelaxNGValidityErrorFunc,8, 14851, 11, 3.1, NULL, 14655, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(xmlRelaxNGValidityErrorFunc,4, 14851, 10, 3.1, NULL, 14655, NULL)
#elif defined __powerpc64__
CheckTypeSize(xmlRelaxNGValidityErrorFunc,8, 14851, 9, 3.1, NULL, 14655, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(xmlRelaxNGValidityErrorFunc,4, 14851, 6, 3.1, NULL, 14655, NULL)
#elif defined __ia64__
CheckTypeSize(xmlRelaxNGValidityErrorFunc,8, 14851, 3, 3.1, NULL, 14655, NULL)
#elif defined __i386__
CheckTypeSize(xmlRelaxNGValidityErrorFunc,4, 14851, 2, 3.1, NULL, 14655, NULL)
#else
Msg("Find size of xmlRelaxNGValidityErrorFunc (14851)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14655,NULL);\n",architecture,14851,0);
#endif

#if defined __s390x__
CheckTypeSize(xmlRelaxNGValidityWarningFunc,8, 14852, 12, 3.1, NULL, 14655, NULL)
#elif defined __x86_64__
CheckTypeSize(xmlRelaxNGValidityWarningFunc,8, 14852, 11, 3.1, NULL, 14655, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(xmlRelaxNGValidityWarningFunc,4, 14852, 10, 3.1, NULL, 14655, NULL)
#elif defined __powerpc64__
CheckTypeSize(xmlRelaxNGValidityWarningFunc,8, 14852, 9, 3.1, NULL, 14655, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(xmlRelaxNGValidityWarningFunc,4, 14852, 6, 3.1, NULL, 14655, NULL)
#elif defined __ia64__
CheckTypeSize(xmlRelaxNGValidityWarningFunc,8, 14852, 3, 3.1, NULL, 14655, NULL)
#elif defined __i386__
CheckTypeSize(xmlRelaxNGValidityWarningFunc,4, 14852, 2, 3.1, NULL, 14655, NULL)
#else
Msg("Find size of xmlRelaxNGValidityWarningFunc (14852)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14655,NULL);\n",architecture,14852,0);
#endif

#if defined __s390x__
CheckTypeSize(xmlRelaxNGValidErr,4, 15090, 12, 3.1, NULL, 15089, NULL)
#elif defined __x86_64__
CheckTypeSize(xmlRelaxNGValidErr,4, 15090, 11, 3.1, NULL, 15089, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(xmlRelaxNGValidErr,4, 15090, 10, 3.1, NULL, 15089, NULL)
#elif defined __powerpc64__
CheckTypeSize(xmlRelaxNGValidErr,4, 15090, 9, 3.1, NULL, 15089, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(xmlRelaxNGValidErr,4, 15090, 6, 3.1, NULL, 15089, NULL)
#elif defined __ia64__
CheckTypeSize(xmlRelaxNGValidErr,4, 15090, 3, 3.1, NULL, 15089, NULL)
#elif defined __i386__
CheckTypeSize(xmlRelaxNGValidErr,4, 15090, 2, 3.1, NULL, 15089, NULL)
#else
Msg("Find size of xmlRelaxNGValidErr (15090)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,15089,NULL);\n",architecture,15090,0);
#endif

#if defined __s390x__
CheckTypeSize(xmlRelaxNGParserFlag,4, 15092, 12, 3.1, NULL, 15091, NULL)
#elif defined __x86_64__
CheckTypeSize(xmlRelaxNGParserFlag,4, 15092, 11, 3.1, NULL, 15091, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(xmlRelaxNGParserFlag,4, 15092, 10, 3.1, NULL, 15091, NULL)
#elif defined __powerpc64__
CheckTypeSize(xmlRelaxNGParserFlag,4, 15092, 9, 3.1, NULL, 15091, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(xmlRelaxNGParserFlag,4, 15092, 6, 3.1, NULL, 15091, NULL)
#elif defined __ia64__
CheckTypeSize(xmlRelaxNGParserFlag,4, 15092, 3, 3.1, NULL, 15091, NULL)
#elif defined __i386__
CheckTypeSize(xmlRelaxNGParserFlag,4, 15092, 2, 3.1, NULL, 15091, NULL)
#else
Msg("Find size of xmlRelaxNGParserFlag (15092)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,15091, NULL);\n",architecture,15092,0);
#endif

extern xmlRelaxNGParserCtxtPtr xmlRelaxNGNewParserCtxt_db(const char *);
CheckInterfacedef(xmlRelaxNGNewParserCtxt,xmlRelaxNGNewParserCtxt_db);
extern void xmlRelaxNGSetValidStructuredErrors_db(xmlRelaxNGValidCtxtPtr, xmlStructuredErrorFunc, void *);
CheckInterfacedef(xmlRelaxNGSetValidStructuredErrors,xmlRelaxNGSetValidStructuredErrors_db);
extern int xmlRelaxParserSetFlag_db(xmlRelaxNGParserCtxtPtr, int);
CheckInterfacedef(xmlRelaxParserSetFlag,xmlRelaxParserSetFlag_db);
extern void xmlRelaxNGFreeValidCtxt_db(xmlRelaxNGValidCtxtPtr);
CheckInterfacedef(xmlRelaxNGFreeValidCtxt,xmlRelaxNGFreeValidCtxt_db);
extern void xmlRelaxNGFree_db(xmlRelaxNGPtr);
CheckInterfacedef(xmlRelaxNGFree,xmlRelaxNGFree_db);
extern void xmlRelaxNGSetParserErrors_db(xmlRelaxNGParserCtxtPtr, xmlRelaxNGValidityErrorFunc, xmlRelaxNGValidityWarningFunc, void *);
CheckInterfacedef(xmlRelaxNGSetParserErrors,xmlRelaxNGSetParserErrors_db);
extern xmlRelaxNGPtr xmlRelaxNGParse_db(xmlRelaxNGParserCtxtPtr);
CheckInterfacedef(xmlRelaxNGParse,xmlRelaxNGParse_db);
extern xmlRelaxNGParserCtxtPtr xmlRelaxNGNewDocParserCtxt_db(xmlDocPtr);
CheckInterfacedef(xmlRelaxNGNewDocParserCtxt,xmlRelaxNGNewDocParserCtxt_db);
extern int xmlRelaxNGValidateFullElement_db(xmlRelaxNGValidCtxtPtr, xmlDocPtr, xmlNodePtr);
CheckInterfacedef(xmlRelaxNGValidateFullElement,xmlRelaxNGValidateFullElement_db);
extern int xmlRelaxNGValidatePopElement_db(xmlRelaxNGValidCtxtPtr, xmlDocPtr, xmlNodePtr);
CheckInterfacedef(xmlRelaxNGValidatePopElement,xmlRelaxNGValidatePopElement_db);
extern int xmlRelaxNGInitTypes_db(void);
CheckInterfacedef(xmlRelaxNGInitTypes,xmlRelaxNGInitTypes_db);
extern void xmlRelaxNGSetValidErrors_db(xmlRelaxNGValidCtxtPtr, xmlRelaxNGValidityErrorFunc, xmlRelaxNGValidityWarningFunc, void *);
CheckInterfacedef(xmlRelaxNGSetValidErrors,xmlRelaxNGSetValidErrors_db);
extern void xmlRelaxNGDumpTree_db(FILE *, xmlRelaxNGPtr);
CheckInterfacedef(xmlRelaxNGDumpTree,xmlRelaxNGDumpTree_db);
extern void xmlRelaxNGDump_db(FILE *, xmlRelaxNGPtr);
CheckInterfacedef(xmlRelaxNGDump,xmlRelaxNGDump_db);
extern int xmlRelaxNGValidatePushElement_db(xmlRelaxNGValidCtxtPtr, xmlDocPtr, xmlNodePtr);
CheckInterfacedef(xmlRelaxNGValidatePushElement,xmlRelaxNGValidatePushElement_db);
extern xmlRelaxNGValidCtxtPtr xmlRelaxNGNewValidCtxt_db(xmlRelaxNGPtr);
CheckInterfacedef(xmlRelaxNGNewValidCtxt,xmlRelaxNGNewValidCtxt_db);
extern void xmlRelaxNGCleanupTypes_db(void);
CheckInterfacedef(xmlRelaxNGCleanupTypes,xmlRelaxNGCleanupTypes_db);
extern void xmlRelaxNGFreeParserCtxt_db(xmlRelaxNGParserCtxtPtr);
CheckInterfacedef(xmlRelaxNGFreeParserCtxt,xmlRelaxNGFreeParserCtxt_db);
extern int xmlRelaxNGGetValidErrors_db(xmlRelaxNGValidCtxtPtr, xmlRelaxNGValidityErrorFunc *, xmlRelaxNGValidityWarningFunc *, void * *);
CheckInterfacedef(xmlRelaxNGGetValidErrors,xmlRelaxNGGetValidErrors_db);
extern int xmlRelaxNGValidateDoc_db(xmlRelaxNGValidCtxtPtr, xmlDocPtr);
CheckInterfacedef(xmlRelaxNGValidateDoc,xmlRelaxNGValidateDoc_db);
extern int xmlRelaxNGGetParserErrors_db(xmlRelaxNGParserCtxtPtr, xmlRelaxNGValidityErrorFunc *, xmlRelaxNGValidityWarningFunc *, void * *);
CheckInterfacedef(xmlRelaxNGGetParserErrors,xmlRelaxNGGetParserErrors_db);
extern xmlRelaxNGParserCtxtPtr xmlRelaxNGNewMemParserCtxt_db(const char *, int);
CheckInterfacedef(xmlRelaxNGNewMemParserCtxt,xmlRelaxNGNewMemParserCtxt_db);
extern int xmlRelaxNGValidatePushCData_db(xmlRelaxNGValidCtxtPtr, const xmlChar *, int);
CheckInterfacedef(xmlRelaxNGValidatePushCData,xmlRelaxNGValidatePushCData_db);
#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests passed out of %d tests in libxml2/libxml/relaxng.h\n\n",pcnt,cnt);
return cnt;
#endif

}
