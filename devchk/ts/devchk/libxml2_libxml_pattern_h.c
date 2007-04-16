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
#if __i386__
CheckTypeSize(xmlStreamCtxt,0, 14897, 2);
#elif __x86_64__
CheckTypeSize(xmlStreamCtxt,0, 14897, 11);
#elif __ia64__
CheckTypeSize(xmlStreamCtxt,0, 14897, 3);
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(xmlStreamCtxt,0, 14897, 6);
#elif __powerpc64__
CheckTypeSize(xmlStreamCtxt,0, 14897, 9);
#elif __s390__ && !__s390x__
CheckTypeSize(xmlStreamCtxt,0, 14897, 10);
#elif __s390x__
CheckTypeSize(xmlStreamCtxt,0, 14897, 12);
#elif 1
CheckTypeSize(xmlStreamCtxt,0, 14897, 1);
#endif

#if __i386__
CheckTypeSize(xmlStreamCtxt *,4, 14898, 2);
#elif __x86_64__
CheckTypeSize(xmlStreamCtxt *,8, 14898, 11);
#elif __ia64__
CheckTypeSize(xmlStreamCtxt *,8, 14898, 3);
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(xmlStreamCtxt *,4, 14898, 6);
#elif __powerpc64__
CheckTypeSize(xmlStreamCtxt *,8, 14898, 9);
#elif __s390__ && !__s390x__
CheckTypeSize(xmlStreamCtxt *,4, 14898, 10);
#elif __s390x__
CheckTypeSize(xmlStreamCtxt *,8, 14898, 12);
#elif 1
CheckTypeSize(xmlStreamCtxt *,0, 14898, 1);
#endif

#if __i386__
CheckTypeSize(xmlStreamCtxtPtr,4, 14899, 2);
#elif __x86_64__
CheckTypeSize(xmlStreamCtxtPtr,8, 14899, 11);
#elif __ia64__
CheckTypeSize(xmlStreamCtxtPtr,8, 14899, 3);
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(xmlStreamCtxtPtr,4, 14899, 6);
#elif __powerpc64__
CheckTypeSize(xmlStreamCtxtPtr,8, 14899, 9);
#elif __s390__ && !__s390x__
CheckTypeSize(xmlStreamCtxtPtr,4, 14899, 10);
#elif __s390x__
CheckTypeSize(xmlStreamCtxtPtr,8, 14899, 12);
#elif 1
CheckTypeSize(xmlStreamCtxtPtr,0, 14899, 1);
#endif

#if __i386__
CheckTypeSize(xmlPattern,0, 14901, 2);
#elif __x86_64__
CheckTypeSize(xmlPattern,0, 14901, 11);
#elif __ia64__
CheckTypeSize(xmlPattern,0, 14901, 3);
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(xmlPattern,0, 14901, 6);
#elif __powerpc64__
CheckTypeSize(xmlPattern,0, 14901, 9);
#elif __s390__ && !__s390x__
CheckTypeSize(xmlPattern,0, 14901, 10);
#elif __s390x__
CheckTypeSize(xmlPattern,0, 14901, 12);
#elif 1
CheckTypeSize(xmlPattern,0, 14901, 1);
#endif

#if __i386__
CheckTypeSize(xmlPattern *,4, 14902, 2);
#elif __x86_64__
CheckTypeSize(xmlPattern *,8, 14902, 11);
#elif __ia64__
CheckTypeSize(xmlPattern *,8, 14902, 3);
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(xmlPattern *,4, 14902, 6);
#elif __powerpc64__
CheckTypeSize(xmlPattern *,8, 14902, 9);
#elif __s390__ && !__s390x__
CheckTypeSize(xmlPattern *,4, 14902, 10);
#elif __s390x__
CheckTypeSize(xmlPattern *,8, 14902, 12);
#elif 1
CheckTypeSize(xmlPattern *,0, 14902, 1);
#endif

#if __i386__
CheckTypeSize(xmlPatternPtr,4, 14903, 2);
#elif __x86_64__
CheckTypeSize(xmlPatternPtr,8, 14903, 11);
#elif __ia64__
CheckTypeSize(xmlPatternPtr,8, 14903, 3);
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(xmlPatternPtr,4, 14903, 6);
#elif __powerpc64__
CheckTypeSize(xmlPatternPtr,8, 14903, 9);
#elif __s390__ && !__s390x__
CheckTypeSize(xmlPatternPtr,4, 14903, 10);
#elif __s390x__
CheckTypeSize(xmlPatternPtr,8, 14903, 12);
#elif 1
CheckTypeSize(xmlPatternPtr,0, 14903, 1);
#endif

