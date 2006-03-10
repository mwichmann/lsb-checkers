/*
 * Test of libxml2/libxml/xmlmodule.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
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
#ifdef TET_TEST
Msg("Checking data structures in libxml2/libxml/xmlmodule.h\n");
#endif

printf("Checking data structures in libxml2/libxml/xmlmodule.h\n");
#if __i386__
CheckTypeSize(xmlModule,0, 14544, 2)
#elif __x86_64__
CheckTypeSize(xmlModule,0, 14544, 11)
#elif __ia64__
CheckTypeSize(xmlModule,0, 14544, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(xmlModule,0, 14544, 6)
#elif __powerpc64__
CheckTypeSize(xmlModule,0, 14544, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(xmlModule,0, 14544, 10)
#elif __s390x__
CheckTypeSize(xmlModule,0, 14544, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,14544,0);
Msg("Find size of xmlModule (14544)\n");
#endif

#if __i386__
CheckTypeSize(xmlModule *,4, 14545, 2)
#elif __x86_64__
CheckTypeSize(xmlModule *,8, 14545, 11)
#elif __ia64__
CheckTypeSize(xmlModule *,8, 14545, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(xmlModule *,4, 14545, 6)
#elif __powerpc64__
CheckTypeSize(xmlModule *,8, 14545, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(xmlModule *,4, 14545, 10)
#elif __s390x__
CheckTypeSize(xmlModule *,8, 14545, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,14545,0);
Msg("Find size of xmlModule * (14545)\n");
#endif

#if __i386__
CheckTypeSize(xmlModulePtr,4, 14546, 2)
#elif __x86_64__
CheckTypeSize(xmlModulePtr,8, 14546, 11)
#elif __ia64__
CheckTypeSize(xmlModulePtr,8, 14546, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(xmlModulePtr,4, 14546, 6)
#elif __powerpc64__
CheckTypeSize(xmlModulePtr,8, 14546, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(xmlModulePtr,4, 14546, 10)
#elif __s390x__
CheckTypeSize(xmlModulePtr,8, 14546, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,14546,0);
Msg("Find size of xmlModulePtr (14546)\n");
#endif

#if __i386__
CheckEnum("XML_MODULE_LAZY",XML_MODULE_LAZY,1);
CheckEnum("XML_MODULE_LOCAL",XML_MODULE_LOCAL,2);
#elif __x86_64__
CheckEnum("XML_MODULE_LAZY",XML_MODULE_LAZY,1);
CheckEnum("XML_MODULE_LOCAL",XML_MODULE_LOCAL,2);
#elif __ia64__
CheckEnum("XML_MODULE_LAZY",XML_MODULE_LAZY,1);
CheckEnum("XML_MODULE_LOCAL",XML_MODULE_LOCAL,2);
#elif __powerpc__ && !__powerpc64__
CheckEnum("XML_MODULE_LAZY",XML_MODULE_LAZY,1);
CheckEnum("XML_MODULE_LOCAL",XML_MODULE_LOCAL,2);
#elif __powerpc64__
CheckEnum("XML_MODULE_LAZY",XML_MODULE_LAZY,1);
CheckEnum("XML_MODULE_LOCAL",XML_MODULE_LOCAL,2);
#elif __s390__ && !__s390x__
CheckEnum("XML_MODULE_LAZY",XML_MODULE_LAZY,1);
CheckEnum("XML_MODULE_LOCAL",XML_MODULE_LOCAL,2);
#elif __s390x__
CheckEnum("XML_MODULE_LAZY",XML_MODULE_LAZY,1);
CheckEnum("XML_MODULE_LOCAL",XML_MODULE_LOCAL,2);
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,15081,0);
Msg("Find size of anonymous-xmlmodule.h.types-0 (15081)\n");
#endif

#if __i386__
CheckTypeSize(xmlModuleOption,4, 15082, 2)
#elif __x86_64__
CheckTypeSize(xmlModuleOption,4, 15082, 11)
#elif __ia64__
CheckTypeSize(xmlModuleOption,4, 15082, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(xmlModuleOption,4, 15082, 6)
#elif __powerpc64__
CheckTypeSize(xmlModuleOption,4, 15082, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(xmlModuleOption,4, 15082, 10)
#elif __s390x__
CheckTypeSize(xmlModuleOption,4, 15082, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,15082,0);
Msg("Find size of xmlModuleOption (15082)\n");
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
