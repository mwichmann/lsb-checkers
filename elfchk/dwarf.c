/*
 *
 * Copyright (c) 2002 The Free Standards Group Inc
 * Copyright (c) 2002-2003 Stuart Anderson (anderson@freestandards.org)
 * Copyright (c) 2003 Chris Yeoh (yeohc@au.ibm.com)
 *
 */
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <malloc.h>
#include "elfchk.h"
#include "dwarf.h"

/*
 * Decode unsigned LEB128 number
 *
 * Taken from DWARF 2.0.0, Appendix 4
 */

unsigned long int
decode_uleb128 (data, length_return)
     unsigned char * data;
     int *           length_return;
{
  unsigned long int result = 0;
  int               shift = 0;
  unsigned char     *data_start = data;
  unsigned char     byte;

  while(1) {
      byte = *data++;
      result |= (byte & 0x7f) << shift;
      if( (byte & 0x80) == 0 )
	break;

      shift += 7;
  }

  if (length_return != NULL)
    *length_return = data-data_start;


  return result;
}

signed long int
decode_sleb128 (data, length_return)
     unsigned char * data;
     int *           length_return;
{

  unsigned long int result = 0;
  int               shift = 0;
  unsigned char     *data_start = data;
  unsigned char     byte;

  while(1) {
      byte = *data++;
      result |= (byte & 0x7f) << shift;
      shift += 7;
      if( (byte & 0x80) == 0 )
	break;

  }

  if ((shift < sizeof(int)*8) && (byte & 0x40))
    result |= - (1 << shift);

  if (length_return != NULL)
    *length_return = data-data_start;


  return result;
}



