/*
 *
 * Copyright (c) 2001-2002 The Free Standards Group Inc
 * Copyright (c) 2000-2002 Stuart Anderson (anderson@freestandards.org)
 * Copyright (c) 2002 Chris Yeoh (yeohc@au.ibm.com)
 *
 */
#include <stdio.h>
#include <string.h>
#include <limits.h>
#include "elfchk.h"
#include "proghdr.h"
#include "../tetj/tetj.h"

#define TMP_STRING_SIZE (PATH_MAX+60)

typedef int (*ProgHeadFcn)(ElfFile *, Elf_Phdr *, struct tetj_handle *);

typedef struct	{
	int		type;
	char		*name;
	ProgHeadFcn	func;
	} PhTypeFuncRec;


#ifndef PT_GNU_STACK
#warning "PT_GNU_STACK not found in elf.h - time to update your system"
#define PT_GNU_STACK    0x6474e551 
#endif
#ifndef PT_GNU_RELRO
#warning "PT_GNU_RELRO not found in elf.h - time to update your system"
#define PT_GNU_RELRO    0x6474e552 
#endif

PhTypeFuncRec	Headers[] = {
	{PT_NULL,	"PT_NULL",	checkPT_NULL},
	{PT_LOAD,	"PT_LOAD",	checkPT_LOAD},
	{PT_DYNAMIC,	"PT_DYNAMIC",	checkPT_DYNAMIC},
	{PT_INTERP,	"PT_INTERP",	checkPT_INTERP},
	{PT_NOTE,	"PT_NOTE",	checkPT_NOTE},
	{PT_SHLIB,	"PT_SHLIB",	checkPT_SHLIB},
	{PT_PHDR,	"PT_PHDR",	checkPT_PHDR},
	{PT_TLS,	"PT_TLS",	checkPT_TLS},
	{PT_GNU_EH_FRAME,"PT_GNU_EH_FRAME",checkPT_GNU_EH_FRAME},
	{PT_GNU_STACK,	"PT_GNU_STACK",	checkPT_GNU_STACK},
#if __ia64__
	{PT_IA_64_UNWIND,"PT_IA_64_UNWIND",checkPT_IA_64_UNWIND},
#endif
	{PT_GNU_RELRO,	"PT_GNU_RELRO",	checkPT_GNU_RELRO},
	};

static int numProgHeaders=sizeof(Headers)/sizeof(PhTypeFuncRec);

/*
 * Return convention: -1 is failed, 0 is not-tested, 1 is passed
 */

int
checkPT_NULL(ElfFile *file, Elf_Phdr *hdr, struct tetj_handle *journal)
{
return 0;
}

int
checkPT_LOAD(ElfFile *file, Elf_Phdr *hdr, struct tetj_handle *journal)
{
	char tmp_string[TMP_STRING_SIZE+1];
	int i,secflags=0;
	int fail = 0;

	tetj_tp_count++;

	tetj_purpose_start(journal, tetj_activity_count, tetj_tp_count, 
                     "Check PT_LOAD program header");

	if(hdr->p_flags&PF_R)
		secflags|=SHF_ALLOC;
	if(hdr->p_flags&PF_W)
		secflags|=SHF_WRITE;
	if(hdr->p_flags&PF_X)
		secflags|=SHF_EXECINSTR;

	for(i=0;i<file->numsh;i++) {
		if( (file->saddr[i].sh_addr >= hdr->p_vaddr) &&
				(file->saddr[i].sh_addr < hdr->p_vaddr+hdr->p_memsz) &&
				(file->saddr[i].sh_flags&SHF_ALLOC) &&
				((hdr->p_type != PT_GNU_RELRO) ||
				    strcmp(ElfGetString(file, file->saddr[i].sh_name), ".got.plt")) ) {
			/* Section appears to belong to this segment */

			/* See if section extends past this end of this segment */
			if( file->saddr[i].sh_addr+file->saddr[i].sh_size >
					hdr->p_vaddr+hdr->p_memsz ) {
				snprintf(tmp_string, TMP_STRING_SIZE,
								 "Section %s does not fit in Segment", 
								 ElfGetString(file, file->saddr[i].sh_name));
				tetj_testcase_info(journal, tetj_activity_count,
													 tetj_tp_count, 0, 0, 0, tmp_string);
				fprintf(stderr, "%s\n", tmp_string);
				fail = 1;
			}
			/*
			 * See if section flags correspond to those for this segment 
			 *
			 * A section may have fewer capabilities than the segment, but
			 * should not require a capability not provided by the segment
			 *
			 * Only check the bits we are deriving from the Program Header flags
			 */
			if( (file->saddr[i].sh_flags&(SHF_ALLOC|SHF_WRITE|SHF_EXECINSTR))&~secflags 
				&& ( (file->saddr[i].sh_flags&(SHF_ALLOC))&~secflags 
					|| hdr->p_type != PT_GNU_RELRO) ) {
				snprintf(tmp_string, TMP_STRING_SIZE,
						 "Section %s flags %lx does not correspond to Segment flags %x", 
						 ElfGetString(file, file->saddr[i].sh_name),
						 (u_long)file->saddr[i].sh_flags, hdr->p_flags );
				tetj_testcase_info(journal, tetj_activity_count,
													 tetj_tp_count, 0, 0, 0, tmp_string);
				fprintf(stderr, "%s\n", tmp_string);
				fail = 1;
			}
		}
	}

	tetj_result(journal, tetj_activity_count,	tetj_tp_count, 
							fail==1 ? TETJ_FAIL : TETJ_PASS);
	tetj_purpose_end(journal, tetj_activity_count, tetj_tp_count);

	return fail==1 ? -1 : 1;
}

