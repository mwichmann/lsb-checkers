/* lsb_output
 * Output functions for dynchk system
 */
#ifndef LSB_OUTPUT
#define LSB_OUTPUT

#include <stdarg.h>

int __vlsb_output(int level, char *format, va_list args);
int __lsb_output(int level, char *format, ...);
int __lsb_fail(char *name, char *format, ...);
#endif
