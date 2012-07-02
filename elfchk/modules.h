/* GENERATED FILE, DO NOT MODIFY */
#ifndef MODULE_HEADER
#define MODULE_HEADER 1
#include <stdlib.h>

struct lsb_module {
	char *name;
	unsigned int flag;
};

extern struct lsb_module* LSB_Modules[];

#define LSB_Core	0x1
#define LSB_Graphics	0x2
#define LSB_Cpp	0x4
#define LSB_Toolkit_Gtk	0x8
#define LSB_Toolkit_Qt	0x10
#define LSB_Graphics_Ext	0x20
#define LSB_XML	0x40
#define LSB_Toolkit_Qt3	0x80
#define LSB_Printing	0x100
#define LSB_TUM	0x200
#define LSB_Python	0x400
#define LSB_Perl	0x800
#define LSB_Multimedia	0x1000
#define LSB_Security	0x2000
#define LSB_Java	0x4000
#define LSB_Desktop_Misc	0x8000
#define LSB_Base	0x10000
#define LSB_Print	0x20000
#define LSB_Scan	0x40000
#define LSB_Toolkit_Independent	0x80000
#define LSB_Core_Modules 	(LSB_Core | LSB_Cpp)
#define LSB_Desktop_Modules_LSB30 (LSB_Core | LSB_Graphics | LSB_Cpp)
#define LSB_Desktop_Modules_LSB31 (LSB_Core | LSB_Graphics | LSB_Cpp | LSB_Toolkit_Gtk | LSB_Graphics_Ext | LSB_XML | LSB_Toolkit_Qt3)
#define LSB_Desktop_Modules_LSB32 (LSB_Core | LSB_Graphics | LSB_Cpp | LSB_Toolkit_Gtk | LSB_Toolkit_Qt | LSB_Graphics_Ext | LSB_XML | LSB_Toolkit_Qt3 | LSB_Printing | LSB_Python | LSB_Perl)
#define LSB_Desktop_Modules_LSB40 (LSB_Core | LSB_Graphics | LSB_Cpp | LSB_Toolkit_Gtk | LSB_Toolkit_Qt | LSB_Graphics_Ext | LSB_XML | LSB_Toolkit_Qt3 | LSB_Printing | LSB_Python | LSB_Perl)
#define LSB_Desktop_Modules_LSB41 (LSB_Core | LSB_Graphics | LSB_Cpp | LSB_Toolkit_Gtk | LSB_Toolkit_Qt | LSB_Graphics_Ext | LSB_XML | LSB_Toolkit_Qt3 | LSB_Printing | LSB_Python | LSB_Perl | LSB_Multimedia | LSB_Security | LSB_Desktop_Misc)
#define LSB_Desktop_Modules_LSB50 (LSB_Core | LSB_Graphics | LSB_Cpp | LSB_Toolkit_Gtk | LSB_Toolkit_Qt | LSB_Graphics_Ext | LSB_XML | LSB_Toolkit_Qt3 | LSB_Printing | LSB_Python | LSB_Perl | LSB_Multimedia | LSB_Security | LSB_Desktop_Misc | LSB_Base | LSB_Print | LSB_Scan | LSB_Toolkit_Independent)
#define LSB_All_Modules 0xffffff

extern int LSB_Desktop_Modules[];

#endif
