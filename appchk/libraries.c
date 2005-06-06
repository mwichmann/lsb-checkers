#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#include "symbols.h"
#include "check_file.h"

static int tablesize=100;
static int tableents=0;
static char **symtable=NULL;

void
add_symbol(char *symname)
{
  if(symtable==NULL)
    symtable=malloc(tablesize*sizeof(char *));

  symtable[tableents++]=strdup(symname);

  if(tableents >= tablesize ) 
  {
    tablesize+=100;
    symtable=realloc(symtable,tablesize*sizeof(char *));
  }
}

int
add_library_symbols(ElfFile *file, struct tetj_handle *journal)
{
  Elf_Sym	*syms;
  int	i,numsyms;

  if (file)
  {
    numsyms=file->dynsymhdr->sh_size/file->dynsymhdr->sh_entsize;
    syms=(Elf_Sym *)((caddr_t)file->addr+file->dynsymhdr->sh_offset);
    for(i=0;i<numsyms;i++) 
    {
      /* Static Symbols */
      if( ELF32_ST_BIND(syms[i].st_info) == STB_LOCAL ) continue;
      
      /* Skip over symbol references (ie unresolved) */
      if( syms[i].st_shndx == SHN_UNDEF || 
          (syms[i].st_shndx >= SHN_LORESERVE &&
           syms[i].st_shndx <= SHN_HIRESERVE) ) continue;
      
/*
  fprintf(stderr,"%s %x %x %x\n",
  ElfGetStringIndex(file,syms[i].st_name,file->dynsymhdr->sh_link),
  ELF32_ST_BIND(syms[i].st_info),
  ELF32_ST_TYPE(syms[i].st_info),
  syms[i].st_shndx
  );
*/
      
      add_symbol( ElfGetStringIndex(file,syms[i].st_name,
                                  file->dynsymhdr->sh_link));
    }
  }

  return 0;
}

int
symbolinlibrary(char *symname)
{
  int i;

  for(i=0;i<tableents;i++) 
  {
    if( strcmp(symname, symtable[i] ) == 0 )
      return 1;
  }
  return 0;
}
