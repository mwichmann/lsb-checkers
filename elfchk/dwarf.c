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
#include "elfchk.h"
#include "dwarf.h"

unsigned long int
read_leb128 (data, length_return, sign)
     unsigned char * data;
     int *           length_return;
     int             sign;
{
  unsigned long int result = 0;
  unsigned int      num_read = 0;
  int               shift = 0;
  unsigned char     byte;

  do
    {
      byte = * data ++;
      num_read ++;

      result |= (byte & 0x7f) << shift;

      shift += 7;

    }
  while (byte & 0x80);

  if (length_return != NULL)
    * length_return = num_read;

  if (sign && (shift < 32) && (byte & 0x40))
    result |= -1 << shift;

  return result;
}

int check_CFI(unsigned char *ptr,int length)
{
        int	numused,used=0;
        int	tmp;

/* XXXSTU - Need to check the values read in each record */


/*
fprintf(stderr,"\nCFI found at %x", ptr );
dumpbytes(ptr,8);
*/

        used++; /* The op code */

        switch( (*ptr)>>6 ) { /* Primary opcodes */
	case DW_CFA_advance_loc:
		if (elfchk_debug & DEBUG_DWARF_CONTENTS) {
			fprintf(stderr,"DW_CFA_advance_loc|" );
		}
		break;
	case DW_CFA_offset:
		if (elfchk_debug & DEBUG_DWARF_CONTENTS) {
			fprintf(stderr,"DW_CFA_offset|" );
		}
		break;
	case DW_CFA_restore:
		if (elfchk_debug & DEBUG_DWARF_CONTENTS) {
			fprintf(stderr,"DW_CFA_restore|" );
		}
		break;
	default:
		fprintf(stderr, "********** Unexpected CFI opcode %x **\n",
                        (*ptr)>>6);
        }

        switch( (*ptr)&0x3f ) { /* Extended opcodes */
	/*
	 * These are dewcribed in Dward 2.0.0 - Section 6.4.2
	 */
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
		tmp = read_leb128(ptr,&numused,1);
                ptr+=numused;
                used+=numused;

		/* Operand 2 - ULEB128 offset */
		tmp = read_leb128(ptr,&numused,1);
                ptr += numused;
                used += numused;
		break;

	case DW_CFA_restore_extended:
		if (elfchk_debug & DEBUG_DWARF_CONTENTS) {
			fprintf(stderr,"DW_CFA_restore_extended\n" );
                }

		/* Operand 1 - ULEB128 register */
		tmp = read_leb128(ptr,&numused,1);
                ptr+=numused;
                used+=numused;
		break;

	case DW_CFA_undefined:
		if (elfchk_debug & DEBUG_DWARF_CONTENTS) {
			fprintf(stderr,"DW_CFA_undefined\n" );
                }

		/* Operand 1 - ULEB128 register */
		tmp = read_leb128(ptr,&numused,1);
                ptr+=numused;
                used+=numused;
		break;

	case DW_CFA_same_value:
		if (elfchk_debug & DEBUG_DWARF_CONTENTS) {
			fprintf(stderr,"DW_CFA_same_value\n" );
                }

		/* Operand 1 - ULEB128 register */
		tmp = read_leb128(ptr,&numused,1);
                ptr+=numused;
                used+=numused;
		break;

	case DW_CFA_register:
		if (elfchk_debug & DEBUG_DWARF_CONTENTS) {
			fprintf(stderr,"DW_CFA_register\n" );
                }

		/* Operand 1 - ULEB128 register */
		tmp = read_leb128(ptr,&numused,1);
                ptr+=numused;
                used+=numused;

		/* Operand 2 - ULEB128 register */
		tmp = read_leb128(ptr,&numused,1);
                ptr += numused;
                used += numused;
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
			fprintf(stderr,"DW_CFA_def_cfa\n" );
                }

		/* Operand 1 - ULEB128 register */
		tmp = read_leb128(ptr,&numused,0);
                ptr += numused;
                used += numused;

		/* Operand 2 - ULEB128 offset */
		tmp = read_leb128(ptr,&numused,0);
                ptr += numused;
                used += numused;
		break;

	case DW_CFA_def_cfa_register:
		if (elfchk_debug & DEBUG_DWARF_CONTENTS) {
			fprintf(stderr,"DW_CFA_def_cfa_register\n" );
                }

		/* Operand 1 - ULEB128 register */
		tmp = read_leb128(ptr,&numused,1);
                ptr += numused;
                used += numused;
		break;

	case DW_CFA_def_cfa_offset:
		if (elfchk_debug&DEBUG_DWARF_CONTENTS) {
			fprintf(stderr,"DW_CFA_def_cfa_offset\n" );
                }

		/* Operand 1 - ULEB128 register */
		tmp = read_leb128(ptr,&numused,1);
                ptr += numused;
                used += numused;
		break;

	default:
		fprintf(stderr, "********** Unexpected CFI opcode %x **\n",
                        *ptr);
        }

        return used;

}

