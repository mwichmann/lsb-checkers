/*
 * Test of libxml2/libxml/xmlautomata.h
 */
#include "hdrchk.h"
#include "sys/types.h"
#define _LSB_DEFAULT_ARCH 1
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
#if __i386__
CheckTypeSize(xmlAutomataState,0, 14709, 2)
#elif __x86_64__
CheckTypeSize(xmlAutomataState,0, 14709, 11)
#elif __ia64__
CheckTypeSize(xmlAutomataState,0, 14709, 3)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,14709,0);
Msg("Find size of xmlAutomataState (14709)\n");
#endif

#if __i386__
CheckTypeSize(xmlAutomataState *,4, 14710, 2)
#elif __x86_64__
CheckTypeSize(xmlAutomataState *,8, 14710, 11)
#elif __ia64__
CheckTypeSize(xmlAutomataState *,8, 14710, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(xmlAutomataState *,4, 14710, 6)
#elif __powerpc64__
CheckTypeSize(xmlAutomataState *,8, 14710, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(xmlAutomataState *,4, 14710, 10)
#elif __s390x__
CheckTypeSize(xmlAutomataState *,8, 14710, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,14710,0);
Msg("Find size of xmlAutomataState * (14710)\n");
#endif

#if __i386__
CheckTypeSize(xmlAutomataStatePtr,4, 14711, 2)
#elif __x86_64__
CheckTypeSize(xmlAutomataStatePtr,8, 14711, 11)
#elif __ia64__
CheckTypeSize(xmlAutomataStatePtr,8, 14711, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(xmlAutomataStatePtr,4, 14711, 6)
#elif __powerpc64__
CheckTypeSize(xmlAutomataStatePtr,8, 14711, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(xmlAutomataStatePtr,4, 14711, 10)
#elif __s390x__
CheckTypeSize(xmlAutomataStatePtr,8, 14711, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,14711,0);
Msg("Find size of xmlAutomataStatePtr (14711)\n");
#endif

#if __i386__
CheckTypeSize(xmlAutomata,0, 14713, 2)
#elif __x86_64__
CheckTypeSize(xmlAutomata,0, 14713, 11)
#elif __ia64__
CheckTypeSize(xmlAutomata,0, 14713, 3)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,14713,0);
Msg("Find size of xmlAutomata (14713)\n");
#endif

#if __i386__
CheckTypeSize(xmlAutomata *,4, 14714, 2)
#elif __x86_64__
CheckTypeSize(xmlAutomata *,8, 14714, 11)
#elif __ia64__
CheckTypeSize(xmlAutomata *,8, 14714, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(xmlAutomata *,4, 14714, 6)
#elif __powerpc64__
CheckTypeSize(xmlAutomata *,8, 14714, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(xmlAutomata *,4, 14714, 10)
#elif __s390x__
CheckTypeSize(xmlAutomata *,8, 14714, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,14714,0);
Msg("Find size of xmlAutomata * (14714)\n");
#endif

#if __i386__
CheckTypeSize(xmlAutomataPtr,4, 14715, 2)
#elif __x86_64__
CheckTypeSize(xmlAutomataPtr,8, 14715, 11)
#elif __ia64__
CheckTypeSize(xmlAutomataPtr,8, 14715, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(xmlAutomataPtr,4, 14715, 6)
#elif __powerpc64__
CheckTypeSize(xmlAutomataPtr,8, 14715, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(xmlAutomataPtr,4, 14715, 10)
#elif __s390x__
CheckTypeSize(xmlAutomataPtr,8, 14715, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,14715,0);
Msg("Find size of xmlAutomataPtr (14715)\n");
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
