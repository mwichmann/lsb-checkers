/*
 * Test of QtGui/qlayoutitem
 */
#include "hdrchk.h"
#include "QtGui/qlayoutitem.h"


extern "C" {
#ifdef TET_TEST
void QtGui_qlayoutitem();
#else
int QtGui_qlayoutitem();
#endif
}


#ifdef TET_TEST
void QtGui_qlayoutitem()
{
#else
int QtGui_qlayoutitem()
{
#endif
int cnt=0;
int pcnt=0;
#ifdef TET_TEST
//int pcnt=0
#endif


Msg("Checking QtGui/qlayoutitem types\n");
#define TYPE QLayoutItem
#undef TYPE

#define TYPE QSpacerItem
#undef TYPE

#define TYPE QWidgetItem
#undef TYPE


#ifdef TET_TEST
if (pcnt == cnt )
    tet_result(TET_PASS);
else
    tet_result(TET_FAIL);
return;
#else
Msg("%d tests passed out of %d tests in QtGui/qlayoutitem types\n\n",pcnt,cnt);
return cnt;
#endif

}
