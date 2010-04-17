/*
 * Test of libxml2/libxml/xmlversion.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#define __LSB_VERSION__ 41
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
char *real_macro_value, *stripped_macro_value;
int macro_ndx, stripped_value_ndx;
real_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );
stripped_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );

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
#ifndef WITHOUT_TRIO
Msg( "Error: Constant not found: WITHOUT_TRIO\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifndef LIBXML_TREE_ENABLED
Msg( "Error: Constant not found: LIBXML_TREE_ENABLED\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifndef LIBXML_OUTPUT_ENABLED
Msg( "Error: Constant not found: LIBXML_OUTPUT_ENABLED\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifndef LIBXML_PUSH_ENABLED
Msg( "Error: Constant not found: LIBXML_PUSH_ENABLED\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifndef LIBXML_READER_ENABLED
Msg( "Error: Constant not found: LIBXML_READER_ENABLED\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifndef LIBXML_PATTERN_ENABLED
Msg( "Error: Constant not found: LIBXML_PATTERN_ENABLED\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifndef LIBXML_WRITER_ENABLED
Msg( "Error: Constant not found: LIBXML_WRITER_ENABLED\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifndef LIBXML_SAX1_ENABLED
Msg( "Error: Constant not found: LIBXML_SAX1_ENABLED\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifndef LIBXML_FTP_ENABLED
Msg( "Error: Constant not found: LIBXML_FTP_ENABLED\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifndef LIBXML_HTTP_ENABLED
Msg( "Error: Constant not found: LIBXML_HTTP_ENABLED\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifndef LIBXML_VALID_ENABLED
Msg( "Error: Constant not found: LIBXML_VALID_ENABLED\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifndef LIBXML_HTML_ENABLED
Msg( "Error: Constant not found: LIBXML_HTML_ENABLED\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifndef LIBXML_LEGACY_ENABLED
Msg( "Error: Constant not found: LIBXML_LEGACY_ENABLED\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifndef LIBXML_C14N_ENABLED
Msg( "Error: Constant not found: LIBXML_C14N_ENABLED\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifndef LIBXML_CATALOG_ENABLED
Msg( "Error: Constant not found: LIBXML_CATALOG_ENABLED\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifndef LIBXML_DOCB_ENABLED
Msg( "Error: Constant not found: LIBXML_DOCB_ENABLED\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifndef LIBXML_XPATH_ENABLED
Msg( "Error: Constant not found: LIBXML_XPATH_ENABLED\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifndef LIBXML_XPTR_ENABLED
Msg( "Error: Constant not found: LIBXML_XPTR_ENABLED\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifndef LIBXML_XINCLUDE_ENABLED
Msg( "Error: Constant not found: LIBXML_XINCLUDE_ENABLED\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifndef LIBXML_ICONV_ENABLED
Msg( "Error: Constant not found: LIBXML_ICONV_ENABLED\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifndef LIBXML_ISO8859X_ENABLED
Msg( "Error: Constant not found: LIBXML_ISO8859X_ENABLED\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifndef LIBXML_DEBUG_ENABLED
Msg( "Error: Constant not found: LIBXML_DEBUG_ENABLED\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifndef LIBXML_UNICODE_ENABLED
Msg( "Error: Constant not found: LIBXML_UNICODE_ENABLED\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifndef LIBXML_REGEXP_ENABLED
Msg( "Error: Constant not found: LIBXML_REGEXP_ENABLED\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifndef LIBXML_AUTOMATA_ENABLED
Msg( "Error: Constant not found: LIBXML_AUTOMATA_ENABLED\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifndef LIBXML_EXPR_ENABLED
Msg( "Error: Constant not found: LIBXML_EXPR_ENABLED\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifndef LIBXML_SCHEMAS_ENABLED
Msg( "Error: Constant not found: LIBXML_SCHEMAS_ENABLED\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifndef LIBXML_SCHEMATRON_ENABLED
Msg( "Error: Constant not found: LIBXML_SCHEMATRON_ENABLED\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifndef LIBXML_MODULES_ENABLED
Msg( "Error: Constant not found: LIBXML_MODULES_ENABLED\n");
cnt++;
#endif

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
#ifndef LIBXML_THREAD_ENABLED
Msg( "Error: Constant not found: LIBXML_THREAD_ENABLED\n");
cnt++;
#endif

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
