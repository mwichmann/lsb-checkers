/*
 * Test of libxml2/libxml/xmlexports.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#define __LSB_VERSION__ 41
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
char *real_macro_value, *stripped_macro_value;
int macro_ndx, stripped_value_ndx;
real_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );
stripped_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );

#ifdef TET_TEST
Msg("Checking data structures in libxml2/libxml/xmlexports.h\n");
#endif

printf("Checking data structures in libxml2/libxml/xmlexports.h\n");
#if _LSB_DEFAULT_ARCH
#ifdef XMLPUBFUN
	CompareMacro(XMLPUBFUN,,,9318,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: XMLPUBFUN\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XMLPUBVAR
	CompareMacro(XMLPUBVAR,extern,extern,9319,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: XMLPUBVAR\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XMLCALL
	CompareMacro(XMLCALL,,,9320,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: XMLCALL\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XMLCDECL
	CompareMacro(XMLCDECL,,,9321,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: XMLCDECL\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef LIBXML_DLL_IMPORT
	CompareMacro(LIBXML_DLL_IMPORT,XMLPUBVAR,XMLPUBVAR,9322,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: LIBXML_DLL_IMPORT\n");
cnt++;
#endif

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
