/*
 * Test of QtSql/qsqlindex
 */
#include "hdrchk.h"
#include "QtSql/qsqlindex.h"


extern "C" {
#ifdef TET_TEST
void QtSql_qsqlindex();
#else
int QtSql_qsqlindex();
#endif
}


#ifdef TET_TEST
void QtSql_qsqlindex()
{
#else
int QtSql_qsqlindex()
{
#endif
int cnt=0;
int pcnt=0;
#ifdef TET_TEST
//int pcnt=0
#endif


Msg("Checking QtSql/qsqlindex types\n");
#define TYPE QSqlIndex
#undef TYPE


#ifdef TET_TEST
if (pcnt == cnt )
    tet_result(TET_PASS);
else
    tet_result(TET_FAIL);
return;
#else
Msg("%d tests passed out of %d tests in QtSql/qsqlindex types\n\n",pcnt,cnt);
return cnt;
#endif

}
