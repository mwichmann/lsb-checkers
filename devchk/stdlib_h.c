/*
 * Test of stdlib.h
 */
#include "hdrchk.h"
#include "sys/types.h"
#include "stdlib.h"



int stdlib_h()
{
int cnt=0;
CheckTypeSize(__compar_fn_t,4)
CheckTypeSize(ldiv_t,8)
CheckTypeSize(div_t,8)
CheckTypeSize(struct random_data,0)
CheckOffset(struct random_data,fptr,0)
CheckOffset(struct random_data,rptr,4)
CheckOffset(struct random_data,state,8)
CheckOffset(struct random_data,rand_type,12)
CheckOffset(struct random_data,rand_deg,16)
CheckOffset(struct random_data,rand_sep,20)
CheckOffset(struct random_data,end_ptr,24)
CheckTypeSize(struct drand48_data,0)
CheckOffset(struct drand48_data,x,0)
CheckOffset(struct drand48_data,a,6)
CheckOffset(struct drand48_data,c,12)
CheckOffset(struct drand48_data,old_x,14)
CheckOffset(struct drand48_data,init,20)
printf("%d tests in stdlib.h\n",cnt);
return cnt;
}
