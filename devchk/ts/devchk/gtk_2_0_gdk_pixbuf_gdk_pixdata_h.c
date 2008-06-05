/*
 * Test of gtk-2.0/gdk-pixbuf/gdk-pixdata.h
 */
#include "hdrchk.h"
#include <stdio.h>
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
