/*
 * Test of QtGui/qaccessibleobject
 */
#include "hdrchk.h"
#include "QtGui/qaccessibleobject.h"


extern "C" {
#ifdef TET_TEST
void QtGui_qaccessibleobject();
#else
int QtGui_qaccessibleobject();
#endif
}


#ifdef TET_TEST
void QtGui_qaccessibleobject()
{
#else
int QtGui_qaccessibleobject()
{
#endif
int cnt=0;
int pcnt=0;
#ifdef TET_TEST
//int pcnt=0
#endif


Msg("Checking QtGui/qaccessibleobject types\n");
#define TYPE QAccessibleObject
#undef TYPE

#define TYPE QAccessibleApplication
#undef TYPE


#ifdef TET_TEST
if (pcnt == cnt )
    tet_result(TET_PASS);
else
    tet_result(TET_FAIL);
return;
#else
Msg("%d tests passed out of %d tests in QtGui/qaccessibleobject types\n\n",pcnt,cnt);
return cnt;
#endif

}
