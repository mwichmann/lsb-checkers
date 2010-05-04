/*
 * Test of gtk-2.0/gtk/gtkrecentfilter.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#define __LSB_VERSION__ 41
#include "gtk-2.0/gtk/gtkrecentfilter.h"



#ifdef TET_TEST
void gtk_2_0_gtk_gtkrecentfilter_h()
{
#else
int gtk_2_0_gtk_gtkrecentfilter_h()
{
#endif

int cnt=0;

int pcnt=0;
char *real_macro_value, *stripped_macro_value;
int macro_ndx, stripped_value_ndx;
real_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );
stripped_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );

#ifdef TET_TEST
Msg("Checking data structures in gtk-2.0/gtk/gtkrecentfilter.h\n");
#endif

printf("Checking data structures in gtk-2.0/gtk/gtkrecentfilter.h\n");
#if _LSB_DEFAULT_ARCH
#ifndef __GTK_RECENT_FILTER_H__
Msg( "Error: Constant not found: __GTK_RECENT_FILTER_H__\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_TYPE_RECENT_FILTER */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_RECENT_FILTER(obj) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_IS_RECENT_FILTER(obj) */
#endif

#if 1
CheckTypeSize(GtkRecentFilterInfo,0, 40157, 1, 4.1, NULL, 40164, NULL)
#endif

#if 1
CheckTypeSize(GtkRecentFilterFlags,0, 40159, 1, 4.1, NULL, 40158, NULL)
#endif

#if 1
CheckTypeSize(GtkRecentFilterFunc,0, 40160, 1, 4.1, NULL, 40163, NULL)
#endif

#if 1
CheckTypeSize(struct _GtkRecentFilterInfo,0, 40164, 1, , NULL, 0, NULL)
Msg("Missing member data for _GtkRecentFilterInfo on All\n");
CheckOffset(struct _GtkRecentFilterInfo,contains,0,1,219919)
CheckOffset(struct _GtkRecentFilterInfo,uri,0,1,219920)
CheckOffset(struct _GtkRecentFilterInfo,display_name,0,1,219921)
CheckOffset(struct _GtkRecentFilterInfo,mime_type,0,1,219922)
CheckOffset(struct _GtkRecentFilterInfo,applications,0,1,219923)
CheckOffset(struct _GtkRecentFilterInfo,groups,0,1,219924)
CheckOffset(struct _GtkRecentFilterInfo,age,0,1,219925)
#endif

#if 1
/* All */
typedef gboolean (*GtkRecentFilterFunc_db)(const GtkRecentFilterInfo *, gpointer);
CheckFunctionTypedef(GtkRecentFilterFunc,GtkRecentFilterFunc_db);
#endif

extern GType gtk_recent_filter_get_type_db(void);
CheckInterfacedef(gtk_recent_filter_get_type,gtk_recent_filter_get_type_db);
extern GtkRecentFilter * gtk_recent_filter_new_db(void);
CheckInterfacedef(gtk_recent_filter_new,gtk_recent_filter_new_db);
extern void gtk_recent_filter_set_name_db(GtkRecentFilter *, const char *);
CheckInterfacedef(gtk_recent_filter_set_name,gtk_recent_filter_set_name_db);
extern const char * gtk_recent_filter_get_name_db(GtkRecentFilter *);
CheckInterfacedef(gtk_recent_filter_get_name,gtk_recent_filter_get_name_db);
extern void gtk_recent_filter_add_mime_type_db(GtkRecentFilter *, const char *);
CheckInterfacedef(gtk_recent_filter_add_mime_type,gtk_recent_filter_add_mime_type_db);
extern void gtk_recent_filter_add_pattern_db(GtkRecentFilter *, const char *);
CheckInterfacedef(gtk_recent_filter_add_pattern,gtk_recent_filter_add_pattern_db);
extern void gtk_recent_filter_add_pixbuf_formats_db(GtkRecentFilter *);
CheckInterfacedef(gtk_recent_filter_add_pixbuf_formats,gtk_recent_filter_add_pixbuf_formats_db);
extern void gtk_recent_filter_add_application_db(GtkRecentFilter *, const char *);
CheckInterfacedef(gtk_recent_filter_add_application,gtk_recent_filter_add_application_db);
extern void gtk_recent_filter_add_group_db(GtkRecentFilter *, const char *);
CheckInterfacedef(gtk_recent_filter_add_group,gtk_recent_filter_add_group_db);
extern void gtk_recent_filter_add_age_db(GtkRecentFilter *, gint);
CheckInterfacedef(gtk_recent_filter_add_age,gtk_recent_filter_add_age_db);
extern void gtk_recent_filter_add_custom_db(GtkRecentFilter *, GtkRecentFilterFlags, GtkRecentFilterFunc, gpointer, GDestroyNotify);
CheckInterfacedef(gtk_recent_filter_add_custom,gtk_recent_filter_add_custom_db);
extern GtkRecentFilterFlags gtk_recent_filter_get_needed_db(GtkRecentFilter *);
CheckInterfacedef(gtk_recent_filter_get_needed,gtk_recent_filter_get_needed_db);
extern gboolean gtk_recent_filter_filter_db(GtkRecentFilter *, const GtkRecentFilterInfo *);
CheckInterfacedef(gtk_recent_filter_filter,gtk_recent_filter_filter_db);
#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests passed out of %d tests in gtk-2.0/gtk/gtkrecentfilter.h\n\n",pcnt,cnt);
return cnt;
#endif

}
