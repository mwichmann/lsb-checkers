/*
 * Test of regex.h
 */
#include "hdrchk.h"
#include "sys/types.h"
#include "regex.h"



int regex_h()
{
int cnt=0;
CheckTypeSize(struct re_registers,0)
CheckOffset(struct re_registers,num_regs,0)
CheckOffset(struct re_registers,start,4)
CheckOffset(struct re_registers,end,8)
CheckTypeSize(regoff_t,4)
CheckTypeSize(regmatch_t,8)
CheckTypeSize(regex_t,32)
CheckTypeSize(struct re_pattern_buffer,0)
CheckOffset(struct re_pattern_buffer,buffer,0)
CheckOffset(struct re_pattern_buffer,allocated,4)
CheckOffset(struct re_pattern_buffer,used,8)
CheckOffset(struct re_pattern_buffer,syntax,12)
CheckOffset(struct re_pattern_buffer,fastmap,16)
CheckOffset(struct re_pattern_buffer,translate,20)
CheckTypeSize(s_reg_t,4)
CheckTypeSize(active_reg_t,4)
CheckTypeSize(reg_syntax_t,4)
CheckTypeSize(reg_errcode_t,4)
printf("%d tests in regex.h\n",cnt);
return cnt;
}