int
checkPT_DYNAMIC(ElfFile * file, Elf_Phdr * hdr, struct tetj_handle *journal)
{
  char tmp_string[TMP_STRING_SIZE + 1];
  int i;
  int fail = 0;

  tetj_tp_count++;

  tetj_purpose_start(journal, tetj_activity_count, tetj_tp_count,
		     "Check DYNAMIC program header");

  for (i = 0; i < file->numsh; i++) {
    if ((file->saddr[i].sh_addr >= hdr->p_vaddr) &&
	(file->saddr[i].sh_addr < hdr->p_vaddr + hdr->p_memsz) &&
	(file->saddr[i].sh_flags & SHF_ALLOC)) {
      if (file->saddr[i].sh_type == SHT_DYNAMIC) {
	/* See if section extends past this end of this segment */
	if (file->saddr[i].sh_addr != hdr->p_vaddr) {
	  snprintf(tmp_string, TMP_STRING_SIZE,
		   "Dynamic section address does not match Segment start address: %#x vs. %#x",
		   (unsigned int) file->saddr[i].sh_addr,
		   (unsigned int) hdr->p_vaddr);
	  tetj_testcase_info(journal, tetj_activity_count,
			     tetj_tp_count, 0, 0, 0, tmp_string);
	  fprintf(stderr, "%s\n", tmp_string);
	  fail = 1;
	}
	if (file->saddr[i].sh_offset != hdr->p_offset) {
	  snprintf(tmp_string, TMP_STRING_SIZE,
		   "Dynamic section offset does not match Segment offset: %#x vs. %#x",
		   (unsigned int) file->saddr[i].sh_offset,
		   (unsigned int) hdr->p_offset);
	  tetj_testcase_info(journal, tetj_activity_count,
			     tetj_tp_count, 0, 0, 0, tmp_string);
	  fprintf(stderr, "%s\n", tmp_string);
	  fail = 1;
	}
	if (file->saddr[i].sh_size != hdr->p_filesz) {
	  snprintf(tmp_string, TMP_STRING_SIZE,
		   "Dynamic section size does not match Segment size: %#x vs. %#x",
		   (unsigned int) file->saddr[i].sh_size,
		   (unsigned int) hdr->p_filesz);
	  tetj_testcase_info(journal, tetj_activity_count,
			     tetj_tp_count, 0, 0, 0, tmp_string);
	  fprintf(stderr, "%s\n", tmp_string);
	  fail = 1;
	}
	/* Contents get checked by the section processing code */
      } else {
	snprintf(tmp_string, TMP_STRING_SIZE,
		 "Non-dynamic section %s found in PT_DYNAMIC segment",
		 ElfGetString(file, file->saddr[i].sh_name));
	tetj_testcase_info(journal, tetj_activity_count,
			   tetj_tp_count, 0, 0, 0, tmp_string);
	fprintf(stderr, "%s\n", tmp_string);
	fail = 1;
      }
    }
  }

  tetj_result(journal, tetj_activity_count, tetj_tp_count,
	      fail == 1 ? TETJ_FAIL : TETJ_PASS);

  tetj_purpose_end(journal, tetj_activity_count, tetj_tp_count);

  return fail == 1 ? -1 : 1;
}

