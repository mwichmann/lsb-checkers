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
#define LSB_Cpp	0x2
#define LSB_Graphics	0x4
#define LSB_Graphics_Ext	0x8
#define LSB_Multimedia	0x10
#define LSB_Perl	0x20
#define LSB_Printing	0x40
#define LSB_Python	0x80
#define LSB_Toolkit_Gtk	0x100
#define LSB_Toolkit_Qt	0x200
#define LSB_Toolkit_Qt3	0x400
#define LSB_TUM	0x800
#define LSB_XML	0x1000
#define LSB_Core_Modules 	(LSB_Core | LSB_Cpp)
#define LSB_Desktop_Modules_LSB30 (LSB_Core | LSB_Cpp | LSB_Graphics)
#define LSB_Desktop_Modules_LSB31 (LSB_Core | LSB_Cpp | LSB_Graphics | LSB_Graphics_Ext | LSB_Toolkit_Gtk | LSB_Toolkit_Qt3 | LSB_XML)
#define LSB_Desktop_Modules_LSB32 (LSB_Core | LSB_Cpp | LSB_Graphics | LSB_Graphics_Ext | LSB_Perl | LSB_Printing | LSB_Python | LSB_Toolkit_Gtk | LSB_Toolkit_Qt | LSB_Toolkit_Qt3 | LSB_XML)
#define LSB_All_Modules 0xffff

extern int LSB_Desktop_Modules[];

#endif
