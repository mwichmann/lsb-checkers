
#define MEMMAP_READ	0x04
#define MEMMAP_WRITE	0x02
#define MEMMAP_EXEC	0x01

/* memmap.c */
void load_map(void);
int mem_is_Rd(const void *ptr);
int mem_is_RW(const void *ptr);
