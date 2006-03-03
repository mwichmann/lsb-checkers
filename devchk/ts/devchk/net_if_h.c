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
	CompareConstant(IFF_UP,0x01,4976,architecture)
#else
Msg( "Error: Constant not found: IFF_UP\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef IFF_BROADCAST
	CompareConstant(IFF_BROADCAST,0x02,4977,architecture)
#else
Msg( "Error: Constant not found: IFF_BROADCAST\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef IFF_DEBUG
	CompareConstant(IFF_DEBUG,0x04,4978,architecture)
#else
Msg( "Error: Constant not found: IFF_DEBUG\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef IFF_LOOPBACK
	CompareConstant(IFF_LOOPBACK,0x08,4979,architecture)
#else
Msg( "Error: Constant not found: IFF_LOOPBACK\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef IFF_POINTOPOINT
	CompareConstant(IFF_POINTOPOINT,0x10,4980,architecture)
#else
Msg( "Error: Constant not found: IFF_POINTOPOINT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef IFF_NOTRAILERS
	CompareConstant(IFF_NOTRAILERS,0x20,4981,architecture)
#else
Msg( "Error: Constant not found: IFF_NOTRAILERS\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef IFF_RUNNING
	CompareConstant(IFF_RUNNING,0x40,4982,architecture)
#else
Msg( "Error: Constant not found: IFF_RUNNING\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef IFF_NOARP
	CompareConstant(IFF_NOARP,0x80,4983,architecture)
#else
Msg( "Error: Constant not found: IFF_NOARP\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef IFF_PROMISC
	CompareConstant(IFF_PROMISC,0x100,4984,architecture)
#else
Msg( "Error: Constant not found: IFF_PROMISC\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef IFF_MULTICAST
	CompareConstant(IFF_MULTICAST,0x1000,4985,architecture)
#else
Msg( "Error: Constant not found: IFF_MULTICAST\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef IFNAMSIZ
	CompareConstant(IFNAMSIZ,IF_NAMESIZE,4988,architecture)
#else
Msg( "Error: Constant not found: IFNAMSIZ\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef IF_NAMESIZE
	CompareConstant(IF_NAMESIZE,16,4989,architecture)
#else
Msg( "Error: Constant not found: IF_NAMESIZE\n");
cnt++;
#endif

#endif

#if __i386__
CheckTypeSize(struct ifaddr,40, 10286, 2)
CheckMemberSize(struct ifaddr,ifa_ifu,16,2,34466)
CheckOffset(struct ifaddr,ifa_ifu,16,2,34466)
CheckMemberSize(struct ifaddr,ifa_ifp,4,2,34496)
CheckOffset(struct ifaddr,ifa_ifp,32,2,34496)
CheckMemberSize(struct ifaddr,ifa_next,4,2,34497)
CheckOffset(struct ifaddr,ifa_next,36,2,34497)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(struct ifaddr,40, 10286, 6)
CheckMemberSize(struct ifaddr,ifa_ifu,16,6,34466)
CheckOffset(struct ifaddr,ifa_ifu,16,6,34466)
CheckMemberSize(struct ifaddr,ifa_ifp,4,6,34496)
CheckOffset(struct ifaddr,ifa_ifp,32,6,34496)
CheckMemberSize(struct ifaddr,ifa_next,4,6,34497)
CheckOffset(struct ifaddr,ifa_next,36,6,34497)
#elif __ia64__
CheckTypeSize(struct ifaddr,48, 10286, 3)
CheckMemberSize(struct ifaddr,ifa_ifu,16,3,34466)
CheckOffset(struct ifaddr,ifa_ifu,16,3,34466)
CheckMemberSize(struct ifaddr,ifa_ifp,8,3,34496)
CheckOffset(struct ifaddr,ifa_ifp,32,3,34496)
CheckMemberSize(struct ifaddr,ifa_next,8,3,34497)
CheckOffset(struct ifaddr,ifa_next,40,3,34497)
#elif __s390__ && !__s390x__
CheckTypeSize(struct ifaddr,40, 10286, 10)
CheckMemberSize(struct ifaddr,ifa_ifu,16,10,34466)
CheckOffset(struct ifaddr,ifa_ifu,16,10,34466)
CheckMemberSize(struct ifaddr,ifa_ifp,4,10,34496)
CheckOffset(struct ifaddr,ifa_ifp,32,10,34496)
CheckMemberSize(struct ifaddr,ifa_next,4,10,34497)
CheckOffset(struct ifaddr,ifa_next,36,10,34497)
#elif __powerpc64__
CheckTypeSize(struct ifaddr,48, 10286, 9)
CheckMemberSize(struct ifaddr,ifa_ifu,16,9,34466)
CheckOffset(struct ifaddr,ifa_ifu,16,9,34466)
CheckMemberSize(struct ifaddr,ifa_ifp,8,9,34496)
CheckOffset(struct ifaddr,ifa_ifp,32,9,34496)
CheckMemberSize(struct ifaddr,ifa_next,8,9,34497)
CheckOffset(struct ifaddr,ifa_next,40,9,34497)
#elif __s390x__
CheckTypeSize(struct ifaddr,48, 10286, 12)
CheckMemberSize(struct ifaddr,ifa_ifu,16,12,34466)
CheckOffset(struct ifaddr,ifa_ifu,16,12,34466)
CheckMemberSize(struct ifaddr,ifa_ifp,8,12,34496)
CheckOffset(struct ifaddr,ifa_ifp,32,12,34496)
CheckMemberSize(struct ifaddr,ifa_next,8,12,34497)
CheckOffset(struct ifaddr,ifa_next,40,12,34497)
#elif __x86_64__
CheckTypeSize(struct ifaddr,48, 10286, 11)
CheckMemberSize(struct ifaddr,ifa_ifu,16,11,34466)
CheckOffset(struct ifaddr,ifa_ifu,16,11,34466)
CheckMemberSize(struct ifaddr,ifa_ifp,8,11,34496)
CheckOffset(struct ifaddr,ifa_ifp,32,11,34496)
CheckMemberSize(struct ifaddr,ifa_next,8,11,34497)
CheckOffset(struct ifaddr,ifa_next,40,11,34497)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10286,0);
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
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10287,0);
Msg("Find size of anon-ifa_ifu (10287)\n");
#endif

#if __i386__
CheckTypeSize(struct ifreq,32, 10290, 2)
CheckMemberSize(struct ifreq,ifr_ifru,16,2,34483)
CheckOffset(struct ifreq,ifr_ifru,16,2,34483)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(struct ifreq,32, 10290, 6)
CheckMemberSize(struct ifreq,ifr_ifru,16,6,34483)
CheckOffset(struct ifreq,ifr_ifru,16,6,34483)
#elif __ia64__
CheckTypeSize(struct ifreq,40, 10290, 3)
CheckMemberSize(struct ifreq,ifr_ifru,24,3,34483)
CheckOffset(struct ifreq,ifr_ifru,16,3,34483)
#elif __s390__ && !__s390x__
CheckTypeSize(struct ifreq,32, 10290, 10)
CheckMemberSize(struct ifreq,ifr_ifru,16,10,34483)
CheckOffset(struct ifreq,ifr_ifru,16,10,34483)
#elif __powerpc64__
CheckTypeSize(struct ifreq,40, 10290, 9)
CheckMemberSize(struct ifreq,ifr_ifru,24,9,34483)
CheckOffset(struct ifreq,ifr_ifru,16,9,34483)
#elif __s390x__
CheckTypeSize(struct ifreq,40, 10290, 12)
CheckMemberSize(struct ifreq,ifr_ifru,24,12,34483)
CheckOffset(struct ifreq,ifr_ifru,16,12,34483)
#elif __x86_64__
CheckTypeSize(struct ifreq,40, 10290, 11)
CheckMemberSize(struct ifreq,ifr_ifru,24,11,34483)
CheckOffset(struct ifreq,ifr_ifru,16,11,34483)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10290,0);
Msg("Find size of ifreq (10290)\n");
#endif

#if __i386__
#elif __powerpc__ && !__powerpc64__
#elif __ia64__
#elif __s390__ && !__s390x__
#elif __powerpc64__
#elif __s390x__
#elif __x86_64__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10291,0);
Msg("Find size of anon-ifr_ifrn (10291)\n");
#endif

#if __i386__
#elif __powerpc__ && !__powerpc64__
#elif __ia64__
#elif __s390__ && !__s390x__
#elif __powerpc64__
#elif __s390x__
#elif __x86_64__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10292,0);
Msg("Find size of anon-ifr_ifru (10292)\n");
#endif

#if __i386__
CheckTypeSize(struct ifconf,8, 10288, 2)
CheckMemberSize(struct ifconf,ifc_len,4,2,34467)
CheckOffset(struct ifconf,ifc_len,0,2,34467)
CheckMemberSize(struct ifconf,ifc_ifcu,4,2,34469)
CheckOffset(struct ifconf,ifc_ifcu,4,2,34469)
#elif __ia64__
CheckTypeSize(struct ifconf,16, 10288, 3)
CheckMemberSize(struct ifconf,ifc_ifcu,8,3,34469)
CheckOffset(struct ifconf,ifc_ifcu,8,3,34469)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(struct ifconf,8, 10288, 6)
CheckMemberSize(struct ifconf,ifc_ifcu,4,6,34469)
CheckOffset(struct ifconf,ifc_ifcu,4,6,34469)
#elif __s390x__
CheckTypeSize(struct ifconf,16, 10288, 12)
CheckMemberSize(struct ifconf,ifc_ifcu,8,12,34469)
CheckOffset(struct ifconf,ifc_ifcu,8,12,34469)
#elif __s390__ && !__s390x__
CheckTypeSize(struct ifconf,8, 10288, 10)
CheckMemberSize(struct ifconf,ifc_ifcu,4,10,34469)
CheckOffset(struct ifconf,ifc_ifcu,4,10,34469)
#elif __x86_64__
CheckTypeSize(struct ifconf,16, 10288, 11)
CheckMemberSize(struct ifconf,ifc_ifcu,8,11,34469)
CheckOffset(struct ifconf,ifc_ifcu,8,11,34469)
#elif __powerpc64__
CheckTypeSize(struct ifconf,16, 10288, 9)
CheckMemberSize(struct ifconf,ifc_ifcu,8,9,34469)
CheckOffset(struct ifconf,ifc_ifcu,8,9,34469)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10288,0);
Msg("Find size of ifconf (10288)\n");
#endif

#if __i386__
#elif __s390x__
#elif __powerpc__ && !__powerpc64__
#elif __ia64__
#elif __s390__ && !__s390x__
#elif __x86_64__
#elif __powerpc64__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10289,0);
Msg("Find size of anon-ifc_ifcu (10289)\n");
#endif

#if __i386__
CheckTypeSize(struct if_nameindex,8, 11015, 2)
CheckMemberSize(struct if_nameindex,if_index,4,2,40846)
CheckOffset(struct if_nameindex,if_index,0,2,40846)
CheckMemberSize(struct if_nameindex,if_name,4,2,40847)
CheckOffset(struct if_nameindex,if_name,4,2,40847)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(struct if_nameindex,8, 11015, 6)
CheckMemberSize(struct if_nameindex,if_index,4,6,40846)
CheckOffset(struct if_nameindex,if_index,0,6,40846)
CheckMemberSize(struct if_nameindex,if_name,4,6,40847)
CheckOffset(struct if_nameindex,if_name,4,6,40847)
#elif __s390__ && !__s390x__
CheckTypeSize(struct if_nameindex,8, 11015, 10)
CheckMemberSize(struct if_nameindex,if_index,4,10,40846)
CheckOffset(struct if_nameindex,if_index,0,10,40846)
CheckMemberSize(struct if_nameindex,if_name,4,10,40847)
CheckOffset(struct if_nameindex,if_name,4,10,40847)
#elif __ia64__
CheckTypeSize(struct if_nameindex,16, 11015, 3)
CheckMemberSize(struct if_nameindex,if_index,4,3,40846)
CheckOffset(struct if_nameindex,if_index,0,3,40846)
CheckMemberSize(struct if_nameindex,if_name,8,3,40847)
CheckOffset(struct if_nameindex,if_name,8,3,40847)
#elif __powerpc64__
CheckTypeSize(struct if_nameindex,16, 11015, 9)
CheckMemberSize(struct if_nameindex,if_index,4,9,40846)
CheckOffset(struct if_nameindex,if_index,0,9,40846)
CheckMemberSize(struct if_nameindex,if_name,8,9,40847)
CheckOffset(struct if_nameindex,if_name,8,9,40847)
#elif __s390x__
CheckTypeSize(struct if_nameindex,16, 11015, 12)
CheckMemberSize(struct if_nameindex,if_index,4,12,40846)
CheckOffset(struct if_nameindex,if_index,0,12,40846)
CheckMemberSize(struct if_nameindex,if_name,8,12,40847)
CheckOffset(struct if_nameindex,if_name,8,12,40847)
#elif __x86_64__
CheckTypeSize(struct if_nameindex,16, 11015, 11)
CheckMemberSize(struct if_nameindex,if_index,4,11,40846)
CheckOffset(struct if_nameindex,if_index,0,11,40846)
CheckMemberSize(struct if_nameindex,if_name,8,11,40847)
CheckOffset(struct if_nameindex,if_name,8,11,40847)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11015,0);
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
