/*
 * Test of QtGui/qaccessiblebridge
 */
#include "hdrchk.h"
#include "QtGui/qaccessiblebridge.h"


extern "C" {
#ifdef TET_TEST
void QtGui_qaccessiblebridge();
#else
int QtGui_qaccessiblebridge();
#endif
}


#ifdef TET_TEST
void QtGui_qaccessiblebridge()
{
#else
int QtGui_qaccessiblebridge()
{
#endif
int cnt=0;
int pcnt=0;
#ifdef TET_TEST
//int pcnt=0
#endif


Msg("Checking QtGui/qaccessiblebridge types\n");
#define TYPE QAccessibleBridge
#undef TYPE

#define TYPE QAccessibleBridgePlugin
#undef TYPE


#ifdef TET_TEST
if (pcnt == cnt )
    tet_result(TET_PASS);
else
    tet_result(TET_FAIL);
return;
#else
Msg("%d tests passed out of %d tests in QtGui/qaccessiblebridge types\n\n",pcnt,cnt);
return cnt;
#endif

}
