/*
 * Test of gtk-unix-print-2.0/gtk/gtkprinter.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#define __LSB_VERSION__ 41
#include "gtk-unix-print-2.0/gtk/gtkprinter.h"



#ifdef TET_TEST
void gtk_unix_print_2_0_gtk_gtkprinter_h()
{
#else
int gtk_unix_print_2_0_gtk_gtkprinter_h()
{
#endif

int cnt=0;

int pcnt=0;
char *real_macro_value, *stripped_macro_value;
int macro_ndx, stripped_value_ndx;
real_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );
stripped_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );

#ifdef TET_TEST
Msg("Checking data structures in gtk-unix-print-2.0/gtk/gtkprinter.h\n");
#endif

printf("Checking data structures in gtk-unix-print-2.0/gtk/gtkprinter.h\n");
#if 1
CheckTypeSize(GtkPrintCapabilities,0, 40229, 1, 4.1, NULL, 40228, NULL)
#endif

#if 1
CheckTypeSize(GtkPrinter,0, 40230, 1, 4.1, NULL, 40237, NULL)
#endif

#if 1
CheckTypeSize(GtkPrinterClass,0, 40231, 1, 4.1, NULL, 40240, NULL)
#endif

#if 1
CheckTypeSize(struct _GtkPrinter,0, 40237, 1, , NULL, 0, NULL)
Msg("Missing member data for _GtkPrinter on All\n");
CheckOffset(struct _GtkPrinter,parent_instance,0,1,220058)
CheckOffset(struct _GtkPrinter,priv,0,1,220059)
#endif

#if 1
CheckTypeSize(struct _GtkPrinterClass,0, 40240, 1, , NULL, 0, NULL)
Msg("Missing member data for _GtkPrinterClass on All\n");
CheckOffset(struct _GtkPrinterClass,parent_class,0,1,220062)
CheckOffset(struct _GtkPrinterClass,details_acquired,0,1,220063)
CheckOffset(struct _GtkPrinterClass,_gtk_reserved1,0,1,220064)
CheckOffset(struct _GtkPrinterClass,_gtk_reserved2,0,1,220065)
CheckOffset(struct _GtkPrinterClass,_gtk_reserved3,0,1,220066)
CheckOffset(struct _GtkPrinterClass,_gtk_reserved4,0,1,220067)
CheckOffset(struct _GtkPrinterClass,_gtk_reserved5,0,1,220068)
CheckOffset(struct _GtkPrinterClass,_gtk_reserved6,0,1,220069)
CheckOffset(struct _GtkPrinterClass,_gtk_reserved7,0,1,220070)
#endif

#if 1
CheckTypeSize(GtkPrinterFunc,0, 40242, 1, 4.1, NULL, 40243, NULL)
#endif

#if 1
/* All */
typedef gboolean (*GtkPrinterFunc_db)(GtkPrinter *, gpointer);
CheckFunctionTypedef(GtkPrinterFunc,GtkPrinterFunc_db);
#endif

extern GType gtk_print_capabilities_get_type_db(void);
CheckInterfacedef(gtk_print_capabilities_get_type,gtk_print_capabilities_get_type_db);
extern GType gtk_printer_get_type_db(void);
CheckInterfacedef(gtk_printer_get_type,gtk_printer_get_type_db);
extern GtkPrinter * gtk_printer_new_db(const char *, GtkPrintBackend *, gboolean);
CheckInterfacedef(gtk_printer_new,gtk_printer_new_db);
extern GtkPrintBackend * gtk_printer_get_backend_db(GtkPrinter *);
CheckInterfacedef(gtk_printer_get_backend,gtk_printer_get_backend_db);
extern const char * gtk_printer_get_name_db(GtkPrinter *);
CheckInterfacedef(gtk_printer_get_name,gtk_printer_get_name_db);
extern const char * gtk_printer_get_state_message_db(GtkPrinter *);
CheckInterfacedef(gtk_printer_get_state_message,gtk_printer_get_state_message_db);
extern const char * gtk_printer_get_description_db(GtkPrinter *);
CheckInterfacedef(gtk_printer_get_description,gtk_printer_get_description_db);
extern const char * gtk_printer_get_location_db(GtkPrinter *);
CheckInterfacedef(gtk_printer_get_location,gtk_printer_get_location_db);
extern const char * gtk_printer_get_icon_name_db(GtkPrinter *);
CheckInterfacedef(gtk_printer_get_icon_name,gtk_printer_get_icon_name_db);
extern gint gtk_printer_get_job_count_db(GtkPrinter *);
CheckInterfacedef(gtk_printer_get_job_count,gtk_printer_get_job_count_db);
extern gboolean gtk_printer_is_active_db(GtkPrinter *);
CheckInterfacedef(gtk_printer_is_active,gtk_printer_is_active_db);
extern gboolean gtk_printer_is_virtual_db(GtkPrinter *);
CheckInterfacedef(gtk_printer_is_virtual,gtk_printer_is_virtual_db);
extern gboolean gtk_printer_is_default_db(GtkPrinter *);
CheckInterfacedef(gtk_printer_is_default,gtk_printer_is_default_db);
extern gboolean gtk_printer_accepts_pdf_db(GtkPrinter *);
CheckInterfacedef(gtk_printer_accepts_pdf,gtk_printer_accepts_pdf_db);
extern gboolean gtk_printer_accepts_ps_db(GtkPrinter *);
CheckInterfacedef(gtk_printer_accepts_ps,gtk_printer_accepts_ps_db);
extern gint gtk_printer_compare_db(GtkPrinter *, GtkPrinter *);
CheckInterfacedef(gtk_printer_compare,gtk_printer_compare_db);
extern void gtk_enumerate_printers_db(GtkPrinterFunc, gpointer, GDestroyNotify, gboolean);
CheckInterfacedef(gtk_enumerate_printers,gtk_enumerate_printers_db);
#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests passed out of %d tests in gtk-unix-print-2.0/gtk/gtkprinter.h\n\n",pcnt,cnt);
return cnt;
#endif

}
