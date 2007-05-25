/* GENERATED FILE, DO NOT MODIFY */
#ifndef MODULE_HEADER
#define MODULE_HEADER 1
#include <stdlib.h>

struct lsb_module {
	char *name;
	unsigned int flag;
};

extern struct lsb_module LSB_Modules[];

#define LSB_Core	0x1
#define LSB_Cpp	0x2
#define LSB_Graphics	0x4
#define LSB_Graphics_Ext	0x8
#define LSB_Toolkit_Gtk	0x10
#define LSB_Toolkit_Qt	0x20
#define LSB_Toolkit_Qt3	0x40
#define LSB_XML	0x80
#define LSB_Core_Modules 	(LSB_Core | LSB_Cpp)
#define LSB_Desktop_Modules (LSB_Core|LSB_Cpp|LSB_Graphics|LSB_Graphics_Ext|LSB_Toolkit_Gtk|LSB_Toolkit_Qt|LSB_Toolkit_Qt3|LSB_XML)
#define LSB_All_Modules 0xffff

#endif
