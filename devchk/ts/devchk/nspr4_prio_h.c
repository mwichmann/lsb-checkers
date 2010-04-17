/*
 * Test of nspr4/prio.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#define __LSB_VERSION__ 41
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
char *real_macro_value, *stripped_macro_value;
int macro_ndx, stripped_value_ndx;
real_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );
stripped_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );

#ifdef TET_TEST
Msg("Checking data structures in nspr4/prio.h\n");
#endif

printf("Checking data structures in nspr4/prio.h\n");
#if _LSB_DEFAULT_ARCH
#ifndef prio_h___
Msg( "Error: Constant not found: prio_h___\n");
cnt++;
#endif

#endif

#if 1
CheckTypeSize(PRDescType,0, 32524, 1, 4.0, NULL, 35207, NULL)
#endif

#if 1
CheckTypeSize(PRIPv6Addr,0, 32536, 1, 4.0, NULL, 35218, NULL)
#endif

#if 1
CheckTypeSize(PRTransmitFileFlags,0, 32601, 1, 4.0, NULL, 35235, NULL)
#endif

#if 1
CheckTypeSize(PRLinger,0, 32638, 1, 4.0, NULL, 35222, NULL)
#endif

#if 1
CheckTypeSize(PRFileDesc,0, 32695, 1, 4.0, NULL, 35210, NULL)
#endif

#if 1
CheckTypeSize(PRNetAddr,0, 32696, 1, 4.0, NULL, 32993, NULL)
#endif

#if 1
CheckTypeSize(PRMcastRequest,0, 32946, 1, 4.0, NULL, 35226, NULL)
#endif

#if 1
CheckTypeSize(union PRNetAddr,0, 32993, 1, , NULL, 0, NULL)
Msg("Missing member data for PRNetAddr on All\n");
CheckOffset(union PRNetAddr,raw,0,1,87656)
CheckOffset(union PRNetAddr,inet,0,1,87657)
CheckOffset(union PRNetAddr,ipv6,0,1,87658)
CheckOffset(union PRNetAddr,local,0,1,87659)
#endif

#if 1
CheckTypeSize(PRIOVec,0, 33039, 1, 4.0, NULL, 35217, NULL)
#endif

#if 1
CheckTypeSize(PRSocketOptionData,0, 33046, 1, 4.0, NULL, 35234, NULL)
#endif

#if 1
CheckTypeSize(PRFsyncFN,0, 33183, 1, 4.0, NULL, 34028, NULL)
#endif

#if 1
CheckTypeSize(PRListenFN,0, 33185, 1, 4.0, NULL, 33583, NULL)
#endif

#if 1
CheckTypeSize(PRSeekWhence,0, 33268, 1, 4.0, NULL, 35231, NULL)
#endif

#if 1
CheckTypeSize(PRAcceptreadFN,0, 33282, 1, 4.0, NULL, 34195, NULL)
#endif

#if 1
CheckTypeSize(PRCloseFN,0, 33404, 1, 4.0, NULL, 34028, NULL)
#endif

#if 1
CheckTypeSize(PRTransmitfileFN,0, 33439, 1, 4.0, NULL, 33880, NULL)
#endif

#if 1
CheckTypeSize(PRSockOption,0, 33455, 1, 4.0, NULL, 35233, NULL)
#endif

#if 1
CheckTypeSize(PRAcceptFN,0, 33462, 1, 4.0, NULL, 32675, NULL)
#endif

#if 1
CheckTypeSize(PRConnectcontinueFN,0, 33481, 1, 4.0, NULL, 33974, NULL)
#endif

#if 1
CheckTypeSize(PRReadFN,0, 33483, 1, 4.0, NULL, 32996, NULL)
#endif

#if 1
CheckTypeSize(PRFileInfo64,0, 33515, 1, 4.0, NULL, 35211, NULL)
#endif

#if 1
CheckTypeSize(PRGetsocketoptionFN,0, 33529, 1, 4.0, NULL, 32546, NULL)
#endif

#if 1
CheckTypeSize(PRSendtoFN,0, 33597, 1, 4.0, NULL, 34677, NULL)
#endif

#if 1
CheckTypeSize(PRGetsocknameFN,0, 33645, 1, 4.0, NULL, 33919, NULL)
#endif

#if 1
CheckTypeSize(PRSendFN,0, 33675, 1, 4.0, NULL, 33275, NULL)
#endif

#if 1
CheckTypeSize(PRSeekFN,0, 33834, 1, 4.0, NULL, 32992, NULL)
#endif

#if 1
CheckTypeSize(PRAvailable64FN,0, 33853, 1, 4.0, NULL, 34731, NULL)
#endif

#if 1
CheckTypeSize(PRAvailableFN,0, 33990, 1, 4.0, NULL, 33532, NULL)
#endif

#if 1
CheckTypeSize(PRFileInfo,0, 34007, 1, 4.0, NULL, 35212, NULL)
#endif

#if 1
CheckTypeSize(PRSeek64FN,0, 34034, 1, 4.0, NULL, 33293, NULL)
#endif

#if 1
CheckTypeSize(PRSetsocketoptionFN,0, 34044, 1, 4.0, NULL, 32951, NULL)
#endif

#if 1
CheckTypeSize(PRRecvFN,0, 34082, 1, 4.0, NULL, 32839, NULL)
#endif

#if 1
CheckTypeSize(PRSendFileData,0, 34184, 1, 4.0, NULL, 35232, NULL)
#endif

#if 1
CheckTypeSize(PRDescIdentity,0, 34215, 1, 4.0, NULL, 32681, NULL)
#endif

#if 1
CheckTypeSize(PRConnectFN,0, 34266, 1, 4.0, NULL, 34475, NULL)
#endif

#if 1
CheckTypeSize(PRSendfileFN,0, 34410, 1, 4.0, NULL, 32641, NULL)
#endif

#if 1
CheckTypeSize(PRRecvfromFN,0, 34511, 1, 4.0, NULL, 33453, NULL)
#endif

#if 1
CheckTypeSize(PRPollDesc,0, 34514, 1, 4.0, NULL, 35229, NULL)
#endif

#if 1
CheckTypeSize(PRWriteFN,0, 34591, 1, 4.0, NULL, 33069, NULL)
#endif

#if 1
CheckTypeSize(PRFileInfo64FN,0, 34614, 1, 4.0, NULL, 34320, NULL)
#endif

#if 1
CheckTypeSize(PRShutdownFN,0, 34646, 1, 4.0, NULL, 33583, NULL)
#endif

#if 1
CheckTypeSize(PRReservedFN,0, 34655, 1, 4.0, NULL, 34797, NULL)
#endif

#if 1
CheckTypeSize(PRFileInfoFN,0, 34667, 1, 4.0, NULL, 32531, NULL)
#endif

#if 1
CheckTypeSize(PRWritevFN,0, 34715, 1, 4.0, NULL, 33114, NULL)
#endif

#if 1
CheckTypeSize(PRFileType,0, 34734, 1, 4.0, NULL, 35214, NULL)
#endif

#if 1
CheckTypeSize(PRBindFN,0, 34756, 1, 4.0, NULL, 32945, NULL)
#endif

#if 1
CheckTypeSize(PRPollFN,0, 34824, 1, 4.0, NULL, 33778, NULL)
#endif

#if 1
CheckTypeSize(struct PRFileDesc,0, 35210, 1, , NULL, 0, NULL)
Msg("Missing member data for PRFileDesc on All\n");
CheckOffset(struct PRFileDesc,methods,0,1,87573)
CheckOffset(struct PRFileDesc,secret,0,1,87574)
CheckOffset(struct PRFileDesc,lower,0,1,87575)
CheckOffset(struct PRFileDesc,higher,0,1,87576)
CheckOffset(struct PRFileDesc,dtor,0,1,87577)
CheckOffset(struct PRFileDesc,identity,0,1,87578)
#endif

#if 1
CheckTypeSize(struct PRFileInfo64,0, 35211, 1, , NULL, 0, NULL)
Msg("Missing member data for PRFileInfo64 on All\n");
CheckOffset(struct PRFileInfo64,type,0,1,87579)
CheckOffset(struct PRFileInfo64,size,0,1,87580)
CheckOffset(struct PRFileInfo64,creationTime,0,1,87581)
CheckOffset(struct PRFileInfo64,modifyTime,0,1,87582)
#endif

#if 1
CheckTypeSize(struct PRFileInfo,0, 35212, 1, , NULL, 0, NULL)
Msg("Missing member data for PRFileInfo on All\n");
CheckOffset(struct PRFileInfo,type,0,1,87583)
CheckOffset(struct PRFileInfo,size,0,1,87584)
CheckOffset(struct PRFileInfo,creationTime,0,1,87585)
CheckOffset(struct PRFileInfo,modifyTime,0,1,87586)
#endif

#if 1
CheckTypeSize(struct PRIOMethods,0, 35216, 1, 4.0, NULL, 0, NULL)
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
CheckTypeSize(struct PRIOVec,0, 35217, 1, , NULL, 0, NULL)
Msg("Missing member data for PRIOVec on All\n");
CheckOffset(struct PRIOVec,iov_base,0,1,87631)
CheckOffset(struct PRIOVec,iov_len,0,1,87632)
#endif

#if 1
CheckTypeSize(struct PRIPv6Addr,0, 35218, 1, , NULL, 0, NULL)
Msg("Missing member data for PRIPv6Addr on All\n");
CheckOffset(struct PRIPv6Addr,_S6_un,0,1,87633)
#endif

#if 1
CheckTypeSize(struct PRLinger,0, 35222, 1, , NULL, 0, NULL)
Msg("Missing member data for PRLinger on All\n");
CheckOffset(struct PRLinger,polarity,0,1,87640)
CheckOffset(struct PRLinger,linger,0,1,87641)
#endif

#if 1
CheckTypeSize(struct PRMcastRequest,0, 35226, 1, , NULL, 0, NULL)
Msg("Missing member data for PRMcastRequest on All\n");
CheckOffset(struct PRMcastRequest,mcaddr,0,1,87654)
CheckOffset(struct PRMcastRequest,ifaddr,0,1,87655)
#endif

#if 1
CheckTypeSize(PRGetpeernameFN,0, 35228, 1, 4.0, NULL, 33919, NULL)
#endif

#if 1
CheckTypeSize(struct PRPollDesc,0, 35229, 1, , NULL, 0, NULL)
Msg("Missing member data for PRPollDesc on All\n");
CheckOffset(struct PRPollDesc,fd,0,1,87664)
CheckOffset(struct PRPollDesc,in_flags,0,1,87665)
CheckOffset(struct PRPollDesc,out_flags,0,1,87666)
#endif

#if 1
CheckTypeSize(struct PRSendFileData,0, 35232, 1, , NULL, 0, NULL)
Msg("Missing member data for PRSendFileData on All\n");
CheckOffset(struct PRSendFileData,fd,0,1,87670)
CheckOffset(struct PRSendFileData,file_offset,0,1,87671)
CheckOffset(struct PRSendFileData,file_nbytes,0,1,87672)
CheckOffset(struct PRSendFileData,header,0,1,87673)
CheckOffset(struct PRSendFileData,hlen,0,1,87674)
CheckOffset(struct PRSendFileData,trailer,0,1,87675)
CheckOffset(struct PRSendFileData,tlen,0,1,87676)
#endif

#if 1
CheckTypeSize(struct PRSocketOptionData,0, 35234, 1, , NULL, 0, NULL)
Msg("Missing member data for PRSocketOptionData on All\n");
CheckOffset(struct PRSocketOptionData,option,0,1,87697)
CheckOffset(struct PRSocketOptionData,value,0,1,87698)
#endif

#if 1
CheckTypeSize(PRShutdownHow,0, 36926, 1, 4.0, NULL, 33928, NULL)
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

extern PRFileDesc * PR_OpenTCPSocket_db(PRIntn);
CheckInterfacedef(PR_OpenTCPSocket,PR_OpenTCPSocket_db);
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
extern PRInt32 PR_Poll_db(PRPollDesc *, PRIntn, PRIntervalTime);
CheckInterfacedef(PR_Poll,PR_Poll_db);
extern PRDescIdentity PR_GetUniqueIdentity_db(const char *);
CheckInterfacedef(PR_GetUniqueIdentity,PR_GetUniqueIdentity_db);
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
extern PRStatus PR_Close_db(PRFileDesc *);
CheckInterfacedef(PR_Close,PR_Close_db);
extern PRInt32 PR_Write_db(PRFileDesc *, const void *, PRInt32);
CheckInterfacedef(PR_Write,PR_Write_db);
extern PRFileDesc * PR_OpenUDPSocket_db(PRIntn);
CheckInterfacedef(PR_OpenUDPSocket,PR_OpenUDPSocket_db);
extern PRInt32 PR_Read_db(PRFileDesc *, void *, PRInt32);
CheckInterfacedef(PR_Read,PR_Read_db);
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
