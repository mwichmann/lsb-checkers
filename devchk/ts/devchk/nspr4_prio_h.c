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

#if 1
CheckTypeSize(PRShutdownHow,0, 1009036, 1, 4.0, NULL, 1003653, NULL)
#endif

#if 1
/* All */
typedef PRStatus (*PRFsyncFN_db)(PRFileDesc *);
CheckFunctionTypedef(PRFsyncFN,PRFsyncFN_db);
#endif

#if 1
/* All */
typedef PRStatus (*PRListenFN_db)(PRFileDesc *, PRIntn);
CheckFunctionTypedef(PRListenFN,PRListenFN_db);
#endif

#if 1
/* All */
typedef PRInt32 (*PRAcceptreadFN_db)(PRFileDesc *, PRFileDesc * *, PRNetAddr * *, void *, PRInt32, PRIntervalTime);
CheckFunctionTypedef(PRAcceptreadFN,PRAcceptreadFN_db);
#endif

#if 1
/* All */
typedef PRStatus (*PRCloseFN_db)(PRFileDesc *);
CheckFunctionTypedef(PRCloseFN,PRCloseFN_db);
#endif

#if 1
/* All */
typedef PRInt32 (*PRTransmitfileFN_db)(PRFileDesc *, PRFileDesc *, const void *, PRInt32, PRTransmitFileFlags, PRIntervalTime);
CheckFunctionTypedef(PRTransmitfileFN,PRTransmitfileFN_db);
#endif

#if 1
/* All */
typedef PRFileDesc * (*PRAcceptFN_db)(PRFileDesc *, PRNetAddr *, PRIntervalTime);
CheckFunctionTypedef(PRAcceptFN,PRAcceptFN_db);
#endif

#if 1
/* All */
typedef PRStatus (*PRConnectcontinueFN_db)(PRFileDesc *, PRInt16);
CheckFunctionTypedef(PRConnectcontinueFN,PRConnectcontinueFN_db);
#endif

#if 1
/* All */
typedef PRInt32 (*PRReadFN_db)(PRFileDesc *, void *, PRInt32);
CheckFunctionTypedef(PRReadFN,PRReadFN_db);
#endif

#if 1
/* All */
typedef PRStatus (*PRGetsocketoptionFN_db)(PRFileDesc *, PRSocketOptionData *);
CheckFunctionTypedef(PRGetsocketoptionFN,PRGetsocketoptionFN_db);
#endif

#if 1
/* All */
typedef PRInt32 (*PRSendtoFN_db)(PRFileDesc *, const void *, PRInt32, PRIntn, const PRNetAddr *, PRIntervalTime);
CheckFunctionTypedef(PRSendtoFN,PRSendtoFN_db);
#endif

#if 1
/* All */
typedef PRStatus (*PRGetsocknameFN_db)(PRFileDesc *, PRNetAddr *);
CheckFunctionTypedef(PRGetsocknameFN,PRGetsocknameFN_db);
#endif

#if 1
/* All */
typedef PRInt32 (*PRSendFN_db)(PRFileDesc *, const void *, PRInt32, PRIntn, PRIntervalTime);
CheckFunctionTypedef(PRSendFN,PRSendFN_db);
#endif

#if 1
/* All */
typedef PROffset32 (*PRSeekFN_db)(PRFileDesc *, PROffset32, PRSeekWhence);
CheckFunctionTypedef(PRSeekFN,PRSeekFN_db);
#endif

#if 1
/* All */
typedef PRInt64 (*PRAvailable64FN_db)(PRFileDesc *);
CheckFunctionTypedef(PRAvailable64FN,PRAvailable64FN_db);
#endif

#if 1
/* All */
typedef PRInt32 (*PRAvailableFN_db)(PRFileDesc *);
CheckFunctionTypedef(PRAvailableFN,PRAvailableFN_db);
#endif

#if 1
/* All */
typedef PROffset64 (*PRSeek64FN_db)(PRFileDesc *, PROffset64, PRSeekWhence);
CheckFunctionTypedef(PRSeek64FN,PRSeek64FN_db);
#endif

