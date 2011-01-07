/*
 * Test of sys/ptrace.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#define __LSB_VERSION__ 41
#include "sys/ptrace.h"



#ifdef TET_TEST
void sys_ptrace_h()
{
#else
int sys_ptrace_h()
{
#endif

int cnt=0;

int pcnt=0;
char *real_macro_value, *stripped_macro_value;
int macro_ndx, stripped_value_ndx;
real_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );
stripped_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );

Msg("Checking data structures in sys/ptrace.h\n");
#if _LSB_DEFAULT_ARCH
#ifdef PTRACE_O_TRACESYSGOOD
	CompareLongConstant(PTRACE_O_TRACESYSGOOD,0x00000001,20644,architecture,4.1,NULL)
#else
Msg( "Error: Constant not found: PTRACE_O_TRACESYSGOOD\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PTRACE_O_TRACEFORK
	CompareLongConstant(PTRACE_O_TRACEFORK,0x00000002,20645,architecture,4.1,NULL)
#else
Msg( "Error: Constant not found: PTRACE_O_TRACEFORK\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PTRACE_O_TRACEVFORK
	CompareLongConstant(PTRACE_O_TRACEVFORK,0x00000004,20646,architecture,4.1,NULL)
#else
Msg( "Error: Constant not found: PTRACE_O_TRACEVFORK\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PTRACE_O_TRACECLONE
	CompareLongConstant(PTRACE_O_TRACECLONE,0x00000008,20647,architecture,4.1,NULL)
#else
Msg( "Error: Constant not found: PTRACE_O_TRACECLONE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PTRACE_O_TRACEEXEC
	CompareLongConstant(PTRACE_O_TRACEEXEC,0x00000010,20648,architecture,4.1,NULL)
#else
Msg( "Error: Constant not found: PTRACE_O_TRACEEXEC\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PTRACE_O_TRACEVFORKDONE
	CompareLongConstant(PTRACE_O_TRACEVFORKDONE,0x00000020,20649,architecture,4.1,NULL)
#else
Msg( "Error: Constant not found: PTRACE_O_TRACEVFORKDONE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PTRACE_O_TRACEEXIT
	CompareLongConstant(PTRACE_O_TRACEEXIT,0x00000040,20650,architecture,4.1,NULL)
#else
Msg( "Error: Constant not found: PTRACE_O_TRACEEXIT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PTRACE_O_MASK
	CompareLongConstant(PTRACE_O_MASK,0x0000007f,20651,architecture,4.1,NULL)
#else
Msg( "Error: Constant not found: PTRACE_O_MASK\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PTRACE_EVENT_FORK
	CompareLongConstant(PTRACE_EVENT_FORK,1,20652,architecture,4.1,NULL)
#else
Msg( "Error: Constant not found: PTRACE_EVENT_FORK\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PTRACE_EVENT_VFORK
	CompareLongConstant(PTRACE_EVENT_VFORK,2,20653,architecture,4.1,NULL)
#else
Msg( "Error: Constant not found: PTRACE_EVENT_VFORK\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PTRACE_EVENT_CLONE
	CompareLongConstant(PTRACE_EVENT_CLONE,3,20654,architecture,4.1,NULL)
#else
Msg( "Error: Constant not found: PTRACE_EVENT_CLONE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PTRACE_EVENT_EXEC
	CompareLongConstant(PTRACE_EVENT_EXEC,4,20655,architecture,4.1,NULL)
#else
Msg( "Error: Constant not found: PTRACE_EVENT_EXEC\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PTRACE_EVENT_VFORK_DONE
	CompareLongConstant(PTRACE_EVENT_VFORK_DONE,5,20656,architecture,4.1,NULL)
#else
Msg( "Error: Constant not found: PTRACE_EVENT_VFORK_DONE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PTRACE_EVENT_EXIT
	CompareLongConstant(PTRACE_EVENT_EXIT,6,20657,architecture,4.1,NULL)
#else
Msg( "Error: Constant not found: PTRACE_EVENT_EXIT\n");
cnt++;
#endif

#endif

#if 1
#endif

#if 1
CheckEnum("PTRACE_O_TRACESYSGOOD",PTRACE_O_TRACESYSGOOD,0x00000001,220556)
CheckEnum("PTRACE_O_TRACEFORK",PTRACE_O_TRACEFORK,0x00000002,220557)
CheckEnum("PTRACE_O_TRACEVFORK",PTRACE_O_TRACEVFORK,0x00000004,220558)
CheckEnum("PTRACE_O_TRACECLONE",PTRACE_O_TRACECLONE,0x00000008,220559)
CheckEnum("PTRACE_O_TRACEEXEC",PTRACE_O_TRACEEXEC,0x00000010,220560)
CheckEnum("PTRACE_O_TRACEVFORKDONE",PTRACE_O_TRACEVFORKDONE,0x00000020,220561)
CheckEnum("PTRACE_O_TRACEEXIT",PTRACE_O_TRACEEXIT,0x00000040,220562)
CheckEnum("PTRACE_O_MASK",PTRACE_O_MASK,0x0000007f,220563)
#endif

#if 1
CheckEnum("PTRACE_EVENT_FORK",PTRACE_EVENT_FORK,1,220564)
CheckEnum("PTRACE_EVENT_VFORK",PTRACE_EVENT_VFORK,2,220565)
CheckEnum("PTRACE_EVENT_CLONE",PTRACE_EVENT_CLONE,3,220566)
CheckEnum("PTRACE_EVENT_EXEC",PTRACE_EVENT_EXEC,4,220567)
CheckEnum("PTRACE_EVENT_VFORK_DONE",PTRACE_EVENT_VFORK_DONE,5,220568)
CheckEnum("PTRACE_EVENT_EXIT",PTRACE_EVENT_EXIT,6,220569)
#endif

extern long int ptrace_db(enum __ptrace_request, ...);
CheckInterfacedef(ptrace,ptrace_db);
#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
Msg("%d tests passed out of %d tests in sys/ptrace.h\n\n",pcnt,cnt);
return cnt;
#endif

}
