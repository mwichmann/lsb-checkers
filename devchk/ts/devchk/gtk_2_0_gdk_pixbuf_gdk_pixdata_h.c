/*
 * Test of gtk-2.0/gdk-pixbuf/gdk-pixdata.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#define __LSB_VERSION__ 40
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
char *real_macro_value, *stripped_macro_value;
int macro_ndx, stripped_value_ndx;
real_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );
stripped_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );

#ifdef TET_TEST
Msg("Checking data structures in gtk-2.0/gdk-pixbuf/gdk-pixdata.h\n");
#endif

printf("Checking data structures in gtk-2.0/gdk-pixbuf/gdk-pixdata.h\n");
#if _LSB_DEFAULT_ARCH
#ifdef GDK_PIXBUF_MAGIC_NUMBER
	CompareConstant(GDK_PIXBUF_MAGIC_NUMBER,(0x47646b50),6639,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_PIXBUF_MAGIC_NUMBER\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_PIXDATA_HEADER_LENGTH
	CompareConstant(GDK_PIXDATA_HEADER_LENGTH,(4 + 4 + 4 + 4 + 4 + 4),6640,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_PIXDATA_HEADER_LENGTH\n");
cnt++;
#endif

#endif

#if defined __s390x__
CheckTypeSize(struct _GdkPixdata,32, 12650, 12, , NULL, 0, NULL)
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
#elif defined __x86_64__
CheckTypeSize(struct _GdkPixdata,32, 12650, 11, , NULL, 0, NULL)
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
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(struct _GdkPixdata,28, 12650, 10, , NULL, 0, NULL)
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
#elif defined __powerpc64__
CheckTypeSize(struct _GdkPixdata,32, 12650, 9, , NULL, 0, NULL)
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
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(struct _GdkPixdata,28, 12650, 6, , NULL, 0, NULL)
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
#elif defined __ia64__
CheckTypeSize(struct _GdkPixdata,32, 12650, 3, , NULL, 0, NULL)
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
#elif defined __i386__
CheckTypeSize(struct _GdkPixdata,28, 12650, 2, , NULL, 0, NULL)
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
#elif 1
CheckTypeSize(struct _GdkPixdata,0, 12650, 1, , NULL, 0, NULL)
Msg("Missing member data for _GdkPixdata on All\n");
CheckOffset(struct _GdkPixdata,magic,0,1,43355)
#endif

#if defined __s390x__
CheckTypeSize(GdkPixdata,32, 12651, 12, 3.1, NULL, 12650, NULL)
#elif defined __x86_64__
CheckTypeSize(GdkPixdata,32, 12651, 11, 3.1, NULL, 12650, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GdkPixdata,28, 12651, 10, 3.1, NULL, 12650, NULL)
#elif defined __powerpc64__
CheckTypeSize(GdkPixdata,32, 12651, 9, 3.1, NULL, 12650, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GdkPixdata,28, 12651, 6, 3.1, NULL, 12650, NULL)
#elif defined __ia64__
CheckTypeSize(GdkPixdata,32, 12651, 3, 3.1, NULL, 12650, NULL)
#elif defined __i386__
CheckTypeSize(GdkPixdata,28, 12651, 2, 3.1, NULL, 12650, NULL)
#else
Msg("Find size of GdkPixdata (12651)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,12650,NULL);\n",architecture,12651,0);
#endif

#if defined __s390x__
CheckTypeSize(GdkPixdataDumpType,4, 12656, 12, 3.1, NULL, 12655, NULL)
#elif defined __x86_64__
CheckTypeSize(GdkPixdataDumpType,4, 12656, 11, 3.1, NULL, 12655, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GdkPixdataDumpType,4, 12656, 10, 3.1, NULL, 12655, NULL)
#elif defined __powerpc64__
CheckTypeSize(GdkPixdataDumpType,4, 12656, 9, 3.1, NULL, 12655, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GdkPixdataDumpType,4, 12656, 6, 3.1, NULL, 12655, NULL)
#elif defined __ia64__
CheckTypeSize(GdkPixdataDumpType,4, 12656, 3, 3.1, NULL, 12655, NULL)
#elif defined __i386__
CheckTypeSize(GdkPixdataDumpType,4, 12656, 2, 3.1, NULL, 12655, NULL)
#else
Msg("Find size of GdkPixdataDumpType (12656)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,12655,NULL);\n",architecture,12656,0);
#endif

#if defined __s390x__
CheckTypeSize(GdkPixdataType,4, 12658, 12, 3.1, NULL, 12657, NULL)
#elif defined __x86_64__
CheckTypeSize(GdkPixdataType,4, 12658, 11, 3.1, NULL, 12657, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GdkPixdataType,4, 12658, 10, 3.1, NULL, 12657, NULL)
#elif defined __powerpc64__
CheckTypeSize(GdkPixdataType,4, 12658, 9, 3.1, NULL, 12657, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GdkPixdataType,4, 12658, 6, 3.1, NULL, 12657, NULL)
#elif defined __ia64__
CheckTypeSize(GdkPixdataType,4, 12658, 3, 3.1, NULL, 12657, NULL)
#elif defined __i386__
CheckTypeSize(GdkPixdataType,4, 12658, 2, 3.1, NULL, 12657, NULL)
#else
Msg("Find size of GdkPixdataType (12658)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,12657, NULL);\n",architecture,12658,0);
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
