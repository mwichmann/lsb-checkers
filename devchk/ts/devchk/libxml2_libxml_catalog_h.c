/*
 * Test of libxml2/libxml/catalog.h
 */
#include "hdrchk.h"
#include "sys/types.h"
#define _LSB_DEFAULT_ARCH 1
#include <libxml/xmlregexp.h>

struct _xmlCatalog {} ;
#include "libxml2/libxml/catalog.h"



#ifdef TET_TEST
void libxml2_libxml_catalog_h()
{
#else
int libxml2_libxml_catalog_h()
{
#endif

int cnt=0;

int pcnt=0;
#ifdef TET_TEST
Msg("Checking data structures in libxml2/libxml/catalog.h\n");
#endif

printf("Checking data structures in libxml2/libxml/catalog.h\n");
#if _LSB_DEFAULT_ARCH
/* No test for XML_CATALOGS_NAMESPACE */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for XML_CATALOG_PI */
#endif

#if __i386__
CheckEnum("XML_CATA_ALLOW_NONE",XML_CATA_ALLOW_NONE,0);
CheckEnum("XML_CATA_ALLOW_GLOBAL",XML_CATA_ALLOW_GLOBAL,1);
CheckEnum("XML_CATA_ALLOW_DOCUMENT",XML_CATA_ALLOW_DOCUMENT,2);
CheckEnum("XML_CATA_ALLOW_ALL",XML_CATA_ALLOW_ALL,3);
#elif __x86_64__
CheckEnum("XML_CATA_ALLOW_NONE",XML_CATA_ALLOW_NONE,0);
CheckEnum("XML_CATA_ALLOW_GLOBAL",XML_CATA_ALLOW_GLOBAL,1);
CheckEnum("XML_CATA_ALLOW_DOCUMENT",XML_CATA_ALLOW_DOCUMENT,2);
CheckEnum("XML_CATA_ALLOW_ALL",XML_CATA_ALLOW_ALL,3);
#elif __ia64__
CheckEnum("XML_CATA_ALLOW_NONE",XML_CATA_ALLOW_NONE,0);
CheckEnum("XML_CATA_ALLOW_GLOBAL",XML_CATA_ALLOW_GLOBAL,1);
CheckEnum("XML_CATA_ALLOW_DOCUMENT",XML_CATA_ALLOW_DOCUMENT,2);
CheckEnum("XML_CATA_ALLOW_ALL",XML_CATA_ALLOW_ALL,3);
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,15068,0);
Msg("Find size of anon-libxml2/libxml/catalog.h-166 (15068)\n");
#endif

#if __i386__
CheckTypeSize(xmlCatalogAllow,4, 15069, 2)
#elif __x86_64__
CheckTypeSize(xmlCatalogAllow,4, 15069, 11)
#elif __ia64__
CheckTypeSize(xmlCatalogAllow,4, 15069, 3)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,15069,0);
Msg("Find size of xmlCatalogAllow (15069)\n");
#endif

#if __i386__
CheckTypeSize(xmlCatalog,0, 15071, 2)
#elif __x86_64__
CheckTypeSize(xmlCatalog,0, 15071, 11)
#elif __ia64__
CheckTypeSize(xmlCatalog,0, 15071, 3)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,15071,0);
Msg("Find size of xmlCatalog (15071)\n");
#endif

#if __i386__
CheckTypeSize(xmlCatalog *,4, 15072, 2)
#elif __x86_64__
CheckTypeSize(xmlCatalog *,8, 15072, 11)
#elif __ia64__
CheckTypeSize(xmlCatalog *,8, 15072, 3)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,15072,0);
Msg("Find size of xmlCatalog * (15072)\n");
#endif

#if __i386__
CheckTypeSize(xmlCatalogPtr,4, 15073, 2)
#elif __x86_64__
CheckTypeSize(xmlCatalogPtr,8, 15073, 11)
#elif __ia64__
CheckTypeSize(xmlCatalogPtr,8, 15073, 3)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,15073,0);
Msg("Find size of xmlCatalogPtr (15073)\n");
#endif

