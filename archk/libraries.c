#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#include "symbols.h"
#include "check_archive.h"

static int tablesize=100;
static int tableents=0;
static char **symtable=NULL;

void
add_symbol(char *symname)
{
  if(symtable==NULL)
    symtable=malloc(tablesize*sizeof(char *));

  symtable[tableents++]=symname;

  if(tableents >= tablesize ) 
  {
    tablesize+=100;
    symtable=realloc(symtable,tablesize*sizeof(char *));
  }
}

int
add_archive_symbols(char *libname, struct tetj_handle *journal)
{
  ElfFile	*file;
  Elf_Sym	*syms;
  int	i,numsyms,strtab;

  file = open_archive(libname, journal, 0);

  if (file)
  {
     while(next_member(file, journal) ) {
        syms=NULL;
	/* First, find the symbol table */
        for(i=0;i<file->numsh;i++) {
		if( file->saddr[i].sh_type == SHT_SYMTAB ) {
        		syms=(Elf_Sym *)(file->addr+file->saddr[i].sh_offset);
        		numsyms=file->saddr[i].sh_size/file->saddr[i].sh_entsize;
		}
		if( file->saddr[i].sh_type == SHT_STRTAB ) {
        		strtab=i;
		}
	}
#if 0
	printf("Found symbols in section %d\n", i );
#endif
        for(i=0;i<numsyms;i++) 
        {
/*
  fprintf(stderr,"%s %x %x %x\n",
  ElfGetStringIndex(file,syms[i].st_name,strtab),
  ELF32_ST_BIND(syms[i].st_info),
  ELF32_ST_TYPE(syms[i].st_info),
  syms[i].st_shndx
  );
*/
          /* Static Symbols */
          if( ELF32_ST_BIND(syms[i].st_info) == STB_LOCAL ) continue;
          
          /* Skip over symbol references (ie unresolved) */
          if( syms[i].st_shndx == SHN_UNDEF || 
              (syms[i].st_shndx >= SHN_LORESERVE &&
               syms[i].st_shndx <= SHN_HIRESERVE &&
               syms[i].st_shndx != SHN_COMMON) ) continue;
      
          add_symbol( ElfGetStringIndex(file,syms[i].st_name,
                                      strtab));
        }
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

void
dump_localsymbols()
{
  int i;

  for(i=0;i<tableents;i++) 
  {
    printf( "%s\n",symtable[i] );
  }
}