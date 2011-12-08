/*
 * Test of QtGui/qabstractspinbox
 */
#include "hdrchk.h"
#include "QtGui/qabstractspinbox.h"


extern "C" {
#ifdef TET_TEST
void QtGui_qabstractspinbox();
#else
int QtGui_qabstractspinbox();
#endif
}


#ifdef TET_TEST
void QtGui_qabstractspinbox()
{
#else
int QtGui_qabstractspinbox()
{
#endif
int cnt=0;
int pcnt=0;
#ifdef TET_TEST
//int pcnt=0
#endif


Msg("Checking QtGui/qabstractspinbox types\n");
#define TYPE QAbstractSpinBox
#undef TYPE

#define TYPE _Z466QFlagsIN16QAbstractSpinBox15StepEnabledFlagEE
#undef TYPE


#ifdef TET_TEST
if (pcnt == cnt )
    tet_result(TET_PASS);
else
    tet_result(TET_FAIL);
return;
#else
Msg("%d tests passed out of %d tests in QtGui/qabstractspinbox types\n\n",pcnt,cnt);
return cnt;
#endif

}
