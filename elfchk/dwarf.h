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
#include "dwarf2.h"

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

/* dwarf.c */
extern unsigned long int read_leb128(unsigned char *data, int *length_return, int sign);
extern int check_CFI(unsigned char *ptr, int length);
extern int check_FDE(unsigned char *ptr, int length);
extern int check_CIE(unsigned char *ptr, int length);
extern void *read_FDE_encoded(unsigned char *ptr, unsigned char encoding, int *numused);
#endif /* _DWARF_H */
