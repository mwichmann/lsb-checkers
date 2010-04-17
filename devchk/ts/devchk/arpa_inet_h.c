/*
 * Test of arpa/inet.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#define __LSB_VERSION__ 41
#include "arpa/inet.h"



#ifdef TET_TEST
void arpa_inet_h()
{
#else
int arpa_inet_h()
{
#endif

int cnt=0;

int pcnt=0;
char *real_macro_value, *stripped_macro_value;
int macro_ndx, stripped_value_ndx;
real_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );
stripped_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );

#ifdef TET_TEST
Msg("Checking data structures in arpa/inet.h\n");
#endif

printf("Checking data structures in arpa/inet.h\n");
extern uint32_t htonl_db(uint32_t);
CheckInterfacedef(htonl,htonl_db);
extern uint16_t htons_db(uint16_t);
CheckInterfacedef(htons,htons_db);
extern in_addr_t inet_addr_db(const char *);
CheckInterfacedef(inet_addr,inet_addr_db);
extern int inet_aton_db(const char *, struct in_addr *);
CheckInterfacedef(inet_aton,inet_aton_db);
extern char * inet_ntoa_db(struct in_addr);
CheckInterfacedef(inet_ntoa,inet_ntoa_db);
extern const char * inet_ntop_db(int, const void *, char *, socklen_t);
CheckInterfacedef(inet_ntop,inet_ntop_db);
extern int inet_pton_db(int, const char *, void *);
CheckInterfacedef(inet_pton,inet_pton_db);
extern uint32_t ntohl_db(uint32_t);
CheckInterfacedef(ntohl,ntohl_db);
extern uint16_t ntohs_db(uint16_t);
CheckInterfacedef(ntohs,ntohs_db);
#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests passed out of %d tests in arpa/inet.h\n\n",pcnt,cnt);
return cnt;
#endif

}
