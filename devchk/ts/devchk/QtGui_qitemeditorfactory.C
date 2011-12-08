/*
 * Test of QtGui/qitemeditorfactory
 */
#include "hdrchk.h"
#include "QtGui/qitemeditorfactory.h"


extern "C" {
#ifdef TET_TEST
void QtGui_qitemeditorfactory();
#else
int QtGui_qitemeditorfactory();
#endif
}


#ifdef TET_TEST
void QtGui_qitemeditorfactory()
{
#else
int QtGui_qitemeditorfactory()
{
#endif
int cnt=0;
int pcnt=0;
#ifdef TET_TEST
//int pcnt=0
#endif


Msg("Checking QtGui/qitemeditorfactory types\n");
#define TYPE QItemEditorCreatorBase
#undef TYPE

#define TYPE QItemEditorFactory
#undef TYPE


#ifdef TET_TEST
if (pcnt == cnt )
    tet_result(TET_PASS);
else
    tet_result(TET_FAIL);
return;
#else
Msg("%d tests passed out of %d tests in QtGui/qitemeditorfactory types\n\n",pcnt,cnt);
return cnt;
#endif

}
