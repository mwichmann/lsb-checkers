/*
 * Test of wchar.h
 */
#include "hdrchk.h"
#include "sys/types.h"
#include "wchar.h"



int wchar_h()
{
int cnt=0;
#ifdef WEOF
CompareConstant(WEOF,(-1))
#else
Msg( "Warning: Constant not found: WEOF\n");
#endif
#ifdef WCHAR_MAX
CompareConstant(WCHAR_MAX,(-1))
#else
Msg( "Warning: Constant not found: WCHAR_MAX\n");
#endif
#ifdef WCHAR_MIN
CompareConstant(WCHAR_MIN,0)
#else
Msg( "Warning: Constant not found: WCHAR_MIN\n");
#endif
printf("%d tests in wchar.h\n",cnt);
return cnt;
}
