/*
 * Test of gtk-2.0/gtk/gtkrecentmanager.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#define __LSB_VERSION__ 41
#include "gtk-2.0/gtk/gtkrecentmanager.h"



#ifdef TET_TEST
void gtk_2_0_gtk_gtkrecentmanager_h()
{
#else
int gtk_2_0_gtk_gtkrecentmanager_h()
{
#endif

int cnt=0;

int pcnt=0;
char *real_macro_value, *stripped_macro_value;
int macro_ndx, stripped_value_ndx;
real_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );
stripped_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );

#ifdef TET_TEST
Msg("Checking data structures in gtk-2.0/gtk/gtkrecentmanager.h\n");
#endif

printf("Checking data structures in gtk-2.0/gtk/gtkrecentmanager.h\n");
#if _LSB_DEFAULT_ARCH
#ifndef __GTK_RECENT_MANAGER_H__
Msg( "Error: Constant not found: __GTK_RECENT_MANAGER_H__\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_TYPE_RECENT_INFO */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_TYPE_RECENT_MANAGER */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_RECENT_MANAGER(obj) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_IS_RECENT_MANAGER(obj) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_RECENT_MANAGER_CLASS(klass) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_IS_RECENT_MANAGER_CLASS(klass) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_RECENT_MANAGER_GET_CLASS(obj) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for GTK_RECENT_MANAGER_ERROR */
#endif

#if 1
CheckTypeSize(GtkRecentData,0, 40168, 1, 4.1, NULL, 40173, NULL)
#endif

#if 1
CheckTypeSize(GtkRecentManager,0, 40169, 1, 4.1, NULL, 40175, NULL)
#endif

#if 1
CheckTypeSize(GtkRecentManagerClass,0, 40170, 1, 4.1, NULL, 40178, NULL)
#endif

#if 1
CheckTypeSize(struct _GtkRecentData,0, 40173, 1, , NULL, 0, NULL)
Msg("Missing member data for _GtkRecentData on All\n");
CheckOffset(struct _GtkRecentData,display_name,0,1,219926)
CheckOffset(struct _GtkRecentData,description,0,1,219927)
CheckOffset(struct _GtkRecentData,mime_type,0,1,219928)
CheckOffset(struct _GtkRecentData,app_name,0,1,219929)
CheckOffset(struct _GtkRecentData,app_exec,0,1,219930)
CheckOffset(struct _GtkRecentData,groups,0,1,219931)
CheckOffset(struct _GtkRecentData,is_private,0,1,219932)
#endif

#if 1
CheckTypeSize(struct _GtkRecentManager,0, 40175, 1, , NULL, 0, NULL)
Msg("Missing member data for _GtkRecentManager on All\n");
CheckOffset(struct _GtkRecentManager,parent_instance,0,1,219933)
CheckOffset(struct _GtkRecentManager,priv,0,1,219934)
#endif

#if 1
CheckTypeSize(struct _GtkRecentManagerClass,0, 40178, 1, , NULL, 0, NULL)
Msg("Missing member data for _GtkRecentManagerClass on All\n");
CheckOffset(struct _GtkRecentManagerClass,parent_class,0,1,219936)
CheckOffset(struct _GtkRecentManagerClass,changed,0,1,219937)
CheckOffset(struct _GtkRecentManagerClass,_gtk_recent1,0,1,219938)
CheckOffset(struct _GtkRecentManagerClass,_gtk_recent2,0,1,219939)
CheckOffset(struct _GtkRecentManagerClass,_gtk_recent3,0,1,219940)
CheckOffset(struct _GtkRecentManagerClass,_gtk_recent4,0,1,219941)
#endif

#if 1
CheckTypeSize(GtkRecentManagerError,0, 40180, 1, 4.1, NULL, 40179, NULL)
#endif

