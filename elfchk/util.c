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
#include "modules.h"

char *
ElfGetStringIndex(ElfFile *file, int offset, int index)
{
    if (!offset || !index)
        return "";

    return file->addr+file->saddr[index].sh_offset+offset;
}

char *
ElfGetString(ElfFile *file, int offset)
{
    return ElfGetStringIndex(file, offset, file->strndx);
}

ElfFile *OpenFileSafe(char *name)
{
    ElfFile *efile;
    struct stat stat;

    if ((efile=(ElfFile *)calloc(1,sizeof(ElfFile))) == NULL) {
        fprintf(stderr, "Unable to alloc efile memory for %s\n", name);
        return NULL;
    }

    if ((efile->fd=open(name, O_RDONLY, 0666)) < 0) {
        perror("open failed");
        free(efile);
        return NULL;
    }

    if (fstat(efile->fd, &stat) < 0) {
        perror("stat failed");
        close(efile->fd);
        free(efile);
        return NULL;
    }

    efile->size=stat.st_size;

    if (efile->size == 0) {
        fprintf(stderr, "empty file\n");
        close(efile->fd);
        free(efile);
        return ELFFILE_FATAL_ERROR;
    }

    if ((efile->versionnames=(char **)calloc(32,sizeof(char *))) == NULL) {
        fprintf(stderr, "Unable to alloc versionnames memory for %s\n", name);
        close(efile->fd);
        free(efile);
        return NULL;
    }

    efile->versionnames_size = 32;

    if ((efile->addr=mmap(0, efile->size, PROT_READ, MAP_PRIVATE, efile->fd, 0)) == (caddr_t)-1) {
        perror("mmap failed");
        close(efile->fd);
        free(efile);
        return NULL;
    }

    return efile;
}

ElfFile *OpenFile(char *name)
{
    ElfFile *efile = OpenFileSafe(name);
    if (efile == ELFFILE_FATAL_ERROR)
        exit(-1);   /* Silently exit */
    return efile;
}

ElfFile *OpenFileNoExit(char *name)
{
    ElfFile *efile = OpenFileSafe(name);
    if (efile == ELFFILE_FATAL_ERROR)
        efile = NULL;
    return efile;
}

ElfFile *OpenElfFileSafe(char *name)
{
    ElfFile *efile;

    efile = OpenFileSafe(name);

    if (efile == NULL)
        return NULL;

    if (efile == ELFFILE_FATAL_ERROR)
        return ELFFILE_FATAL_ERROR;

    if (memcmp(efile->addr, ELFMAG, SELFMAG)) {
        fprintf(stderr, "file not ELF: %s\n", name);
        close(efile->fd);
        free(efile);
        return NULL;
    }
    return efile;
}

ElfFile *OpenElfFile(char *name)
{
    ElfFile *efile = OpenElfFileSafe(name);
    if (efile == ELFFILE_FATAL_ERROR)
        exit(-1);   /* Silently exit */
    return efile;
}

ElfFile *OpenElfFileNoExit(char *name)
{
    ElfFile *efile = OpenElfFileSafe(name);
    if (efile == ELFFILE_FATAL_ERROR)
        efile = NULL;
    return efile;
}

void CloseElfFile(ElfFile *efile)
{
    if (efile != NULL) {
        close(efile->fd);
        free(efile->versionnames);
        free(efile);
    }
}

char *
getmodulename(int mod)
{
    struct lsb_module *m = LSB_Modules[LSB_Version];
    int count=0;
    static char buf[1024];
    buf[0] = '\0';
    /* special casing */
    while (m->name && mod) {
        if ((mod & m->flag) == m->flag && m->flag != LSB_All_Modules) {

//    while(m->name) {
        /* only print names of individual modules */
//        if(strcasecmp(m->name, "LSB_Core_Modules") == 0 ||
//           strcasecmp(m->name, "LSB_Desktop_Modules") == 0 ||
//           strcasecmp(m->name, "LSB_All_Modules") == 0);
//        else if(mod & m->flag) {
            if (count)
                strcat(buf, " ");
            strcat(buf, m->name);
            count++;
            mod ^= m->flag;
        }
        m++;
    }
    return count ? buf : "Unknown Module";
}

int
getmoduleval(char *mod)
{
    struct lsb_module *m = LSB_Modules[LSB_Version];
    int flag = 0;
    char *p;

    p = strchr(mod, '-');
    if (p != NULL)
        *p = '_';

    while (m->name && 0 == flag) {
        if (strcasecmp(mod, m->name) == 0)
            flag = m->flag;
        m++;
    }
    return flag;
}

char *
getlsbprofile(const char* lsb_version, int mod)
{
    static char buf[1024];

    /* Temporarily disable unsupported modules */
    mod &= ~(LSB_Optional | LSB_Printing);

    if (mod == LSB_Core_Modules) {
        sprintf(buf, "LSB %s (Core & C++)", lsb_version);
    }
    else if (mod == LSB_Desktop_Modules[LSB_Version]) {
        sprintf(buf, "LSB %s (Core & C++ & Desktop)", lsb_version);
    }
#ifdef LSB_Toolkit_Qt
    else if (mod == (LSB_Desktop_Modules[LSB_Version] | LSB_Toolkit_Qt)) {
        sprintf(buf, "LSB %s (Core & C++ & Desktop & Qt4(optional))",
            lsb_version);
    }
#endif
    else {
        sprintf(buf, "LSB %s (UNKNOWN PROFILE)", lsb_version);
    }

    return buf;
}