int check_CFI(unsigned char *ptr, int *error)
{
        int	numused,used=0;
        int	tmp;
        int     opcode;
        unsigned char     rawop;
/* XXXSTU - Need to check the values read in each record */


/*
fprintf(stderr,"\nCFI found at %x", ptr );
dumpbytes(ptr,8);
*/

        used++; /* The op code */
        rawop = *ptr;
        ptr++;
        if (rawop & 0xc0)
        {
                /* have primary opcode */
                opcode = rawop & 0xc0;
        }
        else
        {
                /* have extended opcode */
                opcode = rawop & 0x3F;
        }


        switch( opcode ) { 
	/*
	 * These are described in Dwarf 2.0.0 - Section 6.4.2
	 */
	case DW_CFA_advance_loc:
		if (elfchk_debug & DEBUG_DWARF_CONTENTS) {
			fprintf(stderr,"DW_CFA_advance_loc %x\n",rawop & 0x3F );
		}
		break;

	case DW_CFA_offset:
		if (elfchk_debug & DEBUG_DWARF_CONTENTS) {
			fprintf(stderr,"DW_CFA_offset" );
		}
		/* Operand 1 - ULEB128 register */
		tmp = decode_uleb128(ptr,&numused);
                ptr+=numused;
                used+=numused;
		if (elfchk_debug&DEBUG_DWARF_CONTENTS) {
			fprintf(stderr," r%x\n", tmp );
                }
		break;

	case DW_CFA_restore:
		if (elfchk_debug & DEBUG_DWARF_CONTENTS) {
			fprintf(stderr,"DW_CFA_restore\n" );
		}
		break;

	case DW_CFA_nop:
		if (elfchk_debug & DEBUG_DWARF_CONTENTS) {
			fprintf(stderr,"DW_CFA_nop\n" );
		}
		break;

	case DW_CFA_set_loc:
		if (elfchk_debug & DEBUG_DWARF_CONTENTS) {
			fprintf(stderr,"DW_CFA_set_loc\n" );
                }

		/* Operand 1 - address */
		tmp = *(int *)(ptr);
                ptr += sizeof(int);
                used += sizeof(int);
		break;

	case DW_CFA_advance_loc1:
		if (elfchk_debug & DEBUG_DWARF_CONTENTS) {
			fprintf(stderr,"DW_CFA_advance_loc1\n" );
                }

		/* Operand 1 - 1-byte delta */
		tmp = *(char *)(ptr);
                ptr += sizeof(char);
                used += sizeof(char);
		break;

	case DW_CFA_advance_loc2:
		if (elfchk_debug & DEBUG_DWARF_CONTENTS) {
			fprintf(stderr,"DW_CFA_advance_loc2\n" );
                }

		/* Operand 1 - 2-byte delta */
		tmp =* (short *)(ptr);
                ptr += sizeof(short);
                used += sizeof(short);
		break;

	case DW_CFA_advance_loc4:
		if (elfchk_debug & DEBUG_DWARF_CONTENTS) {
			fprintf(stderr,"DW_CFA_advance_loc4\n" );
                }

		/* Operand 1 - 4-byte delta */
		tmp =* (int *)(ptr);
                ptr += sizeof(int);
                used += sizeof(int);
		break;

	case DW_CFA_offset_extended:
		if (elfchk_debug & DEBUG_DWARF_CONTENTS) {
			fprintf(stderr,"DW_CFA_offset_extended\n" );
                }

		/* Operand 1 - ULEB128 register */
		tmp = decode_uleb128(ptr,&numused);
                ptr+=numused;
                used+=numused;
		if (elfchk_debug&DEBUG_DWARF_CONTENTS) {
			fprintf(stderr," r%d", tmp );
                }

		/* Operand 2 - ULEB128 offset */
		tmp = decode_uleb128(ptr,&numused);
                ptr += numused;
                used += numused;
		if (elfchk_debug&DEBUG_DWARF_CONTENTS) {
			fprintf(stderr," offset %d\n", tmp );
                }
		break;

	case DW_CFA_restore_extended:
		if (elfchk_debug & DEBUG_DWARF_CONTENTS) {
			fprintf(stderr,"DW_CFA_restore_extended\n" );
                }

		/* Operand 1 - ULEB128 register */
		tmp = decode_uleb128(ptr,&numused);
                ptr+=numused;
                used+=numused;
		break;

	case DW_CFA_undefined:
		if (elfchk_debug & DEBUG_DWARF_CONTENTS) {
			fprintf(stderr,"DW_CFA_undefined\n" );
                }

		/* Operand 1 - ULEB128 register */
		tmp = decode_uleb128(ptr,&numused);
                ptr+=numused;
                used+=numused;
		if (elfchk_debug&DEBUG_DWARF_CONTENTS) {
			fprintf(stderr," r%d\n", tmp );
                }
		break;

	case DW_CFA_same_value:
		if (elfchk_debug & DEBUG_DWARF_CONTENTS) {
			fprintf(stderr,"DW_CFA_same_value\n" );
                }

		/* Operand 1 - ULEB128 register */
		tmp = decode_uleb128(ptr,&numused);
                ptr+=numused;
                used+=numused;
		if (elfchk_debug&DEBUG_DWARF_CONTENTS) {
			fprintf(stderr," r%d\n", tmp );
                }
		break;

	case DW_CFA_register:
		if (elfchk_debug & DEBUG_DWARF_CONTENTS) {
			fprintf(stderr,"DW_CFA_register\n" );
                }

		/* Operand 1 - ULEB128 register */
		tmp = decode_uleb128(ptr,&numused);
                ptr+=numused;
                used+=numused;
		if (elfchk_debug&DEBUG_DWARF_CONTENTS) {
			fprintf(stderr," r%d", tmp );
                }

		/* Operand 2 - ULEB128 register */
		tmp = decode_uleb128(ptr,&numused);
                ptr += numused;
                used += numused;
		if (elfchk_debug&DEBUG_DWARF_CONTENTS) {
			fprintf(stderr," r%d\n", tmp );
                }
		break;

	case DW_CFA_remember_state:
		if (elfchk_debug & DEBUG_DWARF_CONTENTS) {
			fprintf(stderr,"DW_CFA_remember_state\n" );
		}
		break;

	case DW_CFA_restore_state:
		if (elfchk_debug & DEBUG_DWARF_CONTENTS) {
			fprintf(stderr,"DW_CFA_restore_state\n" );
		}
		break;

	case DW_CFA_def_cfa:
		if (elfchk_debug&DEBUG_DWARF_CONTENTS) {
			fprintf(stderr,"DW_CFA_def_cfa" );
                }

		/* Operand 1 - ULEB128 register */
		tmp = decode_uleb128(ptr,&numused);
                ptr += numused;
                used += numused;
		if (elfchk_debug&DEBUG_DWARF_CONTENTS) {
			fprintf(stderr," r%x", tmp );
                }

		/* Operand 2 - ULEB128 offset */
		tmp = decode_uleb128(ptr,&numused);
                ptr += numused;
                used += numused;
		if (elfchk_debug&DEBUG_DWARF_CONTENTS) {
			fprintf(stderr," offset %x", tmp );
                }

		if (elfchk_debug&DEBUG_DWARF_CONTENTS) {
			fprintf(stderr,"\n" );
                }
		break;

	case DW_CFA_def_cfa_register:
		if (elfchk_debug & DEBUG_DWARF_CONTENTS) {
			fprintf(stderr,"DW_CFA_def_cfa_register\n" );
                }

		/* Operand 1 - ULEB128 register */
		tmp = decode_uleb128(ptr,&numused);
                ptr += numused;
                used += numused;
		if (elfchk_debug&DEBUG_DWARF_CONTENTS) {
			fprintf(stderr," r%d\n", tmp );
                }
		break;

	case DW_CFA_def_cfa_offset:
		if (elfchk_debug&DEBUG_DWARF_CONTENTS) {
			fprintf(stderr,"DW_CFA_def_cfa_offset" );
                }

		/* Operand 1 - ULEB128 register */
		tmp = decode_uleb128(ptr,&numused);
                ptr += numused;
                used += numused;
		if (elfchk_debug&DEBUG_DWARF_CONTENTS) {
			fprintf(stderr," %d\n", tmp );
                }
		break;

	case DW_CFA_GNU_args_size:
		if (elfchk_debug&DEBUG_DWARF_CONTENTS) {
			fprintf(stderr,"DW_CFA_GNU_args_size\n" );
                }

		/* Operand 1 - ULEB128 register */
		tmp = decode_uleb128(ptr,&numused);
                ptr += numused;
                used += numused;
		if (elfchk_debug&DEBUG_DWARF_CONTENTS) {
			fprintf(stderr," r%d\n", tmp );
                }
		break;

	case DW_CFA_GNU_negative_offset_extended:
		if (elfchk_debug&DEBUG_DWARF_CONTENTS) {
			fprintf(stderr,"DW_CFA_GNU_negative_offset_extended\n" );
                }

		/* Operand 1 - ULEB128 register */
		tmp = decode_uleb128(ptr,&numused);
                ptr += numused;
                used += numused;
		if (elfchk_debug&DEBUG_DWARF_CONTENTS) {
			fprintf(stderr," r%d", tmp );
                }

		/* Operand 2 - ULEB128 register */
		tmp = decode_uleb128(ptr,&numused);
                ptr += numused;
                used += numused;
		if (elfchk_debug&DEBUG_DWARF_CONTENTS) {
			fprintf(stderr," r%d\n", tmp );
                }
		break;

/* 	case DW_CFA_expression: */
/* 		if (elfchk_debug&DEBUG_DWARF_CONTENTS) { */
/* 			fprintf(stderr,"DW_CFA_expression\n" ); */
/*                 } */

/* 		/\* Operand 1 - ULEB128 register *\/ */
/* 		tmp = decode_uleb128(ptr,&numused); */
/*                 ptr += numused; */
/*                 used += numused; */
/* 		break; */

	case DW_CFA_offset_extended_sf:
		if (elfchk_debug&DEBUG_DWARF_CONTENTS) {
			fprintf(stderr,"DW_CFA_offset_extended_sf\n" );
                }

		/* Operand 1 - ULEB128 register */
		tmp = decode_uleb128(ptr,&numused);
                ptr += numused;
                used += numused;

		/* Operand 2 - SLEB128 offset */
		tmp = decode_sleb128(ptr,&numused);
                ptr += numused;
                used += numused;
		break;

/* 	case DW_CFA_def_cfa_sf: */
/* 		if (elfchk_debug&DEBUG_DWARF_CONTENTS) { */
/* 			fprintf(stderr,"DW_CFA_def_cfa_sf\n" ); */
/*                 } */

/* 		/\* Operand 1 - ULEB128 register *\/ */
/* 		tmp = decode_uleb128(ptr,&numused); */
/*                 ptr += numused; */
/*                 used += numused; */

/* 		/\* Operand 2 - SLEB128 offset *\/ */
/* 		tmp = decode_sleb128(ptr,&numused); */
/*                 ptr += numused; */
/*                 used += numused; */
/* 		break; */

/* 	case DW_CFA_def_cfa_offset_sf: */
/* 		if (elfchk_debug&DEBUG_DWARF_CONTENTS) { */
/* 			fprintf(stderr,"DW_CFA_def_cfa_offset_sf\n" ); */
/*                 } */

/* 		/\* Operand 1 - ULEB128 register *\/ */
/* 		tmp = decode_uleb128(ptr,&numused); */
/*                 ptr += numused; */
/*                 used += numused; */
/* 		break; */

	default:
                if (elfchk_debug & DEBUG_DWARF_CONTENTS)
                {
                        fprintf(stderr,
                                "********** Unexpected CFI opcode %x **\n",
                                rawop);
                }
                *error = 1;
        }
        return used;

}

