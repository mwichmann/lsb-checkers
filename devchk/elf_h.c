/*
 * Test of elf.h
 */
#include "hdrchk.h"
#include "sys/types.h"
#include "elf.h"



int elf_h()
{
int cnt=0;
CheckTypeSize(uint16_t,0)
CheckTypeSize(Elf32_Half,0)
CheckTypeSize(Elf64_Half,0)
CheckTypeSize(uint32_t,0)
CheckTypeSize(Elf32_Word,0)
CheckTypeSize(Elf32_Sword,0)
CheckTypeSize(Elf64_Word,0)
CheckTypeSize(Elf64_Sword,0)
CheckTypeSize(uint64_t,0)
CheckTypeSize(Elf32_Xword,0)
CheckTypeSize(int64_t,0)
CheckTypeSize(Elf32_Sxword,0)
CheckTypeSize(Elf64_Xword,0)
CheckTypeSize(Elf64_Sxword,0)
CheckTypeSize(Elf32_Addr,0)
CheckTypeSize(Elf64_Addr,0)
CheckTypeSize(Elf32_Off,0)
CheckTypeSize(Elf64_Off,0)
CheckTypeSize(Elf32_Section,0)
CheckTypeSize(Elf64_Section,0)
CheckTypeSize(Elf32_Symndx,0)
CheckTypeSize(Elf64_Symndx,0)
printf("%d tests in elf.h\n",cnt);
return cnt;
}