#if __i386__
CheckEnum("XML_CATA_PREFER_NONE",XML_CATA_PREFER_NONE,0);
CheckEnum("XML_CATA_PREFER_PUBLIC",XML_CATA_PREFER_PUBLIC,1);
CheckEnum("XML_CATA_PREFER_SYSTEM",XML_CATA_PREFER_SYSTEM,2);
#elif __x86_64__
CheckEnum("XML_CATA_PREFER_NONE",XML_CATA_PREFER_NONE,0);
CheckEnum("XML_CATA_PREFER_PUBLIC",XML_CATA_PREFER_PUBLIC,1);
CheckEnum("XML_CATA_PREFER_SYSTEM",XML_CATA_PREFER_SYSTEM,2);
#elif __ia64__
CheckEnum("XML_CATA_PREFER_NONE",XML_CATA_PREFER_NONE,0);
CheckEnum("XML_CATA_PREFER_PUBLIC",XML_CATA_PREFER_PUBLIC,1);
CheckEnum("XML_CATA_PREFER_SYSTEM",XML_CATA_PREFER_SYSTEM,2);
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,15074,0);
Msg("Find size of anon-libxml2/libxml/catalog.h-165 (15074)\n");
#endif

#if __i386__
CheckTypeSize(xmlCatalogPrefer,4, 15075, 2)
#elif __x86_64__
CheckTypeSize(xmlCatalogPrefer,4, 15075, 11)
#elif __ia64__
CheckTypeSize(xmlCatalogPrefer,4, 15075, 3)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,15075,0);
Msg("Find size of xmlCatalogPrefer (15075)\n");
#endif

