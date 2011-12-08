/*
 * Test of QtSql/qsqldriverplugin
 */
#include "hdrchk.h"
#include "QtSql/qsqldriverplugin.h"


extern "C" {
#ifdef TET_TEST
void QtSql_qsqldriverplugin();
#else
int QtSql_qsqldriverplugin();
#endif
}


#ifdef TET_TEST
void QtSql_qsqldriverplugin()
{
#else
int QtSql_qsqldriverplugin()
{
#endif
int cnt=0;
int pcnt=0;
#ifdef TET_TEST
//int pcnt=0
#endif


Msg("Checking QtSql/qsqldriverplugin types\n");
#define TYPE QSqlDriverPlugin
#undef TYPE


#ifdef TET_TEST
if (pcnt == cnt )
    tet_result(TET_PASS);
else
    tet_result(TET_FAIL);
return;
#else
Msg("%d tests passed out of %d tests in QtSql/qsqldriverplugin types\n\n",pcnt,cnt);
return cnt;
#endif

}
