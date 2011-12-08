/*
 * Test of QtGui/qaccessibleplugin
 */
#include "hdrchk.h"
#include "QtGui/qaccessibleplugin.h"


extern "C" {
#ifdef TET_TEST
void QtGui_qaccessibleplugin();
#else
int QtGui_qaccessibleplugin();
#endif
}


#ifdef TET_TEST
void QtGui_qaccessibleplugin()
{
#else
int QtGui_qaccessibleplugin()
{
#endif
int cnt=0;
int pcnt=0;
#ifdef TET_TEST
//int pcnt=0
#endif


Msg("Checking QtGui/qaccessibleplugin types\n");
#define TYPE QAccessiblePlugin
#undef TYPE


#ifdef TET_TEST
if (pcnt == cnt )
    tet_result(TET_PASS);
else
    tet_result(TET_FAIL);
return;
#else
Msg("%d tests passed out of %d tests in QtGui/qaccessibleplugin types\n\n",pcnt,cnt);
return cnt;
#endif

}
