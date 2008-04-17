/*
 * Test of libxml2/libxml/xmlregexp.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#define __LSB_VERSION__ 40
struct _xmlRegexp {} ;
struct _xmlRegExecCtxt {} ;
struct _xmlExpNode {} ;
struct _xmlExpCtxt {} ;
#include "libxml2/libxml/xmlregexp.h"



#ifdef TET_TEST
void libxml2_libxml_xmlregexp_h()
{
#else
int libxml2_libxml_xmlregexp_h()
{
#endif

int cnt=0;

int pcnt=0;
#ifdef TET_TEST
Msg("Checking data structures in libxml2/libxml/xmlregexp.h\n");
#endif

printf("Checking data structures in libxml2/libxml/xmlregexp.h\n");
#if defined __i386__
CheckTypeSize(xmlRegexpPtr,4, 14692, 2, 3.1, NULL, 14691, NULL)
#elif defined __x86_64__
CheckTypeSize(xmlRegexpPtr,8, 14692, 11, 3.1, NULL, 14691, NULL)
#elif defined __ia64__
CheckTypeSize(xmlRegexpPtr,8, 14692, 3, 3.1, NULL, 14691, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(xmlRegexpPtr,4, 14692, 6, 3.1, NULL, 14691, NULL)
#elif defined __powerpc64__
CheckTypeSize(xmlRegexpPtr,8, 14692, 9, 3.1, NULL, 14691, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(xmlRegexpPtr,4, 14692, 10, 3.1, NULL, 14691, NULL)
#elif defined __s390x__
CheckTypeSize(xmlRegexpPtr,8, 14692, 12, 3.1, NULL, 14691, NULL)
#else
Msg("Find size of xmlRegexpPtr (14692)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14691,NULL);\n",architecture,14692,0);
#endif

#if defined __i386__
CheckTypeSize(xmlRegExecCtxtPtr,4, 14696, 2, 3.1, NULL, 14695, NULL)
#elif defined __x86_64__
CheckTypeSize(xmlRegExecCtxtPtr,8, 14696, 11, 3.1, NULL, 14695, NULL)
#elif defined __ia64__
CheckTypeSize(xmlRegExecCtxtPtr,8, 14696, 3, 3.1, NULL, 14695, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(xmlRegExecCtxtPtr,4, 14696, 6, 3.1, NULL, 14695, NULL)
#elif defined __powerpc64__
CheckTypeSize(xmlRegExecCtxtPtr,8, 14696, 9, 3.1, NULL, 14695, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(xmlRegExecCtxtPtr,4, 14696, 10, 3.1, NULL, 14695, NULL)
#elif defined __s390x__
CheckTypeSize(xmlRegExecCtxtPtr,8, 14696, 12, 3.1, NULL, 14695, NULL)
#else
Msg("Find size of xmlRegExecCtxtPtr (14696)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14695,NULL);\n",architecture,14696,0);
#endif

#if defined __i386__
CheckTypeSize(xmlExpNodePtr,4, 14700, 2, 3.1, NULL, 14699, NULL)
#elif defined __x86_64__
CheckTypeSize(xmlExpNodePtr,8, 14700, 11, 3.1, NULL, 14699, NULL)
#elif defined __ia64__
CheckTypeSize(xmlExpNodePtr,8, 14700, 3, 3.1, NULL, 14699, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(xmlExpNodePtr,4, 14700, 6, 3.1, NULL, 14699, NULL)
#elif defined __powerpc64__
CheckTypeSize(xmlExpNodePtr,8, 14700, 9, 3.1, NULL, 14699, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(xmlExpNodePtr,4, 14700, 10, 3.1, NULL, 14699, NULL)
#elif defined __s390x__
CheckTypeSize(xmlExpNodePtr,8, 14700, 12, 3.1, NULL, 14699, NULL)
#else
Msg("Find size of xmlExpNodePtr (14700)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14699,NULL);\n",architecture,14700,0);
#endif

#if defined __i386__
CheckTypeSize(xmlRegExecCallbacks,4, 14702, 2, 3.1, NULL, 14701, NULL)
#elif defined __x86_64__
CheckTypeSize(xmlRegExecCallbacks,8, 14702, 11, 3.1, NULL, 14701, NULL)
#elif defined __ia64__
CheckTypeSize(xmlRegExecCallbacks,8, 14702, 3, 3.1, NULL, 14701, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(xmlRegExecCallbacks,4, 14702, 6, 3.1, NULL, 14701, NULL)
#elif defined __powerpc64__
CheckTypeSize(xmlRegExecCallbacks,8, 14702, 9, 3.1, NULL, 14701, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(xmlRegExecCallbacks,4, 14702, 10, 3.1, NULL, 14701, NULL)
#elif defined __s390x__
CheckTypeSize(xmlRegExecCallbacks,8, 14702, 12, 3.1, NULL, 14701, NULL)
#else
Msg("Find size of xmlRegExecCallbacks (14702)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14701,NULL);\n",architecture,14702,0);
#endif

#if defined __i386__
CheckTypeSize(xmlExpCtxtPtr,4, 14706, 2, 3.1, NULL, 14705, NULL)
#elif defined __x86_64__
CheckTypeSize(xmlExpCtxtPtr,8, 14706, 11, 3.1, NULL, 14705, NULL)
#elif defined __ia64__
CheckTypeSize(xmlExpCtxtPtr,8, 14706, 3, 3.1, NULL, 14705, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(xmlExpCtxtPtr,4, 14706, 6, 3.1, NULL, 14705, NULL)
#elif defined __powerpc64__
CheckTypeSize(xmlExpCtxtPtr,8, 14706, 9, 3.1, NULL, 14705, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(xmlExpCtxtPtr,4, 14706, 10, 3.1, NULL, 14705, NULL)
#elif defined __s390x__
CheckTypeSize(xmlExpCtxtPtr,8, 14706, 12, 3.1, NULL, 14705, NULL)
#else
Msg("Find size of xmlExpCtxtPtr (14706)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14705,NULL);\n",architecture,14706,0);
#endif

#if defined __i386__
CheckTypeSize(xmlExpNodeType,4, 15086, 2, 3.1, NULL, 15085, NULL)
#elif defined __x86_64__
CheckTypeSize(xmlExpNodeType,4, 15086, 11, 3.1, NULL, 15085, NULL)
#elif defined __ia64__
CheckTypeSize(xmlExpNodeType,4, 15086, 3, 3.1, NULL, 15085, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(xmlExpNodeType,4, 15086, 6, 3.1, NULL, 15085, NULL)
#elif defined __powerpc64__
CheckTypeSize(xmlExpNodeType,4, 15086, 9, 3.1, NULL, 15085, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(xmlExpNodeType,4, 15086, 10, 3.1, NULL, 15085, NULL)
#elif defined __s390x__
CheckTypeSize(xmlExpNodeType,4, 15086, 12, 3.1, NULL, 15085, NULL)
#else
Msg("Find size of xmlExpNodeType (15086)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,15085, NULL);\n",architecture,15086,0);
#endif

extern void xmlRegexpPrint_db(FILE *, xmlRegexpPtr);
CheckInterfacedef(xmlRegexpPrint,xmlRegexpPrint_db);
extern void xmlRegFreeExecCtxt_db(xmlRegExecCtxtPtr);
CheckInterfacedef(xmlRegFreeExecCtxt,xmlRegFreeExecCtxt_db);
extern xmlRegExecCtxtPtr xmlRegNewExecCtxt_db(xmlRegexpPtr, xmlRegExecCallbacks, void *);
CheckInterfacedef(xmlRegNewExecCtxt,xmlRegNewExecCtxt_db);
extern int xmlExpMaxToken_db(xmlExpNodePtr);
CheckInterfacedef(xmlExpMaxToken,xmlExpMaxToken_db);
extern xmlExpNodePtr xmlExpStringDerive_db(xmlExpCtxtPtr, xmlExpNodePtr, const xmlChar *, int);
CheckInterfacedef(xmlExpStringDerive,xmlExpStringDerive_db);
extern int xmlRegExecPushString_db(xmlRegExecCtxtPtr, const xmlChar *, void *);
CheckInterfacedef(xmlRegExecPushString,xmlRegExecPushString_db);
extern void xmlExpDump_db(xmlBufferPtr, xmlExpNodePtr);
CheckInterfacedef(xmlExpDump,xmlExpDump_db);
extern int xmlExpSubsume_db(xmlExpCtxtPtr, xmlExpNodePtr, xmlExpNodePtr);
CheckInterfacedef(xmlExpSubsume,xmlExpSubsume_db);
extern xmlExpCtxtPtr xmlExpNewCtxt_db(int, xmlDictPtr);
CheckInterfacedef(xmlExpNewCtxt,xmlExpNewCtxt_db);
extern xmlExpNodePtr xmlExpParse_db(xmlExpCtxtPtr, const char *);
CheckInterfacedef(xmlExpParse,xmlExpParse_db);
extern int xmlRegExecNextValues_db(xmlRegExecCtxtPtr, int *, int *, xmlChar * *, int *);
CheckInterfacedef(xmlRegExecNextValues,xmlRegExecNextValues_db);
extern void xmlExpFree_db(xmlExpCtxtPtr, xmlExpNodePtr);
CheckInterfacedef(xmlExpFree,xmlExpFree_db);
extern xmlExpNodePtr xmlExpNewSeq_db(xmlExpCtxtPtr, xmlExpNodePtr, xmlExpNodePtr);
CheckInterfacedef(xmlExpNewSeq,xmlExpNewSeq_db);
extern void xmlExpRef_db(xmlExpNodePtr);
CheckInterfacedef(xmlExpRef,xmlExpRef_db);
extern int xmlExpGetStart_db(xmlExpCtxtPtr, xmlExpNodePtr, const xmlChar * *, int);
CheckInterfacedef(xmlExpGetStart,xmlExpGetStart_db);
extern int xmlRegExecPushString2_db(xmlRegExecCtxtPtr, const xmlChar *, const xmlChar *, void *);
CheckInterfacedef(xmlRegExecPushString2,xmlRegExecPushString2_db);
extern int xmlExpCtxtNbNodes_db(xmlExpCtxtPtr);
CheckInterfacedef(xmlExpCtxtNbNodes,xmlExpCtxtNbNodes_db);
extern int xmlExpIsNillable_db(xmlExpNodePtr);
CheckInterfacedef(xmlExpIsNillable,xmlExpIsNillable_db);
extern xmlExpNodePtr xmlExpNewOr_db(xmlExpCtxtPtr, xmlExpNodePtr, xmlExpNodePtr);
CheckInterfacedef(xmlExpNewOr,xmlExpNewOr_db);
extern int xmlExpCtxtNbCons_db(xmlExpCtxtPtr);
CheckInterfacedef(xmlExpCtxtNbCons,xmlExpCtxtNbCons_db);
extern xmlExpNodePtr xmlExpNewRange_db(xmlExpCtxtPtr, xmlExpNodePtr, int, int);
CheckInterfacedef(xmlExpNewRange,xmlExpNewRange_db);
extern int xmlRegexpIsDeterminist_db(xmlRegexpPtr);
CheckInterfacedef(xmlRegexpIsDeterminist,xmlRegexpIsDeterminist_db);
extern xmlExpNodePtr xmlExpNewAtom_db(xmlExpCtxtPtr, const xmlChar *, int);
CheckInterfacedef(xmlExpNewAtom,xmlExpNewAtom_db);
extern xmlRegexpPtr xmlRegexpCompile_db(const xmlChar *);
CheckInterfacedef(xmlRegexpCompile,xmlRegexpCompile_db);
extern void xmlRegFreeRegexp_db(xmlRegexpPtr);
CheckInterfacedef(xmlRegFreeRegexp,xmlRegFreeRegexp_db);
extern xmlExpNodePtr xmlExpExpDerive_db(xmlExpCtxtPtr, xmlExpNodePtr, xmlExpNodePtr);
CheckInterfacedef(xmlExpExpDerive,xmlExpExpDerive_db);
extern int xmlExpGetLanguage_db(xmlExpCtxtPtr, xmlExpNodePtr, const xmlChar * *, int);
CheckInterfacedef(xmlExpGetLanguage,xmlExpGetLanguage_db);
extern void xmlExpFreeCtxt_db(xmlExpCtxtPtr);
CheckInterfacedef(xmlExpFreeCtxt,xmlExpFreeCtxt_db);
extern int xmlRegExecErrInfo_db(xmlRegExecCtxtPtr, const xmlChar * *, int *, int *, xmlChar * *, int *);
CheckInterfacedef(xmlRegExecErrInfo,xmlRegExecErrInfo_db);
extern int xmlRegexpExec_db(xmlRegexpPtr, const xmlChar *);
CheckInterfacedef(xmlRegexpExec,xmlRegexpExec_db);
#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests passed out of %d tests in libxml2/libxml/xmlregexp.h\n\n",pcnt,cnt);
return cnt;
#endif

}
