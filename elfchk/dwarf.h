/*
 *
 * Copyright (c) 2002 The Free Standards Group Inc
 * Copyright (c) 2002 Stuart Anderson (anderson@freestandards.org)
 *
 */
#ifndef _DWARF_H
#define _DWARF_H

#include <sys/types.h>
#include <elf.h>

typedef struct CIEFrameImage {
	Elf32_Word	length;
	Elf32_Word	cie;
	char		version;
	char		augmentation[1];
	} CIEFrameImage;

typedef struct CIEFrame {
	Elf32_Word	length;
	Elf32_Word	cie;
	char		version;
	char		*augmentation;
	int		code_alignment_factor;
	int		data_alignment_factor;
	int		return_address_register;
	int		augmentation_len;
	unsigned char	*augmentation_data;
	int		initial_instructions;
	int		encoding;
	unsigned char	*personality_routine;
	} CIEFrame;

typedef struct FDEFrameHeader {
	Elf32_Word	length;
	Elf32_Word	CIE_pointer;
	int		*initial_location;
	int		address_range;
	} FDEFrameHeader;

typedef struct EHFRMHDRImage {
	unsigned char	version;
	unsigned char	eh_frame_ptr_enc;
	unsigned char	fde_count_enc;
	unsigned char	table_enc;
	} EHFRMHDRImage;

typedef struct EHFRMHDR {
	unsigned char	version;
	unsigned char	eh_frame_ptr_enc;
	unsigned char	fde_count_enc;
	unsigned char	table_enc;
	void		*eh_frame_ptr;
	int		fde_count;
	} EHFRMHDR;

/* DWARF Call Frame Instruction - Taken from DWARF v2.0.0 */

/* Primary Opcodes */

#define DW_CFA_advance_loc	(0x01<<6)
#define DW_CFA_offset		(0x02<<6)
#define DW_CFA_restore		(0x03<<6)

/* Extended Opcodes (Primary == 0) */

#define DW_CFA_nop		0x00
#define DW_CFA_set_loc		0x01
#define DW_CFA_advance_loc1	0x02
#define DW_CFA_advance_loc2	0x03
#define DW_CFA_advance_loc4	0x04
#define DW_CFA_offset_extended	0x05
#define DW_CFA_restore_extended	0x06
#define DW_CFA_undefined	0x07
#define DW_CFA_same_value	0x08
#define DW_CFA_register		0x09
#define DW_CFA_remember_state	0x0A
#define DW_CFA_restore_state	0x0B
#define DW_CFA_def_cfa		0x0C
#define DW_CFA_def_cfa_register	0x0D
#define DW_CFA_def_cfa_offset	0x0E

/* Extra v3 instructions */

#define DW_CFA_expression          0x10
#define DW_CFA_offset_extended_sf  0x11
#define DW_CFA_def_cfa_sf          0x12
#define DW_CFA_def_cfa_offset_sf   0x13

/* GNU Stuff */
#define DW_CFA_GNU_args_size  0x2e

/* DWARF Exception Header Encoding - Taken from LSB v1.3 */

/* DWARF Exception Header value format */

#define DW_EH_PE_omit           0xff

#define DW_EH_PE_uleb128        0x01
#define DW_EH_PE_udata2         0x02
#define DW_EH_PE_udata4         0x03
#define DW_EH_PE_udata8         0x04
#define DW_EH_PE_sleb128        0x09
#define DW_EH_PE_sdata2         0x0A
#define DW_EH_PE_sdata4         0x0B
#define DW_EH_PE_sdata8         0x0C

/* DWARF Exception Header application */

#define DW_EH_PE_absptr         0x00
#define DW_EH_PE_pcrel          0x10
#define DW_EH_PE_datarel        0x30


/* dwarf.c */
extern unsigned long int read_leb128(unsigned char *data, int *length_return, int sign);
extern int check_CFI(unsigned char *ptr);
extern int check_FDE(unsigned char *ptr);
extern int check_CIE(unsigned char *ptr);
extern int check_CFInformation(unsigned char *ptr);
extern void *read_FDE_encoded(unsigned char *ptr, unsigned char encoding, int *numused);
#endif /* _DWARF_H */