#if 1
/* All */
typedef PRStatus (*PRSetsocketoptionFN_db)(PRFileDesc *, const PRSocketOptionData *);
CheckFunctionTypedef(PRSetsocketoptionFN,PRSetsocketoptionFN_db);
#endif

#if 1
/* All */
typedef PRInt32 (*PRRecvFN_db)(PRFileDesc *, void *, PRInt32, PRIntn, PRIntervalTime);
CheckFunctionTypedef(PRRecvFN,PRRecvFN_db);
#endif

#if 1
/* All */
typedef PRStatus (*PRConnectFN_db)(PRFileDesc *, const PRNetAddr *, PRIntervalTime);
CheckFunctionTypedef(PRConnectFN,PRConnectFN_db);
#endif

#if 1
/* All */
typedef PRInt32 (*PRSendfileFN_db)(PRFileDesc *, PRSendFileData *, PRTransmitFileFlags, PRIntervalTime);
CheckFunctionTypedef(PRSendfileFN,PRSendfileFN_db);
#endif

#if 1
/* All */
typedef PRInt32 (*PRRecvfromFN_db)(PRFileDesc *, void *, PRInt32, PRIntn, PRNetAddr *, PRIntervalTime);
CheckFunctionTypedef(PRRecvfromFN,PRRecvfromFN_db);
#endif

#if 1
/* All */
typedef PRInt32 (*PRWriteFN_db)(PRFileDesc *, const void *, PRInt32);
CheckFunctionTypedef(PRWriteFN,PRWriteFN_db);
#endif

#if 1
/* All */
typedef PRStatus (*PRFileInfo64FN_db)(PRFileDesc *, PRFileInfo64 *);
CheckFunctionTypedef(PRFileInfo64FN,PRFileInfo64FN_db);
#endif

#if 1
/* All */
typedef PRStatus (*PRShutdownFN_db)(PRFileDesc *, PRIntn);
CheckFunctionTypedef(PRShutdownFN,PRShutdownFN_db);
#endif

#if 1
/* All */
typedef PRIntn (*PRReservedFN_db)(PRFileDesc *);
CheckFunctionTypedef(PRReservedFN,PRReservedFN_db);
#endif

#if 1
/* All */
typedef PRStatus (*PRFileInfoFN_db)(PRFileDesc *, PRFileInfo *);
CheckFunctionTypedef(PRFileInfoFN,PRFileInfoFN_db);
#endif

#if 1
/* All */
typedef PRInt32 (*PRWritevFN_db)(PRFileDesc *, const PRIOVec *, PRInt32, PRIntervalTime);
CheckFunctionTypedef(PRWritevFN,PRWritevFN_db);
#endif

#if 1
/* All */
typedef PRStatus (*PRBindFN_db)(PRFileDesc *, const PRNetAddr *);
CheckFunctionTypedef(PRBindFN,PRBindFN_db);
#endif

#if 1
/* All */
typedef PRInt16 (*PRPollFN_db)(PRFileDesc *, PRInt16, PRInt16 *);
CheckFunctionTypedef(PRPollFN,PRPollFN_db);
#endif

#if 1
/* All */
typedef PRStatus (*PRGetpeernameFN_db)(PRFileDesc *, PRNetAddr *);
CheckFunctionTypedef(PRGetpeernameFN,PRGetpeernameFN_db);
#endif

