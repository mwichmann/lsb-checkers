/*
 * Test of libxml2/libxml/xmlversion.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#include "libxml2/libxml/xmlversion.h"



#ifdef TET_TEST
void libxml2_libxml_xmlversion_h()
{
#else
int libxml2_libxml_xmlversion_h()
{
#endif

int cnt=0;

int pcnt=0;
#ifdef TET_TEST
Msg("Checking data structures in libxml2/libxml/xmlversion.h\n");
#endif

printf("Checking data structures in libxml2/libxml/xmlversion.h\n");
#if _LSB_DEFAULT_ARCH
#ifdef LIBXML_DOTTED_VERSION
	CompareStringConstant(LIBXML_DOTTED_VERSION,"2.6.22",9323,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: LIBXML_DOTTED_VERSION\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef LIBXML_VERSION
	CompareConstant(LIBXML_VERSION,20622,9324,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: LIBXML_VERSION\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef LIBXML_VERSION_STRING
	CompareStringConstant(LIBXML_VERSION_STRING,"20622",9325,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: LIBXML_VERSION_STRING\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef LIBXML_VERSION_EXTRA
	CompareStringConstant(LIBXML_VERSION_EXTRA,"",9326,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: LIBXML_VERSION_EXTRA\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
/* No test for LIBXML_TEST_VERSION */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for WITHOUT_TRIO */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for LIBXML_TREE_ENABLED */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for LIBXML_OUTPUT_ENABLED */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for LIBXML_PUSH_ENABLED */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for LIBXML_READER_ENABLED */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for LIBXML_PATTERN_ENABLED */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for LIBXML_WRITER_ENABLED */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for LIBXML_SAX1_ENABLED */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for LIBXML_FTP_ENABLED */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for LIBXML_HTTP_ENABLED */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for LIBXML_VALID_ENABLED */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for LIBXML_HTML_ENABLED */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for LIBXML_LEGACY_ENABLED */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for LIBXML_C14N_ENABLED */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for LIBXML_CATALOG_ENABLED */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for LIBXML_DOCB_ENABLED */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for LIBXML_XPATH_ENABLED */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for LIBXML_XPTR_ENABLED */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for LIBXML_XINCLUDE_ENABLED */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for LIBXML_ICONV_ENABLED */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for LIBXML_ISO8859X_ENABLED */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for LIBXML_DEBUG_ENABLED */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for LIBXML_UNICODE_ENABLED */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for LIBXML_REGEXP_ENABLED */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for LIBXML_AUTOMATA_ENABLED */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for LIBXML_EXPR_ENABLED */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for LIBXML_SCHEMAS_ENABLED */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for LIBXML_SCHEMATRON_ENABLED */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for LIBXML_MODULES_ENABLED */
#endif

#if _LSB_DEFAULT_ARCH
#ifdef LIBXML_MODULE_EXTENSION
	CompareStringConstant(LIBXML_MODULE_EXTENSION,".so",9357,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: LIBXML_MODULE_EXTENSION\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
/* No test for ATTRIBUTE_UNUSED */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for LIBXML_THREAD_ENABLED */
#endif

extern void xmlCheckVersion_db(int);
CheckInterfacedef(xmlCheckVersion,xmlCheckVersion_db);
#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests passed out of %d tests in libxml2/libxml/xmlversion.h\n\n",pcnt,cnt);
return cnt;
#endif

}
