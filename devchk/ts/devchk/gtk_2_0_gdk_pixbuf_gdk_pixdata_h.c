/*
 * Test of gtk-2.0/gdk-pixbuf/gdk-pixdata.h
 */
#include "hdrchk.h"
#include "sys/types.h"
#define _LSB_DEFAULT_ARCH 1
#include "gtk-2.0/gdk-pixbuf/gdk-pixdata.h"



#ifdef TET_TEST
void gtk_2_0_gdk_pixbuf_gdk_pixdata_h()
{
#else
int gtk_2_0_gdk_pixbuf_gdk_pixdata_h()
{
#endif

int cnt=0;

int pcnt=0;
#ifdef TET_TEST
Msg("Checking data structures in gtk-2.0/gdk-pixbuf/gdk-pixdata.h\n");
#endif

printf("Checking data structures in gtk-2.0/gdk-pixbuf/gdk-pixdata.h\n");
#if _LSB_DEFAULT_ARCH
/* No test for GDK_PIXBUF_MAGIC_NUMBER */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GDK_PIXDATA_HEADER_LENGTH */
#endif

#if __i386__
CheckTypeSize(struct _GdkPixdata,28, 12650, 2)
CheckMemberSize(struct _GdkPixdata,length,4,2,43356)
CheckOffset(struct _GdkPixdata,length,4,2,43356)
CheckMemberSize(struct _GdkPixdata,pixdata_type,4,2,43357)
CheckOffset(struct _GdkPixdata,pixdata_type,8,2,43357)
CheckMemberSize(struct _GdkPixdata,rowstride,4,2,43358)
CheckOffset(struct _GdkPixdata,rowstride,12,2,43358)
CheckMemberSize(struct _GdkPixdata,width,4,2,43359)
CheckOffset(struct _GdkPixdata,width,16,2,43359)
CheckMemberSize(struct _GdkPixdata,height,4,2,43360)
CheckOffset(struct _GdkPixdata,height,20,2,43360)
CheckMemberSize(struct _GdkPixdata,pixel_data,4,2,43361)
CheckOffset(struct _GdkPixdata,pixel_data,24,2,43361)
#elif __x86_64__
CheckTypeSize(struct _GdkPixdata,32, 12650, 11)
CheckMemberSize(struct _GdkPixdata,length,4,11,43356)
CheckOffset(struct _GdkPixdata,length,4,11,43356)
CheckMemberSize(struct _GdkPixdata,pixdata_type,4,11,43357)
CheckOffset(struct _GdkPixdata,pixdata_type,8,11,43357)
CheckMemberSize(struct _GdkPixdata,rowstride,4,11,43358)
CheckOffset(struct _GdkPixdata,rowstride,12,11,43358)
CheckMemberSize(struct _GdkPixdata,width,4,11,43359)
CheckOffset(struct _GdkPixdata,width,16,11,43359)
CheckMemberSize(struct _GdkPixdata,height,4,11,43360)
CheckOffset(struct _GdkPixdata,height,20,11,43360)
CheckMemberSize(struct _GdkPixdata,pixel_data,8,11,43361)
CheckOffset(struct _GdkPixdata,pixel_data,24,11,43361)
#elif __ia64__
CheckTypeSize(struct _GdkPixdata,32, 12650, 3)
CheckMemberSize(struct _GdkPixdata,length,4,3,43356)
CheckOffset(struct _GdkPixdata,length,4,3,43356)
CheckMemberSize(struct _GdkPixdata,pixdata_type,4,3,43357)
CheckOffset(struct _GdkPixdata,pixdata_type,8,3,43357)
CheckMemberSize(struct _GdkPixdata,rowstride,4,3,43358)
CheckOffset(struct _GdkPixdata,rowstride,12,3,43358)
CheckMemberSize(struct _GdkPixdata,width,4,3,43359)
CheckOffset(struct _GdkPixdata,width,16,3,43359)
CheckMemberSize(struct _GdkPixdata,height,4,3,43360)
CheckOffset(struct _GdkPixdata,height,20,3,43360)
CheckMemberSize(struct _GdkPixdata,pixel_data,8,3,43361)
CheckOffset(struct _GdkPixdata,pixel_data,24,3,43361)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(struct _GdkPixdata,28, 12650, 6)
CheckMemberSize(struct _GdkPixdata,length,4,6,43356)
CheckOffset(struct _GdkPixdata,length,4,6,43356)
CheckMemberSize(struct _GdkPixdata,pixdata_type,4,6,43357)
CheckOffset(struct _GdkPixdata,pixdata_type,8,6,43357)
CheckMemberSize(struct _GdkPixdata,rowstride,4,6,43358)
CheckOffset(struct _GdkPixdata,rowstride,12,6,43358)
CheckMemberSize(struct _GdkPixdata,width,4,6,43359)
CheckOffset(struct _GdkPixdata,width,16,6,43359)
CheckMemberSize(struct _GdkPixdata,height,4,6,43360)
CheckOffset(struct _GdkPixdata,height,20,6,43360)
CheckMemberSize(struct _GdkPixdata,pixel_data,4,6,43361)
CheckOffset(struct _GdkPixdata,pixel_data,24,6,43361)
#elif __powerpc64__
CheckTypeSize(struct _GdkPixdata,32, 12650, 9)
CheckMemberSize(struct _GdkPixdata,length,4,9,43356)
CheckOffset(struct _GdkPixdata,length,4,9,43356)
CheckMemberSize(struct _GdkPixdata,pixdata_type,4,9,43357)
CheckOffset(struct _GdkPixdata,pixdata_type,8,9,43357)
CheckMemberSize(struct _GdkPixdata,rowstride,4,9,43358)
CheckOffset(struct _GdkPixdata,rowstride,12,9,43358)
CheckMemberSize(struct _GdkPixdata,width,4,9,43359)
CheckOffset(struct _GdkPixdata,width,16,9,43359)
CheckMemberSize(struct _GdkPixdata,height,4,9,43360)
CheckOffset(struct _GdkPixdata,height,20,9,43360)
CheckMemberSize(struct _GdkPixdata,pixel_data,8,9,43361)
CheckOffset(struct _GdkPixdata,pixel_data,24,9,43361)
#elif __s390__ && !__s390x__
CheckTypeSize(struct _GdkPixdata,28, 12650, 10)
CheckMemberSize(struct _GdkPixdata,length,4,10,43356)
CheckOffset(struct _GdkPixdata,length,4,10,43356)
CheckMemberSize(struct _GdkPixdata,pixdata_type,4,10,43357)
CheckOffset(struct _GdkPixdata,pixdata_type,8,10,43357)
CheckMemberSize(struct _GdkPixdata,rowstride,4,10,43358)
CheckOffset(struct _GdkPixdata,rowstride,12,10,43358)
CheckMemberSize(struct _GdkPixdata,width,4,10,43359)
CheckOffset(struct _GdkPixdata,width,16,10,43359)
CheckMemberSize(struct _GdkPixdata,height,4,10,43360)
CheckOffset(struct _GdkPixdata,height,20,10,43360)
CheckMemberSize(struct _GdkPixdata,pixel_data,4,10,43361)
CheckOffset(struct _GdkPixdata,pixel_data,24,10,43361)
#elif __s390x__
CheckTypeSize(struct _GdkPixdata,32, 12650, 12)
CheckMemberSize(struct _GdkPixdata,length,4,12,43356)
CheckOffset(struct _GdkPixdata,length,4,12,43356)
CheckMemberSize(struct _GdkPixdata,pixdata_type,4,12,43357)
CheckOffset(struct _GdkPixdata,pixdata_type,8,12,43357)
CheckMemberSize(struct _GdkPixdata,rowstride,4,12,43358)
CheckOffset(struct _GdkPixdata,rowstride,12,12,43358)
CheckMemberSize(struct _GdkPixdata,width,4,12,43359)
CheckOffset(struct _GdkPixdata,width,16,12,43359)
CheckMemberSize(struct _GdkPixdata,height,4,12,43360)
CheckOffset(struct _GdkPixdata,height,20,12,43360)
CheckMemberSize(struct _GdkPixdata,pixel_data,8,12,43361)
CheckOffset(struct _GdkPixdata,pixel_data,24,12,43361)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12650,0);
Msg("Find size of _GdkPixdata (12650)\n");
#endif

#if __i386__
CheckTypeSize(GdkPixdata,28, 12651, 2)
#elif __x86_64__
CheckTypeSize(GdkPixdata,32, 12651, 11)
#elif __ia64__
CheckTypeSize(GdkPixdata,32, 12651, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(GdkPixdata,28, 12651, 6)
#elif __powerpc64__
CheckTypeSize(GdkPixdata,32, 12651, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(GdkPixdata,28, 12651, 10)
#elif __s390x__
CheckTypeSize(GdkPixdata,32, 12651, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12651,0);
Msg("Find size of GdkPixdata (12651)\n");
#endif

#if __i386__
CheckTypeSize(GdkPixdata *,4, 12652, 2)
#elif __x86_64__
CheckTypeSize(GdkPixdata *,8, 12652, 11)
#elif __ia64__
CheckTypeSize(GdkPixdata *,8, 12652, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(GdkPixdata *,4, 12652, 6)
#elif __powerpc64__
CheckTypeSize(GdkPixdata *,8, 12652, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(GdkPixdata *,4, 12652, 10)
#elif __s390x__
CheckTypeSize(GdkPixdata *,8, 12652, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12652,0);
Msg("Find size of GdkPixdata * (12652)\n");
#endif

#if __i386__
CheckTypeSize(const GdkPixdata,28, 12653, 2)
#elif __x86_64__
CheckTypeSize(const GdkPixdata,32, 12653, 11)
#elif __ia64__
CheckTypeSize(const GdkPixdata,32, 12653, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(const GdkPixdata,28, 12653, 6)
#elif __powerpc64__
CheckTypeSize(const GdkPixdata,32, 12653, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(const GdkPixdata,28, 12653, 10)
#elif __s390x__
CheckTypeSize(const GdkPixdata,32, 12653, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12653,0);
Msg("Find size of const GdkPixdata (12653)\n");
#endif

#if __i386__
#elif __x86_64__
#elif __ia64__
#elif __powerpc__ && !__powerpc64__
#elif __powerpc64__
#elif __s390__ && !__s390x__
#elif __s390x__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12654,0);
Msg("Find size of const GdkPixdata * (12654)\n");
#endif

#if __i386__
CheckEnum("GDK_PIXDATA_DUMP_PIXDATA_STREAM",GDK_PIXDATA_DUMP_PIXDATA_STREAM,0);
CheckEnum("GDK_PIXDATA_DUMP_PIXDATA_STRUCT",GDK_PIXDATA_DUMP_PIXDATA_STRUCT,1);
CheckEnum("GDK_PIXDATA_DUMP_MACROS",GDK_PIXDATA_DUMP_MACROS,2);
CheckEnum("GDK_PIXDATA_DUMP_GTYPES",GDK_PIXDATA_DUMP_GTYPES,0);
CheckEnum("GDK_PIXDATA_DUMP_CTYPES",GDK_PIXDATA_DUMP_CTYPES,256);
CheckEnum("GDK_PIXDATA_DUMP_STATIC",GDK_PIXDATA_DUMP_STATIC,512);
CheckEnum("GDK_PIXDATA_DUMP_CONST",GDK_PIXDATA_DUMP_CONST,1024);
CheckEnum("GDK_PIXDATA_DUMP_RLE_DECODER",GDK_PIXDATA_DUMP_RLE_DECODER,65536);
#elif __x86_64__
CheckEnum("GDK_PIXDATA_DUMP_PIXDATA_STREAM",GDK_PIXDATA_DUMP_PIXDATA_STREAM,0);
CheckEnum("GDK_PIXDATA_DUMP_PIXDATA_STRUCT",GDK_PIXDATA_DUMP_PIXDATA_STRUCT,1);
CheckEnum("GDK_PIXDATA_DUMP_MACROS",GDK_PIXDATA_DUMP_MACROS,2);
CheckEnum("GDK_PIXDATA_DUMP_GTYPES",GDK_PIXDATA_DUMP_GTYPES,0);
CheckEnum("GDK_PIXDATA_DUMP_CTYPES",GDK_PIXDATA_DUMP_CTYPES,256);
CheckEnum("GDK_PIXDATA_DUMP_STATIC",GDK_PIXDATA_DUMP_STATIC,512);
CheckEnum("GDK_PIXDATA_DUMP_CONST",GDK_PIXDATA_DUMP_CONST,1024);
CheckEnum("GDK_PIXDATA_DUMP_RLE_DECODER",GDK_PIXDATA_DUMP_RLE_DECODER,65536);
#elif __ia64__
CheckEnum("GDK_PIXDATA_DUMP_PIXDATA_STREAM",GDK_PIXDATA_DUMP_PIXDATA_STREAM,0);
CheckEnum("GDK_PIXDATA_DUMP_PIXDATA_STRUCT",GDK_PIXDATA_DUMP_PIXDATA_STRUCT,1);
CheckEnum("GDK_PIXDATA_DUMP_MACROS",GDK_PIXDATA_DUMP_MACROS,2);
CheckEnum("GDK_PIXDATA_DUMP_GTYPES",GDK_PIXDATA_DUMP_GTYPES,0);
CheckEnum("GDK_PIXDATA_DUMP_CTYPES",GDK_PIXDATA_DUMP_CTYPES,256);
CheckEnum("GDK_PIXDATA_DUMP_STATIC",GDK_PIXDATA_DUMP_STATIC,512);
CheckEnum("GDK_PIXDATA_DUMP_CONST",GDK_PIXDATA_DUMP_CONST,1024);
CheckEnum("GDK_PIXDATA_DUMP_RLE_DECODER",GDK_PIXDATA_DUMP_RLE_DECODER,65536);
#elif __powerpc__ && !__powerpc64__
CheckEnum("GDK_PIXDATA_DUMP_PIXDATA_STREAM",GDK_PIXDATA_DUMP_PIXDATA_STREAM,0);
CheckEnum("GDK_PIXDATA_DUMP_PIXDATA_STRUCT",GDK_PIXDATA_DUMP_PIXDATA_STRUCT,1);
CheckEnum("GDK_PIXDATA_DUMP_MACROS",GDK_PIXDATA_DUMP_MACROS,2);
CheckEnum("GDK_PIXDATA_DUMP_GTYPES",GDK_PIXDATA_DUMP_GTYPES,0);
CheckEnum("GDK_PIXDATA_DUMP_CTYPES",GDK_PIXDATA_DUMP_CTYPES,256);
CheckEnum("GDK_PIXDATA_DUMP_STATIC",GDK_PIXDATA_DUMP_STATIC,512);
CheckEnum("GDK_PIXDATA_DUMP_CONST",GDK_PIXDATA_DUMP_CONST,1024);
CheckEnum("GDK_PIXDATA_DUMP_RLE_DECODER",GDK_PIXDATA_DUMP_RLE_DECODER,65536);
#elif __powerpc64__
CheckEnum("GDK_PIXDATA_DUMP_PIXDATA_STREAM",GDK_PIXDATA_DUMP_PIXDATA_STREAM,0);
CheckEnum("GDK_PIXDATA_DUMP_PIXDATA_STRUCT",GDK_PIXDATA_DUMP_PIXDATA_STRUCT,1);
CheckEnum("GDK_PIXDATA_DUMP_MACROS",GDK_PIXDATA_DUMP_MACROS,2);
CheckEnum("GDK_PIXDATA_DUMP_GTYPES",GDK_PIXDATA_DUMP_GTYPES,0);
CheckEnum("GDK_PIXDATA_DUMP_CTYPES",GDK_PIXDATA_DUMP_CTYPES,256);
CheckEnum("GDK_PIXDATA_DUMP_STATIC",GDK_PIXDATA_DUMP_STATIC,512);
CheckEnum("GDK_PIXDATA_DUMP_CONST",GDK_PIXDATA_DUMP_CONST,1024);
CheckEnum("GDK_PIXDATA_DUMP_RLE_DECODER",GDK_PIXDATA_DUMP_RLE_DECODER,65536);
#elif __s390__ && !__s390x__
CheckEnum("GDK_PIXDATA_DUMP_PIXDATA_STREAM",GDK_PIXDATA_DUMP_PIXDATA_STREAM,0);
CheckEnum("GDK_PIXDATA_DUMP_PIXDATA_STRUCT",GDK_PIXDATA_DUMP_PIXDATA_STRUCT,1);
CheckEnum("GDK_PIXDATA_DUMP_MACROS",GDK_PIXDATA_DUMP_MACROS,2);
CheckEnum("GDK_PIXDATA_DUMP_GTYPES",GDK_PIXDATA_DUMP_GTYPES,0);
CheckEnum("GDK_PIXDATA_DUMP_CTYPES",GDK_PIXDATA_DUMP_CTYPES,256);
CheckEnum("GDK_PIXDATA_DUMP_STATIC",GDK_PIXDATA_DUMP_STATIC,512);
CheckEnum("GDK_PIXDATA_DUMP_CONST",GDK_PIXDATA_DUMP_CONST,1024);
CheckEnum("GDK_PIXDATA_DUMP_RLE_DECODER",GDK_PIXDATA_DUMP_RLE_DECODER,65536);
#elif __s390x__
CheckEnum("GDK_PIXDATA_DUMP_PIXDATA_STREAM",GDK_PIXDATA_DUMP_PIXDATA_STREAM,0);
CheckEnum("GDK_PIXDATA_DUMP_PIXDATA_STRUCT",GDK_PIXDATA_DUMP_PIXDATA_STRUCT,1);
CheckEnum("GDK_PIXDATA_DUMP_MACROS",GDK_PIXDATA_DUMP_MACROS,2);
CheckEnum("GDK_PIXDATA_DUMP_GTYPES",GDK_PIXDATA_DUMP_GTYPES,0);
CheckEnum("GDK_PIXDATA_DUMP_CTYPES",GDK_PIXDATA_DUMP_CTYPES,256);
CheckEnum("GDK_PIXDATA_DUMP_STATIC",GDK_PIXDATA_DUMP_STATIC,512);
CheckEnum("GDK_PIXDATA_DUMP_CONST",GDK_PIXDATA_DUMP_CONST,1024);
CheckEnum("GDK_PIXDATA_DUMP_RLE_DECODER",GDK_PIXDATA_DUMP_RLE_DECODER,65536);
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12655,0);
Msg("Find size of anon-gtk-2.0/gdk-pixbuf/gdk-pixdata.h-25 (12655)\n");
#endif

#if __i386__
CheckTypeSize(GdkPixdataDumpType,4, 12656, 2)
#elif __x86_64__
CheckTypeSize(GdkPixdataDumpType,4, 12656, 11)
#elif __ia64__
CheckTypeSize(GdkPixdataDumpType,4, 12656, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(GdkPixdataDumpType,4, 12656, 6)
#elif __powerpc64__
CheckTypeSize(GdkPixdataDumpType,4, 12656, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(GdkPixdataDumpType,4, 12656, 10)
#elif __s390x__
CheckTypeSize(GdkPixdataDumpType,4, 12656, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12656,0);
Msg("Find size of GdkPixdataDumpType (12656)\n");
#endif

#if __i386__
CheckEnum("GDK_PIXDATA_COLOR_TYPE_RGB",GDK_PIXDATA_COLOR_TYPE_RGB,0x01);
CheckEnum("GDK_PIXDATA_COLOR_TYPE_RGBA",GDK_PIXDATA_COLOR_TYPE_RGBA,0x02);
CheckEnum("GDK_PIXDATA_COLOR_TYPE_MASK",GDK_PIXDATA_COLOR_TYPE_MASK,0xff);
CheckEnum("GDK_PIXDATA_SAMPLE_WIDTH_8",GDK_PIXDATA_SAMPLE_WIDTH_8,0x01 << 16);
CheckEnum("GDK_PIXDATA_SAMPLE_WIDTH_MASK",GDK_PIXDATA_SAMPLE_WIDTH_MASK,0x0f << 16);
CheckEnum("GDK_PIXDATA_ENCODING_RAW",GDK_PIXDATA_ENCODING_RAW,0x01 << 24);
CheckEnum("GDK_PIXDATA_ENCODING_RLE",GDK_PIXDATA_ENCODING_RLE,0x02 << 24);
CheckEnum("GDK_PIXDATA_ENCODING_MASK",GDK_PIXDATA_ENCODING_MASK,0x0f << 24);
#elif __x86_64__
CheckEnum("GDK_PIXDATA_COLOR_TYPE_RGB",GDK_PIXDATA_COLOR_TYPE_RGB,0x01);
CheckEnum("GDK_PIXDATA_COLOR_TYPE_RGBA",GDK_PIXDATA_COLOR_TYPE_RGBA,0x02);
CheckEnum("GDK_PIXDATA_COLOR_TYPE_MASK",GDK_PIXDATA_COLOR_TYPE_MASK,0xff);
CheckEnum("GDK_PIXDATA_SAMPLE_WIDTH_8",GDK_PIXDATA_SAMPLE_WIDTH_8,0x01 << 16);
CheckEnum("GDK_PIXDATA_SAMPLE_WIDTH_MASK",GDK_PIXDATA_SAMPLE_WIDTH_MASK,0x0f << 16);
CheckEnum("GDK_PIXDATA_ENCODING_RAW",GDK_PIXDATA_ENCODING_RAW,0x01 << 24);
CheckEnum("GDK_PIXDATA_ENCODING_RLE",GDK_PIXDATA_ENCODING_RLE,0x02 << 24);
CheckEnum("GDK_PIXDATA_ENCODING_MASK",GDK_PIXDATA_ENCODING_MASK,0x0f << 24);
#elif __ia64__
CheckEnum("GDK_PIXDATA_COLOR_TYPE_RGB",GDK_PIXDATA_COLOR_TYPE_RGB,0x01);
CheckEnum("GDK_PIXDATA_COLOR_TYPE_RGBA",GDK_PIXDATA_COLOR_TYPE_RGBA,0x02);
CheckEnum("GDK_PIXDATA_COLOR_TYPE_MASK",GDK_PIXDATA_COLOR_TYPE_MASK,0xff);
CheckEnum("GDK_PIXDATA_SAMPLE_WIDTH_8",GDK_PIXDATA_SAMPLE_WIDTH_8,0x01 << 16);
CheckEnum("GDK_PIXDATA_SAMPLE_WIDTH_MASK",GDK_PIXDATA_SAMPLE_WIDTH_MASK,0x0f << 16);
CheckEnum("GDK_PIXDATA_ENCODING_RAW",GDK_PIXDATA_ENCODING_RAW,0x01 << 24);
CheckEnum("GDK_PIXDATA_ENCODING_RLE",GDK_PIXDATA_ENCODING_RLE,0x02 << 24);
CheckEnum("GDK_PIXDATA_ENCODING_MASK",GDK_PIXDATA_ENCODING_MASK,0x0f << 24);
#elif __powerpc__ && !__powerpc64__
CheckEnum("GDK_PIXDATA_COLOR_TYPE_RGB",GDK_PIXDATA_COLOR_TYPE_RGB,0x01);
CheckEnum("GDK_PIXDATA_COLOR_TYPE_RGBA",GDK_PIXDATA_COLOR_TYPE_RGBA,0x02);
CheckEnum("GDK_PIXDATA_COLOR_TYPE_MASK",GDK_PIXDATA_COLOR_TYPE_MASK,0xff);
CheckEnum("GDK_PIXDATA_SAMPLE_WIDTH_8",GDK_PIXDATA_SAMPLE_WIDTH_8,0x01 << 16);
CheckEnum("GDK_PIXDATA_SAMPLE_WIDTH_MASK",GDK_PIXDATA_SAMPLE_WIDTH_MASK,0x0f << 16);
CheckEnum("GDK_PIXDATA_ENCODING_RAW",GDK_PIXDATA_ENCODING_RAW,0x01 << 24);
CheckEnum("GDK_PIXDATA_ENCODING_RLE",GDK_PIXDATA_ENCODING_RLE,0x02 << 24);
CheckEnum("GDK_PIXDATA_ENCODING_MASK",GDK_PIXDATA_ENCODING_MASK,0x0f << 24);
#elif __powerpc64__
CheckEnum("GDK_PIXDATA_COLOR_TYPE_RGB",GDK_PIXDATA_COLOR_TYPE_RGB,0x01);
CheckEnum("GDK_PIXDATA_COLOR_TYPE_RGBA",GDK_PIXDATA_COLOR_TYPE_RGBA,0x02);
CheckEnum("GDK_PIXDATA_COLOR_TYPE_MASK",GDK_PIXDATA_COLOR_TYPE_MASK,0xff);
CheckEnum("GDK_PIXDATA_SAMPLE_WIDTH_8",GDK_PIXDATA_SAMPLE_WIDTH_8,0x01 << 16);
CheckEnum("GDK_PIXDATA_SAMPLE_WIDTH_MASK",GDK_PIXDATA_SAMPLE_WIDTH_MASK,0x0f << 16);
CheckEnum("GDK_PIXDATA_ENCODING_RAW",GDK_PIXDATA_ENCODING_RAW,0x01 << 24);
CheckEnum("GDK_PIXDATA_ENCODING_RLE",GDK_PIXDATA_ENCODING_RLE,0x02 << 24);
CheckEnum("GDK_PIXDATA_ENCODING_MASK",GDK_PIXDATA_ENCODING_MASK,0x0f << 24);
#elif __s390__ && !__s390x__
CheckEnum("GDK_PIXDATA_COLOR_TYPE_RGB",GDK_PIXDATA_COLOR_TYPE_RGB,0x01);
CheckEnum("GDK_PIXDATA_COLOR_TYPE_RGBA",GDK_PIXDATA_COLOR_TYPE_RGBA,0x02);
CheckEnum("GDK_PIXDATA_COLOR_TYPE_MASK",GDK_PIXDATA_COLOR_TYPE_MASK,0xff);
CheckEnum("GDK_PIXDATA_SAMPLE_WIDTH_8",GDK_PIXDATA_SAMPLE_WIDTH_8,0x01 << 16);
CheckEnum("GDK_PIXDATA_SAMPLE_WIDTH_MASK",GDK_PIXDATA_SAMPLE_WIDTH_MASK,0x0f << 16);
CheckEnum("GDK_PIXDATA_ENCODING_RAW",GDK_PIXDATA_ENCODING_RAW,0x01 << 24);
CheckEnum("GDK_PIXDATA_ENCODING_RLE",GDK_PIXDATA_ENCODING_RLE,0x02 << 24);
CheckEnum("GDK_PIXDATA_ENCODING_MASK",GDK_PIXDATA_ENCODING_MASK,0x0f << 24);
#elif __s390x__
CheckEnum("GDK_PIXDATA_COLOR_TYPE_RGB",GDK_PIXDATA_COLOR_TYPE_RGB,0x01);
CheckEnum("GDK_PIXDATA_COLOR_TYPE_RGBA",GDK_PIXDATA_COLOR_TYPE_RGBA,0x02);
CheckEnum("GDK_PIXDATA_COLOR_TYPE_MASK",GDK_PIXDATA_COLOR_TYPE_MASK,0xff);
CheckEnum("GDK_PIXDATA_SAMPLE_WIDTH_8",GDK_PIXDATA_SAMPLE_WIDTH_8,0x01 << 16);
CheckEnum("GDK_PIXDATA_SAMPLE_WIDTH_MASK",GDK_PIXDATA_SAMPLE_WIDTH_MASK,0x0f << 16);
CheckEnum("GDK_PIXDATA_ENCODING_RAW",GDK_PIXDATA_ENCODING_RAW,0x01 << 24);
CheckEnum("GDK_PIXDATA_ENCODING_RLE",GDK_PIXDATA_ENCODING_RLE,0x02 << 24);
CheckEnum("GDK_PIXDATA_ENCODING_MASK",GDK_PIXDATA_ENCODING_MASK,0x0f << 24);
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12657,0);
Msg("Find size of anonymous-gdk-pixdata.h.types-0 (12657)\n");
#endif

#if __i386__
CheckTypeSize(GdkPixdataType,4, 12658, 2)
#elif __x86_64__
CheckTypeSize(GdkPixdataType,4, 12658, 11)
#elif __ia64__
CheckTypeSize(GdkPixdataType,4, 12658, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(GdkPixdataType,4, 12658, 6)
#elif __powerpc64__
CheckTypeSize(GdkPixdataType,4, 12658, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(GdkPixdataType,4, 12658, 10)
#elif __s390x__
CheckTypeSize(GdkPixdataType,4, 12658, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12658,0);
Msg("Find size of GdkPixdataType (12658)\n");
#endif

extern gboolean gdk_pixdata_deserialize_db(GdkPixdata *, guint, const guint8 *, GError * *);
CheckInterfacedef(gdk_pixdata_deserialize,gdk_pixdata_deserialize_db);
extern gpointer gdk_pixdata_from_pixbuf_db(GdkPixdata *, const GdkPixbuf *, gboolean);
CheckInterfacedef(gdk_pixdata_from_pixbuf,gdk_pixdata_from_pixbuf_db);
extern guint8 * gdk_pixdata_serialize_db(const GdkPixdata *, guint *);
CheckInterfacedef(gdk_pixdata_serialize,gdk_pixdata_serialize_db);
extern GString * gdk_pixdata_to_csource_db(GdkPixdata *, const gchar *, GdkPixdataDumpType);
CheckInterfacedef(gdk_pixdata_to_csource,gdk_pixdata_to_csource_db);
extern GdkPixbuf * gdk_pixbuf_from_pixdata_db(const GdkPixdata *, gboolean, GError * *);
CheckInterfacedef(gdk_pixbuf_from_pixdata,gdk_pixbuf_from_pixdata_db);
#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests passed out of %d tests in gtk-2.0/gdk-pixbuf/gdk-pixdata.h\n\n",pcnt,cnt);
return cnt;
#endif

}
