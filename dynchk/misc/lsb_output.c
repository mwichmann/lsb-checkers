/****
 * Author: Matt Elder
 * 
 * output mechanism from within the dynchk layer
 *
 * level: level of output to create.  Higher is less important.
 *        -1: lsb compliance error: 
 *        	normally, when a bad parameter get passed.
 *         5: shallow trace:
 *         	an lsb function was called from outside dynchk. 
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
	static FILE * output;
	static int out_level = 0;
	
	char * filename = NULL;
	char * level_name = NULL;
	if(need_init)
	{
		filename = getenv("LSB_OUTPUT_FILE");
		level_name = getenv("LSB_OUTPUT_LEVEL");

		if(filename)
		printf("DYNCHK DEBUG: filename = %s\n",filename);
		if(level_name)
		printf("DYNCHK DEBUG: level = %s\n", level_name);
		
		if(filename)
			output = fopen(filename, "w");
		if(!output || !filename)
			output = stderr;
		if(level_name)
			out_level = atoi(level_name);
			
		need_init = 0;
	}

	if(level <= out_level)
	{
		if(out_level > 0)
			fprintf(output, "DYNCHK(%d): ", level);
		else
			fprintf(output, "DYNCHK: ");
		vfprintf(output, format, args);
		fprintf(output, "\n");
	}
	va_end(args);
	return 0;
}