int check_FDE(CIEFrame *cie_list, unsigned char *ptr,  int *error)
{
        int	numused,used=0;
        FDEFrameHeader	fdeimage;
		CIEFrame *cie = 0;
        unsigned char *offsetptr;
        unsigned char *endptr;

        fdeimage.length = *(int *)ptr;
        ptr += 4;
        used += 4;
        endptr = ptr + fdeimage.length;
/*
fprintf(stderr,"FDE found at %p\n", ptr );
dumpbytes(ptr,fdeimage.length);
*/


        if (fdeimage.length==0)
        {
                /* Have zero terminator */
                return 0;
        }

        fdeimage.CIE_pointer = *(int *)ptr;
		offsetptr = ptr;
        ptr += 4;
        used += 4;
       
        for (cie=cie_list; cie !=0; cie=cie->next) {
		  if ((offsetptr - fdeimage.CIE_pointer) == cie->cie_start_addr) 
		     break;
		}

        if (cie) {
		   /* XXX use  cie->fde_encoding to retrieve initial_loc and addr_range pointers */
		} else {
            fprintf(stderr,"FDE contains invalid CIE pointer %lx\n", 
			                (unsigned long)fdeimage.CIE_pointer);
		}

        fdeimage.initial_location = *(long **)ptr;
        ptr += sizeof(long);
        used += sizeof(long);
        
/*        fdeimage.address_range = decode_uleb128(ptr,&numused); */
        fdeimage.address_range = (long)(*ptr);
        ptr += sizeof(long);
        used += sizeof(long);

        if (cie && (cie->augmentation[0] == 'z')) {
		   fdeimage.augmentation_len = decode_uleb128(ptr,&numused);
		   ptr+= numused;
		   used += 4;
		}
		if (fdeimage.augmentation_len) {
		   fdeimage.augmentation_data = ptr;
		   ptr += fdeimage.augmentation_len;
		}

        if(elfchk_debug & DEBUG_DWARF_CONTENTS) {
		        int i;
                fprintf(stderr,"length: %x\n", fdeimage.length);
                fprintf(stderr,"CIE_pointer: %x\n", fdeimage.CIE_pointer);
                fprintf(stderr,"initial_location: %p\n", 
                        fdeimage.initial_location);
                fprintf(stderr,"address_range: %lx (%p)\n", 
                        fdeimage.address_range,
                        ((char *)fdeimage.initial_location) 
                        + fdeimage.address_range);
                fprintf(stderr,"augmentation length: %x\n", fdeimage.augmentation_len);
                fprintf(stderr,"augmentation data: ");
				for (i=0; i < fdeimage.augmentation_len; i++) {
				   fprintf (stderr, " %02x", fdeimage.augmentation_data[i]);
				}
                fprintf(stderr,"\n");
        }

        while(ptr<endptr)
                ptr += check_CFI(ptr, error);

        return fdeimage.length + 4; /* length+sizeof(length) */
}