extern PRFileDesc * PR_NewUDPSocket_db(void);
CheckInterfacedef(PR_NewUDPSocket,PR_NewUDPSocket_db);
extern PRFileDesc * PR_NewTCPSocket_db(void);
CheckInterfacedef(PR_NewTCPSocket,PR_NewTCPSocket_db);
extern PRStatus PR_Connect_db(PRFileDesc *, const PRNetAddr *, PRIntervalTime);
CheckInterfacedef(PR_Connect,PR_Connect_db);
extern PRFileDesc * PR_Accept_db(PRFileDesc *, PRNetAddr *, PRIntervalTime);
CheckInterfacedef(PR_Accept,PR_Accept_db);
extern PRStatus PR_Bind_db(PRFileDesc *, const PRNetAddr *);
CheckInterfacedef(PR_Bind,PR_Bind_db);
extern PRStatus PR_Listen_db(PRFileDesc *, PRIntn);
CheckInterfacedef(PR_Listen,PR_Listen_db);
extern PRStatus PR_Shutdown_db(PRFileDesc *, PRShutdownHow);
CheckInterfacedef(PR_Shutdown,PR_Shutdown_db);
extern PRStatus PR_SetSocketOption_db(PRFileDesc *, const PRSocketOptionData *);
CheckInterfacedef(PR_SetSocketOption,PR_SetSocketOption_db);
extern PRStatus PR_GetSocketOption_db(PRFileDesc *, PRSocketOptionData *);
CheckInterfacedef(PR_GetSocketOption,PR_GetSocketOption_db);
extern PRStatus PR_GetSockName_db(PRFileDesc *, PRNetAddr *);
CheckInterfacedef(PR_GetSockName,PR_GetSockName_db);
extern PRStatus PR_GetPeerName_db(PRFileDesc *, PRNetAddr *);
CheckInterfacedef(PR_GetPeerName,PR_GetPeerName_db);
extern PRInt32 PR_Poll_db(PRPollDesc *, PRIntn, PRIntervalTime);
CheckInterfacedef(PR_Poll,PR_Poll_db);
extern PRStatus PR_GetConnectStatus_db(const PRPollDesc *);
CheckInterfacedef(PR_GetConnectStatus,PR_GetConnectStatus_db);
extern PRDescIdentity PR_GetUniqueIdentity_db(const char *);
CheckInterfacedef(PR_GetUniqueIdentity,PR_GetUniqueIdentity_db);
extern const char * PR_GetNameForIdentity_db(PRDescIdentity);
CheckInterfacedef(PR_GetNameForIdentity,PR_GetNameForIdentity_db);
extern PRDescIdentity PR_GetLayersIdentity_db(PRFileDesc *);
CheckInterfacedef(PR_GetLayersIdentity,PR_GetLayersIdentity_db);
extern const struct PRIOMethods * PR_GetDefaultIOMethods_db(void);
CheckInterfacedef(PR_GetDefaultIOMethods,PR_GetDefaultIOMethods_db);
extern PRFileDesc * PR_CreateIOLayerStub_db(PRDescIdentity, const struct PRIOMethods *);
CheckInterfacedef(PR_CreateIOLayerStub,PR_CreateIOLayerStub_db);
extern PRStatus PR_PushIOLayer_db(PRFileDesc *, PRDescIdentity, PRFileDesc *);
CheckInterfacedef(PR_PushIOLayer,PR_PushIOLayer_db);
extern PRFileDesc * PR_PopIOLayer_db(PRFileDesc *, PRDescIdentity);
CheckInterfacedef(PR_PopIOLayer,PR_PopIOLayer_db);
extern PRInt32 PR_Recv_db(PRFileDesc *, void *, PRInt32, PRIntn, PRIntervalTime);
CheckInterfacedef(PR_Recv,PR_Recv_db);
extern PRInt32 PR_Send_db(PRFileDesc *, const void *, PRInt32, PRIntn, PRIntervalTime);
CheckInterfacedef(PR_Send,PR_Send_db);
extern PRInt32 PR_RecvFrom_db(PRFileDesc *, void *, PRInt32, PRIntn, PRNetAddr *, PRIntervalTime);
CheckInterfacedef(PR_RecvFrom,PR_RecvFrom_db);
extern PRInt32 PR_SendTo_db(PRFileDesc *, const void *, PRInt32, PRIntn, const PRNetAddr *, PRIntervalTime);
CheckInterfacedef(PR_SendTo,PR_SendTo_db);
extern PRInt32 PR_TransmitFile_db(PRFileDesc *, PRFileDesc *, const void *, PRInt32, PRTransmitFileFlags, PRIntervalTime);
CheckInterfacedef(PR_TransmitFile,PR_TransmitFile_db);
extern PRInt32 PR_AcceptRead_db(PRFileDesc *, PRFileDesc * *, PRNetAddr * *, void *, PRInt32, PRIntervalTime);
CheckInterfacedef(PR_AcceptRead,PR_AcceptRead_db);
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