int
checkPT_INTERP(ElfFile *file, Elf_Phdr *hdr, struct tetj_handle *journal)
{
  char tmp_string[TMP_STRING_SIZE+1];
	
  tetj_tp_count++;

  tetj_purpose_start(journal, tetj_activity_count, tetj_tp_count, 
                     "Check program interpreter");

  if( !strcmp(file->addr+hdr->p_offset, ProgInterp ) )
  {
    tetj_result(journal, tetj_activity_count, tetj_tp_count, TETJ_PASS);
    tetj_purpose_end(journal, tetj_activity_count, tetj_tp_count);
    return 1;
  }

  snprintf(tmp_string, TMP_STRING_SIZE, "Incorrect program interpreter: %s, expected: %s", 
          file->addr+hdr->p_offset, ProgInterp);
  tetj_testcase_info(journal, tetj_activity_count, tetj_tp_count,
					 0, 0, 0, tmp_string);
  tetj_result(journal, tetj_activity_count, tetj_tp_count, TETJ_FAIL);
  tetj_purpose_end(journal, tetj_activity_count, tetj_tp_count);
  return -1;
}

/* forward declaration: */
int checkPT_NOTE_combined(ElfFile *, Elf_Phdr *, struct tetj_handle *);

int
checkPT_NOTE(ElfFile * file, Elf_Phdr * hdr, struct tetj_handle *journal)
{
  int i, fail = 0;
  char tmp_string[TMP_STRING_SIZE + 1];
  int num_note_sections = 0;

  tetj_tp_count++;

  tetj_purpose_start(journal, tetj_activity_count, tetj_tp_count,
		     "Check NOTE program header");

  /* first count note sections */
  for (i = 0; i < file->numsh; i++) {
    if ((file->saddr[i].sh_addr >= hdr->p_vaddr) &&
	(file->saddr[i].sh_addr < hdr->p_vaddr + hdr->p_memsz) &&
	(file->saddr[i].sh_flags & SHF_ALLOC)) {
      if (file->saddr[i].sh_type == SHT_NOTE) {
        num_note_sections++;
      }
    }
  }

  for (i = 0; i < file->numsh; i++) {
    if ((file->saddr[i].sh_addr >= hdr->p_vaddr) &&
	(file->saddr[i].sh_addr < hdr->p_vaddr + hdr->p_memsz) &&
	(file->saddr[i].sh_flags & SHF_ALLOC)) {
      /* Section appears to belong to this segment */
      if (file->saddr[i].sh_type == SHT_NOTE) {
	/* See if section extends past the end of this segment */
	if (file->saddr[i].sh_size != hdr->p_filesz) {
	  /*
	   * If built on a toolchain that combines NOTE sections into a segment,
	   * the assumption that the section size matches the segment size is
	   * wrong, as the segment size will be the sum of the sizes of all the
	   * sections. For that, call a different routine (bug 2106)
	   */
	  if (num_note_sections > 1) {
	    fail = checkPT_NOTE_combined(file, hdr, journal);
	    /* checkPT_NOTE_combined will do the tet work, so just return */
            return fail;
          }
	  snprintf(tmp_string, TMP_STRING_SIZE,
		   "NOTE section size does not match Segment size: %#x vs. %#x",
		   (unsigned int) file->saddr[i].sh_size,
		   (unsigned int) hdr->p_filesz);
	  tetj_testcase_info(journal, tetj_activity_count, tetj_tp_count,
			     0, 0, 0, tmp_string);
	  fprintf(stderr, "%s\n", tmp_string);
	  fail = 1;
	}
	if (file->saddr[i].sh_addr != hdr->p_vaddr) {
	  snprintf(tmp_string, TMP_STRING_SIZE,
		   "NOTE section address does not match Segment start address: %#x vs. %#x",
		   (unsigned int) file->saddr[i].sh_addr,
		   (unsigned int) hdr->p_vaddr);
	  tetj_testcase_info(journal, tetj_activity_count, tetj_tp_count,
			     0, 0, 0, tmp_string);
	  fprintf(stderr, "%s\n", tmp_string);
	  fail = 1;
	}
	if (file->saddr[i].sh_offset != hdr->p_offset) {
	  snprintf(tmp_string, TMP_STRING_SIZE,
		   "NOTE section offset does not match Segment offset: %#x vs. %#x",
		   (unsigned int) file->saddr[i].sh_offset,
		   (unsigned int) hdr->p_offset);
	  tetj_testcase_info(journal, tetj_activity_count,
			     tetj_tp_count, 0, 0, 0, tmp_string);
	  fprintf(stderr, "%s\n", tmp_string);
	  fail = 1;
	}
	/* Contents get checked by the section processing code */
      } else {
	snprintf(tmp_string, TMP_STRING_SIZE,
		 "Section %s in PT_NOTE segment is not type SHT_NOTE",
		 ElfGetString(file, file->saddr[i].sh_name));
	tetj_testcase_info(journal, tetj_activity_count,
			   tetj_tp_count, 0, 0, 0, tmp_string);
	fprintf(stderr, "%s\n", tmp_string);
	fail = 1;
      }
    }
  }

  tetj_result(journal, tetj_activity_count, tetj_tp_count,
	      fail == 1 ? TETJ_FAIL : TETJ_PASS);
  tetj_purpose_end(journal, tetj_activity_count, tetj_tp_count);

  return fail == 1 ? -1 : 1;
}

