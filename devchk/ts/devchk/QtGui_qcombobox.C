/*
 * Test of QtGui/qcombobox
 */
#include "hdrchk.h"
#include "QtGui/qcombobox.h"


extern "C" {
#ifdef TET_TEST
void QtGui_qcombobox();
#else
int QtGui_qcombobox();
#endif
}


#ifdef TET_TEST
void QtGui_qcombobox()
{
#else
int QtGui_qcombobox()
{
#endif
int cnt=0;
int pcnt=0;
#ifdef TET_TEST
//int pcnt=0
#endif


Msg("Checking QtGui/qcombobox types\n");
#define TYPE QComboBox
#undef TYPE


#ifdef TET_TEST
if (pcnt == cnt )
    tet_result(TET_PASS);
else
    tet_result(TET_FAIL);
return;
#else
Msg("%d tests passed out of %d tests in QtGui/qcombobox types\n\n",pcnt,cnt);
return cnt;
#endif

}
