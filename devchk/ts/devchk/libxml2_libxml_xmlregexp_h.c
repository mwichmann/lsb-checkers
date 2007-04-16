/*
 * Test of libxml2/libxml/xmlregexp.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
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
#if __i386__
CheckTypeSize(xmlRegexp,0, 14690, 2);
#elif __x86_64__
CheckTypeSize(xmlRegexp,0, 14690, 11);
#elif __ia64__
CheckTypeSize(xmlRegexp,0, 14690, 3);
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(xmlRegexp,0, 14690, 6);
#elif __powerpc64__
CheckTypeSize(xmlRegexp,0, 14690, 9);
#elif __s390__ && !__s390x__
CheckTypeSize(xmlRegexp,0, 14690, 10);
#elif __s390x__
CheckTypeSize(xmlRegexp,0, 14690, 12);
#elif 1
CheckTypeSize(xmlRegexp,0, 14690, 1);
#endif

#if __i386__
CheckTypeSize(xmlRegexp *,4, 14691, 2);
#elif __x86_64__
CheckTypeSize(xmlRegexp *,8, 14691, 11);
#elif __ia64__
CheckTypeSize(xmlRegexp *,8, 14691, 3);
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(xmlRegexp *,4, 14691, 6);
#elif __powerpc64__
CheckTypeSize(xmlRegexp *,8, 14691, 9);
#elif __s390__ && !__s390x__
CheckTypeSize(xmlRegexp *,4, 14691, 10);
#elif __s390x__
CheckTypeSize(xmlRegexp *,8, 14691, 12);
#elif 1
CheckTypeSize(xmlRegexp *,0, 14691, 1);
#endif

#if __i386__
CheckTypeSize(xmlRegexpPtr,4, 14692, 2);
#elif __x86_64__
CheckTypeSize(xmlRegexpPtr,8, 14692, 11);
#elif __ia64__
CheckTypeSize(xmlRegexpPtr,8, 14692, 3);
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(xmlRegexpPtr,4, 14692, 6);
#elif __powerpc64__
CheckTypeSize(xmlRegexpPtr,8, 14692, 9);
#elif __s390__ && !__s390x__
CheckTypeSize(xmlRegexpPtr,4, 14692, 10);
#elif __s390x__
CheckTypeSize(xmlRegexpPtr,8, 14692, 12);
#elif 1
CheckTypeSize(xmlRegexpPtr,0, 14692, 1);
#endif

#if __i386__
CheckTypeSize(xmlRegExecCtxt,0, 14694, 2);
#elif __x86_64__
CheckTypeSize(xmlRegExecCtxt,0, 14694, 11);
#elif __ia64__
CheckTypeSize(xmlRegExecCtxt,0, 14694, 3);
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(xmlRegExecCtxt,0, 14694, 6);
#elif __powerpc64__
CheckTypeSize(xmlRegExecCtxt,0, 14694, 9);
#elif __s390__ && !__s390x__
CheckTypeSize(xmlRegExecCtxt,0, 14694, 10);
#elif __s390x__
CheckTypeSize(xmlRegExecCtxt,0, 14694, 12);
#elif 1
CheckTypeSize(xmlRegExecCtxt,0, 14694, 1);
#endif

#if __i386__
CheckTypeSize(xmlRegExecCtxt *,4, 14695, 2);
#elif __x86_64__
CheckTypeSize(xmlRegExecCtxt *,8, 14695, 11);
#elif __ia64__
CheckTypeSize(xmlRegExecCtxt *,8, 14695, 3);
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(xmlRegExecCtxt *,4, 14695, 6);
#elif __powerpc64__
CheckTypeSize(xmlRegExecCtxt *,8, 14695, 9);
#elif __s390__ && !__s390x__
CheckTypeSize(xmlRegExecCtxt *,4, 14695, 10);
#elif __s390x__
CheckTypeSize(xmlRegExecCtxt *,8, 14695, 12);
#elif 1
CheckTypeSize(xmlRegExecCtxt *,0, 14695, 1);
#endif

#if __i386__
CheckTypeSize(xmlRegExecCtxtPtr,4, 14696, 2);
#elif __x86_64__
CheckTypeSize(xmlRegExecCtxtPtr,8, 14696, 11);
#elif __ia64__
CheckTypeSize(xmlRegExecCtxtPtr,8, 14696, 3);
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(xmlRegExecCtxtPtr,4, 14696, 6);
#elif __powerpc64__
CheckTypeSize(xmlRegExecCtxtPtr,8, 14696, 9);
#elif __s390__ && !__s390x__
CheckTypeSize(xmlRegExecCtxtPtr,4, 14696, 10);
#elif __s390x__
CheckTypeSize(xmlRegExecCtxtPtr,8, 14696, 12);
#elif 1
CheckTypeSize(xmlRegExecCtxtPtr,0, 14696, 1);
#endif

#if __i386__
CheckTypeSize(xmlExpNode,0, 14698, 2);
#elif __x86_64__
CheckTypeSize(xmlExpNode,0, 14698, 11);
#elif __ia64__
CheckTypeSize(xmlExpNode,0, 14698, 3);
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(xmlExpNode,0, 14698, 6);
#elif __powerpc64__
CheckTypeSize(xmlExpNode,0, 14698, 9);
#elif __s390__ && !__s390x__
CheckTypeSize(xmlExpNode,0, 14698, 10);
#elif __s390x__
CheckTypeSize(xmlExpNode,0, 14698, 12);
#elif 1
CheckTypeSize(xmlExpNode,0, 14698, 1);
#endif

#if __i386__
CheckTypeSize(xmlExpNode *,4, 14699, 2);
#elif __x86_64__
CheckTypeSize(xmlExpNode *,8, 14699, 11);
#elif __ia64__
CheckTypeSize(xmlExpNode *,8, 14699, 3);
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(xmlExpNode *,4, 14699, 6);
#elif __powerpc64__
CheckTypeSize(xmlExpNode *,8, 14699, 9);
#elif __s390__ && !__s390x__
CheckTypeSize(xmlExpNode *,4, 14699, 10);
#elif __s390x__
CheckTypeSize(xmlExpNode *,8, 14699, 12);
#elif 1
CheckTypeSize(xmlExpNode *,0, 14699, 1);
#endif

#if __i386__
CheckTypeSize(xmlExpNodePtr,4, 14700, 2);
#elif __x86_64__
CheckTypeSize(xmlExpNodePtr,8, 14700, 11);
#elif __ia64__
CheckTypeSize(xmlExpNodePtr,8, 14700, 3);
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(xmlExpNodePtr,4, 14700, 6);
#elif __powerpc64__
CheckTypeSize(xmlExpNodePtr,8, 14700, 9);
#elif __s390__ && !__s390x__
CheckTypeSize(xmlExpNodePtr,4, 14700, 10);
#elif __s390x__
CheckTypeSize(xmlExpNodePtr,8, 14700, 12);
#elif 1
CheckTypeSize(xmlExpNodePtr,0, 14700, 1);
#endif

#if __i386__
#elif __x86_64__
#elif __ia64__
#elif __powerpc__ && !__powerpc64__
#elif __powerpc64__
#elif __s390__ && !__s390x__
#elif __s390x__
#elif 1
#endif

#if __i386__
CheckTypeSize(xmlRegExecCallbacks,4, 14702, 2);
#elif __x86_64__
CheckTypeSize(xmlRegExecCallbacks,8, 14702, 11);
#elif __ia64__
CheckTypeSize(xmlRegExecCallbacks,8, 14702, 3);
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(xmlRegExecCallbacks,4, 14702, 6);
#elif __powerpc64__
CheckTypeSize(xmlRegExecCallbacks,8, 14702, 9);
#elif __s390__ && !__s390x__
CheckTypeSize(xmlRegExecCallbacks,4, 14702, 10);
#elif __s390x__
CheckTypeSize(xmlRegExecCallbacks,8, 14702, 12);
#elif 1
CheckTypeSize(xmlRegExecCallbacks,0, 14702, 1);
#endif

#if __i386__
CheckTypeSize(xmlExpCtxt,0, 14704, 2);
#elif __x86_64__
CheckTypeSize(xmlExpCtxt,0, 14704, 11);
#elif __ia64__
CheckTypeSize(xmlExpCtxt,0, 14704, 3);
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(xmlExpCtxt,0, 14704, 6);
#elif __powerpc64__
CheckTypeSize(xmlExpCtxt,0, 14704, 9);
#elif __s390__ && !__s390x__
CheckTypeSize(xmlExpCtxt,0, 14704, 10);
#elif __s390x__
CheckTypeSize(xmlExpCtxt,0, 14704, 12);
#elif 1
CheckTypeSize(xmlExpCtxt,0, 14704, 1);
#endif

#if __i386__
CheckTypeSize(xmlExpCtxt *,4, 14705, 2);
#elif __x86_64__
CheckTypeSize(xmlExpCtxt *,8, 14705, 11);
#elif __ia64__
CheckTypeSize(xmlExpCtxt *,8, 14705, 3);
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(xmlExpCtxt *,4, 14705, 6);
#elif __powerpc64__
CheckTypeSize(xmlExpCtxt *,8, 14705, 9);
#elif __s390__ && !__s390x__
CheckTypeSize(xmlExpCtxt *,4, 14705, 10);
#elif __s390x__
CheckTypeSize(xmlExpCtxt *,8, 14705, 12);
#elif 1
CheckTypeSize(xmlExpCtxt *,0, 14705, 1);
#endif

#if __i386__
CheckTypeSize(xmlExpCtxtPtr,4, 14706, 2);
#elif __x86_64__
CheckTypeSize(xmlExpCtxtPtr,8, 14706, 11);
#elif __ia64__
CheckTypeSize(xmlExpCtxtPtr,8, 14706, 3);
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(xmlExpCtxtPtr,4, 14706, 6);
#elif __powerpc64__
CheckTypeSize(xmlExpCtxtPtr,8, 14706, 9);
#elif __s390__ && !__s390x__
CheckTypeSize(xmlExpCtxtPtr,4, 14706, 10);
#elif __s390x__
CheckTypeSize(xmlExpCtxtPtr,8, 14706, 12);
#elif 1
CheckTypeSize(xmlExpCtxtPtr,0, 14706, 1);
#endif

#if __i386__
#elif __x86_64__
#elif __ia64__
#elif __powerpc__ && !__powerpc64__
#elif __powerpc64__
#elif __s390__ && !__s390x__
#elif __s390x__
#elif 1
#endif

#if __i386__
CheckEnum("XML_EXP_EMPTY",XML_EXP_EMPTY,0,50019);
CheckEnum("XML_EXP_FORBID",XML_EXP_FORBID,1,50020);
CheckEnum("XML_EXP_ATOM",XML_EXP_ATOM,2,50021);
CheckEnum("XML_EXP_SEQ",XML_EXP_SEQ,3,50022);
CheckEnum("XML_EXP_OR",XML_EXP_OR,4,50023);
CheckEnum("XML_EXP_COUNT",XML_EXP_COUNT,5,50024);
#elif __x86_64__
CheckEnum("XML_EXP_EMPTY",XML_EXP_EMPTY,0,50019);
CheckEnum("XML_EXP_FORBID",XML_EXP_FORBID,1,50020);
CheckEnum("XML_EXP_ATOM",XML_EXP_ATOM,2,50021);
CheckEnum("XML_EXP_SEQ",XML_EXP_SEQ,3,50022);
CheckEnum("XML_EXP_OR",XML_EXP_OR,4,50023);
CheckEnum("XML_EXP_COUNT",XML_EXP_COUNT,5,50024);
#elif __ia64__
CheckEnum("XML_EXP_EMPTY",XML_EXP_EMPTY,0,50019);
CheckEnum("XML_EXP_FORBID",XML_EXP_FORBID,1,50020);
CheckEnum("XML_EXP_ATOM",XML_EXP_ATOM,2,50021);
CheckEnum("XML_EXP_SEQ",XML_EXP_SEQ,3,50022);
CheckEnum("XML_EXP_OR",XML_EXP_OR,4,50023);
CheckEnum("XML_EXP_COUNT",XML_EXP_COUNT,5,50024);
#elif __powerpc__ && !__powerpc64__
CheckEnum("XML_EXP_EMPTY",XML_EXP_EMPTY,0,50019);
CheckEnum("XML_EXP_FORBID",XML_EXP_FORBID,1,50020);
CheckEnum("XML_EXP_ATOM",XML_EXP_ATOM,2,50021);
CheckEnum("XML_EXP_SEQ",XML_EXP_SEQ,3,50022);
CheckEnum("XML_EXP_OR",XML_EXP_OR,4,50023);
CheckEnum("XML_EXP_COUNT",XML_EXP_COUNT,5,50024);
#elif __powerpc64__
CheckEnum("XML_EXP_EMPTY",XML_EXP_EMPTY,0,50019);
CheckEnum("XML_EXP_FORBID",XML_EXP_FORBID,1,50020);
CheckEnum("XML_EXP_ATOM",XML_EXP_ATOM,2,50021);
CheckEnum("XML_EXP_SEQ",XML_EXP_SEQ,3,50022);
CheckEnum("XML_EXP_OR",XML_EXP_OR,4,50023);
CheckEnum("XML_EXP_COUNT",XML_EXP_COUNT,5,50024);
#elif __s390__ && !__s390x__
CheckEnum("XML_EXP_EMPTY",XML_EXP_EMPTY,0,50019);
CheckEnum("XML_EXP_FORBID",XML_EXP_FORBID,1,50020);
CheckEnum("XML_EXP_ATOM",XML_EXP_ATOM,2,50021);
CheckEnum("XML_EXP_SEQ",XML_EXP_SEQ,3,50022);
CheckEnum("XML_EXP_OR",XML_EXP_OR,4,50023);
CheckEnum("XML_EXP_COUNT",XML_EXP_COUNT,5,50024);
#elif __s390x__
CheckEnum("XML_EXP_EMPTY",XML_EXP_EMPTY,0,50019);
CheckEnum("XML_EXP_FORBID",XML_EXP_FORBID,1,50020);
CheckEnum("XML_EXP_ATOM",XML_EXP_ATOM,2,50021);
CheckEnum("XML_EXP_SEQ",XML_EXP_SEQ,3,50022);
CheckEnum("XML_EXP_OR",XML_EXP_OR,4,50023);
CheckEnum("XML_EXP_COUNT",XML_EXP_COUNT,5,50024);
#elif 1
CheckEnum("XML_EXP_EMPTY",XML_EXP_EMPTY,0,50019);
CheckEnum("XML_EXP_FORBID",XML_EXP_FORBID,1,50020);
CheckEnum("XML_EXP_ATOM",XML_EXP_ATOM,2,50021);
CheckEnum("XML_EXP_SEQ",XML_EXP_SEQ,3,50022);
CheckEnum("XML_EXP_OR",XML_EXP_OR,4,50023);
CheckEnum("XML_EXP_COUNT",XML_EXP_COUNT,5,50024);
#endif

#if __i386__
CheckTypeSize(xmlExpNodeType,4, 15086, 2);
#elif __x86_64__
CheckTypeSize(xmlExpNodeType,4, 15086, 11);
#elif __ia64__
CheckTypeSize(xmlExpNodeType,4, 15086, 3);
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(xmlExpNodeType,4, 15086, 6);
#elif __powerpc64__
CheckTypeSize(xmlExpNodeType,4, 15086, 9);
#elif __s390__ && !__s390x__
CheckTypeSize(xmlExpNodeType,4, 15086, 10);
#elif __s390x__
CheckTypeSize(xmlExpNodeType,4, 15086, 12);
#elif 1
CheckTypeSize(xmlExpNodeType,0, 15086, 1);
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
