/*
 * Test of libxml2/libxml/dict.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#include <libxml/xmlregexp.h>
struct _xmlDict {} ;
#include "libxml2/libxml/dict.h"



#ifdef TET_TEST
void libxml2_libxml_dict_h()
{
#else
int libxml2_libxml_dict_h()
{
#endif

int cnt=0;

int pcnt=0;
#ifdef TET_TEST
Msg("Checking data structures in libxml2/libxml/dict.h\n");
#endif

printf("Checking data structures in libxml2/libxml/dict.h\n");
#if __i386__
CheckTypeSize(xmlDict,0, 14686, 2, 3.1, NULL, 14599, NULL)
#elif __x86_64__
CheckTypeSize(xmlDict,0, 14686, 11, 3.1, NULL, 14599, NULL)
#elif __ia64__
CheckTypeSize(xmlDict,0, 14686, 3, 3.1, NULL, 14599, NULL)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(xmlDict,0, 14686, 6, 3.1, NULL, 14599, NULL)
#elif __powerpc64__
CheckTypeSize(xmlDict,0, 14686, 9, 3.1, NULL, 14599, NULL)
#elif __s390__ && !__s390x__
CheckTypeSize(xmlDict,0, 14686, 10, 3.1, NULL, 14599, NULL)
#elif __s390x__
CheckTypeSize(xmlDict,0, 14686, 12, 3.1, NULL, 14599, NULL)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14599,NULL);\n",architecture,14686,0);
Msg("Find size of xmlDict (14686)\n");
#endif

#if __i386__
CheckTypeSize(xmlDictPtr,4, 14688, 2, 3.1, NULL, 14687, NULL)
#elif __x86_64__
CheckTypeSize(xmlDictPtr,8, 14688, 11, 3.1, NULL, 14687, NULL)
#elif __ia64__
CheckTypeSize(xmlDictPtr,8, 14688, 3, 3.1, NULL, 14687, NULL)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(xmlDictPtr,4, 14688, 6, 3.1, NULL, 14687, NULL)
#elif __powerpc64__
CheckTypeSize(xmlDictPtr,8, 14688, 9, 3.1, NULL, 14687, NULL)
#elif __s390__ && !__s390x__
CheckTypeSize(xmlDictPtr,4, 14688, 10, 3.1, NULL, 14687, NULL)
#elif __s390x__
CheckTypeSize(xmlDictPtr,8, 14688, 12, 3.1, NULL, 14687, NULL)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14687, NULL);\n",architecture,14688,0);
Msg("Find size of xmlDictPtr (14688)\n");
#endif

extern void xmlDictFree_db(xmlDictPtr);
CheckInterfacedef(xmlDictFree,xmlDictFree_db);
extern xmlDictPtr xmlDictCreate_db(void);
CheckInterfacedef(xmlDictCreate,xmlDictCreate_db);
extern const xmlChar * xmlDictExists_db(xmlDictPtr, const xmlChar *, int);
CheckInterfacedef(xmlDictExists,xmlDictExists_db);
extern xmlDictPtr xmlDictCreateSub_db(xmlDictPtr);
CheckInterfacedef(xmlDictCreateSub,xmlDictCreateSub_db);
extern int xmlDictReference_db(xmlDictPtr);
CheckInterfacedef(xmlDictReference,xmlDictReference_db);
extern int xmlDictSize_db(xmlDictPtr);
CheckInterfacedef(xmlDictSize,xmlDictSize_db);
extern void xmlDictCleanup_db(void);
CheckInterfacedef(xmlDictCleanup,xmlDictCleanup_db);
extern const xmlChar * xmlDictQLookup_db(xmlDictPtr, const xmlChar *, const xmlChar *);
CheckInterfacedef(xmlDictQLookup,xmlDictQLookup_db);
extern int xmlDictOwns_db(xmlDictPtr, const xmlChar *);
CheckInterfacedef(xmlDictOwns,xmlDictOwns_db);
extern const xmlChar * xmlDictLookup_db(xmlDictPtr, const xmlChar *, int);
CheckInterfacedef(xmlDictLookup,xmlDictLookup_db);
#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests passed out of %d tests in libxml2/libxml/dict.h\n\n",pcnt,cnt);
return cnt;
#endif

}
