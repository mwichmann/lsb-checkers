/* $XFree86: xc/programs/Xserver/hw/xfree86/loader/ar.h,v 1.3 1998/07/25 16:56:12 dawes Exp $ */

#ifndef _AR_H
#define _AR_H

#define ARMAG "!<arch>\n"
#define SARMAG 8
#define ARFMAG "`\n"

struct ar_hdr {
    char ar_name[16];
    char ar_date[12];
    char ar_uid[6];
    char ar_gid[6];
    char ar_mode[8];
    char ar_size[10];
    char ar_fmag[2];
};

#endif /* _AR_H */
