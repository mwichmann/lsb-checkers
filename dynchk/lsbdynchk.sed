#1/bin/bash
while getopts f:l: opt
do
  case $opt in
    f)  LSB_OUTPUT_FILE=$OPTARG;;
    l)  LSB_OUTPUT_LEVEL=$OPTARG;;
    \?) echo "Usage: $0 [-f output-file] [-l output-level] command"
        exit 2;;
  esac
done
shift `expr $OPTIND - 1`

export LD_PRELOAD=@LIBDIR@/liblsbdynchk.so.1
exec $*
unset LD_PRELOAD
