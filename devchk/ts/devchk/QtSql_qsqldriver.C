/*
 * Test of QtSql/qsqldriver
 */
#include "hdrchk.h"
#include "QtSql/qsqldriver.h"


extern "C" {
#ifdef TET_TEST
void QtSql_qsqldriver();
#else
int QtSql_qsqldriver();
#endif
}


#ifdef TET_TEST
void QtSql_qsqldriver()
{
#else
int QtSql_qsqldriver()
{
#endif
int cnt=0;
int pcnt=0;
#ifdef TET_TEST
//int pcnt=0
#endif


Msg("Checking QtSql/qsqldriver types\n");
#define TYPE QSqlDriver
#undef TYPE


#ifdef TET_TEST
if (pcnt == cnt )
    tet_result(TET_PASS);
else
    tet_result(TET_FAIL);
return;
#else
Msg("%d tests passed out of %d tests in QtSql/qsqldriver types\n\n",pcnt,cnt);
return cnt;
#endif

}
