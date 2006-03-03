/*
 * Test of libxml2/libxml/xmlexports.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#include "libxml2/libxml/xmlexports.h"



#ifdef TET_TEST
void libxml2_libxml_xmlexports_h()
{
#else
int libxml2_libxml_xmlexports_h()
{
#endif

int cnt=0;

int pcnt=0;
#ifdef TET_TEST
Msg("Checking data structures in libxml2/libxml/xmlexports.h\n");
#endif

printf("Checking data structures in libxml2/libxml/xmlexports.h\n");
#if _LSB_DEFAULT_ARCH
/* No test for XMLPUBFUN */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for XMLPUBVAR */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for XMLCALL */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for XMLCDECL */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for LIBXML_DLL_IMPORT */
#endif

#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests passed out of %d tests in libxml2/libxml/xmlexports.h\n\n",pcnt,cnt);
return cnt;
#endif

}
