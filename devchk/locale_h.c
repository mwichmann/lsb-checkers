/*
 * Test of locale.h
 */
#include "hdrchk.h"
#include "sys/types.h"
#include "locale.h"



int locale_h()
{
int cnt=0;
CheckTypeSize(struct lconv,0)
CheckOffset(struct lconv,decimal_point,0)
CheckOffset(struct lconv,thousands_sep,4)
CheckOffset(struct lconv,grouping,8)
CheckOffset(struct lconv,int_curr_symbol,12)
CheckOffset(struct lconv,currency_symbol,16)
CheckOffset(struct lconv,mon_decimal_point,20)
CheckOffset(struct lconv,mon_thousands_sep,24)
CheckOffset(struct lconv,mon_grouping,28)
CheckOffset(struct lconv,positive_sign,32)
CheckOffset(struct lconv,negative_sign,36)
CheckOffset(struct lconv,int_frac_digits,40)
CheckOffset(struct lconv,frac_digits,41)
CheckOffset(struct lconv,p_cs_precedes,42)
CheckOffset(struct lconv,p_sep_by_space,43)
CheckOffset(struct lconv,n_cs_precedes,44)
CheckOffset(struct lconv,n_sep_by_space,45)
CheckOffset(struct lconv,p_sign_posn,46)
CheckOffset(struct lconv,n_sign_posn,47)
printf("%d tests in locale.h\n",cnt);
return cnt;
}
