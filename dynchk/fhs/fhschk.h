/* fhspaths.c */
extern void set_myappname(char *app);
extern int is_fhs_readable(char *path);
extern int is_fhs_writable(char *path);
extern int is_fhs_creatable(char *path);
extern int is_fhs_installable(char *path);
extern int is_fhs_execable(char *path);
/* mkabs.c */
extern char *mkabsolutepath(char *path);
extern char *_mkabsolutepath(char *cwd, char *path);
