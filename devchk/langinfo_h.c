/*
 * Test of langinfo.h
 */
#include "hdrchk.h"
#include "sys/types.h"
#include "langinfo.h"



int langinfo_h()
{
int cnt=0;
#ifdef YESSTR
CompareConstant(YESSTR,327682)
#else
Msg( "Warning: Constant not found: YESSTR\n");
#endif
#ifdef YESEXPR
CompareConstant(YESEXPR,327680)
#else
Msg( "Warning: Constant not found: YESEXPR\n");
#endif
#ifdef T_FMT_AMPM
CompareConstant(T_FMT_AMPM,131115)
#else
Msg( "Warning: Constant not found: T_FMT_AMPM\n");
#endif
#ifdef T_FMT
CompareConstant(T_FMT,131114)
#else
Msg( "Warning: Constant not found: T_FMT\n");
#endif
#ifdef THOUSEP
CompareConstant(THOUSEP,(-1))
#else
Msg( "Warning: Constant not found: THOUSEP\n");
#endif
#ifdef RADIXCHAR
CompareConstant(RADIXCHAR,(-1))
#else
Msg( "Warning: Constant not found: RADIXCHAR\n");
#endif
#ifdef PM_STR
CompareConstant(PM_STR,131111)
#else
Msg( "Warning: Constant not found: PM_STR\n");
#endif
#ifdef NOSTR
CompareConstant(NOSTR,327683)
#else
Msg( "Warning: Constant not found: NOSTR\n");
#endif
#ifdef NOEXPR
CompareConstant(NOEXPR,327681)
#else
Msg( "Warning: Constant not found: NOEXPR\n");
#endif
#ifdef MON_9
CompareConstant(MON_9,131106)
#else
Msg( "Warning: Constant not found: MON_9\n");
#endif
#ifdef MON_8
CompareConstant(MON_8,131105)
#else
Msg( "Warning: Constant not found: MON_8\n");
#endif
#ifdef MON_7
CompareConstant(MON_7,131104)
#else
Msg( "Warning: Constant not found: MON_7\n");
#endif
#ifdef MON_6
CompareConstant(MON_6,131103)
#else
Msg( "Warning: Constant not found: MON_6\n");
#endif
#ifdef MON_5
CompareConstant(MON_5,131102)
#else
Msg( "Warning: Constant not found: MON_5\n");
#endif
#ifdef MON_4
CompareConstant(MON_4,131101)
#else
Msg( "Warning: Constant not found: MON_4\n");
#endif
#ifdef MON_3
CompareConstant(MON_3,131100)
#else
Msg( "Warning: Constant not found: MON_3\n");
#endif
#ifdef MON_2
CompareConstant(MON_2,131099)
#else
Msg( "Warning: Constant not found: MON_2\n");
#endif
#ifdef MON_12
CompareConstant(MON_12,131109)
#else
Msg( "Warning: Constant not found: MON_12\n");
#endif
#ifdef MON_11
CompareConstant(MON_11,131108)
#else
Msg( "Warning: Constant not found: MON_11\n");
#endif
#ifdef MON_10
CompareConstant(MON_10,131107)
#else
Msg( "Warning: Constant not found: MON_10\n");
#endif
#ifdef MON_1
CompareConstant(MON_1,131098)
#else
Msg( "Warning: Constant not found: MON_1\n");
#endif
#ifdef ERA_T_FMT
CompareConstant(ERA_T_FMT,131121)
#else
Msg( "Warning: Constant not found: ERA_T_FMT\n");
#endif
#ifdef ERA_D_T_FMT
CompareConstant(ERA_D_T_FMT,131120)
#else
Msg( "Warning: Constant not found: ERA_D_T_FMT\n");
#endif
#ifdef ERA_D_FMT
CompareConstant(ERA_D_FMT,131118)
#else
Msg( "Warning: Constant not found: ERA_D_FMT\n");
#endif
#ifdef ERA
CompareConstant(ERA,131116)
#else
Msg( "Warning: Constant not found: ERA\n");
#endif
#ifdef D_T_FMT
CompareConstant(D_T_FMT,131112)
#else
Msg( "Warning: Constant not found: D_T_FMT\n");
#endif
#ifdef D_FMT
CompareConstant(D_FMT,131113)
#else
Msg( "Warning: Constant not found: D_FMT\n");
#endif
#ifdef DAY_7
CompareConstant(DAY_7,131085)
#else
Msg( "Warning: Constant not found: DAY_7\n");
#endif
#ifdef DAY_6
CompareConstant(DAY_6,131084)
#else
Msg( "Warning: Constant not found: DAY_6\n");
#endif
#ifdef DAY_5
CompareConstant(DAY_5,131083)
#else
Msg( "Warning: Constant not found: DAY_5\n");
#endif
#ifdef DAY_4
CompareConstant(DAY_4,131082)
#else
Msg( "Warning: Constant not found: DAY_4\n");
#endif
#ifdef DAY_3
CompareConstant(DAY_3,131081)
#else
Msg( "Warning: Constant not found: DAY_3\n");
#endif
#ifdef DAY_2
CompareConstant(DAY_2,131080)
#else
Msg( "Warning: Constant not found: DAY_2\n");
#endif
#ifdef DAY_1
CompareConstant(DAY_1,131079)
#else
Msg( "Warning: Constant not found: DAY_1\n");
#endif
#ifdef CRNCYSTR
CompareConstant(CRNCYSTR,(-1))
#else
Msg( "Warning: Constant not found: CRNCYSTR\n");
#endif
#ifdef CODESET
CompareConstant(CODESET,(-1))
#else
Msg( "Warning: Constant not found: CODESET\n");
#endif
#ifdef AM_STR
CompareConstant(AM_STR,131110)
#else
Msg( "Warning: Constant not found: AM_STR\n");
#endif
#ifdef ALT_DIGITS
CompareConstant(ALT_DIGITS,131119)
#else
Msg( "Warning: Constant not found: ALT_DIGITS\n");
#endif
#ifdef ABMON_9
CompareConstant(ABMON_9,131094)
#else
Msg( "Warning: Constant not found: ABMON_9\n");
#endif
#ifdef ABMON_8
CompareConstant(ABMON_8,131093)
#else
Msg( "Warning: Constant not found: ABMON_8\n");
#endif
#ifdef ABMON_7
CompareConstant(ABMON_7,131092)
#else
Msg( "Warning: Constant not found: ABMON_7\n");
#endif
#ifdef ABMON_6
CompareConstant(ABMON_6,131091)
#else
Msg( "Warning: Constant not found: ABMON_6\n");
#endif
#ifdef ABMON_5
CompareConstant(ABMON_5,131090)
#else
Msg( "Warning: Constant not found: ABMON_5\n");
#endif
#ifdef ABMON_4
CompareConstant(ABMON_4,131089)
#else
Msg( "Warning: Constant not found: ABMON_4\n");
#endif
#ifdef ABMON_3
CompareConstant(ABMON_3,131088)
#else
Msg( "Warning: Constant not found: ABMON_3\n");
#endif
#ifdef ABMON_2
CompareConstant(ABMON_2,131087)
#else
Msg( "Warning: Constant not found: ABMON_2\n");
#endif
#ifdef ABMON_12
CompareConstant(ABMON_12,131097)
#else
Msg( "Warning: Constant not found: ABMON_12\n");
#endif
#ifdef ABMON_11
CompareConstant(ABMON_11,131096)
#else
Msg( "Warning: Constant not found: ABMON_11\n");
#endif
#ifdef ABMON_10
CompareConstant(ABMON_10,131095)
#else
Msg( "Warning: Constant not found: ABMON_10\n");
#endif
#ifdef ABMON_1
CompareConstant(ABMON_1,131086)
#else
Msg( "Warning: Constant not found: ABMON_1\n");
#endif
#ifdef ABDAY_7
CompareConstant(ABDAY_7,131078)
#else
Msg( "Warning: Constant not found: ABDAY_7\n");
#endif
#ifdef ABDAY_6
CompareConstant(ABDAY_6,131077)
#else
Msg( "Warning: Constant not found: ABDAY_6\n");
#endif
#ifdef ABDAY_5
CompareConstant(ABDAY_5,131076)
#else
Msg( "Warning: Constant not found: ABDAY_5\n");
#endif
#ifdef ABDAY_4
CompareConstant(ABDAY_4,131075)
#else
Msg( "Warning: Constant not found: ABDAY_4\n");
#endif
#ifdef ABDAY_3
CompareConstant(ABDAY_3,131074)
#else
Msg( "Warning: Constant not found: ABDAY_3\n");
#endif
#ifdef ABDAY_2
CompareConstant(ABDAY_2,131073)
#else
Msg( "Warning: Constant not found: ABDAY_2\n");
#endif
#ifdef ABDAY_1
CompareConstant(ABDAY_1,131072)
#else
Msg( "Warning: Constant not found: ABDAY_1\n");
#endif
printf("%d tests in langinfo.h\n",cnt);
return cnt;
}
