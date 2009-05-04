/*
 * Test of cups/raster.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#define __LSB_VERSION__ 40
#include "cups/raster.h"



#ifdef TET_TEST
void cups_raster_h()
{
#else
int cups_raster_h()
{
#endif

int cnt=0;

int pcnt=0;
char *real_macro_value, *stripped_macro_value;
int macro_ndx, stripped_value_ndx;
real_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );
stripped_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );

#ifdef TET_TEST
Msg("Checking data structures in cups/raster.h\n");
#endif

printf("Checking data structures in cups/raster.h\n");
#if _LSB_DEFAULT_ARCH
#ifdef CUPS_RASTER_HAVE_COLORIMETRIC
	CompareConstant(CUPS_RASTER_HAVE_COLORIMETRIC,1,11895,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: CUPS_RASTER_HAVE_COLORIMETRIC\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef CUPS_RASTER_REVSYNC
	CompareConstant(CUPS_RASTER_REVSYNC,0x74536152,11896,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: CUPS_RASTER_REVSYNC\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef CUPS_RASTER_SYNC
	CompareConstant(CUPS_RASTER_SYNC,0x52615374,11897,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: CUPS_RASTER_SYNC\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifndef _CUPS_RASTER_H_
Msg( "Error: Constant not found: _CUPS_RASTER_H_\n");
cnt++;
#endif

#endif

#if 1
CheckTypeSize(cups_mode_t,4, 29609, 1, 3.2, NULL, 29608, NULL)
#endif

#if 1
CheckTypeSize(cups_adv_t,4, 29615, 1, 3.2, NULL, 29614, NULL)
#endif

#if 1
CheckTypeSize(cups_bool_t,4, 29617, 1, 3.2, NULL, 29616, NULL)
#endif

#if 1
CheckTypeSize(cups_cut_t,4, 29619, 1, 3.2, NULL, 29618, NULL)
#endif

#if 1
CheckTypeSize(cups_jog_t,4, 29622, 1, 3.2, NULL, 29621, NULL)
#endif

#if 1
CheckTypeSize(cups_edge_t,4, 29624, 1, 3.2, NULL, 29623, NULL)
#endif

#if 1
CheckTypeSize(cups_orient_t,4, 29626, 1, 3.2, NULL, 29625, NULL)
#endif

#if 1
CheckTypeSize(cups_order_t,4, 29628, 1, 3.2, NULL, 29627, NULL)
#endif

#if defined __s390x__
CheckTypeSize(cups_cspace_t,4, 29630, 12, 3.2, NULL, 29629, NULL)
#elif defined __x86_64__
CheckTypeSize(cups_cspace_t,4, 29630, 11, 3.2, NULL, 29629, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(cups_cspace_t,4, 29630, 10, 3.2, NULL, 29629, NULL)
#elif defined __powerpc64__
CheckTypeSize(cups_cspace_t,4, 29630, 9, 3.2, NULL, 29629, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(cups_cspace_t,4, 29630, 6, 3.2, NULL, 29629, NULL)
#elif defined __ia64__
CheckTypeSize(cups_cspace_t,4, 29630, 3, 3.2, NULL, 29629, NULL)
#elif defined __i386__
CheckTypeSize(cups_cspace_t,4, 29630, 2, 3.2, NULL, 29629, NULL)
#else
Msg("Find size of cups_cspace_t (29630)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.2""',NULL,29629,NULL);\n",architecture,29630,0);
#endif

#if defined __s390x__
CheckTypeSize(cups_page_header_t,420, 29632, 12, 3.2, NULL, 29631, NULL)
#elif defined __x86_64__
CheckTypeSize(cups_page_header_t,420, 29632, 11, 3.2, NULL, 29631, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(cups_page_header_t,420, 29632, 10, 3.2, NULL, 29631, NULL)
#elif defined __powerpc64__
CheckTypeSize(cups_page_header_t,420, 29632, 9, 3.2, NULL, 29631, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(cups_page_header_t,420, 29632, 6, 3.2, NULL, 29631, NULL)
#elif defined __ia64__
CheckTypeSize(cups_page_header_t,420, 29632, 3, 3.2, NULL, 29631, NULL)
#elif defined __i386__
CheckTypeSize(cups_page_header_t,420, 29632, 2, 3.2, NULL, 29631, NULL)
#else
Msg("Find size of cups_page_header_t (29632)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.2""',NULL,29631, NULL);\n",architecture,29632,0);
#endif

extern void cupsRasterClose_db(cups_raster_t *);
CheckInterfacedef(cupsRasterClose,cupsRasterClose_db);
extern unsigned int cupsRasterWritePixels_db(cups_raster_t *, unsigned char *, unsigned int);
CheckInterfacedef(cupsRasterWritePixels,cupsRasterWritePixels_db);
extern unsigned int cupsRasterReadHeader_db(cups_raster_t *, cups_page_header_t *);
CheckInterfacedef(cupsRasterReadHeader,cupsRasterReadHeader_db);
extern unsigned int cupsRasterReadPixels_db(cups_raster_t *, unsigned char *, unsigned int);
CheckInterfacedef(cupsRasterReadPixels,cupsRasterReadPixels_db);
extern cups_raster_t * cupsRasterOpen_db(int, cups_mode_t);
CheckInterfacedef(cupsRasterOpen,cupsRasterOpen_db);
extern unsigned int cupsRasterWriteHeader_db(cups_raster_t *, cups_page_header_t *);
CheckInterfacedef(cupsRasterWriteHeader,cupsRasterWriteHeader_db);
#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests passed out of %d tests in cups/raster.h\n\n",pcnt,cnt);
return cnt;
#endif

}
