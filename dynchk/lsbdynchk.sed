export LD_PRELOAD=@LIBDIR@/liblsbdynchk.so.1
exec $*
unset LD_PRELOAD