extern xmlChar * xmlCatalogLocalResolveURI_db(void *, const xmlChar *);
CheckInterfacedef(xmlCatalogLocalResolveURI,xmlCatalogLocalResolveURI_db);
extern void xmlCatalogSetDefaults_db(xmlCatalogAllow);
CheckInterfacedef(xmlCatalogSetDefaults,xmlCatalogSetDefaults_db);
extern void xmlInitializeCatalog_db(void);
CheckInterfacedef(xmlInitializeCatalog,xmlInitializeCatalog_db);
extern xmlCatalogPtr xmlLoadACatalog_db(const char *);
CheckInterfacedef(xmlLoadACatalog,xmlLoadACatalog_db);
extern xmlChar * xmlACatalogResolvePublic_db(xmlCatalogPtr, const xmlChar *);
CheckInterfacedef(xmlACatalogResolvePublic,xmlACatalogResolvePublic_db);
extern int xmlCatalogIsEmpty_db(xmlCatalogPtr);
CheckInterfacedef(xmlCatalogIsEmpty,xmlCatalogIsEmpty_db);
extern xmlChar * xmlACatalogResolve_db(xmlCatalogPtr, const xmlChar *, const xmlChar *);
CheckInterfacedef(xmlACatalogResolve,xmlACatalogResolve_db);
extern void xmlCatalogDump_db(FILE *);
CheckInterfacedef(xmlCatalogDump,xmlCatalogDump_db);
extern int xmlCatalogAdd_db(const xmlChar *, const xmlChar *, const xmlChar *);
CheckInterfacedef(xmlCatalogAdd,xmlCatalogAdd_db);
extern int xmlCatalogSetDebug_db(int);
CheckInterfacedef(xmlCatalogSetDebug,xmlCatalogSetDebug_db);
extern xmlDocPtr xmlParseCatalogFile_db(const char *);
CheckInterfacedef(xmlParseCatalogFile,xmlParseCatalogFile_db);
extern int xmlACatalogRemove_db(xmlCatalogPtr, const xmlChar *);
CheckInterfacedef(xmlACatalogRemove,xmlACatalogRemove_db);
extern xmlChar * xmlCatalogResolveURI_db(const xmlChar *);
CheckInterfacedef(xmlCatalogResolveURI,xmlCatalogResolveURI_db);
extern void xmlACatalogDump_db(xmlCatalogPtr, FILE *);
CheckInterfacedef(xmlACatalogDump,xmlACatalogDump_db);
extern xmlChar * xmlCatalogResolve_db(const xmlChar *, const xmlChar *);
CheckInterfacedef(xmlCatalogResolve,xmlCatalogResolve_db);
extern void xmlCatalogCleanup_db(void);
CheckInterfacedef(xmlCatalogCleanup,xmlCatalogCleanup_db);
extern xmlChar * xmlCatalogResolveSystem_db(const xmlChar *);
CheckInterfacedef(xmlCatalogResolveSystem,xmlCatalogResolveSystem_db);
extern xmlChar * xmlACatalogResolveURI_db(xmlCatalogPtr, const xmlChar *);
CheckInterfacedef(xmlACatalogResolveURI,xmlACatalogResolveURI_db);
extern int xmlCatalogRemove_db(const xmlChar *);
CheckInterfacedef(xmlCatalogRemove,xmlCatalogRemove_db);
extern xmlCatalogPtr xmlLoadSGMLSuperCatalog_db(const char *);
CheckInterfacedef(xmlLoadSGMLSuperCatalog,xmlLoadSGMLSuperCatalog_db);
extern int xmlLoadCatalog_db(const char *);
CheckInterfacedef(xmlLoadCatalog,xmlLoadCatalog_db);
extern void xmlCatalogFreeLocal_db(void *);
CheckInterfacedef(xmlCatalogFreeLocal,xmlCatalogFreeLocal_db);
extern void * xmlCatalogAddLocal_db(void *, const xmlChar *);
CheckInterfacedef(xmlCatalogAddLocal,xmlCatalogAddLocal_db);
extern int xmlACatalogAdd_db(xmlCatalogPtr, const xmlChar *, const xmlChar *, const xmlChar *);
CheckInterfacedef(xmlACatalogAdd,xmlACatalogAdd_db);
extern int xmlCatalogConvert_db(void);
CheckInterfacedef(xmlCatalogConvert,xmlCatalogConvert_db);
extern xmlChar * xmlCatalogResolvePublic_db(const xmlChar *);
CheckInterfacedef(xmlCatalogResolvePublic,xmlCatalogResolvePublic_db);
extern int xmlConvertSGMLCatalog_db(xmlCatalogPtr);
CheckInterfacedef(xmlConvertSGMLCatalog,xmlConvertSGMLCatalog_db);
extern xmlCatalogPtr xmlNewCatalog_db(int);
CheckInterfacedef(xmlNewCatalog,xmlNewCatalog_db);
extern xmlChar * xmlACatalogResolveSystem_db(xmlCatalogPtr, const xmlChar *);
CheckInterfacedef(xmlACatalogResolveSystem,xmlACatalogResolveSystem_db);
extern void xmlFreeCatalog_db(xmlCatalogPtr);
CheckInterfacedef(xmlFreeCatalog,xmlFreeCatalog_db);
extern xmlChar * xmlCatalogLocalResolve_db(void *, const xmlChar *, const xmlChar *);
CheckInterfacedef(xmlCatalogLocalResolve,xmlCatalogLocalResolve_db);
extern xmlCatalogAllow xmlCatalogGetDefaults_db(void);
CheckInterfacedef(xmlCatalogGetDefaults,xmlCatalogGetDefaults_db);
extern xmlCatalogPrefer xmlCatalogSetDefaultPrefer_db(xmlCatalogPrefer);
CheckInterfacedef(xmlCatalogSetDefaultPrefer,xmlCatalogSetDefaultPrefer_db);
extern void xmlLoadCatalogs_db(const char *);
CheckInterfacedef(xmlLoadCatalogs,xmlLoadCatalogs_db);
#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests passed out of %d tests in libxml2/libxml/catalog.h\n\n",pcnt,cnt);
return cnt;
#endif

}
