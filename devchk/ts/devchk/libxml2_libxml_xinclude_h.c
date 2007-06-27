/*
 * Test of libxml2/libxml/xinclude.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#include <libxml/xmlregexp.h>
struct _xmlXIncludeCtxt {};
#include "libxml2/libxml/xinclude.h"



#ifdef TET_TEST
void libxml2_libxml_xinclude_h()
{
#else
int libxml2_libxml_xinclude_h()
{
#endif

int cnt=0;

int pcnt=0;
#ifdef TET_TEST
Msg("Checking data structures in libxml2/libxml/xinclude.h\n");
#endif

printf("Checking data structures in libxml2/libxml/xinclude.h\n");
#if _LSB_DEFAULT_ARCH
/* No test for XINCLUDE_NS */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for XINCLUDE_OLD_NS */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for XINCLUDE_NODE */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for XINCLUDE_FALLBACK */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for XINCLUDE_HREF */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for XINCLUDE_PARSE */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for XINCLUDE_PARSE_XML */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for XINCLUDE_PARSE_TEXT */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for XINCLUDE_PARSE_ENCODING */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for XINCLUDE_PARSE_XPOINTER */
#endif

#if defined __i386__
CheckTypeSize(xmlXIncludeCtxt,0, 14671, 2, 3.1, NULL, 14670, NULL)
#elif defined __x86_64__
CheckTypeSize(xmlXIncludeCtxt,0, 14671, 11, 3.1, NULL, 14670, NULL)
#elif defined __ia64__
CheckTypeSize(xmlXIncludeCtxt,0, 14671, 3, 3.1, NULL, 14670, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(xmlXIncludeCtxt,0, 14671, 6, 3.1, NULL, 14670, NULL)
#elif defined __powerpc64__
CheckTypeSize(xmlXIncludeCtxt,0, 14671, 9, 3.1, NULL, 14670, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(xmlXIncludeCtxt,0, 14671, 10, 3.1, NULL, 14670, NULL)
#elif defined __s390x__
CheckTypeSize(xmlXIncludeCtxt,0, 14671, 12, 3.1, NULL, 14670, NULL)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14670,NULL);\n",architecture,14671,0);
Msg("Find size of xmlXIncludeCtxt (14671)\n");
#endif

#if defined __i386__
CheckTypeSize(xmlXIncludeCtxtPtr,4, 14673, 2, 3.1, NULL, 14672, NULL)
#elif defined __x86_64__
CheckTypeSize(xmlXIncludeCtxtPtr,8, 14673, 11, 3.1, NULL, 14672, NULL)
#elif defined __ia64__
CheckTypeSize(xmlXIncludeCtxtPtr,8, 14673, 3, 3.1, NULL, 14672, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(xmlXIncludeCtxtPtr,4, 14673, 6, 3.1, NULL, 14672, NULL)
#elif defined __powerpc64__
CheckTypeSize(xmlXIncludeCtxtPtr,8, 14673, 9, 3.1, NULL, 14672, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(xmlXIncludeCtxtPtr,4, 14673, 10, 3.1, NULL, 14672, NULL)
#elif defined __s390x__
CheckTypeSize(xmlXIncludeCtxtPtr,8, 14673, 12, 3.1, NULL, 14672, NULL)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14672, NULL);\n",architecture,14673,0);
Msg("Find size of xmlXIncludeCtxtPtr (14673)\n");
#endif

extern int xmlXIncludeProcess_db(xmlDocPtr);
CheckInterfacedef(xmlXIncludeProcess,xmlXIncludeProcess_db);
extern void xmlXIncludeFreeContext_db(xmlXIncludeCtxtPtr);
CheckInterfacedef(xmlXIncludeFreeContext,xmlXIncludeFreeContext_db);
extern int xmlXIncludeProcessTree_db(xmlNodePtr);
CheckInterfacedef(xmlXIncludeProcessTree,xmlXIncludeProcessTree_db);
extern xmlXIncludeCtxtPtr xmlXIncludeNewContext_db(xmlDocPtr);
CheckInterfacedef(xmlXIncludeNewContext,xmlXIncludeNewContext_db);
extern int xmlXIncludeSetFlags_db(xmlXIncludeCtxtPtr, int);
CheckInterfacedef(xmlXIncludeSetFlags,xmlXIncludeSetFlags_db);
extern int xmlXIncludeProcessNode_db(xmlXIncludeCtxtPtr, xmlNodePtr);
CheckInterfacedef(xmlXIncludeProcessNode,xmlXIncludeProcessNode_db);
extern int xmlXIncludeProcessTreeFlags_db(xmlNodePtr, int);
CheckInterfacedef(xmlXIncludeProcessTreeFlags,xmlXIncludeProcessTreeFlags_db);
extern int xmlXIncludeProcessFlags_db(xmlDocPtr, int);
CheckInterfacedef(xmlXIncludeProcessFlags,xmlXIncludeProcessFlags_db);
#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests passed out of %d tests in libxml2/libxml/xinclude.h\n\n",pcnt,cnt);
return cnt;
#endif

}
