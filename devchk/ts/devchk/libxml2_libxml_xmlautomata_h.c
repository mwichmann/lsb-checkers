/*
 * Test of libxml2/libxml/xmlautomata.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#define __LSB_VERSION__ 40
#include <libxml/xmlregexp.h>
struct _xmlAutomataState {} ;
struct _xmlAutomata {} ;
#include "libxml2/libxml/xmlautomata.h"



#ifdef TET_TEST
void libxml2_libxml_xmlautomata_h()
{
#else
int libxml2_libxml_xmlautomata_h()
{
#endif

int cnt=0;

int pcnt=0;
#ifdef TET_TEST
Msg("Checking data structures in libxml2/libxml/xmlautomata.h\n");
#endif

printf("Checking data structures in libxml2/libxml/xmlautomata.h\n");
#if defined __i386__
CheckTypeSize(xmlAutomataStatePtr,4, 14711, 2, 3.1, NULL, 14710, NULL)
#elif defined __x86_64__
CheckTypeSize(xmlAutomataStatePtr,8, 14711, 11, 3.1, NULL, 14710, NULL)
#elif defined __ia64__
CheckTypeSize(xmlAutomataStatePtr,8, 14711, 3, 3.1, NULL, 14710, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(xmlAutomataStatePtr,4, 14711, 6, 3.1, NULL, 14710, NULL)
#elif defined __powerpc64__
CheckTypeSize(xmlAutomataStatePtr,8, 14711, 9, 3.1, NULL, 14710, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(xmlAutomataStatePtr,4, 14711, 10, 3.1, NULL, 14710, NULL)
#elif defined __s390x__
CheckTypeSize(xmlAutomataStatePtr,8, 14711, 12, 3.1, NULL, 14710, NULL)
#else
Msg("Find size of xmlAutomataStatePtr (14711)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14710,NULL);\n",architecture,14711,0);
#endif

#if defined __i386__
CheckTypeSize(xmlAutomataPtr,4, 14715, 2, 3.1, NULL, 14714, NULL)
#elif defined __x86_64__
CheckTypeSize(xmlAutomataPtr,8, 14715, 11, 3.1, NULL, 14714, NULL)
#elif defined __ia64__
CheckTypeSize(xmlAutomataPtr,8, 14715, 3, 3.1, NULL, 14714, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(xmlAutomataPtr,4, 14715, 6, 3.1, NULL, 14714, NULL)
#elif defined __powerpc64__
CheckTypeSize(xmlAutomataPtr,8, 14715, 9, 3.1, NULL, 14714, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(xmlAutomataPtr,4, 14715, 10, 3.1, NULL, 14714, NULL)
#elif defined __s390x__
CheckTypeSize(xmlAutomataPtr,8, 14715, 12, 3.1, NULL, 14714, NULL)
#else
Msg("Find size of xmlAutomataPtr (14715)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,14714, NULL);\n",architecture,14715,0);
#endif

extern xmlAutomataStatePtr xmlAutomataNewTransition2_db(xmlAutomataPtr, xmlAutomataStatePtr, xmlAutomataStatePtr, const xmlChar *, const xmlChar *, void *);
CheckInterfacedef(xmlAutomataNewTransition2,xmlAutomataNewTransition2_db);
extern xmlAutomataStatePtr xmlAutomataNewCounterTrans_db(xmlAutomataPtr, xmlAutomataStatePtr, xmlAutomataStatePtr, int);
CheckInterfacedef(xmlAutomataNewCounterTrans,xmlAutomataNewCounterTrans_db);
extern xmlAutomataStatePtr xmlAutomataNewEpsilon_db(xmlAutomataPtr, xmlAutomataStatePtr, xmlAutomataStatePtr);
CheckInterfacedef(xmlAutomataNewEpsilon,xmlAutomataNewEpsilon_db);
extern xmlAutomataStatePtr xmlAutomataNewCountTrans_db(xmlAutomataPtr, xmlAutomataStatePtr, xmlAutomataStatePtr, const xmlChar *, int, int, void *);
CheckInterfacedef(xmlAutomataNewCountTrans,xmlAutomataNewCountTrans_db);
extern void xmlFreeAutomata_db(xmlAutomataPtr);
CheckInterfacedef(xmlFreeAutomata,xmlFreeAutomata_db);
extern xmlAutomataStatePtr xmlAutomataGetInitState_db(xmlAutomataPtr);
CheckInterfacedef(xmlAutomataGetInitState,xmlAutomataGetInitState_db);
extern xmlRegexpPtr xmlAutomataCompile_db(xmlAutomataPtr);
CheckInterfacedef(xmlAutomataCompile,xmlAutomataCompile_db);
extern xmlAutomataStatePtr xmlAutomataNewTransition_db(xmlAutomataPtr, xmlAutomataStatePtr, xmlAutomataStatePtr, const xmlChar *, void *);
CheckInterfacedef(xmlAutomataNewTransition,xmlAutomataNewTransition_db);
extern int xmlAutomataIsDeterminist_db(xmlAutomataPtr);
CheckInterfacedef(xmlAutomataIsDeterminist,xmlAutomataIsDeterminist_db);
extern xmlAutomataStatePtr xmlAutomataNewAllTrans_db(xmlAutomataPtr, xmlAutomataStatePtr, xmlAutomataStatePtr, int);
CheckInterfacedef(xmlAutomataNewAllTrans,xmlAutomataNewAllTrans_db);
extern int xmlAutomataNewCounter_db(xmlAutomataPtr, int, int);
CheckInterfacedef(xmlAutomataNewCounter,xmlAutomataNewCounter_db);
extern xmlAutomataStatePtr xmlAutomataNewState_db(xmlAutomataPtr);
CheckInterfacedef(xmlAutomataNewState,xmlAutomataNewState_db);
extern xmlAutomataStatePtr xmlAutomataNewCountedTrans_db(xmlAutomataPtr, xmlAutomataStatePtr, xmlAutomataStatePtr, int);
CheckInterfacedef(xmlAutomataNewCountedTrans,xmlAutomataNewCountedTrans_db);
extern xmlAutomataStatePtr xmlAutomataNewCountTrans2_db(xmlAutomataPtr, xmlAutomataStatePtr, xmlAutomataStatePtr, const xmlChar *, const xmlChar *, int, int, void *);
CheckInterfacedef(xmlAutomataNewCountTrans2,xmlAutomataNewCountTrans2_db);
extern xmlAutomataStatePtr xmlAutomataNewNegTrans_db(xmlAutomataPtr, xmlAutomataStatePtr, xmlAutomataStatePtr, const xmlChar *, const xmlChar *, void *);
CheckInterfacedef(xmlAutomataNewNegTrans,xmlAutomataNewNegTrans_db);
extern xmlAutomataStatePtr xmlAutomataNewOnceTrans2_db(xmlAutomataPtr, xmlAutomataStatePtr, xmlAutomataStatePtr, const xmlChar *, const xmlChar *, int, int, void *);
CheckInterfacedef(xmlAutomataNewOnceTrans2,xmlAutomataNewOnceTrans2_db);
extern xmlAutomataStatePtr xmlAutomataNewOnceTrans_db(xmlAutomataPtr, xmlAutomataStatePtr, xmlAutomataStatePtr, const xmlChar *, int, int, void *);
CheckInterfacedef(xmlAutomataNewOnceTrans,xmlAutomataNewOnceTrans_db);
extern int xmlAutomataSetFinalState_db(xmlAutomataPtr, xmlAutomataStatePtr);
CheckInterfacedef(xmlAutomataSetFinalState,xmlAutomataSetFinalState_db);
extern xmlAutomataPtr xmlNewAutomata_db(void);
CheckInterfacedef(xmlNewAutomata,xmlNewAutomata_db);
#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests passed out of %d tests in libxml2/libxml/xmlautomata.h\n\n",pcnt,cnt);
return cnt;
#endif

}