int check_CFInformation(unsigned char *ptr, int *error)
{
        int     used, numused = 0;
        CIEFrameImage *frameimg;
        *error = 0;
        frameimg = (CIEFrameImage *)ptr;
		CIEFrame *cie_list = 0;

        while (frameimg->length!=0)
        {
                /* If the length of the frame is a zero terminating
                   frame and we shouldn't attempt to parse it */
                if (frameimg->cie==0)
                {
                        /* Have CIE */
                        if (elfchk_debug & DEBUG_DWARF_CONTENTS)
                        {
                                fprintf(stderr, "-----------------------\n");
                                fprintf(stderr, "CIE record\n");
                        }
                        used = check_CIE(&cie_list, ptr, error);
						if (used == -1)  /* alloc failure */
						{
						  return -1;
						}
						   
                }
                else
                {
                        if (elfchk_debug & DEBUG_DWARF_CONTENTS)
                        {
                                fprintf(stderr, "-----------------------\n");
                                fprintf(stderr, "FDE record\n");
                        }
                        used = check_FDE(cie_list, ptr, error); 
						if (used == -1)  
						{
						  return -1;
						}
                }
                numused+=used;
                ptr += used;
                frameimg = (CIEFrameImage *)ptr;
        }
        return numused;
}

int check_CIE(CIEFrame **cie_list, unsigned char *ptr, int *error)
{
        CIEFrameImage *frameimg;
        CIEFrame *frame;
        unsigned char *start = ptr;
        unsigned char *cfi_start;
        int numused;

        if ((frame=(CIEFrame *)calloc(1, sizeof(CIEFrame))) == NULL) {
		   fprintf (stderr, "Unable to alloc CIE frame memory for %08lx\n", (unsigned long)ptr);
		   return -1; 
		}
		frame->next = *cie_list;
		*cie_list = frame;
		frame->cie_start_addr = ptr;
		
        frameimg = (CIEFrameImage *)ptr;
        frame->length = frameimg->length;
        frame->cie = frameimg->cie;
        frame->version = frameimg->version;
        frame->augmentation = frameimg->augmentation;

        if (elfchk_debug & DEBUG_DWARF_CONTENTS) {
                fprintf(stderr,"CIE address: %08lx \n ", (unsigned long)(frame->cie_start_addr));
                fprintf(stderr,"length: %x\n", frame->length);
                fprintf(stderr,"cie: %x\n", frame->cie);
                fprintf(stderr,"ver: %x\n", frame->version);
                fprintf(stderr,"aug: %s\n", frame->augmentation);
	}

        ptr = (unsigned char *)(frameimg->augmentation)
                + strlen(frameimg->augmentation) + 1;

        if (strcmp(frame->augmentation, "eh")==0)
        {
                ptr += sizeof(long);
        }

        frame->code_alignment_factor = decode_uleb128(ptr, &numused);
        ptr += numused;

        frame->data_alignment_factor = decode_sleb128(ptr, &numused);
        ptr += numused;

        frame->return_address_register = *ptr++;

        if(elfchk_debug & DEBUG_DWARF_CONTENTS) {
                fprintf(stderr,"code_af: %d\n", frame->code_alignment_factor);
                fprintf(stderr,"data_af: %d\n", frame->data_alignment_factor);
                fprintf(stderr,"return_address_register: %x\n",
                        frame->return_address_register);
	}


        /* Get the info related with 'z' */
        if (frame->augmentation[0] == 'z')
        {
		        int aug_char;

                frame->augmentation_len = decode_uleb128(ptr,&numused);
                ptr += numused;
                if (elfchk_debug & DEBUG_DWARF_CONTENTS) {
                        fprintf(stderr,"augmentation_len: %x\n", 
                                frame->augmentation_len);
                }
                cfi_start = ptr + frame->augmentation_len;

                /* Get the info related with 'P', 'L' and/or 'R' */
				for (aug_char=1; aug_char < strlen(frame->augmentation); aug_char++)
				{

				   switch (frame->augmentation[aug_char]) {
				      case 'P':
                          frame->per_encoding = *ptr++;
						  /* XXX - get the per routine according to the encoding */
                          frame->personality_routine = *(unsigned char **)ptr;
                          ptr += sizeof(unsigned char *);
						  break;
					  case 'L':
						  frame->lsda_encoding = *ptr++;
						  break;
					  case 'R':
						  frame->fde_encoding = *ptr++;
						  break;
					  default:
                          fprintf(stderr,"Unexpected augmentation string %c\n", 
						                 frame->augmentation[aug_char]);
						  break;
				   }
				   
				}

                if (elfchk_debug & DEBUG_DWARF_CONTENTS) {
                        fprintf(stderr,"per encoding: %x\n", frame->per_encoding);
                        fprintf(stderr,"per routine: %p\n", 
                                frame->personality_routine);
                }
                /* We use the offset from the augmentation
                   to ignore any other information in the augmentation */
                ptr = cfi_start;
        }


        /* Get the CFIs */
        if (elfchk_debug&DEBUG_DWARF_CONTENTS) {
                fprintf(stderr,"%x bytes of CFI\n", 
                        (int)(ptr - (unsigned char *)frameimg));
	}

        while ( (ptr - (unsigned char *)frameimg) < 
                frameimg->length + sizeof(int) ) {
                ptr += check_CFI(ptr, error);
	}

        return ptr - start;
}

