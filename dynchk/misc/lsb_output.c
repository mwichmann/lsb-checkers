/****
 * Author: Matt Elder
 * 
 * output mechanism from within the dynchk layer
 *
 * level: level of output to create.  Higher is less important.
 *        -1: lsb compliance error: 
 *        	a bad parameter get passed.
 *         4: shallow trace:
 *         	an lsb function was called from outside dynchk. 
 *         5: deep trace: 
 *         	an lsb function was called, possibly from within dynchk
 *         	(Useful for debugging libdynchk itself)
 * 
 * format, ... : output message, a la printf
 *
 * This is affected by the following environment variables:
 * LSB_OUTPUT_LEVEL : level below which we don't report output.
 * LDB_OUTPUT_FILE  : file to which output is sent.
 *
 * These environment variables should be set by options the lsbdynchk script.
 */

#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>

int __lsb_output(int level, char *format, ...)
{	
	va_list args;
	va_start(args, format);

	static int need_init = 1;
	static FILE * output = 0;
	static int out_level = 0;
	
	char * filename;
	char * level_name;
	
	if(need_init)
	{
		filename = getenv("LSB_OUTPUT_LEVEL");
		level_name = getenv("LSB_OUTPUT_FILE");
		if(filename)
			output = fopen(filename, "w");
		if(!output)
			output = stderr;
		if(level_name)
			out_level = atoi(level_name);
		need_init = 0;
	}

	if(level <= out_level)
	{
		vfprintf(output, format, args);
		va_end(args);
		return 1;
	}
	va_end(args);
	return 0;
}
