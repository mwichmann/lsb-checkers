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
CheckTypeSize(xmlRegexp,0, 14690, 2)
#elif __x86_64__
CheckTypeSize(xmlRegexp,0, 14690, 11)
#elif __ia64__
CheckTypeSize(xmlRegexp,0, 14690, 3)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,14690,0);
Msg("Find size of xmlRegexp (14690)\n");
#endif

#if __i386__
CheckTypeSize(xmlRegexp *,4, 14691, 2)
#elif __x86_64__
CheckTypeSize(xmlRegexp *,8, 14691, 11)
#elif __ia64__
CheckTypeSize(xmlRegexp *,8, 14691, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(xmlRegexp *,4, 14691, 6)
#elif __powerpc64__
CheckTypeSize(xmlRegexp *,8, 14691, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(xmlRegexp *,4, 14691, 10)
#elif __s390x__
CheckTypeSize(xmlRegexp *,8, 14691, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,14691,0);
Msg("Find size of xmlRegexp * (14691)\n");
#endif

#if __i386__
CheckTypeSize(xmlRegexpPtr,4, 14692, 2)
#elif __x86_64__
CheckTypeSize(xmlRegexpPtr,8, 14692, 11)
#elif __ia64__
CheckTypeSize(xmlRegexpPtr,8, 14692, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(xmlRegexpPtr,4, 14692, 6)
#elif __powerpc64__
CheckTypeSize(xmlRegexpPtr,8, 14692, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(xmlRegexpPtr,4, 14692, 10)
#elif __s390x__
CheckTypeSize(xmlRegexpPtr,8, 14692, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,14692,0);
Msg("Find size of xmlRegexpPtr (14692)\n");
#endif

#if __i386__
CheckTypeSize(xmlRegExecCtxt,0, 14694, 2)
#elif __x86_64__
CheckTypeSize(xmlRegExecCtxt,0, 14694, 11)
#elif __ia64__
CheckTypeSize(xmlRegExecCtxt,0, 14694, 3)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,14694,0);
Msg("Find size of xmlRegExecCtxt (14694)\n");
#endif

#if __i386__
CheckTypeSize(xmlRegExecCtxt *,4, 14695, 2)
#elif __x86_64__
CheckTypeSize(xmlRegExecCtxt *,8, 14695, 11)
#elif __ia64__
CheckTypeSize(xmlRegExecCtxt *,8, 14695, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(xmlRegExecCtxt *,4, 14695, 6)
#elif __powerpc64__
CheckTypeSize(xmlRegExecCtxt *,8, 14695, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(xmlRegExecCtxt *,4, 14695, 10)
#elif __s390x__
CheckTypeSize(xmlRegExecCtxt *,8, 14695, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,14695,0);
Msg("Find size of xmlRegExecCtxt * (14695)\n");
#endif

#if __i386__
CheckTypeSize(xmlRegExecCtxtPtr,4, 14696, 2)
#elif __x86_64__
CheckTypeSize(xmlRegExecCtxtPtr,8, 14696, 11)
#elif __ia64__
CheckTypeSize(xmlRegExecCtxtPtr,8, 14696, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(xmlRegExecCtxtPtr,4, 14696, 6)
#elif __powerpc64__
CheckTypeSize(xmlRegExecCtxtPtr,8, 14696, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(xmlRegExecCtxtPtr,4, 14696, 10)
#elif __s390x__
CheckTypeSize(xmlRegExecCtxtPtr,8, 14696, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,14696,0);
Msg("Find size of xmlRegExecCtxtPtr (14696)\n");
#endif

#if __i386__
CheckTypeSize(xmlExpNode,0, 14698, 2)
#elif __x86_64__
CheckTypeSize(xmlExpNode,0, 14698, 11)
#elif __ia64__
CheckTypeSize(xmlExpNode,0, 14698, 3)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,14698,0);
Msg("Find size of xmlExpNode (14698)\n");
#endif

#if __i386__
CheckTypeSize(xmlExpNode *,4, 14699, 2)
#elif __x86_64__
CheckTypeSize(xmlExpNode *,8, 14699, 11)
#elif __ia64__
CheckTypeSize(xmlExpNode *,8, 14699, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(xmlExpNode *,4, 14699, 6)
#elif __powerpc64__
CheckTypeSize(xmlExpNode *,8, 14699, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(xmlExpNode *,4, 14699, 10)
#elif __s390x__
CheckTypeSize(xmlExpNode *,8, 14699, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,14699,0);
Msg("Find size of xmlExpNode * (14699)\n");
#endif

#if __i386__
CheckTypeSize(xmlExpNodePtr,4, 14700, 2)
#elif __x86_64__
CheckTypeSize(xmlExpNodePtr,8, 14700, 11)
#elif __ia64__
CheckTypeSize(xmlExpNodePtr,8, 14700, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(xmlExpNodePtr,4, 14700, 6)
#elif __powerpc64__
CheckTypeSize(xmlExpNodePtr,8, 14700, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(xmlExpNodePtr,4, 14700, 10)
#elif __s390x__
CheckTypeSize(xmlExpNodePtr,8, 14700, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,14700,0);
Msg("Find size of xmlExpNodePtr (14700)\n");
#endif

#if __i386__
#elif __x86_64__
#elif __ia64__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,14701,0);
Msg("Find size of fptr_xmlregexp_366 (14701)\n");
#endif

#if __i386__
CheckTypeSize(xmlRegExecCallbacks,4, 14702, 2)
#elif __x86_64__
CheckTypeSize(xmlRegExecCallbacks,8, 14702, 11)
#elif __ia64__
CheckTypeSize(xmlRegExecCallbacks,8, 14702, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(xmlRegExecCallbacks,4, 14702, 6)
#elif __powerpc64__
CheckTypeSize(xmlRegExecCallbacks,8, 14702, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(xmlRegExecCallbacks,4, 14702, 10)
#elif __s390x__
CheckTypeSize(xmlRegExecCallbacks,8, 14702, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,14702,0);
Msg("Find size of xmlRegExecCallbacks (14702)\n");
#endif

#if __i386__
CheckTypeSize(xmlExpCtxt,0, 14704, 2)
#elif __x86_64__
CheckTypeSize(xmlExpCtxt,0, 14704, 11)
#elif __ia64__
CheckTypeSize(xmlExpCtxt,0, 14704, 3)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,14704,0);
Msg("Find size of xmlExpCtxt (14704)\n");
#endif

#if __i386__
CheckTypeSize(xmlExpCtxt *,4, 14705, 2)
#elif __x86_64__
CheckTypeSize(xmlExpCtxt *,8, 14705, 11)
#elif __ia64__
CheckTypeSize(xmlExpCtxt *,8, 14705, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(xmlExpCtxt *,4, 14705, 6)
#elif __powerpc64__
CheckTypeSize(xmlExpCtxt *,8, 14705, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(xmlExpCtxt *,4, 14705, 10)
#elif __s390x__
CheckTypeSize(xmlExpCtxt *,8, 14705, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,14705,0);
Msg("Find size of xmlExpCtxt * (14705)\n");
#endif

#if __i386__
CheckTypeSize(xmlExpCtxtPtr,4, 14706, 2)
#elif __x86_64__
CheckTypeSize(xmlExpCtxtPtr,8, 14706, 11)
#elif __ia64__
CheckTypeSize(xmlExpCtxtPtr,8, 14706, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(xmlExpCtxtPtr,4, 14706, 6)
#elif __powerpc64__
CheckTypeSize(xmlExpCtxtPtr,8, 14706, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(xmlExpCtxtPtr,4, 14706, 10)
#elif __s390x__
CheckTypeSize(xmlExpCtxtPtr,8, 14706, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,14706,0);
Msg("Find size of xmlExpCtxtPtr (14706)\n");
#endif

#if __i386__
#elif __x86_64__
#elif __ia64__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,14707,0);
Msg("Find size of const xmlChar * * (14707)\n");
#endif

#if __i386__
CheckEnum("XML_EXP_EMPTY",XML_EXP_EMPTY,0);
CheckEnum("XML_EXP_FORBID",XML_EXP_FORBID,1);
CheckEnum("XML_EXP_ATOM",XML_EXP_ATOM,2);
CheckEnum("XML_EXP_SEQ",XML_EXP_SEQ,3);
CheckEnum("XML_EXP_OR",XML_EXP_OR,4);
CheckEnum("XML_EXP_COUNT",XML_EXP_COUNT,5);
#elif __x86_64__
CheckEnum("XML_EXP_EMPTY",XML_EXP_EMPTY,0);
CheckEnum("XML_EXP_FORBID",XML_EXP_FORBID,1);
CheckEnum("XML_EXP_ATOM",XML_EXP_ATOM,2);
CheckEnum("XML_EXP_SEQ",XML_EXP_SEQ,3);
CheckEnum("XML_EXP_OR",XML_EXP_OR,4);
CheckEnum("XML_EXP_COUNT",XML_EXP_COUNT,5);
#elif __ia64__
CheckEnum("XML_EXP_EMPTY",XML_EXP_EMPTY,0);
CheckEnum("XML_EXP_FORBID",XML_EXP_FORBID,1);
CheckEnum("XML_EXP_ATOM",XML_EXP_ATOM,2);
CheckEnum("XML_EXP_SEQ",XML_EXP_SEQ,3);
CheckEnum("XML_EXP_OR",XML_EXP_OR,4);
CheckEnum("XML_EXP_COUNT",XML_EXP_COUNT,5);
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,15085,0);
Msg("Find size of anonymous-xmlregexp.h.types-0 (15085)\n");
#endif

#if __i386__
CheckTypeSize(xmlExpNodeType,4, 15086, 2)
#elif __x86_64__
CheckTypeSize(xmlExpNodeType,4, 15086, 11)
#elif __ia64__
CheckTypeSize(xmlExpNodeType,4, 15086, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(xmlExpNodeType,4, 15086, 6)
#elif __powerpc64__
CheckTypeSize(xmlExpNodeType,4, 15086, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(xmlExpNodeType,4, 15086, 10)
#elif __s390x__
CheckTypeSize(xmlExpNodeType,4, 15086, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,15086,0);
Msg("Find size of xmlExpNodeType (15086)\n");
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
