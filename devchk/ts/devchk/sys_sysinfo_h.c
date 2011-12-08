/*
 * Test of sys/sysinfo.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#include "sys/sysinfo.h"



#ifdef TET_TEST
void sys_sysinfo_h()
{
#else
int sys_sysinfo_h()
{
#endif

int cnt=0;

int pcnt=0;
char *real_macro_value, *stripped_macro_value;
int macro_ndx, stripped_value_ndx;
real_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );
stripped_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );

Msg("Checking data structures in sys/sysinfo.h\n");
#if 1
CheckTypeSize(struct sysinfo,112, 40427, 1, 4.1, NULL, 0, NULL)
CheckMemberSize(struct sysinfo,loads,24,1,220385)
CheckOffset(struct sysinfo,loads,8,1,220385)
CheckMemberSize(struct sysinfo,totalram,8,1,220386)
CheckOffset(struct sysinfo,totalram,32,1,220386)
CheckMemberSize(struct sysinfo,freeram,8,1,220387)
CheckOffset(struct sysinfo,freeram,40,1,220387)
CheckMemberSize(struct sysinfo,sharedram,8,1,220388)
CheckOffset(struct sysinfo,sharedram,48,1,220388)
CheckMemberSize(struct sysinfo,bufferram,8,1,220389)
CheckOffset(struct sysinfo,bufferram,56,1,220389)
CheckMemberSize(struct sysinfo,totalswap,8,1,220390)
CheckOffset(struct sysinfo,totalswap,64,1,220390)
CheckMemberSize(struct sysinfo,freeswap,8,1,220391)
CheckOffset(struct sysinfo,freeswap,72,1,220391)
CheckMemberSize(struct sysinfo,procs,2,1,220392)
CheckOffset(struct sysinfo,procs,80,1,220392)
CheckMemberSize(struct sysinfo,pad,2,1,220393)
CheckOffset(struct sysinfo,pad,82,1,220393)
CheckMemberSize(struct sysinfo,totalhigh,8,1,220394)
CheckOffset(struct sysinfo,totalhigh,88,1,220394)
CheckMemberSize(struct sysinfo,freehigh,8,1,220395)
CheckOffset(struct sysinfo,freehigh,96,1,220395)
CheckMemberSize(struct sysinfo,mem_unit,4,1,220396)
CheckOffset(struct sysinfo,mem_unit,104,1,220396)
CheckMemberSize(struct sysinfo,_f,0,1,220397)
CheckOffset(struct sysinfo,_f,108,1,220397)
#endif

extern int sysinfo_db(struct sysinfo *);
CheckInterfacedef(sysinfo,sysinfo_db);
#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
Msg("%d tests passed out of %d tests in sys/sysinfo.h\n\n",pcnt,cnt);
return cnt;
#endif

}
