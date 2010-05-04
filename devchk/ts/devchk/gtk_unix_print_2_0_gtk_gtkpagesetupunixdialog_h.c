/*
 * Test of gtk-unix-print-2.0/gtk/gtkpagesetupunixdialog.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#define __LSB_VERSION__ 41
#include "gtk-unix-print-2.0/gtk/gtkpagesetupunixdialog.h"



#ifdef TET_TEST
void gtk_unix_print_2_0_gtk_gtkpagesetupunixdialog_h()
{
#else
int gtk_unix_print_2_0_gtk_gtkpagesetupunixdialog_h()
{
#endif

int cnt=0;

int pcnt=0;
char *real_macro_value, *stripped_macro_value;
int macro_ndx, stripped_value_ndx;
real_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );
stripped_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );

#ifdef TET_TEST
Msg("Checking data structures in gtk-unix-print-2.0/gtk/gtkpagesetupunixdialog.h\n");
#endif

printf("Checking data structures in gtk-unix-print-2.0/gtk/gtkpagesetupunixdialog.h\n");
#if 1
CheckTypeSize(GtkPageSetupUnixDialog,0, 40266, 1, 4.1, NULL, 40271, NULL)
#endif

#if 1
CheckTypeSize(GtkPageSetupUnixDialogClass,0, 40267, 1, 4.1, NULL, 40272, NULL)
#endif

#if 1
CheckTypeSize(struct _GtkPageSetupUnixDialog,0, 40271, 1, , NULL, 0, NULL)
Msg("Missing member data for _GtkPageSetupUnixDialog on All\n");
CheckOffset(struct _GtkPageSetupUnixDialog,parent_instance,0,1,220073)
CheckOffset(struct _GtkPageSetupUnixDialog,priv,0,1,220074)
#endif

#if 1
CheckTypeSize(struct _GtkPageSetupUnixDialogClass,0, 40272, 1, , NULL, 0, NULL)
Msg("Missing member data for _GtkPageSetupUnixDialogClass on All\n");
CheckOffset(struct _GtkPageSetupUnixDialogClass,parent_class,0,1,220075)
CheckOffset(struct _GtkPageSetupUnixDialogClass,_gtk_reserved1,0,1,220076)
CheckOffset(struct _GtkPageSetupUnixDialogClass,_gtk_reserved2,0,1,220077)
CheckOffset(struct _GtkPageSetupUnixDialogClass,_gtk_reserved3,0,1,220078)
CheckOffset(struct _GtkPageSetupUnixDialogClass,_gtk_reserved4,0,1,220079)
CheckOffset(struct _GtkPageSetupUnixDialogClass,_gtk_reserved5,0,1,220080)
CheckOffset(struct _GtkPageSetupUnixDialogClass,_gtk_reserved6,0,1,220081)
CheckOffset(struct _GtkPageSetupUnixDialogClass,_gtk_reserved7,0,1,220082)
#endif

extern GType gtk_page_setup_unix_dialog_get_type_db(void);
CheckInterfacedef(gtk_page_setup_unix_dialog_get_type,gtk_page_setup_unix_dialog_get_type_db);
extern GtkWidget * gtk_page_setup_unix_dialog_new_db(const char *, GtkWindow *);
CheckInterfacedef(gtk_page_setup_unix_dialog_new,gtk_page_setup_unix_dialog_new_db);
extern void gtk_page_setup_unix_dialog_set_page_setup_db(GtkPageSetupUnixDialog *, GtkPageSetup *);
CheckInterfacedef(gtk_page_setup_unix_dialog_set_page_setup,gtk_page_setup_unix_dialog_set_page_setup_db);
extern GtkPageSetup * gtk_page_setup_unix_dialog_get_page_setup_db(GtkPageSetupUnixDialog *);
CheckInterfacedef(gtk_page_setup_unix_dialog_get_page_setup,gtk_page_setup_unix_dialog_get_page_setup_db);
extern void gtk_page_setup_unix_dialog_set_print_settings_db(GtkPageSetupUnixDialog *, GtkPrintSettings *);
CheckInterfacedef(gtk_page_setup_unix_dialog_set_print_settings,gtk_page_setup_unix_dialog_set_print_settings_db);
extern GtkPrintSettings * gtk_page_setup_unix_dialog_get_print_settings_db(GtkPageSetupUnixDialog *);
CheckInterfacedef(gtk_page_setup_unix_dialog_get_print_settings,gtk_page_setup_unix_dialog_get_print_settings_db);
#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests passed out of %d tests in gtk-unix-print-2.0/gtk/gtkpagesetupunixdialog.h\n\n",pcnt,cnt);
return cnt;
#endif

}
