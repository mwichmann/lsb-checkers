/*
 * Test of setjmp.h
 */
#include "hdrchk.h"
#include "sys/types.h"
#include "setjmp.h"



int setjmp_h()
{
int cnt=0;
CheckTypeSize(sigjmp_buf,156)
CheckTypeSize(jmp_buf,156)
CheckTypeSize(struct __jmp_buf_tag,0)
CheckOffset(struct __jmp_buf_tag,__jmpbuf,0)
CheckOffset(struct __jmp_buf_tag,__mask_was_saved,24)
CheckOffset(struct __jmp_buf_tag,__saved_mask,28)
printf("%d tests in setjmp.h\n",cnt);
return cnt;
}
