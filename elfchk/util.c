/*
 *
 * Copyright (c) 2001-2002 The Free Standards Group Inc
 * Copyright (c) 2000-2002 Stuart Anderson (anderson@freestandards.org)
 * Copyright (c) 2002 Chris Yeoh (yeohc@au.ibm.com)
 *
 */
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <malloc.h>
#include <sys/fcntl.h>
#include <sys/mman.h>
#include <sys/stat.h>
#include "elfchk.h"

char *
ElfGetStringIndex(ElfFile *file, int offset, int index)
{
if( !offset || !index )
	return "";

return file->addr+file->saddr[index].sh_offset+offset;
}

char *
ElfGetString(ElfFile *file, int offset)
{
return ElfGetStringIndex( file, offset, file->strndx );
}

ElfFile	*OpenFile( char *name )
{
ElfFile	*efile;
struct stat	stat;

if( (efile=(ElfFile *)calloc(1,sizeof(ElfFile))) == NULL ) {
	fprintf(stderr, "Unable to alloc efile memory for %s\n", name );
	return NULL;
	}

if( (efile->fd=open(name, O_RDONLY, 0666)) < 0 ) {
	perror( "unable to open() file" );
	free(efile);
	return NULL;
	}

if( fstat(efile->fd, &stat ) < 0 ) {
	perror( "unable to stat() file" );
	close(efile->fd);
	free(efile);
	return NULL;
	}

efile->size=stat.st_size;

if( efile->size == 0 ) {
	fprintf( stderr, "Zero length file\n" );
	close(efile->fd);
	free(efile);
	exit(-1);	/* Silently exit */
	}

if( (efile->addr=mmap(0, efile->size, PROT_READ, MAP_PRIVATE, efile->fd, 0)) == (caddr_t)-1 ) {
	perror( "unable to mmap() file" );
	close(efile->fd);
	free(efile);
	return NULL;
	}


return efile;
}

ElfFile	*OpenElfFile( char *name )
{
ElfFile	*efile;

efile=OpenFile(name);

if( efile == NULL )
	return NULL;

if( memcmp(efile->addr, ELFMAG, SELFMAG) ) {
	fprintf( stderr, "file not ELF\n" );
	close(efile->fd);
	free(efile);
	exit(-1);	/* Silently exit */
	}
return efile;
}