/*
 * alternate version of checkPT_NOTE (see above) for case where
 * NOTE sections appear to be combined into one segment
 * It's kind of brute-force to just duplicate-and-hack the routine,
 * but at least it gets a solution on the air. should improve this...
 */
int
checkPT_NOTE_combined(ElfFile *file, Elf_Phdr *hdr, struct tetj_handle *journal)
{
  int i, fail = 0;
  char tmp_string[TMP_STRING_SIZE + 1];
  unsigned int combined_size = 0;
  int first_note = 1;

  /* We've already started the testcase in checkPT_NOTE, skip tet setup here
  tetj_tp_count++;

  tetj_purpose_start(journal, tetj_activity_count, tetj_tp_count,
		     "Check NOTE program header");
  */

  /* add up note section sizes */
  for (i = 0; i < file->numsh; i++) {
    if ((file->saddr[i].sh_addr >= hdr->p_vaddr) &&
	(file->saddr[i].sh_addr < hdr->p_vaddr + hdr->p_memsz) &&
	(file->saddr[i].sh_flags & SHF_ALLOC)) {
      if (file->saddr[i].sh_type == SHT_NOTE) {
        combined_size += (unsigned int) file->saddr[i].sh_size;
      }
    }
  }

  for (i = 0; i < file->numsh; i++) {
    if ((file->saddr[i].sh_addr >= hdr->p_vaddr) &&
	(file->saddr[i].sh_addr < hdr->p_vaddr + hdr->p_memsz) &&
	(file->saddr[i].sh_flags & SHF_ALLOC)) {
      /* Section appears to belong to this segment */
      if (file->saddr[i].sh_type == SHT_NOTE) {
	/* check only the first note section for alignment with the segment */
	if (!first_note) continue;
	else first_note = 0;
	if (file->saddr[i].sh_addr != hdr->p_vaddr) {
	  snprintf(tmp_string, TMP_STRING_SIZE,
		   "NOTE section address does not match Segment start address: %#x vs. %#x",
		   (unsigned int) file->saddr[i].sh_addr,
		   (unsigned int) hdr->p_vaddr);
	  tetj_testcase_info(journal, tetj_activity_count, tetj_tp_count,
			     0, 0, 0, tmp_string);
	  fprintf(stderr, "%s\n", tmp_string);
	  fail = 1;
	}
	if (first_note && file->saddr[i].sh_offset != hdr->p_offset) {
	  snprintf(tmp_string, TMP_STRING_SIZE,
		   "NOTE section offset does not match Segment offset: %#x vs. %#x",
		   (unsigned int) file->saddr[i].sh_offset,
		   (unsigned int) hdr->p_offset);
	  tetj_testcase_info(journal, tetj_activity_count,
			     tetj_tp_count, 0, 0, 0, tmp_string);
	  fprintf(stderr, "%s\n", tmp_string);
	  fail = 1;
	}
	/* and check combined size of note sections against segment size */
	if (combined_size != hdr->p_filesz) {
	  snprintf(tmp_string, TMP_STRING_SIZE,
		   "NOTE sections size does not match Segment size: %#x vs. %#x",
		   (unsigned int) combined_size,
		   (unsigned int) hdr->p_filesz);
	  tetj_testcase_info(journal, tetj_activity_count, tetj_tp_count,
			     0, 0, 0, tmp_string);
	  fprintf(stderr, "%s\n", tmp_string);
	  fail = 1;
	}
	/* Contents get checked by the section processing code */
      } else {
	snprintf(tmp_string, TMP_STRING_SIZE,
		 "Section %s in PT_NOTE segment is not type SHT_NOTE",
		 ElfGetString(file, file->saddr[i].sh_name));
	tetj_testcase_info(journal, tetj_activity_count,
			   tetj_tp_count, 0, 0, 0, tmp_string);
	fprintf(stderr, "%s\n", tmp_string);
	fail = 1;
      }
    }
  }

  tetj_result(journal, tetj_activity_count, tetj_tp_count,
	      fail == 1 ? TETJ_FAIL : TETJ_PASS);
  tetj_purpose_end(journal, tetj_activity_count, tetj_tp_count);

  return fail == 1 ? -1 : 1;
}

