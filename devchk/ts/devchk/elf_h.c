/*
 * Test of elf.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#define __LSB_VERSION__ 41
#include "elf.h"



#ifdef TET_TEST
void elf_h()
{
#else
int elf_h()
{
#endif

int cnt=0;

int pcnt=0;
char *real_macro_value, *stripped_macro_value;
int macro_ndx, stripped_value_ndx;
real_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );
stripped_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );

#ifdef TET_TEST
Msg("Checking data structures in elf.h\n");
#endif

printf("Checking data structures in elf.h\n");
#if 1
CheckTypeSize(Elf32_Addr,0, 40325, 1, 4.1, NULL, 9272, NULL)
#endif

#if 1
CheckTypeSize(Elf64_Addr,0, 40326, 1, 4.1, NULL, 10176, NULL)
#endif

#if 1
CheckTypeSize(Elf32_Word,0, 40327, 1, 4.1, NULL, 9272, NULL)
#endif

#if 1
CheckTypeSize(Elf64_Word,0, 40328, 1, 4.1, NULL, 9272, NULL)
#endif

#if 1
CheckTypeSize(Elf32_Sword,0, 40329, 1, 4.1, NULL, 6997, NULL)
#endif

#if 1
CheckTypeSize(Elf64_Sword,0, 40330, 1, 4.1, NULL, 6997, NULL)
#endif

#if 1
CheckTypeSize(Elf32_Xword,0, 40331, 1, 4.1, NULL, 10176, NULL)
#endif

#if 1
CheckTypeSize(Elf64_Xword,0, 40332, 1, 4.1, NULL, 10176, NULL)
#endif

#if 1
CheckTypeSize(Elf32_Sxword,0, 40333, 1, 4.1, NULL, 6998, NULL)
#endif

#if 1
CheckTypeSize(Elf64_Sxword,0, 40334, 1, 4.1, NULL, 6998, NULL)
#endif

#if 1
CheckTypeSize(Elf32_Off,0, 40335, 1, 4.1, NULL, 9272, NULL)
#endif

#if 1
CheckTypeSize(Elf64_Off,0, 40336, 1, 4.1, NULL, 10176, NULL)
#endif

#if 1
CheckTypeSize(Elf32_Phdr,0, 40338, 1, 4.1, NULL, 40337, NULL)
#endif

#if 1
CheckTypeSize(Elf64_Phdr,0, 40340, 1, 4.1, NULL, 40339, NULL)
#endif

#if 1
CheckTypeSize(Elf32_Half,0, 40345, 1, 4.1, NULL, 9271, NULL)
#endif

#if 1
CheckTypeSize(Elf64_Half,0, 40346, 1, 4.1, NULL, 9271, NULL)
#endif

#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests passed out of %d tests in elf.h\n\n",pcnt,cnt);
return cnt;
#endif

}
