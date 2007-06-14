/*
 * Test of net/if.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#include "net/if.h"



#ifdef TET_TEST
void net_if_h()
{
#else
int net_if_h()
{
#endif

int cnt=0;

int pcnt=0;
#ifdef TET_TEST
Msg("Checking data structures in net/if.h\n");
#endif

printf("Checking data structures in net/if.h\n");
#if _LSB_DEFAULT_ARCH
#ifdef IFF_UP
	CompareConstant(IFF_UP,0x01,4976,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: IFF_UP\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef IFF_BROADCAST
	CompareConstant(IFF_BROADCAST,0x02,4977,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: IFF_BROADCAST\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef IFF_DEBUG
	CompareConstant(IFF_DEBUG,0x04,4978,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: IFF_DEBUG\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef IFF_LOOPBACK
	CompareConstant(IFF_LOOPBACK,0x08,4979,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: IFF_LOOPBACK\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef IFF_POINTOPOINT
	CompareConstant(IFF_POINTOPOINT,0x10,4980,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: IFF_POINTOPOINT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef IFF_NOTRAILERS
	CompareConstant(IFF_NOTRAILERS,0x20,4981,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: IFF_NOTRAILERS\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef IFF_RUNNING
	CompareConstant(IFF_RUNNING,0x40,4982,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: IFF_RUNNING\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef IFF_NOARP
	CompareConstant(IFF_NOARP,0x80,4983,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: IFF_NOARP\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef IFF_PROMISC
	CompareConstant(IFF_PROMISC,0x100,4984,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: IFF_PROMISC\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef IFF_MULTICAST
	CompareConstant(IFF_MULTICAST,0x1000,4985,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: IFF_MULTICAST\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef IFNAMSIZ
	CompareConstant(IFNAMSIZ,IF_NAMESIZE,4988,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: IFNAMSIZ\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef IF_NAMESIZE
	CompareConstant(IF_NAMESIZE,16,4989,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: IF_NAMESIZE\n");
cnt++;
#endif

#endif

#if __i386__
#elif __powerpc__ && !__powerpc64__
#elif __ia64__
#elif __s390__ && !__s390x__
#elif __powerpc64__
#elif __s390x__
#elif __x86_64__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""2.0""',NULL,0,NULL);\n",architecture,10286,0);
Msg("Find size of ifaddr (10286)\n");
#endif

#if __i386__
#elif __powerpc__ && !__powerpc64__
#elif __ia64__
#elif __s390__ && !__s390x__
#elif __powerpc64__
#elif __s390x__
#elif __x86_64__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""2.0""',NULL,0,NULL);\n",architecture,10290,0);
Msg("Find size of ifreq (10290)\n");
#endif

#if __i386__
#elif __ia64__
#elif __powerpc__ && !__powerpc64__
#elif __s390x__
#elif __s390__ && !__s390x__
#elif __x86_64__
#elif __powerpc64__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""2.0""',NULL,0,NULL);\n",architecture,10288,0);
Msg("Find size of ifconf (10288)\n");
#endif

#if __i386__
#elif __powerpc__ && !__powerpc64__
#elif __s390__ && !__s390x__
#elif __ia64__
#elif __powerpc64__
#elif __s390x__
#elif __x86_64__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""2.1""',NULL,0, NULL);\n",architecture,11015,0);
Msg("Find size of if_nameindex (11015)\n");
#endif

extern void if_freenameindex_db(struct if_nameindex *);
CheckInterfacedef(if_freenameindex,if_freenameindex_db);
extern char * if_indextoname_db(unsigned int, char *);
CheckInterfacedef(if_indextoname,if_indextoname_db);
extern struct if_nameindex * if_nameindex_db(void);
CheckInterfacedef(if_nameindex,if_nameindex_db);
extern unsigned int if_nametoindex_db(const char *);
CheckInterfacedef(if_nametoindex,if_nametoindex_db);
#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests passed out of %d tests in net/if.h\n\n",pcnt,cnt);
return cnt;
#endif

}
