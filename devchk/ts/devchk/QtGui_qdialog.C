/*
 * Test of QtGui/qdialog
 */
#include "hdrchk.h"
#include "QtGui/qdialog.h"


extern "C" {
#ifdef TET_TEST
void QtGui_qdialog();
#else
int QtGui_qdialog();
#endif
}


#ifdef TET_TEST
void QtGui_qdialog()
{
#else
int QtGui_qdialog()
{
#endif
int cnt=0;
int pcnt=0;
#ifdef TET_TEST
//int pcnt=0
#endif


Msg("Checking QtGui/qdialog types\n");
#define TYPE QDialog
#undef TYPE


#ifdef TET_TEST
if (pcnt == cnt )
    tet_result(TET_PASS);
else
    tet_result(TET_FAIL);
return;
#else
Msg("%d tests passed out of %d tests in QtGui/qdialog types\n\n",pcnt,cnt);
return cnt;
#endif

}
