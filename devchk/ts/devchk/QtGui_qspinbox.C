/*
 * Test of QtGui/qspinbox
 */
#include "hdrchk.h"
#include "QtGui/qspinbox.h"


extern "C" {
#ifdef TET_TEST
void QtGui_qspinbox();
#else
int QtGui_qspinbox();
#endif
}


#ifdef TET_TEST
void QtGui_qspinbox()
{
#else
int QtGui_qspinbox()
{
#endif
int cnt=0;
int pcnt=0;
#ifdef TET_TEST
//int pcnt=0
#endif


Msg("Checking QtGui/qspinbox types\n");
#define TYPE QSpinBox
#undef TYPE

#define TYPE QDoubleSpinBox
#undef TYPE


#ifdef TET_TEST
if (pcnt == cnt )
    tet_result(TET_PASS);
else
    tet_result(TET_FAIL);
return;
#else
Msg("%d tests passed out of %d tests in QtGui/qspinbox types\n\n",pcnt,cnt);
return cnt;
#endif

}
