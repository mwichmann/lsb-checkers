/*
 * Test of QtGui/qfiledialog
 */
#include "hdrchk.h"
#include "QtGui/qfiledialog.h"


extern "C" {
#ifdef TET_TEST
void QtGui_qfiledialog();
#else
int QtGui_qfiledialog();
#endif
}


#ifdef TET_TEST
void QtGui_qfiledialog()
{
#else
int QtGui_qfiledialog()
{
#endif
int cnt=0;
int pcnt=0;
#ifdef TET_TEST
//int pcnt=0
#endif


Msg("Checking QtGui/qfiledialog types\n");
#define TYPE QFileDialog
#undef TYPE

#define TYPE _Z316QFlagsIN11QFileDialog6OptionEE
#undef TYPE


#ifdef TET_TEST
if (pcnt == cnt )
    tet_result(TET_PASS);
else
    tet_result(TET_FAIL);
return;
#else
Msg("%d tests passed out of %d tests in QtGui/qfiledialog types\n\n",pcnt,cnt);
return cnt;
#endif

}
