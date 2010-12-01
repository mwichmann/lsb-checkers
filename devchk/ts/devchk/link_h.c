/*
 * Test of link.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#define __LSB_VERSION__ 41
#include "link.h"



#ifdef TET_TEST
void link_h()
{
#else
int link_h()
{
#endif

int cnt=0;

int pcnt=0;
char *real_macro_value, *stripped_macro_value;
int macro_ndx, stripped_value_ndx;
real_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );
stripped_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );

Msg("Checking data structures in link.h\n");
#if defined __s390x__
CheckTypeSize(struct dl_phdr_info,0, 40322, 12, 4.1, NULL, 0, NULL)
Msg("Missing member data for dl_phdr_info on S390X\n");
CheckOffset(struct dl_phdr_info,dlpi_addr,0,12,220205)
CheckOffset(struct dl_phdr_info,dlpi_name,0,12,220212)
CheckOffset(struct dl_phdr_info,dlpi_phdr,0,12,220219)
CheckOffset(struct dl_phdr_info,dlpi_phnum,0,12,220226)
CheckOffset(struct dl_phdr_info,dlpi_adds,0,12,220233)
CheckOffset(struct dl_phdr_info,dlpi_subs,0,12,220240)
CheckOffset(struct dl_phdr_info,dlpi_tls_modid,0,12,220247)
CheckOffset(struct dl_phdr_info,dlpi_tls_data,0,12,220254)
#elif defined __x86_64__
CheckTypeSize(struct dl_phdr_info,0, 40322, 11, 4.1, NULL, 0, NULL)
Msg("Missing member data for dl_phdr_info on x86-64\n");
CheckOffset(struct dl_phdr_info,dlpi_addr,0,11,220204)
CheckOffset(struct dl_phdr_info,dlpi_name,0,11,220211)
CheckOffset(struct dl_phdr_info,dlpi_phdr,0,11,220218)
CheckOffset(struct dl_phdr_info,dlpi_phnum,0,11,220225)
CheckOffset(struct dl_phdr_info,dlpi_adds,0,11,220232)
CheckOffset(struct dl_phdr_info,dlpi_subs,0,11,220239)
CheckOffset(struct dl_phdr_info,dlpi_tls_modid,0,11,220246)
CheckOffset(struct dl_phdr_info,dlpi_tls_data,0,11,220253)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(struct dl_phdr_info,0, 40322, 10, 4.1, NULL, 0, NULL)
Msg("Missing member data for dl_phdr_info on S390\n");
CheckOffset(struct dl_phdr_info,dlpi_addr,0,10,220203)
CheckOffset(struct dl_phdr_info,dlpi_name,0,10,220210)
CheckOffset(struct dl_phdr_info,dlpi_phdr,0,10,220217)
CheckOffset(struct dl_phdr_info,dlpi_phnum,0,10,220224)
CheckOffset(struct dl_phdr_info,dlpi_adds,0,10,220231)
CheckOffset(struct dl_phdr_info,dlpi_subs,0,10,220238)
CheckOffset(struct dl_phdr_info,dlpi_tls_modid,0,10,220245)
CheckOffset(struct dl_phdr_info,dlpi_tls_data,0,10,220252)
#elif defined __powerpc64__
CheckTypeSize(struct dl_phdr_info,0, 40322, 9, 4.1, NULL, 0, NULL)
Msg("Missing member data for dl_phdr_info on PPC64\n");
CheckOffset(struct dl_phdr_info,dlpi_addr,0,9,220202)
CheckOffset(struct dl_phdr_info,dlpi_name,0,9,220209)
CheckOffset(struct dl_phdr_info,dlpi_phdr,0,9,220216)
CheckOffset(struct dl_phdr_info,dlpi_phnum,0,9,220223)
CheckOffset(struct dl_phdr_info,dlpi_adds,0,9,220230)
CheckOffset(struct dl_phdr_info,dlpi_subs,0,9,220237)
CheckOffset(struct dl_phdr_info,dlpi_tls_modid,0,9,220244)
CheckOffset(struct dl_phdr_info,dlpi_tls_data,0,9,220251)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(struct dl_phdr_info,0, 40322, 6, 4.1, NULL, 0, NULL)
Msg("Missing member data for dl_phdr_info on PPC32\n");
CheckOffset(struct dl_phdr_info,dlpi_addr,0,6,220201)
CheckOffset(struct dl_phdr_info,dlpi_name,0,6,220208)
CheckOffset(struct dl_phdr_info,dlpi_phdr,0,6,220215)
CheckOffset(struct dl_phdr_info,dlpi_phnum,0,6,220222)
CheckOffset(struct dl_phdr_info,dlpi_adds,0,6,220229)
CheckOffset(struct dl_phdr_info,dlpi_subs,0,6,220236)
CheckOffset(struct dl_phdr_info,dlpi_tls_modid,0,6,220243)
CheckOffset(struct dl_phdr_info,dlpi_tls_data,0,6,220250)
#elif defined __ia64__
CheckTypeSize(struct dl_phdr_info,0, 40322, 3, 4.1, NULL, 0, NULL)
Msg("Missing member data for dl_phdr_info on IA64\n");
CheckOffset(struct dl_phdr_info,dlpi_addr,0,3,220200)
CheckOffset(struct dl_phdr_info,dlpi_name,0,3,220207)
CheckOffset(struct dl_phdr_info,dlpi_phdr,0,3,220214)
CheckOffset(struct dl_phdr_info,dlpi_phnum,0,3,220221)
CheckOffset(struct dl_phdr_info,dlpi_adds,0,3,220228)
CheckOffset(struct dl_phdr_info,dlpi_subs,0,3,220235)
CheckOffset(struct dl_phdr_info,dlpi_tls_modid,0,3,220242)
CheckOffset(struct dl_phdr_info,dlpi_tls_data,0,3,220249)
#elif defined __i386__
CheckTypeSize(struct dl_phdr_info,0, 40322, 2, 4.1, NULL, 0, NULL)
Msg("Missing member data for dl_phdr_info on IA32\n");
CheckOffset(struct dl_phdr_info,dlpi_addr,0,2,220199)
CheckOffset(struct dl_phdr_info,dlpi_name,0,2,220206)
CheckOffset(struct dl_phdr_info,dlpi_phdr,0,2,220213)
CheckOffset(struct dl_phdr_info,dlpi_phnum,0,2,220220)
CheckOffset(struct dl_phdr_info,dlpi_adds,0,2,220227)
CheckOffset(struct dl_phdr_info,dlpi_subs,0,2,220234)
CheckOffset(struct dl_phdr_info,dlpi_tls_modid,0,2,220241)
CheckOffset(struct dl_phdr_info,dlpi_tls_data,0,2,220248)
#endif

extern int dl_iterate_phdr_db(int(*fptr0)(struct dl_phdr_info *,size_t,void *)
, void *);
CheckInterfacedef(dl_iterate_phdr,dl_iterate_phdr_db);
#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
Msg("%d tests passed out of %d tests in link.h\n\n",pcnt,cnt);
return cnt;
#endif

}