void *
read_FDE_encoded(unsigned char *ptr, unsigned char encoding, int *numused)
{
        void *tmp;

        if (encoding == DW_EH_PE_omit) 
        {
                *numused = 0;
                return 0;
	}

        switch (encoding & 0x0f) {
	case DW_EH_PE_uleb128:
		tmp = (void *) decode_uleb128(ptr,numused);
		return tmp;
	case DW_EH_PE_udata2:
		tmp = (void *)(long)(*(unsigned short *)ptr);
		*numused = 2;
		return tmp;
	case DW_EH_PE_udata4:
		tmp = (void *)(long)(*(unsigned int *)ptr);
		*numused = 4;
		return tmp;
	case DW_EH_PE_udata8:
		tmp = (void *)(long)(*(unsigned long long *)ptr);
		*numused = 8;
		return tmp;
	case DW_EH_PE_sleb128:
		tmp = (void *)decode_sleb128(ptr,numused);
		return tmp;
	case DW_EH_PE_sdata2:
		tmp = (void *)(long)(*(short *)ptr);
		*numused = 2;
		return tmp;
	case DW_EH_PE_sdata4:
		tmp = (void *)(long)(*(int *)ptr);
		*numused = 4;
		return tmp;
	case DW_EH_PE_sdata8:
		tmp = (void *)(long)(*(long long *)ptr);
		*numused = 8;
		return tmp;
	default:
		fprintf(stderr,"read_FDE_encoded() unexpected encoding %x\n",
                        encoding);
                return NULL;
	}
}
