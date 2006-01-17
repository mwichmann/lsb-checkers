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
#define LSB_Desktop	0x4
#define LSB_Graphics	0x8
#define LSB_All_Modules 0xff

#endif
