/*
 * Test of QtSql/qsql
 */
#include "hdrchk.h"
#include "QtSql/qsql.h"


extern "C" {
#ifdef TET_TEST
void QtSql_qsql();
#else
int QtSql_qsql();
#endif
}


#ifdef TET_TEST
void QtSql_qsql()
{
#else
int QtSql_qsql()
{
#endif
int cnt=0;
int pcnt=0;
#ifdef TET_TEST
//int pcnt=0
#endif


Msg("Checking QtSql/qsql types\n");
#define TYPE _Z316QFlagsIN4QSql13ParamTypeFlagEE
#undef TYPE


#ifdef TET_TEST
if (pcnt == cnt )
    tet_result(TET_PASS);
else
    tet_result(TET_FAIL);
return;
#else
Msg("%d tests passed out of %d tests in QtSql/qsql types\n\n",pcnt,cnt);
return cnt;
#endif

}
