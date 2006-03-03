/*
 * Test of libxml2/libxml/c14n.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#include <libxml/xmlversion.h>
#include <libxml/xmlregexp.h>
#include "libxml2/libxml/c14n.h"



#ifdef TET_TEST
void libxml2_libxml_c14n_h()
{
#else
int libxml2_libxml_c14n_h()
{
#endif

int cnt=0;

int pcnt=0;
#ifdef TET_TEST
Msg("Checking data structures in libxml2/libxml/c14n.h\n");
#endif

printf("Checking data structures in libxml2/libxml/c14n.h\n");
#if __i386__
#elif __x86_64__
#elif __ia64__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,14914,0);
Msg("Find size of fptr_c14n_495 (14914)\n");
#endif

#if __i386__
CheckTypeSize(xmlC14NIsVisibleCallback,4, 14915, 2)
#elif __x86_64__
CheckTypeSize(xmlC14NIsVisibleCallback,8, 14915, 11)
#elif __ia64__
CheckTypeSize(xmlC14NIsVisibleCallback,8, 14915, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(xmlC14NIsVisibleCallback,4, 14915, 6)
#elif __powerpc64__
CheckTypeSize(xmlC14NIsVisibleCallback,8, 14915, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(xmlC14NIsVisibleCallback,4, 14915, 10)
#elif __s390x__
CheckTypeSize(xmlC14NIsVisibleCallback,8, 14915, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,14915,0);
Msg("Find size of xmlC14NIsVisibleCallback (14915)\n");
#endif

extern int xmlC14NDocDumpMemory_db(xmlDocPtr, xmlNodeSetPtr, int, xmlChar * *, int, xmlChar * *);
CheckInterfacedef(xmlC14NDocDumpMemory,xmlC14NDocDumpMemory_db);
extern int xmlC14NDocSave_db(xmlDocPtr, xmlNodeSetPtr, int, xmlChar * *, int, const char *, int);
CheckInterfacedef(xmlC14NDocSave,xmlC14NDocSave_db);
extern int xmlC14NDocSaveTo_db(xmlDocPtr, xmlNodeSetPtr, int, xmlChar * *, int, xmlOutputBufferPtr);
CheckInterfacedef(xmlC14NDocSaveTo,xmlC14NDocSaveTo_db);
extern int xmlC14NExecute_db(xmlDocPtr, xmlC14NIsVisibleCallback, void *, int, xmlChar * *, int, xmlOutputBufferPtr);
CheckInterfacedef(xmlC14NExecute,xmlC14NExecute_db);
#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests passed out of %d tests in libxml2/libxml/c14n.h\n\n",pcnt,cnt);
return cnt;
#endif

}