int
checkPT_SHLIB(ElfFile *file, Elf_Phdr *hdr, struct tetj_handle *journal)
{
  char tmp_string[TMP_STRING_SIZE+1];
	
  tetj_tp_count++;

  tetj_purpose_start(journal, tetj_activity_count, tetj_tp_count, 
                     "Check SHLIB program header");
  snprintf(tmp_string, TMP_STRING_SIZE, "PT_SHLIB is not permitted!");
  tetj_testcase_info(journal, tetj_activity_count, tetj_tp_count,
					 0, 0, 0, tmp_string);
  fprintf(stderr, "%s\n", tmp_string);
  tetj_result(journal, tetj_activity_count, tetj_tp_count, TETJ_FAIL);
  tetj_purpose_end(journal, tetj_activity_count, tetj_tp_count);

  return 0;
}

int
checkPT_PHDR(ElfFile *file, Elf_Phdr *hdr, struct tetj_handle *journal)
{
  char tmp_string[TMP_STRING_SIZE+1];
	
  tetj_tp_count++;

  tetj_purpose_start(journal, tetj_activity_count, tetj_tp_count, 
                     "Check PHDR program header");

  /* Header should point to the header table */
  if( (void *)(file->addr+hdr->p_offset) == (void *)file->paddr )
  {
    tetj_result(journal, tetj_activity_count, tetj_tp_count, TETJ_PASS);
    tetj_purpose_end(journal, tetj_activity_count, tetj_tp_count);
    return 1;
  }
  snprintf(tmp_string, TMP_STRING_SIZE,
		"PHDR offset doesn't match expected %p vs %p", 
          	file->addr+hdr->p_offset,file->paddr);
  tetj_testcase_info(journal, tetj_activity_count, tetj_tp_count,
					 0, 0, 0, tmp_string);
  fprintf(stderr, "%s\n", tmp_string);
  tetj_result(journal, tetj_activity_count, tetj_tp_count, TETJ_FAIL);
  tetj_purpose_end(journal, tetj_activity_count, tetj_tp_count);

return -1;
}

