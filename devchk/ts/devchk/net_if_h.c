/*
 * Test of net/if.h
 */
#include "hdrchk.h"
#include "sys/types.h"
#include "net/if.h"



#ifdef TET_TEST
void net_if_h()
{
#else
int net_if_h()
{
#endif

int cnt=0;

#ifdef TET_TEST
int pcnt=0;
Msg("Checking data structures in net/if.h\n");
#endif

#ifdef IF_NAMESIZE
	CompareConstant(IF_NAMESIZE,16)
#else
Msg( "Error: Constant not found: IF_NAMESIZE\n");
cnt++;
#endif

#ifdef IFF_UP
	CompareConstant(IFF_UP,0x01)
#else
Msg( "Error: Constant not found: IFF_UP\n");
cnt++;
#endif

#ifdef IFF_BROADCAST
	CompareConstant(IFF_BROADCAST,0x02)
#else
Msg( "Error: Constant not found: IFF_BROADCAST\n");
cnt++;
#endif

#ifdef IFF_DEBUG
	CompareConstant(IFF_DEBUG,0x04)
#else
Msg( "Error: Constant not found: IFF_DEBUG\n");
cnt++;
#endif

#ifdef IFF_LOOPBACK
	CompareConstant(IFF_LOOPBACK,0x08)
#else
Msg( "Error: Constant not found: IFF_LOOPBACK\n");
cnt++;
#endif

#ifdef IFF_POINTOPOINT
	CompareConstant(IFF_POINTOPOINT,0x10)
#else
Msg( "Error: Constant not found: IFF_POINTOPOINT\n");
cnt++;
#endif

#ifdef IFF_NOTRAILERS
	CompareConstant(IFF_NOTRAILERS,0x20)
#else
Msg( "Error: Constant not found: IFF_NOTRAILERS\n");
cnt++;
#endif

#ifdef IFF_RUNNING
	CompareConstant(IFF_RUNNING,0x40)
#else
Msg( "Error: Constant not found: IFF_RUNNING\n");
cnt++;
#endif

#ifdef IFF_NOARP
	CompareConstant(IFF_NOARP,0x80)
#else
Msg( "Error: Constant not found: IFF_NOARP\n");
cnt++;
#endif

#ifdef IFF_PROMISC
	CompareConstant(IFF_PROMISC,0x100)
#else
Msg( "Error: Constant not found: IFF_PROMISC\n");
cnt++;
#endif

#ifdef IFF_MULTICAST
	CompareConstant(IFF_MULTICAST,0x1000)
#else
Msg( "Error: Constant not found: IFF_MULTICAST\n");
cnt++;
#endif

#ifdef IFNAMSIZ
	CompareConstant(IFNAMSIZ,IF_NAMESIZE)
#else
Msg( "Error: Constant not found: IFNAMSIZ\n");
cnt++;
#endif

#ifdef __i386__
CheckTypeSize(struct ifaddr,40, 10286, 2)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10286,0);
#endif

#ifdef __i386__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10287,0);
#endif

#ifdef __i386__
CheckTypeSize(struct ifreq,32, 10290, 2)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10290,0);
#endif

#ifdef __i386__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10291,0);
#endif

#ifdef __i386__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10292,0);
#endif

#ifdef __i386__
CheckTypeSize(struct ifconf,8, 10288, 2)
CheckOffset(struct ifconf,ifc_len,0,2,34467)
CheckOffset(struct ifconf,ifc_ifcu,4,2,34469)
#elif __ia64__
CheckTypeSize(struct ifconf,32, 10288, 3)
#endif

#ifdef __no_sym__
#endif

#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests in net/if.h\n",cnt);
return cnt;
#endif

}