int check_FDE(unsigned char *ptr,int length)
{
        int	numused;
        int	used=0;
        FDEFrameHeader	fdeimage;
        unsigned char *endptr=ptr;

/*
fprintf(stderr,"FDE found at %x\n", ptr );
dumpbytes(ptr,length);
*/

        fdeimage.length = *(int *)ptr;
        ptr += 4;
        length -= 4;
        used += 4;

        fdeimage.CIE_pointer = *(int *)ptr;
        ptr += 4;
        length -= 4;
        used += 4;

        fdeimage.initial_location = *(int **)ptr;
        ptr+=4;
        length-=4;
        used+=4;
        
        fdeimage.address_range = *(int *)ptr;
        ptr += 4;
        length -= 4;
        used += 4;
        
        fdeimage.address_range = read_leb128(ptr,&numused,1);
        ptr += numused;
        length -= numused;
        used += 4;

        if(elfchk_debug & DEBUG_DWARF_CONTENTS) {
                fprintf(stderr,"length: %x\n", fdeimage.length);
                fprintf(stderr,"CIE_pointer: %x\n", fdeimage.CIE_pointer);
                fprintf(stderr,"initial_location: %p\n", 
                        fdeimage.initial_location);
                fprintf(stderr,"address_range: %x\n", fdeimage.address_range);
	}

        endptr += fdeimage.length;
        while(ptr<endptr)
                ptr += check_CFI(ptr,length);

        return fdeimage.length + 4; /* length+sizeof(length) */
}

int check_CIE(unsigned char *ptr,int length)
{
        int     used,numused;
        CIEFrameImage *frameimg;
        CIEFrame frame;

        frameimg = (CIEFrameImage *)ptr;

/*
fprintf(stderr,"CIE found at %x\n", ptr );
dumpbytes(frameimg,frameimg->length);
*/
        /* If the length of the frame is a zero terminating
           frame and we shouldn't attempt to parse it */
        if (frameimg->length==0)
                return 0;
        
        frame.length = frameimg->length;
        frame.cie = frameimg->cie;
        frame.version = frameimg->version;
        frame.augmentation = frameimg->augmentation;

        if (elfchk_debug & DEBUG_DWARF_CONTENTS) {
                fprintf(stderr,"length: %x\n", frame.length);
                fprintf(stderr,"cie: %x\n", frame.cie);
                fprintf(stderr,"ver: %x\n", frame.version);
                fprintf(stderr,"aug: %s\n", frame.augmentation);
	}

        ptr = (unsigned char *)(frameimg->augmentation)
                + strlen(frameimg->augmentation) + 1;

        frame.code_alignment_factor = read_leb128(ptr, &numused, 0);
        ptr += numused;

        frame.data_alignment_factor = read_leb128(ptr,&numused,1);
        ptr+=numused;

        frame.return_address_register = *ptr++;

        if(elfchk_debug & DEBUG_DWARF_CONTENTS) {
                fprintf(stderr,"code_af: %d\n", frame.code_alignment_factor);
                fprintf(stderr,"data_af: %d\n", frame.data_alignment_factor);
                fprintf(stderr,"return_address_register: %x\n",
                        frame.return_address_register);
	}

        /* Get the info related with 'z' */
        frame.augmentation_len = read_leb128(ptr,&numused,0);
        ptr += numused;
        if (elfchk_debug & DEBUG_DWARF_CONTENTS) {
                fprintf(stderr,"augmentation_len: %x\n", 
                        frame.augmentation_len);
	}

        /* Get the info related with 'P' */
        frame.encoding =* ptr++;
        frame.personality_routine = *(unsigned char **)ptr;
        ptr += sizeof(unsigned char *);

        if (elfchk_debug & DEBUG_DWARF_CONTENTS) {
                fprintf(stderr,"encoding: %x\n", frame.encoding);
                fprintf(stderr,"per routine: %p\n", frame.personality_routine);
	}

        /* Get the CFIs */
        if (elfchk_debug&DEBUG_DWARF_CONTENTS) {
                fprintf(stderr,"%x bytes of CFI\n", 
                        ptr - (unsigned char *)frameimg);
	}

        while ( (ptr - (unsigned char *)frameimg) < 
                frameimg->length + sizeof(int) ) {
                ptr += check_CFI(ptr, (frameimg->length+sizeof(int))-
                                 (ptr-(unsigned char *)frameimg) );
	}

        length -= frame.length;
        numused = frame.length;

        /* Align to 4 byte boundary */
        ptr = (unsigned char *)((long)(ptr+3)&~3);

        while (length>0) {
                used = check_FDE(ptr,length);
                length -= used;
                numused += used;
	}

        return numused;
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
		tmp = (void *) read_leb128(ptr,numused,0);
		return tmp;
	case DW_EH_PE_udata2:
		tmp = (void *)(long)(*(unsigned short *)ptr);
		*numused = 2;
		return tmp;
	case DW_EH_PE_udata4:
		tmp = (void *)(*(unsigned int *)ptr);
		*numused = 4;
		return tmp;
	case DW_EH_PE_udata8:
		tmp = (void *)(long)(*(unsigned long long *)ptr);
		*numused = 8;
		return tmp;
	case DW_EH_PE_sleb128:
		tmp = (void *)read_leb128(ptr,numused,1);
		return tmp;
	case DW_EH_PE_sdata2:
		tmp = (void *)(long)(*(short *)ptr);
		*numused = 2;
		return tmp;
	case DW_EH_PE_sdata4:
		tmp = (void *)(*(int *)ptr);
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
