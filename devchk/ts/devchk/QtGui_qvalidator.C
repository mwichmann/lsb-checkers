/*
 * Test of QtGui/qvalidator
 */
#include "hdrchk.h"
#include "QtGui/qvalidator.h"


extern "C" {
#ifdef TET_TEST
void QtGui_qvalidator();
#else
int QtGui_qvalidator();
#endif
}


#ifdef TET_TEST
void QtGui_qvalidator()
{
#else
int QtGui_qvalidator()
{
#endif
int cnt=0;
int pcnt=0;
#ifdef TET_TEST
//int pcnt=0
#endif


Msg("Checking QtGui/qvalidator types\n");
#define TYPE QValidator
#undef TYPE

#define TYPE QIntValidator
#undef TYPE

#define TYPE QDoubleValidator
#undef TYPE

#define TYPE QRegExpValidator
#undef TYPE


#ifdef TET_TEST
if (pcnt == cnt )
    tet_result(TET_PASS);
else
    tet_result(TET_FAIL);
return;
#else
Msg("%d tests passed out of %d tests in QtGui/qvalidator types\n\n",pcnt,cnt);
return cnt;
#endif

}
