/*
 * Test of QtGui/qwhatsthis
 */
#include "hdrchk.h"
#include "QtGui/qwhatsthis.h"


extern "C" {
#ifdef TET_TEST
void QtGui_qwhatsthis();
#else
int QtGui_qwhatsthis();
#endif
}


#ifdef TET_TEST
void QtGui_qwhatsthis()
{
#else
int QtGui_qwhatsthis()
{
#endif
int cnt=0;
int pcnt=0;
#ifdef TET_TEST
//int pcnt=0
#endif


Msg("Checking QtGui/qwhatsthis types\n");
#define TYPE QWhatsThis
#undef TYPE


#ifdef TET_TEST
if (pcnt == cnt )
    tet_result(TET_PASS);
else
    tet_result(TET_FAIL);
return;
#else
Msg("%d tests passed out of %d tests in QtGui/qwhatsthis types\n\n",pcnt,cnt);
return cnt;
#endif

}
