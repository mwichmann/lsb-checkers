/*
 * Test of QtSql/qsqlfield
 */
#include "hdrchk.h"
#include "QtSql/qsqlfield.h"


extern "C" {
#ifdef TET_TEST
void QtSql_qsqlfield();
#else
int QtSql_qsqlfield();
#endif
}


#ifdef TET_TEST
void QtSql_qsqlfield()
{
#else
int QtSql_qsqlfield()
{
#endif
int cnt=0;
int pcnt=0;
#ifdef TET_TEST
//int pcnt=0
#endif


Msg("Checking QtSql/qsqlfield types\n");
#define TYPE QSqlField
#undef TYPE


#ifdef TET_TEST
if (pcnt == cnt )
    tet_result(TET_PASS);
else
    tet_result(TET_FAIL);
return;
#else
Msg("%d tests passed out of %d tests in QtSql/qsqlfield types\n\n",pcnt,cnt);
return cnt;
#endif

}