int
checkPT_TLS(ElfFile * file, Elf_Phdr * hdr, struct tetj_handle *journal)
{
  int i, fail = 0;
  char tmp_string[TMP_STRING_SIZE + 1];

  tetj_tp_count++;

  tetj_purpose_start(journal, tetj_activity_count, tetj_tp_count,
		     "Check TLS program header");

  for (i = 0; i < file->numsh; i++) {
    if ((file->saddr[i].sh_addr >= hdr->p_vaddr) &&
	(file->saddr[i].sh_addr < hdr->p_vaddr + hdr->p_memsz) &&
	(file->saddr[i].sh_flags & SHF_ALLOC)) {
      /* Section appears to belong to this segment */
      if (!(file->saddr[i].sh_flags & SHF_TLS)) {
	/* See if section extends past this end of this segment */
	if (file->saddr[i].sh_addr != hdr->p_vaddr) {
	  snprintf(tmp_string, TMP_STRING_SIZE,
		   "TLS section address does not match Segment start address: %#x vs. %#x",
		   (unsigned int) file->saddr[i].sh_addr,
		   (unsigned int) hdr->p_vaddr);
	  tetj_testcase_info(journal, tetj_activity_count,
			     tetj_tp_count, 0, 0, 0, tmp_string);
	  fprintf(stderr, "%s\n", tmp_string);
	  fail = 1;
	}
	if (file->saddr[i].sh_offset != hdr->p_offset) {
	  snprintf(tmp_string, TMP_STRING_SIZE,
		   "TLS section offset does not match Segment offset: %#x vs. %#x",
		   (unsigned int) file->saddr[i].sh_offset,
		   (unsigned int) hdr->p_offset);
	  tetj_testcase_info(journal, tetj_activity_count,
			     tetj_tp_count, 0, 0, 0, tmp_string);
	  fprintf(stderr, "%s\n", tmp_string);
	  fail = 1;
	}
	if (file->saddr[i].sh_size != hdr->p_filesz) {
	  snprintf(tmp_string, TMP_STRING_SIZE,
		   "TLS section size does not match Segment size: %#x vs. %#x",
		   (unsigned int) file->saddr[i].sh_size,
		   (unsigned int) hdr->p_filesz);
	  tetj_testcase_info(journal, tetj_activity_count,
			     tetj_tp_count, 0, 0, 0, tmp_string);
	  fprintf(stderr, "%s\n", tmp_string);
	  fail = 1;
	}
	/* Contents get checked by the section processing code */
      } else {
	snprintf(tmp_string, TMP_STRING_SIZE,
		 "Section %s in PT_TLS segment is not SHF_TLS",
		 ElfGetString(file, file->saddr[i].sh_name));
	tetj_testcase_info(journal, tetj_activity_count,
			   tetj_tp_count, 0, 0, 0, tmp_string);
	fprintf(stderr, "%s\n", tmp_string);
	fail = 1;
      }
    }
  }

  tetj_result(journal, tetj_activity_count, tetj_tp_count,
	      fail == 1 ? TETJ_FAIL : TETJ_PASS);
  tetj_purpose_end(journal, tetj_activity_count, tetj_tp_count);

  return fail == 1 ? -1 : 1;
}

int
checkPT_GNU_EH_FRAME(ElfFile *file, Elf_Phdr *hdr, struct tetj_handle *journal)
{
  int i,fail=0;
  char tmp_string[TMP_STRING_SIZE+1];
	
  tetj_tp_count++;

  tetj_purpose_start(journal, tetj_activity_count, tetj_tp_count, 
                     "Check GNU_EH_FRAME program header");

  for(i=0;i<file->numsh;i++) {
		if( (file->saddr[i].sh_addr >= hdr->p_vaddr) &&
				(file->saddr[i].sh_addr < hdr->p_vaddr+hdr->p_memsz) &&
				(file->saddr[i].sh_size != 0) &&
				(file->saddr[i].sh_flags&SHF_ALLOC) ) {
			/* Section appears to belong to this segment */
			if( strcmp(ElfGetString(file,file->saddr[i].sh_name), ".eh_frame_hdr") != 0 ) {
				snprintf(tmp_string, TMP_STRING_SIZE,
				  "Section in PT_GNU_EH_FRAME segment is not \".eh_frame_hdr\"" );
				tetj_testcase_info(journal, tetj_activity_count,
					tetj_tp_count, 0, 0, 0, tmp_string);
				fprintf(stderr, "%s\n", tmp_string);
				fail = 1;
			}
			/* Contents checked by the section checking code */
  	}
  }

  tetj_result(journal, tetj_activity_count, tetj_tp_count, 
							fail==1 ? TETJ_FAIL : TETJ_PASS);
  tetj_purpose_end(journal, tetj_activity_count, tetj_tp_count);

return fail==1 ? -1 : 1;
}

