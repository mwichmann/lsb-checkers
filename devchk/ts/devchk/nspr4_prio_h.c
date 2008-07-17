/*
 * Test of nspr4/prio.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#define __LSB_VERSION__ 40
#include "nspr4/prio.h"



#ifdef TET_TEST
void nspr4_prio_h()
{
#else
int nspr4_prio_h()
{
#endif

int cnt=0;

int pcnt=0;
#ifdef TET_TEST
Msg("Checking data structures in nspr4/prio.h\n");
#endif

printf("Checking data structures in nspr4/prio.h\n");
#if 1
CheckTypeSize(PRDescType,0, 1000289, 1, 4.0, NULL, 1006090, NULL)
#endif

#if 1
CheckTypeSize(PRIPv6Addr,0, 1000317, 1, 4.0, NULL, 1006101, NULL)
#endif

#if 1
CheckTypeSize(PRTransmitFileFlags,0, 1000472, 1, 4.0, NULL, 1006118, NULL)
#endif

#if 1
CheckTypeSize(PRLinger,0, 1000580, 1, 4.0, NULL, 1006105, NULL)
#endif

#if 1
CheckTypeSize(PRFileDesc,0, 1000738, 1, 4.0, NULL, 1006093, NULL)
#endif

#if 1
CheckTypeSize(PRNetAddr,0, 1000739, 1, 4.0, NULL, 1001469, NULL)
#endif

#if 1
CheckTypeSize(PRMcastRequest,0, 1001344, 1, 4.0, NULL, 1006109, NULL)
#endif

#if 1
CheckTypeSize(PRIOVec,0, 1001564, 1, 4.0, NULL, 1006100, NULL)
#endif

#if 1
CheckTypeSize(PRSocketOptionData,0, 1001575, 1, 4.0, NULL, 1006117, NULL)
#endif

#if 1
CheckTypeSize(PRFsyncFN,0, 1001875, 1, 4.0, NULL, 1003893, NULL)
#endif

#if 1
CheckTypeSize(PRListenFN,0, 1001878, 1, 4.0, NULL, 1002855, NULL)
#endif

#if 1
CheckTypeSize(PRSeekWhence,0, 1002093, 1, 4.0, NULL, 1006114, NULL)
#endif

#if 1
CheckTypeSize(PRAcceptreadFN,0, 1002119, 1, 4.0, NULL, 1004269, NULL)
#endif

#if 1
CheckTypeSize(PRCloseFN,0, 1002438, 1, 4.0, NULL, 1003893, NULL)
#endif

#if 1
CheckTypeSize(PRTransmitfileFN,0, 1002514, 1, 4.0, NULL, 1003542, NULL)
#endif

#if 1
CheckTypeSize(PRSockOption,0, 1002563, 1, 4.0, NULL, 1006116, NULL)
#endif

#if 1
CheckTypeSize(PRAcceptFN,0, 1002583, 1, 4.0, NULL, 1000683, NULL)
#endif

#if 1
CheckTypeSize(PRConnectcontinueFN,0, 1002616, 1, 4.0, NULL, 1003754, NULL)
#endif

#if 1
CheckTypeSize(PRReadFN,0, 1002622, 1, 4.0, NULL, 1001473, NULL)
#endif

#if 1
CheckTypeSize(PRFileInfo64,0, 1002698, 1, 4.0, NULL, 1006094, NULL)
#endif

#if 1
CheckTypeSize(PRGetsocketoptionFN,0, 1002725, 1, 4.0, NULL, 1000335, NULL)
#endif

#if 1
CheckTypeSize(PRSendtoFN,0, 1002880, 1, 4.0, NULL, 1005347, NULL)
#endif

#if 1
CheckTypeSize(PRGetsocknameFN,0, 1002991, 1, 4.0, NULL, 1003636, NULL)
#endif

#if 1
CheckTypeSize(PRSendFN,0, 1003050, 1, 4.0, NULL, 1002105, NULL)
#endif

#if 1
CheckTypeSize(PRSeekFN,0, 1003441, 1, 4.0, NULL, 1001462, NULL)
#endif

#if 1
CheckTypeSize(PRAvailable64FN,0, 1003486, 1, 4.0, NULL, 1005463, NULL)
#endif

#if 1
CheckTypeSize(PRAvailableFN,0, 1003800, 1, 4.0, NULL, 1002736, NULL)
#endif

#if 1
CheckTypeSize(PRFileInfo,0, 1003837, 1, 4.0, NULL, 1006095, NULL)
#endif

#if 1
CheckTypeSize(PRSeek64FN,0, 1003906, 1, 4.0, NULL, 1002135, NULL)
#endif

#if 1
CheckTypeSize(PRSetsocketoptionFN,0, 1003934, 1, 4.0, NULL, 1001358, NULL)
#endif

#if 1
CheckTypeSize(PRRecvFN,0, 1004016, 1, 4.0, NULL, 1001095, NULL)
#endif

#if 1
CheckTypeSize(PRSendFileData,0, 1004252, 1, 4.0, NULL, 1006115, NULL)
#endif

#if 1
CheckTypeSize(PRDescIdentity,0, 1004309, 1, 4.0, NULL, 1000699, NULL)
#endif

#if 1
CheckTypeSize(PRConnectFN,0, 1004414, 1, 4.0, NULL, 1004912, NULL)
#endif

#if 1
CheckTypeSize(PRSendfileFN,0, 1004751, 1, 4.0, NULL, 1000590, NULL)
#endif

#if 1
CheckTypeSize(PRRecvfromFN,0, 1004991, 1, 4.0, NULL, 1002561, NULL)
#endif

#if 1
CheckTypeSize(PRPollDesc,0, 1004994, 1, 4.0, NULL, 1006112, NULL)
#endif

#if 1
CheckTypeSize(PRWriteFN,0, 1005169, 1, 4.0, NULL, 1001634, NULL)
#endif

#if 1
CheckTypeSize(PRFileInfo64FN,0, 1005209, 1, 4.0, NULL, 1004532, NULL)
#endif

#if 1
CheckTypeSize(PRShutdownFN,0, 1005280, 1, 4.0, NULL, 1002855, NULL)
#endif

#if 1
CheckTypeSize(PRReservedFN,0, 1005303, 1, 4.0, NULL, 1005615, NULL)
#endif

#if 1
CheckTypeSize(PRFileInfoFN,0, 1005333, 1, 4.0, NULL, 1000304, NULL)
#endif

#if 1
CheckTypeSize(PRWritevFN,0, 1005429, 1, 4.0, NULL, 1001708, NULL)
#endif

#if 1
CheckTypeSize(PRFileType,0, 1005466, 1, 4.0, NULL, 1006097, NULL)
#endif

#if 1
CheckTypeSize(PRBindFN,0, 1005516, 1, 4.0, NULL, 1001341, NULL)
#endif

#if 1
CheckTypeSize(PRPollFN,0, 1005681, 1, 4.0, NULL, 1003304, NULL)
#endif

#if 1
CheckTypeSize(struct PRIOMethods,0, 1006099, 1, 4.0, NULL, 0, NULL)
Msg("Missing member data for PRIOMethods on All\n");
CheckOffset(struct PRIOMethods,file_type,0,1,87595)
CheckOffset(struct PRIOMethods,close,0,1,87596)
CheckOffset(struct PRIOMethods,read,0,1,87597)
CheckOffset(struct PRIOMethods,write,0,1,87598)
CheckOffset(struct PRIOMethods,available,0,1,87599)
CheckOffset(struct PRIOMethods,available64,0,1,87600)
CheckOffset(struct PRIOMethods,fsync,0,1,87601)
CheckOffset(struct PRIOMethods,seek,0,1,87602)
CheckOffset(struct PRIOMethods,seek64,0,1,87603)
CheckOffset(struct PRIOMethods,fileInfo,0,1,87604)
CheckOffset(struct PRIOMethods,fileInfo64,0,1,87605)
CheckOffset(struct PRIOMethods,writev,0,1,87606)
CheckOffset(struct PRIOMethods,connect,0,1,87607)
CheckOffset(struct PRIOMethods,accept,0,1,87608)
CheckOffset(struct PRIOMethods,bind,0,1,87609)
CheckOffset(struct PRIOMethods,listen,0,1,87610)
CheckOffset(struct PRIOMethods,shutdown,0,1,87611)
CheckOffset(struct PRIOMethods,recv,0,1,87612)
CheckOffset(struct PRIOMethods,send,0,1,87613)
CheckOffset(struct PRIOMethods,recvfrom,0,1,87614)
CheckOffset(struct PRIOMethods,sendto,0,1,87615)
CheckOffset(struct PRIOMethods,poll,0,1,87616)
CheckOffset(struct PRIOMethods,acceptread,0,1,87617)
CheckOffset(struct PRIOMethods,transmitfile,0,1,87618)
CheckOffset(struct PRIOMethods,getsockname,0,1,87619)
CheckOffset(struct PRIOMethods,getpeername,0,1,87620)
CheckOffset(struct PRIOMethods,reserved_fn_6,0,1,87621)
CheckOffset(struct PRIOMethods,reserved_fn_5,0,1,87622)
CheckOffset(struct PRIOMethods,getsocketoption,0,1,87623)
CheckOffset(struct PRIOMethods,setsocketoption,0,1,87624)
CheckOffset(struct PRIOMethods,sendfile,0,1,87625)
CheckOffset(struct PRIOMethods,connectcontinue,0,1,87626)
CheckOffset(struct PRIOMethods,reserved_fn_3,0,1,87627)
CheckOffset(struct PRIOMethods,reserved_fn_2,0,1,87628)
CheckOffset(struct PRIOMethods,reserved_fn_1,0,1,87629)
CheckOffset(struct PRIOMethods,reserved_fn_0,0,1,87630)
#endif

#if 1
CheckTypeSize(PRGetpeernameFN,0, 1006111, 1, 4.0, NULL, 1003636, NULL)
#endif

#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests passed out of %d tests in nspr4/prio.h\n\n",pcnt,cnt);
return cnt;
#endif

}