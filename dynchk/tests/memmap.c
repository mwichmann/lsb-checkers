#include <stdio.h>
#include <stdlib.h>
#include "memmap.h"
#include "../libs/lsb_funcs.h"

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
	lsb_printf("Entering load_memmap()\n");
	*/
	if( mem ) {
		lsb_free(mem);
		mem=NULL;
		maxmaps=0;
		nummaps=0;
	}
	map=lsb_fopen("/proc/self/maps","r");
	while(!lsb_feof(map) ) {
		if( nummaps == maxmaps ) {
			mem =lsb_realloc(mem,sizeof(struct memregion)*(maxmaps+5));
			maxmaps+=5;
		}
		curmap=&mem[nummaps++];
		/*
		ret=lsb_fscanf(map,"%p-%p %c%c%c%*c %*x %*x:%*x %*d %s",
		*/
		lsb_fgets(buf,256,map);
		//lsb_printf(buf);
		ret=lsb_sscanf(buf,"%p-%p %c%c%c",
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
	lsb_fclose(map);
}

int
mem_is_Rd(const void *ptr)
{
	int i;


	for(i=0;i<nummaps;i++) {
		/*
		if( (unsigned long)ptr & 0x80000000UL ) {
			lsb_printf("\n");
			lsb_printf("%p >= %p\n",ptr, mem[i].start );
			lsb_printf("%p <= %p\n",ptr, mem[i].end );
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
			lsb_printf("\n");
			lsb_printf("%p >= %p\n",ptr, mem[i].start );
			lsb_printf("%p <= %p\n",ptr, mem[i].end );
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
		if( ptr >= mem[i].start &&
		    ptr <= mem[i].end &&
		    mem[i].perms&(MEMMAP_READ|MEMMAP_WRITE) )
			return 1;

	load_memmap();

	for(i=0;i<nummaps;i++)
		if( ptr >= mem[i].start &&
		    ptr <= mem[i].end &&
		    mem[i].perms&(MEMMAP_READ|MEMMAP_WRITE) )
			return 1;
	return 0;
}
