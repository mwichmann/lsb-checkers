/* fhspaths.c */
extern int is_fhs_readable(char *path);
extern int is_fhs_writeble(char *path);
extern int is_fhs_creatable(char *path);
extern int is_fhs_execable(char *path);
/* mkabs.c */
extern char *mkabsolutepath(char *path);
