#include <stdio.h>
#include <stdlib.h>
#include "memmap.h"
#include "../libs/__lsb_funcs.h"

/*
 * This file contains the code that knows about the address space of the 
 * process. The file /proc/self/maps is parsed, and stored for later reference.
 *
 * Access functions are provided to allow other tests to compare an address to
 * the memory map of the process.
 */

struct memregion {
	unsigned long start;
	unsigned long end;
	unsigned char perms;
};

static struct memregion *mem = NULL;
static int maxmaps = 0;
static int nummaps = 0;

void
load_memmap()
{
	FILE *map;
	struct memregion *curmap;
	char rd,wr,ex;
	int ret;
	char buf[256];

	/*
	setvbuf(stdout,NULL, _IOLBF, 0);
	__lsb_printf("Entering load_memmap()\n");
	*/
	if( mem ) {
		__lsb_free(mem);
		mem=NULL;
		maxmaps=0;
		nummaps=0;
	}
	map=__lsb_fopen("/proc/self/maps","r");
	while(!__lsb_feof(map) ) {
		if( nummaps == maxmaps ) {
			mem =__lsb_realloc(mem,sizeof(struct memregion)*(maxmaps+5));
			maxmaps+=5;
		}
		curmap=&mem[nummaps++];
		/*
		ret=__lsb_fscanf(map,"%p-%p %c%c%c%*c %*x %*x:%*x %*d %s",
		*/
		__lsb_fgets(buf,256,map);
		//__lsb_printf(buf);
		ret=__lsb_sscanf(buf,"%p-%p %c%c%c",
				&(curmap->start),
				&(curmap->end),
				&rd,&wr,&ex);
		curmap->perms=0;
		if(rd == 'r')
			curmap->perms|=MEMMAP_READ;
		if(wr == 'w')
			curmap->perms|=MEMMAP_WRITE;
		if(ex == 'x')
			curmap->perms|=MEMMAP_EXEC;
	}
	__lsb_fclose(map);
}

int
mem_is_Rd(const void *ptr)
{
	int i;


	for(i=0;i<nummaps;i++) {
		/*
		if( (unsigned long)ptr & 0x80000000UL ) {
			__lsb_printf("\n");
			__lsb_printf("%p >= %p\n",ptr, mem[i].start );
			__lsb_printf("%p <= %p\n",ptr, mem[i].end );
		}
		*/
		if( (unsigned long)ptr >= mem[i].start &&
		    (unsigned long)ptr <= mem[i].end &&
		    mem[i].perms&MEMMAP_READ )
			return 1;
	}

	load_memmap();

	for(i=0;i<nummaps;i++) {
		/*
		if( (unsigned long)ptr & 0x80000000UL ) {
			__lsb_printf("\n");
			__lsb_printf("%p >= %p\n",ptr, mem[i].start );
			__lsb_printf("%p <= %p\n",ptr, mem[i].end );
		}
		*/
		if( (unsigned long)ptr >= mem[i].start &&
		    (unsigned long)ptr <= mem[i].end &&
		    mem[i].perms&MEMMAP_READ )
			return 1;
	}
	return 0;
}

int
mem_is_RW(const void *ptr)
{
	int i;

	for(i=0;i<nummaps;i++)
		if( (unsigned long)ptr >= mem[i].start &&
		    (unsigned long)ptr <= mem[i].end &&
		    mem[i].perms&(MEMMAP_READ|MEMMAP_WRITE) )
			return 1;

	load_memmap();

	for(i=0;i<nummaps;i++)
		if( (unsigned long)ptr >= mem[i].start &&
		    (unsigned long)ptr <= mem[i].end &&
		    mem[i].perms&(MEMMAP_READ|MEMMAP_WRITE) )
			return 1;
	return 0;
}
