/*
 * Test of arpa/inet.h
 */
#include "hdrchk.h"
#include "sys/types.h"
#include "arpa/inet.h"



int arpa_inet_h()
{
int cnt=0;
CheckTypeSize(u_int32_t,0)
CheckTypeSize(struct in_addr,0)
CheckTypeSize(struct in_addr *,0)
CheckTypeSize(const void,0)
CheckTypeSize(const void *,0)
CheckTypeSize(unsigned char,0)
CheckTypeSize(unsigned char *,0)
CheckTypeSize(const unsigned char,0)
CheckTypeSize(const unsigned char *,0)
printf("%d tests in arpa/inet.h\n",cnt);
return cnt;
}
