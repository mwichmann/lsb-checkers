/*
 * Test of regex.h
 */
#include "hdrchk.h"
#include "sys/types.h"
#include "regex.h"



int regex_h()
{
int cnt=0;
CheckTypeSize(regoff_t,0)
CheckTypeSize(struct re_registers,0)
CheckOffset(struct re_registers,num_regs,0)
CheckOffset(struct re_registers,start,0)
CheckOffset(struct re_registers,end,0)
CheckTypeSize(regex_t,0)
CheckTypeSize(active_reg_t,0)
CheckTypeSize(reg_syntax_t,0)
CheckTypeSize(reg_errcode_t,0)
CheckTypeSize(regmatch_t,0)
CheckTypeSize(s_reg_t,0)
CheckTypeSize(struct re_pattern_buffer,0)
CheckOffset(struct re_pattern_buffer,buffer,0)
CheckOffset(struct re_pattern_buffer,allocated,0)
CheckOffset(struct re_pattern_buffer,used,0)
CheckOffset(struct re_pattern_buffer,syntax,0)
CheckOffset(struct re_pattern_buffer,fastmap,0)
CheckOffset(struct re_pattern_buffer,translate,0)
CheckOffset(struct re_pattern_buffer,re_nsub,0)
printf("%d tests in regex.h\n",cnt);
return cnt;
}
