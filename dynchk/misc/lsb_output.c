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
 * LSB_OUTPUT_LEVEL : level above which we don't report output.
 * LSB_OUTPUT_FILE  : file to which output is sent.
 *
 * These environment variables can be set by options to the lsbdynchk script.
 */


#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include <string.h>

int __vlsb_output(int level, char *format, va_list args)
{	
	static int need_init = 1;
	static FILE * output;
	static int out_level = 0;
	static char prefix[10];
	
	char * filename = NULL;
	char * level_name = NULL;
	if(need_init)
	{
		need_init = 0;

		// We *know* that LD_PRELOAD is being set, so if getenv()
		// returns null on it, getenv() isn't ready yet.
		if(!getenv("LD_PRELOAD"))
		{
		    need_init = 1;
		    return 0;
		}
		filename = getenv("LSB_OUTPUT_FILE");
		level_name = getenv("LSB_OUTPUT_LEVEL");
		
		if(filename)
		{	output = fopen(filename, "w");
			strcpy(prefix, "");
		}
		if(!output || !filename)
		{	output = stderr;
			strcpy(prefix, "DYNCHK:");
		}
		if(level_name)
		{
			out_level = atoi(level_name);
		}
	}
//	printf("frotz(%d)\n",level);
	if(level <= out_level)
	{
		if(out_level > 0)
			fprintf(output, "%s(%d): ", prefix, level);
		else
			fprintf(output, "%s ", prefix);
		vfprintf(output, format, args);
		fprintf(output, "\n");
	}
	return 0;
}

int __lsb_output(int level, char *format, ...)
{
	va_list args;
	va_start(args, format);
	int out = __vlsb_output(level, format, args);
	va_end(args);
	return out;
}

int __lsb_fail(char *name, char *format, ...)
{
	va_list args;
	va_start(args, format);
	__lsb_output(-1, "Test failed at %s:", name);
	int out = __vlsb_output(-1, format, args);
	va_end(args);
	return out;
}
