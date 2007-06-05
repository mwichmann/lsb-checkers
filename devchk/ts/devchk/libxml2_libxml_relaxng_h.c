/*
 * Test of libxml2/libxml/relaxng.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
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
#if __i386__
CheckTypeSize(xmlRelaxNGParserCtxt,0, 14840, 2)
#elif __x86_64__
CheckTypeSize(xmlRelaxNGParserCtxt,0, 14840, 11)
#elif __ia64__
CheckTypeSize(xmlRelaxNGParserCtxt,0, 14840, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(xmlRelaxNGParserCtxt,0, 14840, 6)
#elif __powerpc64__
CheckTypeSize(xmlRelaxNGParserCtxt,0, 14840, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(xmlRelaxNGParserCtxt,0, 14840, 10)
#elif __s390x__
CheckTypeSize(xmlRelaxNGParserCtxt,0, 14840, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,14840,0);
Msg("Find size of xmlRelaxNGParserCtxt (14840)\n");
#endif

#if __i386__
CheckTypeSize(xmlRelaxNGParserCtxtPtr,4, 14842, 2)
#elif __x86_64__
CheckTypeSize(xmlRelaxNGParserCtxtPtr,8, 14842, 11)
#elif __ia64__
CheckTypeSize(xmlRelaxNGParserCtxtPtr,8, 14842, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(xmlRelaxNGParserCtxtPtr,4, 14842, 6)
#elif __powerpc64__
CheckTypeSize(xmlRelaxNGParserCtxtPtr,8, 14842, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(xmlRelaxNGParserCtxtPtr,4, 14842, 10)
#elif __s390x__
CheckTypeSize(xmlRelaxNGParserCtxtPtr,8, 14842, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,14842,0);
Msg("Find size of xmlRelaxNGParserCtxtPtr (14842)\n");
#endif

#if __i386__
CheckTypeSize(xmlRelaxNGValidCtxt,0, 14844, 2)
#elif __x86_64__
CheckTypeSize(xmlRelaxNGValidCtxt,0, 14844, 11)
#elif __ia64__
CheckTypeSize(xmlRelaxNGValidCtxt,0, 14844, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(xmlRelaxNGValidCtxt,0, 14844, 6)
#elif __powerpc64__
CheckTypeSize(xmlRelaxNGValidCtxt,0, 14844, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(xmlRelaxNGValidCtxt,0, 14844, 10)
#elif __s390x__
CheckTypeSize(xmlRelaxNGValidCtxt,0, 14844, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,14844,0);
Msg("Find size of xmlRelaxNGValidCtxt (14844)\n");
#endif

#if __i386__
CheckTypeSize(xmlRelaxNGValidCtxtPtr,4, 14846, 2)
#elif __x86_64__
CheckTypeSize(xmlRelaxNGValidCtxtPtr,8, 14846, 11)
#elif __ia64__
CheckTypeSize(xmlRelaxNGValidCtxtPtr,8, 14846, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(xmlRelaxNGValidCtxtPtr,4, 14846, 6)
#elif __powerpc64__
CheckTypeSize(xmlRelaxNGValidCtxtPtr,8, 14846, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(xmlRelaxNGValidCtxtPtr,4, 14846, 10)
#elif __s390x__
CheckTypeSize(xmlRelaxNGValidCtxtPtr,8, 14846, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,14846,0);
Msg("Find size of xmlRelaxNGValidCtxtPtr (14846)\n");
#endif

#if __i386__
CheckTypeSize(xmlRelaxNG,0, 14848, 2)
#elif __x86_64__
CheckTypeSize(xmlRelaxNG,0, 14848, 11)
#elif __ia64__
CheckTypeSize(xmlRelaxNG,0, 14848, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(xmlRelaxNG,0, 14848, 6)
#elif __powerpc64__
CheckTypeSize(xmlRelaxNG,0, 14848, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(xmlRelaxNG,0, 14848, 10)
#elif __s390x__
CheckTypeSize(xmlRelaxNG,0, 14848, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,14848,0);
Msg("Find size of xmlRelaxNG (14848)\n");
#endif

#if __i386__
CheckTypeSize(xmlRelaxNGPtr,4, 14850, 2)
#elif __x86_64__
CheckTypeSize(xmlRelaxNGPtr,8, 14850, 11)
#elif __ia64__
CheckTypeSize(xmlRelaxNGPtr,8, 14850, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(xmlRelaxNGPtr,4, 14850, 6)
#elif __powerpc64__
CheckTypeSize(xmlRelaxNGPtr,8, 14850, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(xmlRelaxNGPtr,4, 14850, 10)
#elif __s390x__
CheckTypeSize(xmlRelaxNGPtr,8, 14850, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,14850,0);
Msg("Find size of xmlRelaxNGPtr (14850)\n");
#endif

#if __i386__
CheckTypeSize(xmlRelaxNGValidityErrorFunc,4, 14851, 2)
#elif __x86_64__
CheckTypeSize(xmlRelaxNGValidityErrorFunc,8, 14851, 11)
#elif __ia64__
CheckTypeSize(xmlRelaxNGValidityErrorFunc,8, 14851, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(xmlRelaxNGValidityErrorFunc,4, 14851, 6)
#elif __powerpc64__
CheckTypeSize(xmlRelaxNGValidityErrorFunc,8, 14851, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(xmlRelaxNGValidityErrorFunc,4, 14851, 10)
#elif __s390x__
CheckTypeSize(xmlRelaxNGValidityErrorFunc,8, 14851, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,14851,0);
Msg("Find size of xmlRelaxNGValidityErrorFunc (14851)\n");
#endif

#if __i386__
CheckTypeSize(xmlRelaxNGValidityWarningFunc,4, 14852, 2)
#elif __x86_64__
CheckTypeSize(xmlRelaxNGValidityWarningFunc,8, 14852, 11)
#elif __ia64__
CheckTypeSize(xmlRelaxNGValidityWarningFunc,8, 14852, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(xmlRelaxNGValidityWarningFunc,4, 14852, 6)
#elif __powerpc64__
CheckTypeSize(xmlRelaxNGValidityWarningFunc,8, 14852, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(xmlRelaxNGValidityWarningFunc,4, 14852, 10)
#elif __s390x__
CheckTypeSize(xmlRelaxNGValidityWarningFunc,8, 14852, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,14852,0);
Msg("Find size of xmlRelaxNGValidityWarningFunc (14852)\n");
#endif

#if __i386__
CheckTypeSize(xmlRelaxNGValidErr,4, 15090, 2)
#elif __x86_64__
CheckTypeSize(xmlRelaxNGValidErr,4, 15090, 11)
#elif __ia64__
CheckTypeSize(xmlRelaxNGValidErr,4, 15090, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(xmlRelaxNGValidErr,4, 15090, 6)
#elif __powerpc64__
CheckTypeSize(xmlRelaxNGValidErr,4, 15090, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(xmlRelaxNGValidErr,4, 15090, 10)
#elif __s390x__
CheckTypeSize(xmlRelaxNGValidErr,4, 15090, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,15090,0);
Msg("Find size of xmlRelaxNGValidErr (15090)\n");
#endif

#if __i386__
CheckTypeSize(xmlRelaxNGParserFlag,4, 15092, 2)
#elif __x86_64__
CheckTypeSize(xmlRelaxNGParserFlag,4, 15092, 11)
#elif __ia64__
CheckTypeSize(xmlRelaxNGParserFlag,4, 15092, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(xmlRelaxNGParserFlag,4, 15092, 6)
#elif __powerpc64__
CheckTypeSize(xmlRelaxNGParserFlag,4, 15092, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(xmlRelaxNGParserFlag,4, 15092, 10)
#elif __s390x__
CheckTypeSize(xmlRelaxNGParserFlag,4, 15092, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,15092,0);
Msg("Find size of xmlRelaxNGParserFlag (15092)\n");
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
