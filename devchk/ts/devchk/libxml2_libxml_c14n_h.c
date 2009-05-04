/*
 * Test of libxml2/libxml/c14n.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#define __LSB_VERSION__ 40
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
char *real_macro_value, *stripped_macro_value;
int macro_ndx, stripped_value_ndx;
real_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );
stripped_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );

#ifdef TET_TEST
Msg("Checking data structures in libxml2/libxml/c14n.h\n");
#endif

printf("Checking data structures in libxml2/libxml/c14n.h\n");
#if defined __s390x__
CheckTypeSize(xmlC14NIsVisibleCallback,8, 14915, 12, 3.1, NULL, 14914, NULL)
#elif defined __x86_64__
CheckTypeSize(xmlC14NIsVisibleCallback,8, 14915, 11, 3.1, NULL, 14914, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(xmlC14NIsVisibleCallback,4, 14915, 10, 3.1, NULL, 14914, NULL)
#elif defined __powerpc64__
CheckTypeSize(xmlC14NIsVisibleCallback,8, 14915, 9, 3.1, NULL, 14914, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(xmlC14NIsVisibleCallback,4, 14915, 6, 3.1, NULL, 14914, NULL)
#elif defined __ia64__
CheckTypeSize(xmlC14NIsVisibleCallback,8, 14915, 3, 3.1, NULL, 14914, NULL)
#elif defined __i386__
CheckTypeSize(xmlC14NIsVisibleCallback,4, 14915, 2, 3.1, NULL, 14914, NULL)
#else
Msg("Find size of xmlC14NIsVisibleCallback (14915)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14914, NULL);\n",architecture,14915,0);
#endif

#if defined __s390x__
/* S390X */
typedef int (*xmlC14NIsVisibleCallback_db)(void *, xmlNodePtr, xmlNodePtr);
CheckFunctionTypedef(xmlC14NIsVisibleCallback,xmlC14NIsVisibleCallback_db);
#elif defined __x86_64__
/* x86-64 */
typedef int (*xmlC14NIsVisibleCallback_db)(void *, xmlNodePtr, xmlNodePtr);
CheckFunctionTypedef(xmlC14NIsVisibleCallback,xmlC14NIsVisibleCallback_db);
#elif defined __s390__ && !defined __s390x__
/* S390 */
typedef int (*xmlC14NIsVisibleCallback_db)(void *, xmlNodePtr, xmlNodePtr);
CheckFunctionTypedef(xmlC14NIsVisibleCallback,xmlC14NIsVisibleCallback_db);
#elif defined __powerpc64__
/* PPC64 */
typedef int (*xmlC14NIsVisibleCallback_db)(void *, xmlNodePtr, xmlNodePtr);
CheckFunctionTypedef(xmlC14NIsVisibleCallback,xmlC14NIsVisibleCallback_db);
#elif defined __powerpc__ && !defined __powerpc64__
/* PPC32 */
typedef int (*xmlC14NIsVisibleCallback_db)(void *, xmlNodePtr, xmlNodePtr);
CheckFunctionTypedef(xmlC14NIsVisibleCallback,xmlC14NIsVisibleCallback_db);
#elif defined __ia64__
/* IA64 */
typedef int (*xmlC14NIsVisibleCallback_db)(void *, xmlNodePtr, xmlNodePtr);
CheckFunctionTypedef(xmlC14NIsVisibleCallback,xmlC14NIsVisibleCallback_db);
#elif defined __i386__
/* IA32 */
typedef int (*xmlC14NIsVisibleCallback_db)(void *, xmlNodePtr, xmlNodePtr);
CheckFunctionTypedef(xmlC14NIsVisibleCallback,xmlC14NIsVisibleCallback_db);
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
