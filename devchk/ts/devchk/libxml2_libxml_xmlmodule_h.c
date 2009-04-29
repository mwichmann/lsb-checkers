/*
 * Test of libxml2/libxml/xmlmodule.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#define __LSB_VERSION__ 40
struct _xmlModule {};
#include "libxml2/libxml/xmlmodule.h"



#ifdef TET_TEST
void libxml2_libxml_xmlmodule_h()
{
#else
int libxml2_libxml_xmlmodule_h()
{
#endif

int cnt=0;

int pcnt=0;
char *real_macro_value, *stripped_macro_value;
int macro_ndx, stripped_value_ndx;
real_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );
stripped_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );

#ifdef TET_TEST
Msg("Checking data structures in libxml2/libxml/xmlmodule.h\n");
#endif

printf("Checking data structures in libxml2/libxml/xmlmodule.h\n");
#if _LSB_DEFAULT_ARCH
/* No test for libxml2/libxml/xmlmodule.h depends on libxml2/libxml/xmlversion.h */
#endif

#if defined __s390x__
CheckTypeSize(xmlModulePtr,8, 14546, 12, 3.1, NULL, 14545, NULL)
#elif defined __x86_64__
CheckTypeSize(xmlModulePtr,8, 14546, 11, 3.1, NULL, 14545, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(xmlModulePtr,4, 14546, 10, 3.1, NULL, 14545, NULL)
#elif defined __powerpc64__
CheckTypeSize(xmlModulePtr,8, 14546, 9, 3.1, NULL, 14545, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(xmlModulePtr,4, 14546, 6, 3.1, NULL, 14545, NULL)
#elif defined __ia64__
CheckTypeSize(xmlModulePtr,8, 14546, 3, 3.1, NULL, 14545, NULL)
#elif defined __i386__
CheckTypeSize(xmlModulePtr,4, 14546, 2, 3.1, NULL, 14545, NULL)
#else
Msg("Find size of xmlModulePtr (14546)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14545,NULL);\n",architecture,14546,0);
#endif

#if defined __s390x__
CheckTypeSize(xmlModuleOption,4, 15082, 12, 3.1, NULL, 15081, NULL)
#elif defined __x86_64__
CheckTypeSize(xmlModuleOption,4, 15082, 11, 3.1, NULL, 15081, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(xmlModuleOption,4, 15082, 10, 3.1, NULL, 15081, NULL)
#elif defined __powerpc64__
CheckTypeSize(xmlModuleOption,4, 15082, 9, 3.1, NULL, 15081, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(xmlModuleOption,4, 15082, 6, 3.1, NULL, 15081, NULL)
#elif defined __ia64__
CheckTypeSize(xmlModuleOption,4, 15082, 3, 3.1, NULL, 15081, NULL)
#elif defined __i386__
CheckTypeSize(xmlModuleOption,4, 15082, 2, 3.1, NULL, 15081, NULL)
#else
Msg("Find size of xmlModuleOption (15082)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,15081, NULL);\n",architecture,15082,0);
#endif

extern int xmlModuleClose_db(xmlModulePtr);
CheckInterfacedef(xmlModuleClose,xmlModuleClose_db);
extern int xmlModuleFree_db(xmlModulePtr);
CheckInterfacedef(xmlModuleFree,xmlModuleFree_db);
extern int xmlModuleSymbol_db(xmlModulePtr, const char *, void * *);
CheckInterfacedef(xmlModuleSymbol,xmlModuleSymbol_db);
extern xmlModulePtr xmlModuleOpen_db(const char *, int);
CheckInterfacedef(xmlModuleOpen,xmlModuleOpen_db);
#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests passed out of %d tests in libxml2/libxml/xmlmodule.h\n\n",pcnt,cnt);
return cnt;
#endif

}
