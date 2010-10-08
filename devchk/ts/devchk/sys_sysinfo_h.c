/*
 * Test of sys/sysinfo.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#define __LSB_VERSION__ 41
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

#ifdef TET_TEST
Msg("Checking data structures in sys/sysinfo.h\n");
#endif

printf("Checking data structures in sys/sysinfo.h\n");
#if 1
CheckTypeSize(struct sysinfo,0, 40427, 1, 4.1, NULL, 0, NULL)
Msg("Missing member data for sysinfo on All\n");
CheckOffset(struct sysinfo,uptime,0,1,220384)
CheckOffset(struct sysinfo,loads,0,1,220385)
CheckOffset(struct sysinfo,totalram,0,1,220386)
CheckOffset(struct sysinfo,freeram,0,1,220387)
CheckOffset(struct sysinfo,sharedram,0,1,220388)
CheckOffset(struct sysinfo,bufferram,0,1,220389)
CheckOffset(struct sysinfo,totalswap,0,1,220390)
CheckOffset(struct sysinfo,freeswap,0,1,220391)
CheckOffset(struct sysinfo,procs,0,1,220392)
CheckOffset(struct sysinfo,pad,0,1,220393)
CheckOffset(struct sysinfo,totalhigh,0,1,220394)
CheckOffset(struct sysinfo,freehigh,0,1,220395)
CheckOffset(struct sysinfo,mem_unit,0,1,220396)
CheckOffset(struct sysinfo,_f,0,1,220397)
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
printf("%d tests passed out of %d tests in sys/sysinfo.h\n\n",pcnt,cnt);
return cnt;
#endif

}
