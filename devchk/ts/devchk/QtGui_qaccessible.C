/*
 * Test of QtGui/qaccessible
 */
#include "hdrchk.h"
#include "QtGui/qaccessible.h"


extern "C" {
#ifdef TET_TEST
void QtGui_qaccessible();
#else
int QtGui_qaccessible();
#endif
}


#ifdef TET_TEST
void QtGui_qaccessible()
{
#else
int QtGui_qaccessible()
{
#endif
int cnt=0;
int pcnt=0;
#ifdef TET_TEST
//int pcnt=0
#endif


Msg("Checking QtGui/qaccessible types\n");
#define TYPE QAccessible
#undef TYPE

#define TYPE _Z346QFlagsIN11QAccessible9StateFlagEE
#undef TYPE

#define TYPE _Z386QFlagsIN11QAccessible12RelationFlagEE
#undef TYPE

#define TYPE QAccessibleInterface
#undef TYPE

#define TYPE QAccessibleEvent
#undef TYPE


#ifdef TET_TEST
if (pcnt == cnt )
    tet_result(TET_PASS);
else
    tet_result(TET_FAIL);
return;
#else
Msg("%d tests passed out of %d tests in QtGui/qaccessible types\n\n",pcnt,cnt);
return cnt;
#endif

}