extern GQuark gtk_recent_manager_error_quark_db(void);
CheckInterfacedef(gtk_recent_manager_error_quark,gtk_recent_manager_error_quark_db);
extern GType gtk_recent_manager_get_type_db(void);
CheckInterfacedef(gtk_recent_manager_get_type,gtk_recent_manager_get_type_db);
extern GtkRecentManager * gtk_recent_manager_new_db(void);
CheckInterfacedef(gtk_recent_manager_new,gtk_recent_manager_new_db);
extern GtkRecentManager * gtk_recent_manager_get_default_db(void);
CheckInterfacedef(gtk_recent_manager_get_default,gtk_recent_manager_get_default_db);
extern gboolean gtk_recent_manager_add_item_db(GtkRecentManager *, const char *);
CheckInterfacedef(gtk_recent_manager_add_item,gtk_recent_manager_add_item_db);
extern gboolean gtk_recent_manager_add_full_db(GtkRecentManager *, const char *, const GtkRecentData *);
CheckInterfacedef(gtk_recent_manager_add_full,gtk_recent_manager_add_full_db);
extern gboolean gtk_recent_manager_remove_item_db(GtkRecentManager *, const char *, GError * *);
CheckInterfacedef(gtk_recent_manager_remove_item,gtk_recent_manager_remove_item_db);
extern GtkRecentInfo * gtk_recent_manager_lookup_item_db(GtkRecentManager *, const char *, GError * *);
CheckInterfacedef(gtk_recent_manager_lookup_item,gtk_recent_manager_lookup_item_db);
extern gboolean gtk_recent_manager_has_item_db(GtkRecentManager *, const char *);
CheckInterfacedef(gtk_recent_manager_has_item,gtk_recent_manager_has_item_db);
extern gboolean gtk_recent_manager_move_item_db(GtkRecentManager *, const char *, const char *, GError * *);
CheckInterfacedef(gtk_recent_manager_move_item,gtk_recent_manager_move_item_db);
extern void gtk_recent_manager_set_limit_db(GtkRecentManager *, gint);
CheckInterfacedef(gtk_recent_manager_set_limit,gtk_recent_manager_set_limit_db);
extern gint gtk_recent_manager_get_limit_db(GtkRecentManager *);
CheckInterfacedef(gtk_recent_manager_get_limit,gtk_recent_manager_get_limit_db);
extern GList * gtk_recent_manager_get_items_db(GtkRecentManager *);
CheckInterfacedef(gtk_recent_manager_get_items,gtk_recent_manager_get_items_db);
extern gint gtk_recent_manager_purge_items_db(GtkRecentManager *, GError * *);
CheckInterfacedef(gtk_recent_manager_purge_items,gtk_recent_manager_purge_items_db);
extern GType gtk_recent_info_get_type_db(void);
CheckInterfacedef(gtk_recent_info_get_type,gtk_recent_info_get_type_db);
extern GtkRecentInfo * gtk_recent_info_ref_db(GtkRecentInfo *);
CheckInterfacedef(gtk_recent_info_ref,gtk_recent_info_ref_db);
extern void gtk_recent_info_unref_db(GtkRecentInfo *);
CheckInterfacedef(gtk_recent_info_unref,gtk_recent_info_unref_db);
extern const char * gtk_recent_info_get_uri_db(GtkRecentInfo *);
CheckInterfacedef(gtk_recent_info_get_uri,gtk_recent_info_get_uri_db);
extern const char * gtk_recent_info_get_display_name_db(GtkRecentInfo *);
CheckInterfacedef(gtk_recent_info_get_display_name,gtk_recent_info_get_display_name_db);
extern const char * gtk_recent_info_get_description_db(GtkRecentInfo *);
CheckInterfacedef(gtk_recent_info_get_description,gtk_recent_info_get_description_db);
extern const char * gtk_recent_info_get_mime_type_db(GtkRecentInfo *);
CheckInterfacedef(gtk_recent_info_get_mime_type,gtk_recent_info_get_mime_type_db);
extern time_t gtk_recent_info_get_added_db(GtkRecentInfo *);
CheckInterfacedef(gtk_recent_info_get_added,gtk_recent_info_get_added_db);
extern time_t gtk_recent_info_get_modified_db(GtkRecentInfo *);
CheckInterfacedef(gtk_recent_info_get_modified,gtk_recent_info_get_modified_db);
extern time_t gtk_recent_info_get_visited_db(GtkRecentInfo *);
CheckInterfacedef(gtk_recent_info_get_visited,gtk_recent_info_get_visited_db);
extern gboolean gtk_recent_info_get_private_hint_db(GtkRecentInfo *);
CheckInterfacedef(gtk_recent_info_get_private_hint,gtk_recent_info_get_private_hint_db);
extern gboolean gtk_recent_info_get_application_info_db(GtkRecentInfo *, const char *, const char * *, guint *, time_t *);
CheckInterfacedef(gtk_recent_info_get_application_info,gtk_recent_info_get_application_info_db);
extern gchar * * gtk_recent_info_get_applications_db(GtkRecentInfo *, gsize *);
CheckInterfacedef(gtk_recent_info_get_applications,gtk_recent_info_get_applications_db);
extern gchar * gtk_recent_info_last_application_db(GtkRecentInfo *);
CheckInterfacedef(gtk_recent_info_last_application,gtk_recent_info_last_application_db);
extern gboolean gtk_recent_info_has_application_db(GtkRecentInfo *, const char *);
CheckInterfacedef(gtk_recent_info_has_application,gtk_recent_info_has_application_db);
extern gchar * * gtk_recent_info_get_groups_db(GtkRecentInfo *, gsize *);
CheckInterfacedef(gtk_recent_info_get_groups,gtk_recent_info_get_groups_db);
extern gboolean gtk_recent_info_has_group_db(GtkRecentInfo *, const char *);
CheckInterfacedef(gtk_recent_info_has_group,gtk_recent_info_has_group_db);
extern GdkPixbuf * gtk_recent_info_get_icon_db(GtkRecentInfo *, gint);
CheckInterfacedef(gtk_recent_info_get_icon,gtk_recent_info_get_icon_db);
extern gchar * gtk_recent_info_get_short_name_db(GtkRecentInfo *);
CheckInterfacedef(gtk_recent_info_get_short_name,gtk_recent_info_get_short_name_db);
extern gchar * gtk_recent_info_get_uri_display_db(GtkRecentInfo *);
CheckInterfacedef(gtk_recent_info_get_uri_display,gtk_recent_info_get_uri_display_db);
extern gint gtk_recent_info_get_age_db(GtkRecentInfo *);
CheckInterfacedef(gtk_recent_info_get_age,gtk_recent_info_get_age_db);
extern gboolean gtk_recent_info_is_local_db(GtkRecentInfo *);
CheckInterfacedef(gtk_recent_info_is_local,gtk_recent_info_is_local_db);
extern gboolean gtk_recent_info_exists_db(GtkRecentInfo *);
CheckInterfacedef(gtk_recent_info_exists,gtk_recent_info_exists_db);
extern gboolean gtk_recent_info_match_db(GtkRecentInfo *, GtkRecentInfo *);
CheckInterfacedef(gtk_recent_info_match,gtk_recent_info_match_db);
#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests passed out of %d tests in gtk-2.0/gtk/gtkrecentmanager.h\n\n",pcnt,cnt);
return cnt;
#endif

}