#if __i386__
CheckEnum("XML_PATTERN_DEFAULT",XML_PATTERN_DEFAULT,0,50101);
CheckEnum("XML_PATTERN_XPATH",XML_PATTERN_XPATH,1<<0,50102);
CheckEnum("XML_PATTERN_XSSEL",XML_PATTERN_XSSEL,1<<1,50103);
CheckEnum("XML_PATTERN_XSFIELD",XML_PATTERN_XSFIELD,1<<2,50104);
#elif __x86_64__
CheckEnum("XML_PATTERN_DEFAULT",XML_PATTERN_DEFAULT,0,50101);
CheckEnum("XML_PATTERN_XPATH",XML_PATTERN_XPATH,1<<0,50102);
CheckEnum("XML_PATTERN_XSSEL",XML_PATTERN_XSSEL,1<<1,50103);
CheckEnum("XML_PATTERN_XSFIELD",XML_PATTERN_XSFIELD,1<<2,50104);
#elif __ia64__
CheckEnum("XML_PATTERN_DEFAULT",XML_PATTERN_DEFAULT,0,50101);
CheckEnum("XML_PATTERN_XPATH",XML_PATTERN_XPATH,1<<0,50102);
CheckEnum("XML_PATTERN_XSSEL",XML_PATTERN_XSSEL,1<<1,50103);
CheckEnum("XML_PATTERN_XSFIELD",XML_PATTERN_XSFIELD,1<<2,50104);
#elif __powerpc__ && !__powerpc64__
CheckEnum("XML_PATTERN_DEFAULT",XML_PATTERN_DEFAULT,0,50101);
CheckEnum("XML_PATTERN_XPATH",XML_PATTERN_XPATH,1<<0,50102);
CheckEnum("XML_PATTERN_XSSEL",XML_PATTERN_XSSEL,1<<1,50103);
CheckEnum("XML_PATTERN_XSFIELD",XML_PATTERN_XSFIELD,1<<2,50104);
#elif __powerpc64__
CheckEnum("XML_PATTERN_DEFAULT",XML_PATTERN_DEFAULT,0,50101);
CheckEnum("XML_PATTERN_XPATH",XML_PATTERN_XPATH,1<<0,50102);
CheckEnum("XML_PATTERN_XSSEL",XML_PATTERN_XSSEL,1<<1,50103);
CheckEnum("XML_PATTERN_XSFIELD",XML_PATTERN_XSFIELD,1<<2,50104);
#elif __s390__ && !__s390x__
CheckEnum("XML_PATTERN_DEFAULT",XML_PATTERN_DEFAULT,0,50101);
CheckEnum("XML_PATTERN_XPATH",XML_PATTERN_XPATH,1<<0,50102);
CheckEnum("XML_PATTERN_XSSEL",XML_PATTERN_XSSEL,1<<1,50103);
CheckEnum("XML_PATTERN_XSFIELD",XML_PATTERN_XSFIELD,1<<2,50104);
#elif __s390x__
CheckEnum("XML_PATTERN_DEFAULT",XML_PATTERN_DEFAULT,0,50101);
CheckEnum("XML_PATTERN_XPATH",XML_PATTERN_XPATH,1<<0,50102);
CheckEnum("XML_PATTERN_XSSEL",XML_PATTERN_XSSEL,1<<1,50103);
CheckEnum("XML_PATTERN_XSFIELD",XML_PATTERN_XSFIELD,1<<2,50104);
#elif 1
CheckEnum("XML_PATTERN_DEFAULT",XML_PATTERN_DEFAULT,0,50101);
CheckEnum("XML_PATTERN_XPATH",XML_PATTERN_XPATH,1<<0,50102);
CheckEnum("XML_PATTERN_XSSEL",XML_PATTERN_XSSEL,1<<1,50103);
CheckEnum("XML_PATTERN_XSFIELD",XML_PATTERN_XSFIELD,1<<2,50104);
#endif

#if __i386__
CheckTypeSize(xmlPatternFlags,4, 15106, 2);
#elif __x86_64__
CheckTypeSize(xmlPatternFlags,4, 15106, 11);
#elif __ia64__
CheckTypeSize(xmlPatternFlags,4, 15106, 3);
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(xmlPatternFlags,4, 15106, 6);
#elif __powerpc64__
CheckTypeSize(xmlPatternFlags,4, 15106, 9);
#elif __s390__ && !__s390x__
CheckTypeSize(xmlPatternFlags,4, 15106, 10);
#elif __s390x__
CheckTypeSize(xmlPatternFlags,4, 15106, 12);
#elif 1
CheckTypeSize(xmlPatternFlags,0, 15106, 1);
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