int
checkPT_GNU_STACK(ElfFile *file, Elf_Phdr *hdr, struct tetj_handle *journal)
{
  char tmp_string[TMP_STRING_SIZE+1];
	int fail = 0;

  tetj_tp_count++;

  tetj_purpose_start(journal, tetj_activity_count, tetj_tp_count, 
                     "Check GNU_STACK program header");

  /* Header members should be zero */
  if( hdr->p_offset != 0 )
  {
    snprintf(tmp_string, TMP_STRING_SIZE, "offset not 0");
    tetj_testcase_info(journal, tetj_activity_count, tetj_tp_count,
					 0, 0, 0, tmp_string);
    fprintf(stderr, "%s\n", tmp_string);
		fail = 1;
  }
  /* Header members should be zero */
  if( hdr->p_vaddr != 0 )
  {
    snprintf(tmp_string, TMP_STRING_SIZE, "vaddr not 0");
    tetj_testcase_info(journal, tetj_activity_count, tetj_tp_count,
					 0, 0, 0, tmp_string);
    fprintf(stderr, "%s\n", tmp_string);
		fail = 1;
  }
  /* Header members should be zero */
  if( hdr->p_paddr != 0 )
  {
    snprintf(tmp_string, TMP_STRING_SIZE, "paddr not 0");
    tetj_testcase_info(journal, tetj_activity_count, tetj_tp_count,
					 0, 0, 0, tmp_string);
    fprintf(stderr, "%s\n", tmp_string);
		fail = 1;
  }
  /* Header members should be zero */
  if( hdr->p_filesz != 0 )
  {
    snprintf(tmp_string, TMP_STRING_SIZE, "filesz not 0");
    tetj_testcase_info(journal, tetj_activity_count, tetj_tp_count,
					 0, 0, 0, tmp_string);
    fprintf(stderr, "%s\n", tmp_string);
		fail = 1;
  }
  /* Header members should be zero */
  if( hdr->p_memsz != 0 )
  {
    snprintf(tmp_string, TMP_STRING_SIZE, "memsz not 0");
    tetj_testcase_info(journal, tetj_activity_count, tetj_tp_count,
					 0, 0, 0, tmp_string);
    fprintf(stderr, "%s\n", tmp_string);
		fail = 1;
  }
  /* Header flags should be in the set PF_X|PF_W|PF_R */
  if( hdr->p_filesz & ~(PF_X|PF_W|PF_R) )
  {
    snprintf(tmp_string, TMP_STRING_SIZE, "Unexpected flags %lx",
				(u_long)hdr->p_filesz & ~(PF_X|PF_W|PF_R));
    tetj_testcase_info(journal, tetj_activity_count, tetj_tp_count,
					 0, 0, 0, tmp_string);
    fprintf(stderr, "%s\n", tmp_string);
		fail = 1;
  }

  tetj_result(journal, tetj_activity_count, tetj_tp_count, 
							fail==1 ? TETJ_FAIL : TETJ_PASS);
  tetj_purpose_end(journal, tetj_activity_count, tetj_tp_count);

return fail==1 ? -1 : 1;
}

#if __ia64__
int
checkPT_IA_64_UNWIND(ElfFile *file, Elf_Phdr *hdr, struct tetj_handle *journal)
{
  char tmp_string[TMP_STRING_SIZE+1];
	
  tetj_tp_count++;

  tetj_purpose_start(journal, tetj_activity_count, tetj_tp_count, 
                     "Check IA_64_UNWIND program header");
  snprintf(tmp_string, TMP_STRING_SIZE, "IA_64_UNWIND not checked!");
  tetj_testcase_info(journal, tetj_activity_count, tetj_tp_count,
					 0, 0, 0, tmp_string);
  fprintf(stderr, "%s\n", tmp_string);
  tetj_result(journal, tetj_activity_count, tetj_tp_count, TETJ_UNTESTED);
  tetj_purpose_end(journal, tetj_activity_count, tetj_tp_count);

return 0;
}
#endif

int
checkPT_GNU_RELRO(ElfFile *file, Elf_Phdr *hdr, struct tetj_handle *journal)
{
return checkPT_LOAD( file, hdr, journal );
}

void
checkElfproghdr(int index, ElfFile *file, struct tetj_handle *journal)
{
int i;
Elf_Phdr *hdr;

hdr=&(file->paddr[index]);

if( !hdr )
	return;

if( elfchk_debug&DEBUG_PROGRAM_HEADERS )
fprintf( stderr, "Header[%2d] type %x\n",
			index, hdr->p_type );

for(i=0;i<numProgHeaders;i++){
	if( Headers[i].type == hdr->p_type ) {
		switch( Headers[i].func(file,hdr,journal)) {
		case 1: /* Pass */
			break;
		case 0: /* Not checked */
			if( elfchk_debug&DEBUG_PROGRAM_HEADERS )
			fprintf( stderr, "Header[%2d] %-15.15s Not checked\n",
				index, Headers[i].name );
			break;
		case -1: /* Fail */
			break;
			}
		break;  /* Found it. Don't need to look any further */
		}
	}
if( i == numProgHeaders ) {
	fprintf( stderr, "Header[%2d] type %x Not checked\n",
				index, hdr->p_type );
	}
}
