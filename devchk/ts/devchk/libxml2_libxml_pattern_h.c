/*
 * Test of libxml2/libxml/pattern.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#include <libxml/xmlregexp.h>

struct _xmlStreamCtxt {} ;
struct _xmlPattern {} ;
#include "libxml2/libxml/pattern.h"



#ifdef TET_TEST
void libxml2_libxml_pattern_h()
{
#else
int libxml2_libxml_pattern_h()
{
#endif

int cnt=0;

int pcnt=0;
#ifdef TET_TEST
Msg("Checking data structures in libxml2/libxml/pattern.h\n");
#endif

printf("Checking data structures in libxml2/libxml/pattern.h\n");
#if defined __i386__
CheckTypeSize(xmlStreamCtxt,0, 14897, 2, 3.1, NULL, 14896, NULL)
#elif defined __x86_64__
CheckTypeSize(xmlStreamCtxt,0, 14897, 11, 3.1, NULL, 14896, NULL)
#elif defined __ia64__
CheckTypeSize(xmlStreamCtxt,0, 14897, 3, 3.1, NULL, 14896, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(xmlStreamCtxt,0, 14897, 6, 3.1, NULL, 14896, NULL)
#elif defined __powerpc64__
CheckTypeSize(xmlStreamCtxt,0, 14897, 9, 3.1, NULL, 14896, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(xmlStreamCtxt,0, 14897, 10, 3.1, NULL, 14896, NULL)
#elif defined __s390x__
CheckTypeSize(xmlStreamCtxt,0, 14897, 12, 3.1, NULL, 14896, NULL)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14896,NULL);\n",architecture,14897,0);
Msg("Find size of xmlStreamCtxt (14897)\n");
#endif

#if defined __i386__
CheckTypeSize(xmlStreamCtxtPtr,4, 14899, 2, 3.1, NULL, 14898, NULL)
#elif defined __x86_64__
CheckTypeSize(xmlStreamCtxtPtr,8, 14899, 11, 3.1, NULL, 14898, NULL)
#elif defined __ia64__
CheckTypeSize(xmlStreamCtxtPtr,8, 14899, 3, 3.1, NULL, 14898, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(xmlStreamCtxtPtr,4, 14899, 6, 3.1, NULL, 14898, NULL)
#elif defined __powerpc64__
CheckTypeSize(xmlStreamCtxtPtr,8, 14899, 9, 3.1, NULL, 14898, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(xmlStreamCtxtPtr,4, 14899, 10, 3.1, NULL, 14898, NULL)
#elif defined __s390x__
CheckTypeSize(xmlStreamCtxtPtr,8, 14899, 12, 3.1, NULL, 14898, NULL)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14898,NULL);\n",architecture,14899,0);
Msg("Find size of xmlStreamCtxtPtr (14899)\n");
#endif

#if defined __i386__
CheckTypeSize(xmlPattern,0, 14901, 2, 3.1, NULL, 14900, NULL)
#elif defined __x86_64__
CheckTypeSize(xmlPattern,0, 14901, 11, 3.1, NULL, 14900, NULL)
#elif defined __ia64__
CheckTypeSize(xmlPattern,0, 14901, 3, 3.1, NULL, 14900, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(xmlPattern,0, 14901, 6, 3.1, NULL, 14900, NULL)
#elif defined __powerpc64__
CheckTypeSize(xmlPattern,0, 14901, 9, 3.1, NULL, 14900, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(xmlPattern,0, 14901, 10, 3.1, NULL, 14900, NULL)
#elif defined __s390x__
CheckTypeSize(xmlPattern,0, 14901, 12, 3.1, NULL, 14900, NULL)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14900,NULL);\n",architecture,14901,0);
Msg("Find size of xmlPattern (14901)\n");
#endif

#if defined __i386__
CheckTypeSize(xmlPatternPtr,4, 14903, 2, 3.1, NULL, 14902, NULL)
#elif defined __x86_64__
CheckTypeSize(xmlPatternPtr,8, 14903, 11, 3.1, NULL, 14902, NULL)
#elif defined __ia64__
CheckTypeSize(xmlPatternPtr,8, 14903, 3, 3.1, NULL, 14902, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(xmlPatternPtr,4, 14903, 6, 3.1, NULL, 14902, NULL)
#elif defined __powerpc64__
CheckTypeSize(xmlPatternPtr,8, 14903, 9, 3.1, NULL, 14902, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(xmlPatternPtr,4, 14903, 10, 3.1, NULL, 14902, NULL)
#elif defined __s390x__
CheckTypeSize(xmlPatternPtr,8, 14903, 12, 3.1, NULL, 14902, NULL)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14902,NULL);\n",architecture,14903,0);
Msg("Find size of xmlPatternPtr (14903)\n");
#endif

#if defined __i386__
CheckTypeSize(xmlPatternFlags,4, 15106, 2, 3.1, NULL, 15105, NULL)
#elif defined __x86_64__
CheckTypeSize(xmlPatternFlags,4, 15106, 11, 3.1, NULL, 15105, NULL)
#elif defined __ia64__
CheckTypeSize(xmlPatternFlags,4, 15106, 3, 3.1, NULL, 15105, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(xmlPatternFlags,4, 15106, 6, 3.1, NULL, 15105, NULL)
#elif defined __powerpc64__
CheckTypeSize(xmlPatternFlags,4, 15106, 9, 3.1, NULL, 15105, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(xmlPatternFlags,4, 15106, 10, 3.1, NULL, 15105, NULL)
#elif defined __s390x__
CheckTypeSize(xmlPatternFlags,4, 15106, 12, 3.1, NULL, 15105, NULL)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,15105, NULL);\n",architecture,15106,0);
Msg("Find size of xmlPatternFlags (15106)\n");
#endif

extern int xmlStreamPush_db(xmlStreamCtxtPtr, const xmlChar *, const xmlChar *);
CheckInterfacedef(xmlStreamPush,xmlStreamPush_db);
extern int xmlStreamPushAttr_db(xmlStreamCtxtPtr, const xmlChar *, const xmlChar *);
CheckInterfacedef(xmlStreamPushAttr,xmlStreamPushAttr_db);
extern void xmlFreePattern_db(xmlPatternPtr);
CheckInterfacedef(xmlFreePattern,xmlFreePattern_db);
extern int xmlPatternFromRoot_db(xmlPatternPtr);
CheckInterfacedef(xmlPatternFromRoot,xmlPatternFromRoot_db);
extern xmlPatternPtr xmlPatterncompile_db(const xmlChar *, xmlDict *, int, const xmlChar * *);
CheckInterfacedef(xmlPatterncompile,xmlPatterncompile_db);
extern int xmlPatternMatch_db(xmlPatternPtr, xmlNodePtr);
CheckInterfacedef(xmlPatternMatch,xmlPatternMatch_db);
extern void xmlFreePatternList_db(xmlPatternPtr);
CheckInterfacedef(xmlFreePatternList,xmlFreePatternList_db);
extern int xmlPatternMaxDepth_db(xmlPatternPtr);
CheckInterfacedef(xmlPatternMaxDepth,xmlPatternMaxDepth_db);
extern int xmlPatternStreamable_db(xmlPatternPtr);
CheckInterfacedef(xmlPatternStreamable,xmlPatternStreamable_db);
extern int xmlPatternMinDepth_db(xmlPatternPtr);
CheckInterfacedef(xmlPatternMinDepth,xmlPatternMinDepth_db);
extern int xmlStreamPop_db(xmlStreamCtxtPtr);
CheckInterfacedef(xmlStreamPop,xmlStreamPop_db);
extern void xmlFreeStreamCtxt_db(xmlStreamCtxtPtr);
CheckInterfacedef(xmlFreeStreamCtxt,xmlFreeStreamCtxt_db);
extern xmlStreamCtxtPtr xmlPatternGetStreamCtxt_db(xmlPatternPtr);
CheckInterfacedef(xmlPatternGetStreamCtxt,xmlPatternGetStreamCtxt_db);
#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests passed out of %d tests in libxml2/libxml/pattern.h\n\n",pcnt,cnt);
return cnt;
#endif

}
