#include <stdio.h>
#include <stdlib.h>
#include "memmap.h"

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

/* We can get into nasty recursion problems if we try to check function
 * that are used to implemente load_memmap(), so we'll set a flag to
 * skip over checks in this situation.
 */
static int inmemmap = 0;

void
load_memmap()
{
	FILE *map;
	struct memregion *curmap;
	char rd,wr,ex;
	int ret;
	char buf[256];
#ifdef NOOP
	inmemmap=1;
	return;
#else
	if(inmemmap) return;
	inmemmap=1;
#endif
	/*
	setvbuf(stdout,NULL, _IOLBF, 0);
	printf("Entering load_memmap()\n");
	*/
	if( mem ) {
		free(mem);
		mem=NULL;
		maxmaps=0;
		nummaps=0;
	}
	map=fopen("/proc/self/maps","r");
	while(!feof(map) ) {
		if( nummaps == maxmaps ) {
			mem =realloc(mem,sizeof(struct memregion)*(maxmaps+20));
			maxmaps+=20;
		}
		curmap=&mem[nummaps++];
		/*
		ret=fscanf(map,"%p-%p %c%c%c%*c %*x %*x:%*x %*d %s",
		*/
		fgets(buf,256,map);
		//printf(buf);
		ret=sscanf(buf,"%p-%p %c%c%c",
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
	fclose(map);
	inmemmap=0;
}

int
mem_is_Rd(const void *ptr)
{
	int i;

	if( inmemmap ) return 1;
	if( !ptr ) return 0;

	for(i=0;i<nummaps;i++) {
		/*
		if( (unsigned long)ptr & 0x80000000UL ) {
			printf("\n");
			printf("%p >= %p\n",ptr, mem[i].start );
			printf("%p <= %p\n",ptr, mem[i].end );
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
			printf("\n");
			printf("%p >= %p\n",ptr, mem[i].start );
			printf("%p <= %p\n",ptr, mem[i].end );
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

	if( inmemmap ) return 1;
	if( !ptr ) return 0;

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
